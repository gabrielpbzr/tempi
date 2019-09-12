/**********************************************************
 * Programa para a leitura da temperatura no Raspberry Pi
 * @author Gabriel P. Bezerra
 **********************************************************/

#include <stdio.h>
#include "tempreader.h"

int main() {

	float temp;
	uint8_t error_code = get_cpu_temperature(&temp);

	if (error_code != 0) {
		printf("ERRO NA LEITURA DA TEMPERATURA");
		return error_code;
	}

	printf("Temperatura atual do processador: %.1fC\n", temp);

	return 0;
}
	
