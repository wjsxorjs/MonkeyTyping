#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>



#define MAX 100

int main(){
	char str[MAX];
	char buf;
	char exit;

	int amount = 0;
	int i = 0;

	srand(time(NULL));
	int Lowtype = ((rand() % 26) + 97);
	int Captype = ((rand() % 26) + 65);
	int LorC = (rand() % 3);
	int Number = ((rand() % 10));

	printf("\t***************************************\n");
	printf("\t** How Many Type The Monkey Type ??? **\n");
	printf("\t***************************************\n\n\n");
	while (1){
		printf("What's your sentence??");
		fgets(str, sizeof(str), stdin);

		while (1){
			LorC = (rand() % 3);
			if (i == (strlen(str) - 1)){ break; }
			Lowtype = ((rand() % 26) + 97);
			Captype = ((rand() % 26) + 65);
			Number = ((rand() % 10));
			amount++;
			if (LorC == 0){
				buf = ("%c", Lowtype);
			}
			else if (LorC == 1){
				buf = ("%c", Captype);
			}
			else if (LorC == 2){
				buf = ("%c", Number + 48);
			}
			printf("TYPING: %c\n", buf);
			if (str[i] == buf){
				for (int a = 0; a < i; a++){ printf("\t"); }
				printf("\t\t%c\n", str[i]); i++;
			}
			else if (str[i] != buf){ i = 0; }

		}
		printf("Monkey type for %d letters to wirte this sentence...\n", amount);
		i = 0;
		amount = 0;
		while (1){
			printf("Do you want to exit??\tY/N\n");
			scanf_s("%c", &exit);
			if (exit == 'Y' || exit == 'y'){ printf("Good Bye!!\n"); return 0; }
			else if (exit == 'N' || exit == 'n'){ getchar(); break; }
			getchar();
		}
	}

}