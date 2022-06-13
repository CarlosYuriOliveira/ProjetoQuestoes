/*
 TRABALHO COMPLEMENTAR AV2
 Prof. M.Sc. Hilson Silva
 Aluno: CARLOS YURI RODRIGUES OLIVEIRA
 Matricula: 202108482072;
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int q;

void Questao01(){
	printf("-----Primeira Questao------\n");
	float a;
	printf("Digite um valor:\n");
	scanf("%f", &a);
	printf("O sucessor dessse numero e %.2f\n", a+1);
	printf("O antecessor desse numero e %.2f\n", a-1);
}       
void Questao02(){
	printf("-----Segunda Questao------\n");
	int base, altura, area;
	printf("Digite a base do retangulo:\n");
	scanf("%d", &base);
	printf("Digite a altura do retangulo:\n");
	scanf("%d", &altura);
	area = base * altura;
	printf("A Area do retangulo sera: %d\n", area);
}
void Questao03(){
	printf("-----Terceira Questao------\n");
	int a, m, d, D;
	printf("Em que ano voce nasceu:\n");
	scanf("%d", &a);
	printf("Em que mes voce nasceu:\n");
	scanf("%d", &m);
	printf("Em que dia voce nasceu:\n");
	scanf("%d", &d);
	D = (30-d)+((12-m)*30)+(((2022-a)*12)*30);
	printf("Sua idade expressa em dias e %d\n", D);
}  
void Questao04(){
	printf("-----Quarta Questao-----\n");
	float totele, nul, bran;
	printf("Quantos eleitores no total:\n");
	scanf("%f", &totele);
	printf("Quantos votos nulos:\n");
	scanf("%f", &nul);
	printf("Quantos votos brancos:\n");
	scanf("%f", &bran);
	printf("Em relacao ao numero de eleitores (Porcentagem):\n"
	"Nulos: %.1f % \n"
	"Brancos: %.1f % \n"
	"Validos: %.1f % \n", (nul*100)/totele, (bran*100)/totele, ((totele-(bran+nul))*100)/totele);
}
void Questao05(){
	printf("----Quinta Questao-----\n");
	float salario, reaju, novsala;
	printf("Digite o salario atual do funcionario:\n");
	scanf("%f", &salario);
	printf("Digite o valor do reajuste em porcentagem:\n");
	scanf("%f", &reaju);
	novsala = salario + ((salario*reaju)/100);
	printf("O novo salario com reajuste do funcionario e RS %.2f\n", novsala);
}
void Questao06(){
	printf("-----Sexta Questao----\n");
	float valfab, valcon, impo, dist;
	printf("Qual o valor de fabrica do carro:\n");
	scanf("%f", &valfab);
	impo = (valfab*45)/100;
	dist = (valfab*28)/100;
	valcon = valfab+impo+dist;
	printf("O valor do carro ao consumidor ficara RS %.2f\n", valcon);
}
void Questao07(){
	printf("-----Setima Questao----\n");
	float salafix, valporven, quantven, valtotven, salafinal;
	printf("Informe o salario fixo do funcionario:\n");
	scanf("%f", &salafix);
	printf("Informe o valor do agerssimo por venda:\n");
	scanf("%f", &valporven);
	printf("Informe quantas vendas realizadas:\n");
	scanf("%f", &quantven);
	printf("Informe o valor total das vendas:\n");
	scanf("%f", &valtotven);
	salafinal = salafix + (valporven*quantven) + ((valtotven*5)/100);
	printf("Valor final do salario: RS %.2f\n", salafinal);
}
void Questao08(){
	printf("-----Oitava Questao-----\n");
	float faren, celsio;
	printf("Digite a Temperatura em Fahrenheit:\n");
	scanf("%f", &faren);
	celsio = ((faren-32)*5)/9;
	printf("Essa temperatura em Celsius e %.2f\n", celsio);
}
void Questao09(){
	printf("-----Nona questao-----\n");
	float macas, custo;
	printf("Quantas macas fram cmpradas\n");
	scanf("%f", &macas);
	if (macas < 12){
		custo = macas*1.30;
		printf("As maças iram csta RS %.2f\n", custo);
	}
	if (macas >= 12){
		custo = macas*1;
		printf("As maças iram csta RS %.2f\n", custo);
	}
}
void Questao10(){
	printf("----Decima questao-----");
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
    int anoAtual = str_t.wYear;
    int ano, idade;
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &ano);
    idade = (anoAtual-ano);
    if (idade<16){
		printf("Voce nao poode votar ainda\n");
	} 
	if((idade>=16) && (idade<18)){
		printf("Voto Opcinal\n"); 
	}
	if(idade>=18){
		printf("Voto Obrigatorio\n");
	}
}
void Questao11(){
	printf("----Decima Primeira Questao----\n");
	int horaini, horafin, tempo;
	printf("Quando comecou jogo(Horas)?\n");
	scanf("%d", &horaini);
	printf("Quando terminou o jogo(Horas)?\n");
	scanf("%d", &horafin);
	tempo = horafin-horaini;
	if (tempo > 0){
		printf("O tempo de duracao do jogo e %d horas\n", tempo);
	}
	if (tempo < 0){
		printf("O tempo de duracao do jogo e %d horas\n", tempo*-1);
	}
}
void Questao12(){
	printf("----Decima Segunda Questao----\n");
	float salario, horex, salariofinal, horas;
	printf("Qual o salario fixo do funcionario:\n");
	scanf("%f", &salario);
	printf("Ha horas trabalhadas (1 sim , 0 nao)?\n");
	scanf("%f", &horas);
	if (horas == 1){
		printf("Quantas horas extras foram acumuladas:\n");
		scanf("%f", &horex);
		salariofinal = salario + (((salario*5)/10)*horex);
		printf("O salario final do funcionario e %.2f\n", salariofinal);
	}else{
		salariofinal = salario;
		printf("O salario final do funcionario e %.2f\n", salariofinal);
	}
} 
void Questao13(){
	printf("----Decima Terceira Questao----\n");
	float salario, valorven, salariofinal;
	printf("Informe o salario fixo do funcionario:\n");
	scanf("%f", &salario);
	printf("Qual o valor das vendas evetuadas:\n");
	scanf("%f", &valorven);
	if (valorven<1500){
		salariofinal = salario + ((salario*3)/100);
		printf("O salario final sera %.2f", salariofinal);
	}
	if (valorven>=1500){
		salariofinal = salario + ((salario*5)/100);
		printf("O salario final sera %.2f", salariofinal);
	}
}
void Questao14(){
	printf("----Decima Quarta Questao----\n");
	float saldo, deb, cred, saldoatu;
	printf("Qual e o saldo inicial:\n");
	scanf("%f", &saldo);
	printf("Informe o credito:\n");
	scanf("%f", &cred);
	printf("Informe o debito:\n");
	scanf("%f", &deb);
	saldoatu = saldo - (deb + cred);
	if (saldoatu<0){printf("Seu saldo e Negativo. RS %.2f\n", saldoatu);}else
	{
		printf("Seu saldo e Positivo. RS %.2f\n", saldoatu);
	}
}
void Questao15(){
	printf("----Decima Quinta Questao----\n");
	int qatual, qmax, qmin, m;
	printf("Informe a quantidade atual do estoque:\n");
	scanf("%d", &qatual);
	printf("Informe a quantidade maxima do estoque:\n");
	scanf("%d", &qmax);
	printf("Informe a quantidade minima do estoque:\n");
	scanf("%d", &qmin);
	m = (qmax+qmin)/2;
	if (qatual>=m){printf("\nNao efetuar compra;\n");}else{printf("\nEfetuar compra;\n");}
}                                 
void MenuDeQuestoes()
{
	printf("\n==========================\n");
	printf("  Trabalho Complementar   \n");
	printf("--------------------------\n");
	printf("     1 | 2 | 3 | 4 |5     \n");
	printf("     6 | 7 | 8 | 9 |10    \n");
	printf("    11 | 12| 13| 14|15    \n");
	printf("--------------------------\n");
	printf("     Informe a Questao    \n");
	printf("==========================\n");
	printf("Questao (0 para sair): ");
	scanf("%d", &q);
	while(q > 15)
	{
		printf("Valor incorreto, digite novamente: ");
		scanf("%d", &q);
	};
}
int main()
{
	do{MenuDeQuestoes();
		switch(q)
		{
		case 1:
			Questao01();
			break;	
		case 2:
			Questao02();
			break;	
		case 3:
			Questao03();
			break;	
		case 4:
			Questao04();
			break;	
		case 5:
			Questao05();
			break;	
		case 6:
			Questao06();
			break;	
		case 7:
			Questao07();
			break;	
		case 8:
			Questao08();
			break;	
		case 9:
			Questao09();
			break;
		case 10:
			Questao10();
			break;
		case 11:
			Questao11();
			break;	
         	case 12:
        		Questao12();
        		break;
		case 13:
			Questao13();
			break;
		case 14:
			Questao14();
			break;
		case 15:
			Questao15();
			break;	
		}
	}while(q!=0);
    system("pause");
	return 0;
}
