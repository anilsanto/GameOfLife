//
//  main.c
//  Game
//
//  Created by Nuevalgo on 20/03/14.
//  Copyright (c) 2014 Nuevalgo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int count=0;
    int array[5][5]={0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0};
    int new[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%d    ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    for (int k=0; k<2; k++) {
        
        
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                new[i][j]=0;
            }
        }
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                count=0;
                if(j!=4)
                    if(array[i][j+1]==1)
                        count++;
                if(j!=0)
                    if(array[i][j-1]==1)
                        count++;
                if(j!=4 )
                    if(i!=4)
                        if(array[i+1][j+1]==1)
                            count++;
                if(j!=0)
                    if(i!=4)
                        if(array[i+1][j-1]==1)
                            count++;
                if(i!=0)
                    if(array[i-1][j]==1)
                        count++;
                if(i!=4)
                    if(array[i+1][j]==1)
                        count++;
                if(i!=0)
                    if(j!=4)
                        if(array[i-1][j+1]==1)
                            count++;
                if(i!=0)
                    if(j!=0)
                        if(array[i-1][j-1]==1)
                            count++;
                
                if(array[i][j]==1)
                {
                    
                    if(count<2)
                        new[i][j]=0;
                    if(count==2 || count==3)
                        new[i][j]=1;
                    if(count>3)
                        new[i][j]=0;
                    
                }
                else
                {
                    if(count==3)
                        new[i][j]=1;
                }
                
            }
        }
        printf("\n");
        printf("\n");
        
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                printf("%d    ",new[i][j]);
            }
            printf("\n");
        }
        
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                array[i][j]=new[i][j];
            }
        }
    }
    return 0;
}

