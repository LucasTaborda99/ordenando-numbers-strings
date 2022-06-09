// Programa em C++ que recebe uma quantidade de strings (palavras) e ordena elas em ordem ascendente (alfabética).

#include <bits/stdc++.h>
#include <locale.h>

using namespace std;

// Função para printar o array
void print(vector<string> palavras) {
	for(int i = 0; i < palavras.size(); i++)
	cout<<palavras[i]<<endl;
	printf("\n");
}

bool compara(string a, string b) {
	// Retorna 1 se a string a é alfabética 
	// Menor que a string b
	return a < b;
}

vector<string> ordenaAlfabeticamente(vector<string> a) {
	
	int n = a.size();
	
	// Função compara é a função definida que ordena as strings na ordem alfabética 
	sort(a.begin(),a.end(),compara);
	return a;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("===========================================================\n");
    printf("---------------- ORDENANDO STRINGS (PALAVRAS) -------------\n");
    printf("===========================================================\n");
	printf("Digite o número de palavras para serem adicionadas: ");
	scanf("%d", &n);

	// Criando um vetor de strings
	// Vetor para armazenar strings (palavras)
	vector<string> palavras;
	string palavra;
	
	printf("===========================================================\n");
	printf("Digite as palavras: \n");
	// Recebendo entrada
	for(int i=0;i<n;i++) {
		cin>>palavra;
		// Inserindo as palavras no vetor
		palavras.push_back(palavra); 
	}
	
	printf("===========================================================\n");
	printf("Palavras antes de ordenar: \n");
	print(palavras);

	// Função para ordenar as palavras alfabéticamente
	palavras = ordenaAlfabeticamente(palavras);

	printf("===========================================================\n");
	printf("Palavras ordenadas em ordem alfabética: \n");
	print(palavras);

	return 0;
}
