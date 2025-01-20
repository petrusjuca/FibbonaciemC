#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
int main() 
{	int x,i,n,a,b,c,cont,d;
    setlocale(LC_ALL,"Portuguese");
    char opcao;
    do
    {  system("cls");
	   printf("Escoha\n\n");
	   printf("a) Calcular o enésimo termo de Fibonacci\n");
	   printf("b) Verificar se o número é primo\n");
	   printf("c) Sair\n");
	   opcao=getch();//scanf("%c",&opcao);
	   switch (opcao)
	   {  case 'a': system("cls");
	                printf("Digite um número para calcular o enésimo de Fibonacci\n");
	                scanf("%d",&n);
	                a=1;
	                b=cont=0;
	                do
	                {  c=a+b;
	                   a=b;
	                   b=c;
	                   cont++;
					}while(cont<n);
					printf("O %d° termo de Fiboancci é %d\n",n,c);
	                break;
	      case 'b': system("cls");
	                printf("Digite um número para verificar se é primo\n");
	                scanf("%d",&x);
	                for(d=1,cont=0;d<=x;d++)
	                 if(x%d==0)
	                   cont++;
	                if(cont==2)
					  printf("%d é um número primo\n",x);
					  else  
					   printf("%d não é um número primo\n",x); 
	                break;
		 case 'c': system("cls");
	               printf("Adeus\n");		
				   break;	             
	     default: system("cls");
	             printf("Opção inválida\n");
	   }
	   system("pause");
   }while(opcao!='c');
	
}

