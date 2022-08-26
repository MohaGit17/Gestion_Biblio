#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>
typedef struct 
{
	int NS;
	char auteur[32],NDL [32];
	int DD [3] ;
}livre;
typedef struct 
{
	int y,u;
}couleur;
void menu(int c,couleur g)
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	if(c==1)
	{
		SetConsoleTextAttribute(H,g.u);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                      Bonjour!                     |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|---------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|           Bienvenue Dans le Menu principal        |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|---------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|-Inserer un livre entrez 1                         |\n");
		printf("|-Mettre à jour un livre entrez 2                   |\n");
		printf("|-Supprimer un livre entrez 3                       |\n"); 
		printf("|-Afficher les livre entrez 4                       |\n");
		printf("|-Rechercher un livre entrez 5                      |\n");
		printf("|-Supprimer tout les livres entrez 6                |\n");
		printf("|-OPTION   7                                        |\n");
		printf("|-Quitter le programme entrez 0                     |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
	}
	else
	{
	SetConsoleTextAttribute(H,g.u);
	printf("|---------------------------------------------------|\n");
	SetConsoleTextAttribute(H,g.y);
	printf("|                       Hello!                      |\n");
	SetConsoleTextAttribute(H,g.u);
	printf("|---------------------------------------------------|\n");
	SetConsoleTextAttribute(H,g.y);
	printf("|               Welcome to the main menu            |\n");
	SetConsoleTextAttribute(H,g.u);
	printf("|---------------------------------------------------|\n");
	SetConsoleTextAttribute(H,g.y);
	printf("|-Insert a book press 1                             |\n");
	printf("|-Update a book press 2                             |\n");
	printf("|-Delete a book press 3                             |\n");
	printf("|-Display the books press 4                         |\n");
	printf("|-Search a book press 5                             |\n");
	printf("|-Delete all books press 6                          |\n");
	printf("|-OPTION   7                                        |\n");
	printf("|-If you want to quit the program press 0           |\n");
	SetConsoleTextAttribute(H,g.u);
	printf("-----------------------------------------------------\n");
	SetConsoleTextAttribute(H,11);	
	}
}
void menu2(int c,couleur g)
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	if (c==1)
	{
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                         Bonjour!                       |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                Bienvenue Dans le Menu de Maj           |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|-Entrez le numero du livre que vous voulez modifier     |\n");
		printf("|-Puis :                                                 |\n");
		printf("|-Pour modifier le NS du livre entrez 1                  |\n");
		printf("|-Pour modifier le nom du livre entrez 2                 |\n");
		printf("|-Pour modifier le nom de l'auteur entrez 3              |\n");
		printf("|-Pour modifier la date d'edition entrez 4               |\n");
		printf("|-Pour revenir au menu principal entrez 0                |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);	
	}
	else
	{
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                          Hello!                        |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                Welcome to the update menu              |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|-Enter the number of the book you want to edit          |\n");
		printf("|-Then :                                                 |\n");
		printf("|-To edit the book's number press 1                      |\n");
		printf("|-To edit the book's name press 2                        |\n");
		printf("|-To edit the author's name press 3                      |\n");
		printf("|-To edit the publishing date press 4                    |\n");
		printf("|-To go back to the main menu press 0                    |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);	
	}
}
void menu3(int c,couleur g)
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	
	if(c==1)
	{
		SetConsoleTextAttribute(H,g.u);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                      Bonjour!                     |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|---------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|           Bienvenue Dans le Menu principal        |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|---------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|-Inserer un livre entrez 1                         |\n");
		printf("|-OPTION   7                                        |\n");
		printf("|-Quitter le programme entrez 0                     |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
		
	}
	else
	{
		SetConsoleTextAttribute(H,g.u);
		printf("|---------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                       Hello!                      |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|---------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|               Welcome to the main menu            |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|---------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|-Insert a book press 1                             |\n");
		printf("|-OPTION   7                                        |\n");
		printf("|-Quit the program press 0                          |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);	
	}
	
}
void menu4(int c,couleur g)
{
	if(c==1)
	{
		HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                         Bonjour!                       |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|            Bienvenue Dans le Menu de Recherche         |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|-Rechercher par nom du livre entrez 1                   |\n");
		printf("|-Rechercher par nom de l'auteur entrez 2                |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
	}	
	else
	{
		HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                        Hello !                         |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|                Welcome to the search menu              |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("|--------------------------------------------------------|\n");
		SetConsoleTextAttribute(H,g.y);
		printf("|-Search by book's name press 1                          |\n");
		printf("|-Search by author's name press 2                        |\n");
		SetConsoleTextAttribute(H,g.u);
		printf("----------------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
	}
}
void inserer (FILE* F,int k,int c,couleur g)
{
	int s,i,v;
	livre L,Z;
	FILE* G=NULL;
	F= fopen("biblio.txt","a+");
	G= fopen("temp.txt","w+");
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	if(F!=NULL && G!=NULL)
	{
	rewind(F);
	rewind(G);
	while((v=fread(&Z,sizeof(livre),1,F))>0)
	{
		fwrite(&Z,sizeof(livre),1,G);
	}
	SetConsoleTextAttribute(H,g.y);
	if (c==1)
	printf("|-Donnez le Numero du livre          :|\n");
	else
	printf("|-Enter the book's number            :|\n");
	do
	{
		scanf("%d",&L.NS);
	}while(L.NS>1000000);

	if(c==1)
	printf("|-Donnez le Nom du livre             :|\n");
	else 
	printf("|-Enter the book's name              :|\n");
	getchar();
	scanf("%[^\n]",&L.NDL);
	getchar();
	if(c==1)
	printf("|-Donnez le Nom de l'auteur          :|\n");
	else 
	printf("|-Enter the author's name            :|\n");
	scanf("%[^\n]",&L.auteur);
	getchar();
	do
	{
		if(c==1)
		printf("|-Donnez l'annee de l'edition        :|\n");
		else
		printf("|-Enter the publishing year          :|\n");
		scanf("%d",&L.DD[0]);
	}while (L.DD[0]>2100 || L.DD[0]<1440);
	do
	{
		if(c==1)
		printf("|-Donnez le mois de l'edition        :|\n");
		else
		printf("|-Enter the publishing month         :|\n");
		scanf("%d",&L.DD[1]);
	}while (L.DD[1]>12 || L.DD[1]<1);
	do
	{
		s=0;
		if (c==1)
		printf("|-Donnez le jour de l'edition        :|\n");
		else
		printf("|-Enter the publishing day           :|\n");
		scanf("%d",&L.DD[2]);
		switch (L.DD[1])
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8: 
				case 10:
				case 12 :
					if (L.DD[2]>31 || L.DD[2]<0)
					{
						s=1;
					}
				break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (L.DD[2]>30 || L.DD[2]<0)
					{
						s=1;
					}
				break;
				case 2:
				if ((L.DD[0]% 4 == 0) && (L.DD[0]%100!=0 ) || L.DD[0]%400 == 0)
					{
						if (L.DD[2]>29 || L.DD[2]<0)
						{
							s=1;
						}	
					}
					else 
					{
						if (L.DD[2]>28 || L.DD[2]<0)
						{
							s=1;
						}
					}
				break;
			}
		}
	while (s);
	fclose(F);
	fclose(G);
	F= fopen("biblio.txt","w+");
	G= fopen("temp.txt","r");
	i=0;
	while((v=fread(&Z,sizeof(livre),1,G))>0)
	{
		if (i!=k)
		{
			fwrite(&Z,sizeof(livre),1,F);
		}
		else 
		{
			fwrite(&L,sizeof(livre),1,F);
			fwrite(&Z,sizeof(livre),1,F);
		}
		i++;
	}
	if(i==k)
	fwrite(&L,sizeof(livre),1,F);
	fclose(F);fclose(G);remove("temp.txt");
	SetConsoleTextAttribute(H,11);
	}
	else if (F=NULL)
	{
		printf("error F\n");
	}
	else if(G=NULL)
	{
		printf("error G\n");
	}
	
}
void modifier (FILE* F,int i,int b,couleur g,int c)
{
	int s,j,v,k;
	livre L,Z;
	FILE* G=NULL;
	F=fopen("biblio.txt","a+");
	G= fopen("temp.txt","w+");
	rewind(F);
	k=0;
	while((v=fread(&L,sizeof(livre),1,F))>0 && k<i)
	{
		k++;
	}
	rewind(F);
	rewind(G);
	while((v=fread(&Z,sizeof(livre),1,F))>0)
	{
		fwrite(&Z,sizeof(livre),1,G);
	}
	fclose(F);fclose(G);
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,g.y);
	switch (b)
	{
	case 1:
		if(c=1)
		printf("|-Donnez le nouveau Numero du livre    :|\n");
		else
		printf("|-Enter the new book's number          :|\n");
		do
		{
			scanf("%d",&L.NS);
		}while(L.NS>1000000);
	break;
	case 2:
		if(c=1)
		printf("|-Donnez le nouveau Nom du livre       :|\n");
		else
		printf("|-Enter the new book's name            :|\n");
		getchar();
		scanf("%[^\n]",&L.NDL);
	break;
	case 3:
		if(c=1)
		printf("|-Donnez le nouveau Nom de l'auteur    :|\n");
		else
		printf("|-Enter the new author's name          :|\n");
		getchar();
		scanf("%[^\n]",&L.auteur);
	break;
	case 4:
	do
	{
		if(c=1)
		printf("|-Donnez la nouvelle annee d'edition       :|\n");
		else
		printf("|-Enter the new publishing year            :|\n");
		scanf("%d",&L.DD[0]);
	}while (L.DD[0]>2100 || L.DD[0]<1440);
	do
	{
		if(c=1)
		printf("|-Donnez le nouveau mois d'edition       :|\n");
		else
		printf("|-Enter the new publishing month         :|\n");
		scanf("%d",&L.DD[1]);
	}while (L.DD[1]>12 || L.DD[1]<1);
	do
	{
		s=0;
		if(c=1)
		printf("|-Donnez le nouveau jour d'edition       :|\n");
		else 
		printf("|-Enter the new publishing day           :|\n");
		scanf("%d",&L.DD[2]);
		switch (L.DD[1])
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8: 
				case 10:
				case 12 :
					if (L.DD[2]>31 || L.DD[2]<0)
					{
						s=1;
					}
				break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (L.DD[2]>30 || L.DD[2]<0)
					{
						s=1;
					}
				break;
				case 2:
				if ((L.DD[0]% 4 == 0) && (L.DD[0]%100!=0 ) || L.DD[0]%400 == 0)
				{	
					if (L.DD[2]>29 || L.DD[2]<0)
					{
						s=1;
					}
				}
				else 
				{
					if (L.DD[2]>28 || L.DD[2]<0)
					{
						s=1;
					}		
				}
				break;
			}
		}while(s);	
	break;
	}	
	F= fopen("biblio.txt","w+");
	G= fopen("temp.txt","r");
	i=0;
	while((v=fread(&Z,sizeof(livre),1,G))>0)
	{
		if (i!=k)
		{
			fwrite(&Z,sizeof(livre),1,F);
		}
		else 
		{
			fwrite(&L,sizeof(livre),1,F);
		}
		i++;
	}
	if(i==k)
	fwrite(&L,sizeof(livre),1,F);
	fclose(F);fclose(G);remove("temp.txt");
}
void supprimer (FILE* F,int j)
{
	int i,v;
	livre Z;
	FILE* G=NULL;
	F= fopen("biblio.txt","r");
	G= fopen("temp.txt","w+");
	rewind(F);
	rewind(G);
	while((v=fread(&Z,sizeof(livre),1,F))>0)
	{
		fwrite(&Z,sizeof(livre),1,G);
	}
	fclose(F);fclose(G);
	F= fopen("biblio.txt","w+");
	G= fopen("temp.txt","r");
	i=0;
	while((v=fread(&Z,sizeof(livre),1,G))>0)
	{
		if (i!=j)
		{
			fwrite(&Z,sizeof(livre),1,F);
		}
		i++;
	}
	fclose(F);fclose(G);remove("temp.txt");
}
void afficher (int c,couleur g)
{
	int v;
	FILE* F;
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	F= fopen("biblio.txt","r");
	livre L;
	int i;
	SetConsoleTextAttribute(H,g.y);
	rewind(F);
	i=1;
	if(c==1)
	printf("Livre \tNum du Livre \tNom du Livre \tAuteur\t\tDate d'edition  \n");
	else
	printf("Book  \tBook's number\tBook's name  \tAuthor\t\tPublishing date \n");
	while ((v=fread(&L,sizeof(livre),1,F))>0)
	{
		printf("%d \t%d \t\t%s  \t%s  \t%d\\%d\\%d\t\n",i,L.NS,L.NDL,L.auteur,L.DD[0],L.DD[1],L.DD[2]);
		i++;
	}
}	
void rechercheraut(FILE* F,char autrech[],int c)
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	int b,v;
	F= fopen("biblio.txt","r");
	livre Z;
	b=0;
	while((v=fread(&Z,sizeof(livre),1,F))>0)
	{
		if(strcmp(Z.auteur,autrech)==0)
		{
			b++;
		}
	}
	if(b!=0)
	{
		SetConsoleTextAttribute(H,160);
		printf("------------------------------------------------\n");
		SetConsoleTextAttribute(H,250);
		if(c==1)
		printf("|   L'AUTEUR A %d LIVRE(S) DISPONIBLE(S) !      |\n",b);
		else
		printf("|   THE AUTHOR HAVE %d BOOK(S) AVALIABLE !      |\n",b);
		SetConsoleTextAttribute(H,160);
		printf("------------------------------------------------\n");
		SetConsoleTextAttribute(H,160);
		if(c==1)
		printf("Num du Livre \tNom du Livre \tDate d'edition  \n");
		else
		printf("Book's number\tBook's name  \tPublishing date \n");
		rewind(F);
		while((v=fread(&Z,sizeof(livre),1,F))>0)
		{
			if(strcmp(Z.auteur,autrech)==0)
			{
				printf("%d \t\t%s  \t%d\\%d\\%d\t\n",Z.NS,Z.NDL,Z.DD[0],Z.DD[1],Z.DD[2]);
			}
		}
		SetConsoleTextAttribute(H,11);
	}
	else 
	{
		SetConsoleTextAttribute(H,192);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,244);
		if(c==1)
		printf("|   L'AUTEUR RECHERCHE N'A AUCUN LIVRE DISPONIBLE ! |\n");
		else
		printf("|       THE AUTHOR HAVE NO BOOK AVALIABLE !         |\n");	
		SetConsoleTextAttribute(H,192);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
	}fclose(F);
	
}
void recherchernom(FILE* F,char nomrech[],int c)
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);    
	int b,v,i,k;
	F= fopen("biblio.txt","r");
	livre Z;
	b=0;
	i=0;
	while((v=fread(&Z,sizeof(livre),1,F))>0 && !b)
	{
		if(strcmp(Z.NDL,nomrech)==0)
		b=1;
		i++;
	}
	if(strcmp(Z.NDL,nomrech)==0)
	b=1;
	if(b)
	{
		SetConsoleTextAttribute(H,160);
		printf("------------------------------------------------------\n");
		SetConsoleTextAttribute(H,250);
		if(c==1)
		printf("|                 LIVRE DISPONIBLE !                 |\n");
		else
		printf("|                  BOOK AVALIABLE !                  |\n");
		SetConsoleTextAttribute(H,160);
		printf("------------------------------------------------------\n");
		SetConsoleTextAttribute(H,160);
		if(c==1)
		printf("Num du Livre \tNom du Livre \tAuteur\tDate d'edition\n");
		else
		printf("Book's number\tBook's name \tAuthor\tPublishing date\n");
		rewind(F);
		while((v=fread(&Z,sizeof(livre),1,F))>0 && k<i)
		{
			k++;
			if(k==i)
			{
				printf("%d \t\t%s \t%s \t%d\\%d\\%d    \n",Z.NS,Z.NDL,Z.auteur,Z.DD[0],Z.DD[1],Z.DD[2]);
			}
	}SetConsoleTextAttribute(H,11);
		
	}
	else 
	{
		SetConsoleTextAttribute(H,192);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,244);
		if(c==1)
		printf("|               LIVRE NON DISPONIBLE !              |\n");
		else
		printf("|                 BOOK UNAVALIABLE !                |\n");
		SetConsoleTextAttribute(H,192);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
	}
	fclose(F);
	
}
void option(int *c,couleur *g)
{
	int d,t;
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE); 
	if (*c!=1)
	{
		HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(H,g->u); 
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,g->y);
		printf("|-To change language setting press 1                |\n");
		printf("|-To change color's setting press 2                 |\n");	
		SetConsoleTextAttribute(H,g->u);
		printf("-----------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
   }
   else
   {
   		SetConsoleTextAttribute(H,g->u);
		printf("-------------------------------------------------------------\n");
		SetConsoleTextAttribute(H,g->y);
		printf("|-Changer les parametres de langue entrez 1                 |\n");
		printf("|-Changer les parametres de couleur entrez 2                |\n");	
		SetConsoleTextAttribute(H,g->u);
		printf("-------------------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
   }
   do
   {
   		scanf("%d",&t);    	
   }while(t<1 || t>2);
   if(t==1)
   {
   		SetConsoleTextAttribute(H,g->u);
		printf("-------------------------------------------------------------\n");
		SetConsoleTextAttribute(H,g->y);
		printf("|-Pour Choisir FRANCAIS ");
		SetConsoleTextAttribute(H,153);
		printf(" ");
		SetConsoleTextAttribute(H,255);
		printf(" ");
		SetConsoleTextAttribute(H,204);
		printf(" ");
		SetConsoleTextAttribute(H,g->y);
		printf(" entrez 1                        |\n");
		printf("|-To choose ENGLISH ");
		SetConsoleTextAttribute(H,252);
		printf("-I-");
		SetConsoleTextAttribute(H,g->y);
		printf(" press 2                             |\n");	
		SetConsoleTextAttribute(H,g->u);
		printf("-------------------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
		do
		{
			scanf("%d",&*c);    	
   		}while(*c<1 || *c>2);
   		SetConsoleTextAttribute(H,11);
   }
   else
   {
   	SetConsoleTextAttribute(H,g->u);
		printf("-------------------------------------------------------------\n");
		SetConsoleTextAttribute(H,g->y);
		printf("|-Pour choisir le bleu  ");
		SetConsoleTextAttribute(H,153);
		printf(" ");
		SetConsoleTextAttribute(H,g->y);
		printf(" entrez 1                          |\n");
		printf("|-Pour choisir le vert  ");
		SetConsoleTextAttribute(H,170);
		printf(" ");
		SetConsoleTextAttribute(H,g->y);
		printf(" entrez 2                          |\n");
		printf("|-Pour choisir le rouge ");
		SetConsoleTextAttribute(H,204);
		printf(" ");
		SetConsoleTextAttribute(H,g->y);
		printf(" entrez 3                          |\n");
		SetConsoleTextAttribute(H,g->u);
		printf("-------------------------------------------------------------\n");
		SetConsoleTextAttribute(H,11);
	
		do
		{
			scanf("%d",&d);    	
   		}while(d<1 || d>3);
   		SetConsoleTextAttribute(H,11);
   	if(d==1)
	{
		g->u=153;
		g->y=121;
	}
	else if(d==2)
	{
		g->u=170;
		g->y=122;
	}
	else
	{
		g->u=204;
		g->y=124;
	}
   	
   }
}
main()
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	int a,b,k,j,c,i,y,u,v,r,n;
	livre Z,Q;
	couleur g;
	char nomrech[32],autrech[32];
	FILE* F=NULL;
	F=fopen("biblio.txt","a");
	if(F!=NULL)
	{
		printf("le fichier biblio.txt a etait ouvert \n");
	}
	else
	{
		printf("le fichier biblio.txt n'a pas etait ouvert \n");
	}
	fclose(F);
	a=7;
	n=0;
	g.u=153;
	g.y=121;
	c=1;
	while(a!=0)
	{
		F=fopen("biblio.txt","r");
		if((v=fread(&Z,sizeof(livre),1,F))==0)
		{
			menu3(c,g);
			do
			{
				scanf("%d",&a);
			}while (a<0 || a>1 && a!=7);
			fclose(F);
		}
		else
		{
			menu(c,g);
			do
			{
				scanf("%d",&a);
			}while (a<0 || a>7);
			fclose(F);
		}
		switch (a)
		{
	    case 1:
	    	F=fopen("biblio.txt","r");
			n=1;
			rewind(F);
			fread(&Q,sizeof(livre),1,F);
			while(!feof(F))
			{
				fread(&Q,sizeof(livre),1,F);
				n++;
			}
			rewind(F);
			if ((v=fread(&Z,sizeof(livre),1,F))==0)
	    	{
	    		k=0;
	    		fclose(F);
			}
			else
			{
				SetConsoleTextAttribute(H,g.y);
				if(c==1)
				printf("|-Donnez la case ou vous voulez inserer ce livre       :|\n");
				else
				printf("|-Enter the position where you want to insert the book :|\n");
	    		do
				{
					scanf("%d",&k);
					k--;
				}while(k<0 || k>=n);
				fclose(F);
			}
			inserer (F,k,c,g);
	    break;
	    case 2:
	    	F=fopen("biblio.txt","r");
			n=1;
			rewind(F);
			fread(&Q,sizeof(livre),1,F);
			while(!feof(F))
			{
				fread(&Q,sizeof(livre),1,F);
				n++;
			}
			b=5;
	    	while (b!=0)
	    	{
	    		menu2(c,g);
	    		SetConsoleTextAttribute(H,11);
	    		do
				{
					scanf("%d",&i);
					i--;
				}while(i<0 || i>=n);
				if (i==-1)
				{
					b=0;
				}
	    		else
	    		{
	    			scanf("%d",&b);
				}
				fclose(F);
				modifier(F,i,b,g,c);
				SetConsoleTextAttribute(H,11);
	        }
		break;
		case 3 :
			F=fopen("biblio.txt","r");
			SetConsoleTextAttribute(H,11);
			n=1;
			rewind(F);
			fread(&Q,sizeof(livre),1,F);
			while(!feof(F))
			{
				fread(&Q,sizeof(livre),1,F);
				n++;
			}
			do
			{
				SetConsoleTextAttribute(H,g.y);
				if(c==1)
				printf("|-Entrez la case du livre que vous voulez supprimer      |\n");
				else 
				printf("|-Enter the position of the book you want to delete      |\n");
				scanf("%d",&j);
				j--;
			}while(j>=n || j<0);
			supprimer(F,j);
			SetConsoleTextAttribute(H,11);
		break;
		case 4 :
			afficher(c,g);
		break;
		case 5 :
			menu4(c,g);
			SetConsoleTextAttribute(H,11);
	    	do
			{
				scanf("%d",&r);
			}while(r<1 || r>2);
			if(r==1)
			{
				SetConsoleTextAttribute(H,g.y);
				if(c==1)
				printf("|-Donnez le nom du livre que vous voulez rechercher     :|\n");
				else
				printf("|-Enter the book's name you want to search              :|\n");
				getchar();
				scanf("%[^\n]",&nomrech);
				recherchernom(F,nomrech,c);
			}
			else
			{
				SetConsoleTextAttribute(H,g.y);
				if(c==1)
				printf("|-Donnez le nom de l'auteur que vous voulez rechercher :|\n");
				else
				printf("|-Enter the author's name you want to search           :|\n");
				getchar();
				scanf("%[^\n]",&autrech);
				rechercheraut(F,autrech,c);
			}
		break;
		case 6:
			F=fopen("biblio.txt","w+");
			fclose(F);
		break;
		case 7:
		option (&c,&g);
		break;
		}
	}
}
