#include <iostream>

// ex01
using namespace std;
int main(int argc, char argv[]) {
	int unidades = 20;
	float valorAtacado = 1.50;
	float valorNaoAtacado = 1.25;
	float valorTotal1 = unidades * valorAtacado;
	float valorTotal2 = unidades * valorNaoAtacado;
	if (unidades <= 25) {
		cout << valorTotal1;
	}
	else {
		cout << valorTotal2;
	}

};





// ex02
using namespace std;
int main(int argc, char argv[]) {
	int number = 50;

	if (number > 10) {
		cout << number + 10 * 2;
	}
	else {
		cout << number + 9 * 3 - 8;
	}
};








// nos proximos exercícios n vou usar o "using namespace" só pra diferenciar 👇👍
// ex03
int main(int argc, char argv[]) {
	int number = -10;

	if (number > 0) {
		std::cout << " O número " << number << " é positivo. " << std::endl; // usar o std::endl é a mesma coisa do que usar "(\n)"
	}
	else if (number == 0) {
		std::cout << " O número " << number << " é neutro. " << std::endl;
	}
	else {
		std::cout << " O número " << number << " é negativo. " << std::endl;
	}
};




// ex04
int main(int argc, char argv[]) {
	int number1 = 10;
	int number2 = 15;

	if (number1 > number2) {
		std::cout << "O número" << number1 << "é maior que o número" << number2 << std::endl;
	}
	else if (number2 > number1) {
		std::cout << "O número" << number2 << "é maior que o número" << number1 << std::endl;
	}
	else {
		std::cout << "Os números são iguais.";
	}
};






// ex05
int main(int argc, char argv[]) {
	float nota1 = 5.5;
	int nota2 = 10;

	float media = nota1 + nota2 / 2;

	if (media >= 7) {
		std::cout << "Aprovado, Parabéns";
	}
	else {
		std::cout << "Reprovado, Que pena!";
	}
};
