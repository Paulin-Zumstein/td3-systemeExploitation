#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>




void decrypter(){


	char *decry;
	int descList, descDecrypte,l1,l2 = 0;
	char *lu1,*lu2;

	execlp(ls *.in >sortie);
	descList = open("sortie.txt",R_DONLY);
	descDecrypte = open("fichierDecrypte.txt",O_CREAT | O_WRONLY | O_TRUNC,0644);
	l1 = read(descList,lu1,1);
	while(l1>0){
		while(lu1!="\n"){
			nomFichier = strcat(nomFichier,lu1);
		}
		open(nomFichier,R_DONLY);
		while(l2>0){
			l2 = read(nomFichier,lu2,1);
			lseek(nomFichier,int(lu2),SEEK_SET);
			write(nomFichier,/*la bonne lettre*/);
		}
		close(nomFichier)
	}

}

int main(){
	//creer le fichier "sortie" qui repertorie tous les fichiers du cryptage


	//parcours un fichier text dans son ensemble
	//recuperer le nombre de caractere
	//creer le fichier de destination 
}