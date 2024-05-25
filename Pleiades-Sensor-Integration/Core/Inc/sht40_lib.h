#ifndef INC_SHT40_LIB_H_
#define INC_SHT40_LIB_H_

#include <stm32h5xx_hal.h>
#include <string.h>


#define SHT40_I2C_ADDR             0x44    //7-bit address of the sensor
#define WRITE_READ_BIT             0x01    //Write/read 8th bit
#define HIGH_PRECISION_READING_CMD 0xFD    //I2C command to read data with high precision

extern I2C_HandleTypeDef hi2c1;

/* @brief Struct to store data from SHT40 sensor */
typedef struct SHT40_READING
{
  float temperature;
  float humidity;

} T_SHT40_READING;


T_SHT40_READING read_temperature_humidity_data(void);    // Function to read temperature and humidity

#endif /* INC_SHT40_LIB_H_ */
