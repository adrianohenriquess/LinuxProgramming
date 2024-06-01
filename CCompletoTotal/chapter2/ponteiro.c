#include <stdio.h>
#include <stdlib.h>

void main() {
	int target, source;
	
	//ponteiro para uma variavel do tipo m
	int *m;

	//source recebe 10
	source  = 10;
	//ponteiro m recebe o endereço de memória que aponta para o valor
	//armazenado em source
	m = &source;

	//target recebe o valor do endereco de m, que é o mesmo que source
	target = *m;


	printf("%d\n", target);
}
