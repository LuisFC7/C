//automata that accepted a chain that starts with 0 and ends with 0
//alphabet is formed with 0 and 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void principal();
void initial();
void second();
void third();

int main()
{
	principal();
	system("pause");
	return 0;
}

void initial()
{
	printf("Accepted\n");
}
void second()
{
//	printf("Chain no accepted");
}

void third()
{
	printf("Chain Accepted");
}
void principal()
{
	char chain[10];
	int i,cant,cont;
	printf("This automaton accept all the chains that start with 0 and end with 0\n");
	printf("Enter chain: \n");
	for(i=0; i<10; i++)
		scanf("%c",&chain[i]);

	cant = strlen(chain);
	//printing try
	for(i=0; i<cant; i++)
		printf("%c",chain[i]);

	for(cont=0; cont<cant; cont++)
	{
		if(chain[cont]==0){
			initial();
		}else if(chain[cont]==1){
				second();
			}else if(chain[cont]==0){
				third();
				}else if(chain[cont]==1){
					second();
					}
	}

}
