#include <stdio.h>
#include <stdlib.h>


void print1(int c, int x){//print1 method is printing "1" due to given int values recursively
    if(c<=2*x-1){//for example if c is 1 and x is 2 this method will print 3 "1" to screen
        printf("1");
        c++;
        print1(c,x);
    }
}
void printUnderScore(int c,int i, int a){//printUnderScore method is printing "_" due to given int values recursively
    if(c<=i-a){//for example if c and i are 8 and a is 1, this method will print 8 "_" to screen
        c++;
        printf("_");
        printUnderScore(c,i,a);}
}
void triangle(int input,int r,int x,int a){//we use 4 int value ,print1 and printUnderScore methods(created and explained at bottom) in this method.
    if(input==0){ //printing first triangle
        if(r<33){
            printUnderScore(1,32,r);
            print1(1,r);
            printUnderScore(1,32,r);
            printf("\n");
            r++;
            triangle(input,r,x,a);//invoking this method 32 times recursively so we are able to print all 32 rows correctly
        }
    }
    else if (input==1){//printing second triangle
        if(r<17){
            printUnderScore(1,32,r);
            print1(1,r);
            printUnderScore(1,32,r);
            printf("\n");
            r++;
            triangle(input,r,x,a);//invoking this method 16 times recursively so we are able to print first 16 rows correctly
        }
        else if(r>16 && r<33){
            printUnderScore(1,16,x);
            print1(1,x);
            printUnderScore(1,32,a);
            print1(1,x);
            printUnderScore(1,16,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            triangle(input,r,x,a);//invoking this method 16 times recursively so we are able to print last 16 rows correctly
        }
    }
    else if (input==2){//printing third triangle
        if(r<9){
            printUnderScore(1,32,r);
            print1(1,r);
            printUnderScore(1,32,r);
            printf("\n");
            r++;
            triangle(input,r,x,a);//invoking this method 8 times recursively so we are able to print first 8 rows correctly
        }
        else if(r>8 && r<17){
            printUnderScore(1,24,x);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,24,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=9&&a!=17)
                triangle(input,r,x,a);//invoking this method 8 times recursively so we are able to print following 8 rows correctly
            else if(x==9&&a==17){
                triangle(input,r,1,1);}//after last recursion of following 8 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>16 && r<25){
            printUnderScore(1,16,x);
            print1(1,x);
            printUnderScore(1,32,a);
            print1(1,x);
            printUnderScore(1,16,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=9&&a!=17)//invoking this method 8 times recursively so we are able to print following 8 rows correctly
                triangle(input,r,x,a);
            else if(x==9&&a==17){//after last recursion of following 8 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
                triangle(input,r,1,1);}
        }
        else if(r>24&&r<33){
            printUnderScore(1,8,x);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,8,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=9&&a!=17)
                triangle(input,r,x,a);//invoking this method 8 times recursively so we are able to print last 8 rows correctly
        }
    }
    else if(input==3){//printing forth triangle
        if(r<5){
            printUnderScore(1,32,r);
            print1(1,r);
            printUnderScore(1,32,r);
            printf("\n");
            r++;
            triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print first 4 rows correctly
        }
        else if(r>4 && r<9){
            printUnderScore(1,28,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,28,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=5&&a!=9)
                triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print following 4 rows correctly
            else if(x==5&&a==9){
                triangle(input,r,1,1);}//after last recursion of following 4 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>8 && r<13){
            printUnderScore(1,24,x);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,24,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=5&&a!=9)
                triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print following 4 rows correctly
            else if(x==5&&a==9){
                triangle(input,r,1,1);}//after last recursion of following 4 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>12&&r<17){
            printUnderScore(1,20,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,20,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=5&&a!=9)
                triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print following 4 rows correctly
            else if(x==5&&a==9){
                triangle(input,r,1,1);}	//after last recursion of following 4 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>16 && r<21){
            printUnderScore(1,16,x);
            print1(1,x);
            printUnderScore(1,32,a);
            print1(1,x);
            printUnderScore(1,16,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=5&&a!=9)
                triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print following 4 rows correctly
            else if(x==5&&a==9){
                triangle(input,r,1,1);}//after last recursion of following 4 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>20 && r<25){
            printUnderScore(1,12,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,24,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,12,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=5&&a!=9)
                triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print following 4 rows correctly
            else if(x==5&&a==9){
                triangle(input,r,1,1);}//after last recursion of following 4 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>24 && r<29){
            printUnderScore(1,8,x);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,8,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=5&&a!=9)
                triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print following 4 rows correctly
            else if(x==5&&a==9){
                triangle(input,r,1,1);}//after last recursion of following 4 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>28 && r<33){
            printUnderScore(1,4,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,4,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=5&&a!=9)
                triangle(input,r,x,a);//invoking this method 4 times recursively so we are able to print last 4 rows correctly
        }
    }
    else if(input==4){//printing last triangle
        if(r<3){//invoking this method 4 times recursively so we are able to print first 2 rows correctly
            printUnderScore(1,32,r);
            print1(1,r);
            printUnderScore(1,32,r);
            printf("\n");
            r++;
            triangle(input,r,x,a);
        }
        else if(r>2 && r<5){
            printUnderScore(1,30,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,30,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5){
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>4 && r<7){
            printUnderScore(1,28,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,28,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5){
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }

        else if(r>6 && r<9){
            printUnderScore(1,26,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,26,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5)
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        else if(r>8 && r<11){
            printUnderScore(1,24,x);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,24,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5){
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>10 && r<13){
            printUnderScore(1,22,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,12,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,22,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5)
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        else if(r>12 && r<15){
            printUnderScore(1,20,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,20,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5)
                triangle(input,r,1,1);//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>14 && r<17){
            printUnderScore(1,18,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,18,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5){
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>16 && r<19){
            printUnderScore(1,16,x);
            print1(1,x);
            printUnderScore(1,32,a);
            print1(1,x);
            printUnderScore(1,16,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5)
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        else if(r>18 && r<21){
            printUnderScore(1,14,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,28,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,14,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5)
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        else if(r>20 && r<23){
            printUnderScore(1,12,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,24,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,12,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5)
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        else if(r>22 && r<25){
            printUnderScore(1,10,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,20,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,10,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5){
                triangle(input,r,1,1);}	//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>24 && r<27){
            printUnderScore(1,8,x);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,16,a);
            print1(1,x);
            printUnderScore(1,8,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5)
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        else if(r>26 && r<29){
            printUnderScore(1,6,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,12,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,12,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,12,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,6,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5){
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>28 && r<31){
            printUnderScore(1,4,x);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,8,a);
            print1(1,x);
            printUnderScore(1,4,x);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print following 2 rows correctly
            else if(x==3&&a==5){
                triangle(input,r,1,1);}//after last recursion of following 2 rows, we are changing x and a values with 1(default value) and recursing the method for following rows
        }
        else if(r>30 && r<33){
            printUnderScore(1,2,x);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,4,a);
            print1(1,x);
            printUnderScore(1,2,a);
            printf("\n");
            r++;
            x++;
            a+=2;
            if(x!=3&&a!=5)
                triangle(input,r,x,a);//invoking this method 2 times recursively so we are able to print last 2 rows correctly
        }
    }
    else
        printf("Invalid input");}
int main(int argc, char *argv[]) {
    //Mehmet Alper Karabay 150119044 HW3-Q3
    int input;
    printf("Enter a number between 0 and 4 (0 and 4 included):");
    scanf("%d",&input);//getting input from user
    triangle(input,1,1,1);//invoke triangle method for print triangles due to given input
    return 0;
}