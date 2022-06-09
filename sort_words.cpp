// Programa em C++ que recebe uma quantidade de strings (palavras) e ordena elas em ordem ascendente (alfab�tica).

#include <bits/stdc++.h>
#include <locale.h>

using namespace std;

// Fun��o para printar o array
void print(vector<string> palavras) {
	for(int i = 0; i < palavras.size(); i++)
	cout<<palavras[i]<<endl;
	printf("\n");
}

bool compara(string a, string b) {
	// Retorna 1 se a string a � alfab�tica 
	// Menor que a string b
	return a < b;
}

vector<string> ordenaAlfabeticamente(vector<string> a) {
	
	int n = a.size();
	
	// Fun��o compara � a fun��o definida que ordena as strings na ordem alfab�tica 
	sort(a.begin(),a.end(),compara);
	return a;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("===========================================================\n");
    printf("---------------- ORDENANDO STRINGS (PALAVRAS) -------------\n");
    printf("===========================================================\n");
	printf("Digite o n�mero de palavras para serem adicionadas: ");
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

	// Fun��o para ordenar as palavras alfab�ticamente
	palavras = ordenaAlfabeticamente(palavras);

	printf("===========================================================\n");
	printf("Palavras ordenadas em ordem alfab�tica: \n");
	print(palavras);

	return 0;
}
