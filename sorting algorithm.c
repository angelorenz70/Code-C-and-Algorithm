#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char * a,char * b){
    char name[20];
    strcpy(name, a);
    strcpy(a, b);
    strcpy(b, name);
}

//selection sort
/*
void sortName(char name[][20], int L){
    for(int i = 0; i < L - 1; i++){
        int minimum = i;
        for(int n = minimum + 1; n < L; n++){
            if(stricmp(name[minimum], name[n]) > 0 ){
                minimum = n;
            }
        }
        swap(name[minimum],name[i]);
    }
}
*/

//bubble sort
/*
void sortName(char name[][20], int L){
    for(int x = 0; x < L - 1; x++){
        for(int y = 0; y < L; y++){
            if(stricmp(name[y],name[y + 1]) > 0){
                swap(name[y],name[y + 1]);
            }
        }
    }
}
*/

//insertion sort
/*
void sortName(char name[][20], int L){
    char key[20];
    for(int base = 0; base < L; base++){
        strcpy(key,name[base]);
        int j = base - 1;
        for(j; j >= 0 && (stricmp(name[j],key) > 0); j--){
            strcpy(name[j+1] , name[j]);
        }
        strcpy(name[j+1], key);
    }
}
*/

void displayName(char name[][20], int L){
    for(int i = 0; i < L; i++){
        printf("%d. %s\n", i + 1, name[i]);
    }
}

int main(){
    char name[][20] = {"Breech","Rendon","Angelo","Karl","Cristian","anna","Retiza" , "arch"};
    int L = sizeof(name)/sizeof(name[0]);
    printf("\noriginal name: \n");
    displayName(name,L);
    sortName(name,L);
    printf("\nsorted name: \n");
    displayName(name,L);
    return 0;
}

