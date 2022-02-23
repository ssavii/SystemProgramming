#include void main()

{ char ch; FILE *fp1, *fp2; fp1=fopen("input.txt","r");

fp2=fopen("output.txt","w");

ch=fgetc(fp1);

while(ch!=EOF)
{

fputc(ch,fp2);

ch=fgetc(fp2);

}

fclose(fp1);

fclose(fp2);

}
