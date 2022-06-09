// Programa em C que recebe uma quantidade de números e ordena eles em ordem ascendente e decrescente.
 
    #include <stdio.h>
    #include <locale.h>
    
    int main () {
    	
 		setlocale(LC_ALL, "Portuguese");
 		
        int numero[30];
 
        int i, j, a, n;
        
        printf("===========================================================\n");
        printf("-------------------- ORDENANDO NÚMEROS -------------------- \n");
        printf("===========================================================\n");
        
        printf("Digite a quantidade de números que você deseja adicionar:\n");
        scanf("%d", &n);
 		
 		printf("===========================================================\n");
        printf("Digite os números:\n");
        for (i = 0; i < n; ++i)
	    scanf("%d", &numero[i]);
 		
 		printf("===========================================================\n");
        printf("Números antes de ordenar:\n");
	   	for (i = 0; i < n; ++i) {
            printf("%d\n", numero[i]); 
        }
	    
	    // Iniciando a ordenação em ordem ascendente
 
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (numero[i] > numero[j]) {
                    a = numero[i];
                    numero[i] = numero[j];
                    numero[j] = a;
                }
            }
        }
 		
 		printf("===========================================================\n");
        printf("Números ordenados na ordem ascendente:\n");
 
        for (i = 0; i < n; ++i) {
            printf("%d\n", numero[i]); 
        }
	    
        // Iniciando a ordenação em ordem decrescente
 
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (numero[i] < numero[j]) {
                    a = numero[i];
                    numero[i] = numero[j];
                    numero[j] = a;
                }
            }
        }
 		
 		printf("===========================================================\n");
        printf("Números ordenados na ordem descendente:\n");
 
        for (i = 0; i < n; ++i) {
            printf("%d\n", numero[i]); 
        }
         
    }
