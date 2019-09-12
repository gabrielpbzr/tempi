#ifndef TEMP_READER_H

#define TEMP_READER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define STATUS_OK 0
#define STATUS_READING_ERROR 1

/**
 * Obtem a leitura da CPU do Raspberry Pi
 * @return status da operação
 */
uint8_t get_cpu_temperature(float* reading);

#endif
