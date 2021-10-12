#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i, n, temp, num[100], desnum[100];
	int j, k, l;
	printf("Nhap tong so diem can phai nhap : \n");
	scanf("%d", &n);
	for(l=0;l<n;l++)
	{
		printf("Nhap diem cua hoc sinh thu %d : \n", l+1);
		scanf("%d", &num[l]);
	}
	for(k=0;k<n;k++)
		desnum[k]=num[k];
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(desnum[i]<desnum[j])
				{
					temp=desnum[i];
					desnum[i]=desnum[j];
					desnum[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		printf("Diem cua hoc sinh thu [%d] la %d : ", i+1, desnum[i]);
}
