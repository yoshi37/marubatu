#include <stdio.h>
long k,b=0,z[]={0x15,0x1041,0x10101,0x1110};
char s[]=" 012";
int h,i,j,l;
int d(long a,long b){return ((a&b)==b);
}
main(){
	printf("_,_の形で入力してください。");
	for(l=0;l<9;l++){
		puts("\n 012");
		for(i=0;i<3;i++){
			s[0]=i+'0';
			for(j=0;j<3;j++)s[j+1]=" xo"[b>>(i*6+j*2)&3];
			puts(s);
		}
if(d(k=(b>>(h=l%2)),z[0])||d(k>>6,z[0])||d(k>>12,z[0])||d(k,z[1])||d(k>>2,z[1])||d(k>>4,z[1])||d(k,z[2])||d(k,z[3])){
	puts("x won\0o won"+h*6);
}
puts("o?\0x?"+h*3);
scanf("%d,%d",&j,&i);
b+=(2L-h)<<(i*6+j*2);
	}
}