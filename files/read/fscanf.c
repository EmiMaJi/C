/*int fscanf(FILE *fichero, const char *formato, argumento, ...);*/

#include <stdio.h>

 
int main (){
 	FILE *fp;
 	
 	char buffer1[20];
 	char buffer2[20];
 /*	char buffer3[20];
 */	
 	fp = fopen ( "gente.txt", "r" );
 	
	fscanf(fp, "%s%s", buffer1, buffer2); 
	printf("%s\n",buffer1);
	printf("%s\n",buffer2);
/*	printf("%s\n",buffer3);
 */	
 	fclose ( fp );
 	
 	return 0;
}
