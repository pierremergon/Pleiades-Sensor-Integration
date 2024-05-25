#include "sht40_lib.h"

T_SHT40_READING read_temperature_humidity_data(void)
{
  T_SHT40_READING sht40_reading;
  float temp_deg_celcius = 0.0;
  float humidity_prh     = 0.0;
  float temperature_raw  = 0.0;
  float humidity_raw     = 0.0;

  uint8_t cmd_packet[1] = {HIGH_PRECISION_READING_CMD};
  uint8_t sensor_response[6];
  memset(sensor_response, 0, sizeof(sensor_response)); // Correct size calculation

  /* Send the command over I2C */
  HAL_I2C_Master_Transmit(&hi2c1, (SHT40_I2C_ADDR << WRITE_READ_BIT), cmd_packet, sizeof(cmd_packet), 1000);
  
  HAL_Delay(15);

  /* Read the humidity and temperature data in response */
  HAL_I2C_Master_Receive(&hi2c1, (SHT40_I2C_ADDR << WRITE_READ_BIT), sensor_response, sizeof(sensor_response), 1000);
  
  /* Conversion calculations according to the datasheet */
  temperature_raw = sensor_response[0] * 256 + sensor_response[1];
  humidity_raw    = sensor_response[3] * 256 + sensor_response[4];

  /* Temperature in degrees Celsius, Humidity in %RH (percentage relative humidity) */
  temp_deg_celcius = -45 + 175 * temperature_raw / 65535;
  humidity_prh     = -6 + 125 * humidity_raw / 65535;

  sht40_reading.temperature = temp_deg_celcius;
  sht40_reading.humidity = humidity_prh;

  return sht40_reading;
}
