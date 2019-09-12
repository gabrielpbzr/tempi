#include "tempreader.h"

int get_cpu_temperature(float* reading) {

	const char BUFFER_SIZE = 10;
	const char* path = "/sys/class/thermal/thermal_zone0/temp";
	
	FILE *fp = fopen(path, "r");

	if (fp == NULL) {
		return STATUS_READING_ERROR;
	}

	if (feof(fp)) {
		return STATUS_READING_ERROR;
	}

	char buffer[BUFFER_SIZE];
	fgets(buffer, BUFFER_SIZE, fp);	

	fclose(fp);


	float temperature = atof(buffer);
	*reading = temperature / 1000;

	return STATUS_OK;
}

