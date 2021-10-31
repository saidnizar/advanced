#include<stdio.h> 
#include <math.h>


void convert_to_decimal(long long int  bin, int *dec)
{
	int res=0,i=0;
	while(bin)
	{
		res+=((bin%10)*pow(2,i));
		i++;
		bin=bin/10;
	}

	*dec=res;

}

void convert_to_binary(int dec,long long int  *bin){
	long long int res=0;
	int i=0;
	while(dec){
		res+=((dec%2)*pow(10,i));
		i++;
		dec=dec/2;
	
	}
	*bin=res;

}

int main() {
	long long int  y;
	int dec;
	scanf("%lld",&y);
	convert_to_decimal(y,&dec);
	printf("\n binary value: %d\n",dec);
	convert_to_binary(dec,&y);
	printf("decimal vaule: %lld\n",y);
  return 0;
}

