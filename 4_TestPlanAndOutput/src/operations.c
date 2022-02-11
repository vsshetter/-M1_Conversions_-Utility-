void decitobina()
{

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
 }
 
void decitoocta()
{
 for(i=0;n>0;i++)
    {
        a[i]=n%8;
        n=n/8;
    }
}
void decitohexa()
{
for(int i = 0; di >= 1 ;i++)
    {
        if(di%16 == 0)
            hexa[i] = '0';
        else if(di%16 == 1)
            hexa[i] = '1';
        else if(di%16 == 2)
            hexa[i] = '2';
        else if(di%16 == 3)
            hexa[i] = '3';
        else if(di%16 == 4)
            hexa[i] = '4';
        else if(di%16 == 5)
            hexa[i] = '5';
        else if(di%16 == 6)
            hexa[i] = '6';
        else if(di%16 == 7)
            hexa[i] = '7';
        else if(di%16 == 8)
            hexa[i] = '8';
        else if(di%16 == 9)
            hexa[i] = '9';
        else if(di%16 == 10)
            hexa[i] = 'A';
        else if(di%16 == 11)
            hexa[i] = 'B';
        else if(di%16 == 12)
            hexa[i] = 'C';
        else if(di%16 == 13)
            hexa[i] = 'D';
        else if(di%16 == 14)
            hexa[i] = 'E';
        else if(di%16 == 15)
            hexa[i] = 'F';
        di = di/16;
    }
}
 void bitodeci()
 {
 while (n!=0) 
  {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
}
 void octtodeci()
{
 while(n!=0)
     {
         d+=(n%10)*pow(8,i);
         ++i;
         n/=10;
     }
     i=1;
 }
 
   void hextodeci()
   {
     while(hexnum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexnum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit");
            getch();
            return 0;
        }
        d= d + (rem*pow(16, i));
        len--;
        i++;
        
      }
}
