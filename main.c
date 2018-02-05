
#include <stdio.h>  
#include <string.h>  

int main()
{
	char szTest[1000] = { 0 };
	int len = 0;

	FILE *fp, *fp2;
	fp = fopen("c:\\text.txt", "r");
	fp2 = fopen("d:\\text.txt", "w+");

	if (NULL == fp)
	{
		printf("failed to open C:\text.txt\n");
		return 1;
	}



	while (!feof(fp))
	{
		memset(szTest, 0, sizeof(szTest));
		fgets(szTest, sizeof(szTest) - 1, fp);
		fputs(szTest, fp2);
		printf("%s", szTest);
	}

	fclose(fp);

	printf("\n");
	system("pause");

	return 0;
}