#include<stdio.h>

void multiply(float array1[9],float array2[9]){

    float arr0 = array1[0]*array2[0] +array1[1]*array2[3] + array1[2]*array2[6];
    float arr1 = array1[0]*array2[1] +array1[1]*array2[4] + array1[2]*array2[7];
    float arr2 = array1[0]*array2[2] +array1[1]*array2[5] + array1[2]*array2[8];

    float arr3 = array1[3]*array2[0] +array1[4]*array2[3] + array1[5]*array2[6];
    float arr4 = array1[3]*array2[1] +array1[4]*array2[4] + array1[5]*array2[7];
    float arr5 = array1[3]*array2[2] +array1[4]*array2[5] + array1[5]*array2[8];
    
    float arr6 = array1[6]*array2[0] +array1[7]*array2[3] + array1[8]*array2[6];
    float arr7 = array1[6]*array2[1] +array1[7]*array2[4] + array1[8]*array2[7];
    float arr8 = array1[6]*array2[2] +array1[7]*array2[5] + array1[8]*array2[8];

    float arr[9] = {arr0,arr1,arr2,arr3,arr4,arr5,arr6,arr7,arr8};
    
    printf("Row Number 1: %f %f %f\n",arr[0],arr[3],arr[6]);
    printf("Row Number 2: %f %f %f\n",arr[1],arr[4],arr[7]);
    printf("Row Number 3: %f %f %f\n",arr[2],arr[5],arr[8]);
    
}

float det_2(float array[4]){

float d2 = ((array[0]*array[3]) - (array[1]*array[2]));
return d2;
}

void adjoint(float array[9]){

float arr1[4] = {array[4],array[5],array[7],array[8]}; 
float arr2[4] = {array[3],array[5],array[6],array[8]}; 
float arr3[4] = {array[3],array[4],array[6],array[7]}; 
float arr4[4] = {array[1],array[2],array[7],array[8]}; 
float arr5[4] = {array[0],array[2],array[6],array[8]}; 
float arr6[4] = {array[0],array[1],array[6],array[7]}; 
float arr7[4] = {array[1],array[2],array[4],array[5]}; 
float arr8[4] = {array[0],array[2],array[3],array[5]}; 
float arr9[4] = {array[0],array[1],array[3],array[4]};

float adj_arr[9]; 

adj_arr[0] = det_2(arr1);
adj_arr[1] = -det_2(arr2); 
adj_arr[2] = det_2(arr3);
adj_arr[3] = -det_2(arr4);
adj_arr[4] = det_2(arr5);
adj_arr[5] = -det_2(arr6);
adj_arr[6] = det_2(arr7);
adj_arr[7] = -det_2(arr8);
adj_arr[8] = det_2(arr9);

    printf("Adjoint of Matrix is:\n");
    printf("Row Number 1: %f %f %f\n",adj_arr[0],adj_arr[1],adj_arr[2]);
    printf("Row Number 2: %f %f %f\n",adj_arr[3],adj_arr[4],adj_arr[5]);
    printf("Row Number 3: %f %f %f\n",adj_arr[6],adj_arr[7],adj_arr[8]);


}

void transpose(float array[9]){
float arr[9] = {array[0],array[3],array[6],array[1],array[4],array[7],array[2],array[5],array[8]};

    printf("Transpose matrix is given as:\n");
    printf("Row Number 1: %f %f %f\n",arr[0],arr[3],arr[6]);
    printf("Row Number 2: %f %f %f\n",arr[1],arr[4],arr[7]);
    printf("Row Number 3: %f %f %f\n",arr[2],arr[5],arr[8]);

}

float determinate(float array[9]){

float det_arr =  (array[0]*((array[4]*array[8]) - (array[5]*array[7]))) - (array[1]*((array[3]*array[8]) - (array[5]*array[6]))) + (array[2]*((array[3]*array[7]) - (array[4]*array[6])));
return det_arr;
}

void inverse(float array[9]){

if(determinate(array)==0){
    printf("Inverse not exist.\n");
}

else{
float arr1[4] = {array[4],array[5],array[7],array[8]}; 
float arr2[4] = {array[3],array[5],array[6],array[8]}; 
float arr3[4] = {array[3],array[4],array[6],array[7]}; 
float arr4[4] = {array[1],array[2],array[7],array[8]}; 
float arr5[4] = {array[0],array[2],array[6],array[8]}; 
float arr6[4] = {array[0],array[1],array[6],array[7]}; 
float arr7[4] = {array[1],array[2],array[4],array[5]}; 
float arr8[4] = {array[0],array[2],array[3],array[5]}; 
float arr9[4] = {array[0],array[1],array[3],array[4]};

float inv_arr[9]; 

inv_arr[0] = det_2(arr1)/determinate(array);
inv_arr[1] = -det_2(arr2)/determinate(array); 
inv_arr[2] = det_2(arr3)/determinate(array);
inv_arr[3] = -det_2(arr4)/determinate(array);
inv_arr[4] = det_2(arr5)/determinate(array);
inv_arr[5] = -det_2(arr6)/determinate(array);
inv_arr[6] = det_2(arr7)/determinate(array);
inv_arr[7] = -det_2(arr8)/determinate(array);
inv_arr[8] = det_2(arr9)/determinate(array);

    printf("Inverse of Matrix is:\n");
    printf("Row Number 1: %f %f %f\n",inv_arr[0],inv_arr[1],inv_arr[2]);
    printf("Row Number 2: %f %f %f\n",inv_arr[3],inv_arr[4],inv_arr[5]);
    printf("Row Number 3: %f %f %f\n",inv_arr[6],inv_arr[7],inv_arr[8]);

}
}

void multiplyany(int a,int b,int c,int d,float mat1[b][a],float mat2[d][c]){
    
       if(b != c){
        printf("matrix multiplication is not possible,try another operation.");
                }
       else{
printf("Final Matrix After Multiplication is as following,\n");
float mat[d][a];

       for(int l = 0;l<a;l++){
        for(int k = 0;k<d;k++){
            mat[k][l]=0;
            int m = 0;
            while(m!=b){
            mat[k][l] = mat[k][l] + mat1[m][l]*mat2[k][m]; //m upto b and n upto c.
            m++;
            }
        }

       }
    for(int i=0;i<a;i++){
        printf("Row number %d: ",i+1);
        for(int j=0;j<d;j++){
                printf("%f ",mat[j][i]);
        }
        printf("\n");
    }
       }

}

int main (){
    char Choice;
    do{
   printf("***This program is for matrix operations***\n"
               "1. Find determinant of 3D matrix\n"
               "2. Find Transpose of 3D matrix\n"
               "3. Find adjoint of 3D matrix\n"
               "4. Find inverse of 3D matrix\n"
               "5. Multiply two 3D matrices\n"
               "6. Multiply any(With any dimension) two matrices\n"
            
               "Press a number accordingly to perform the above-mentioned operation: ");
   int A;
   scanf("%d",&A);
    if(A==1 || A==2 || A==3 || A==4){
    //Input Matrix

    float row11[3];
    float row12[3];
    float row13[3];
    printf("**Enter your matrix**\n");
    printf("Enter 1st row:");
    scanf("%f %f %f",&row11[0],&row12[0],&row13[0]);
    printf("Enter 2nd row:");
    scanf("%f %f %f",&row11[1],&row12[1],&row13[1]);
    printf("Enter 3rd row:");
    scanf("%f %f %f",&row11[2],&row12[2],&row13[2]);

    //Make array

    float arr1[9] = {row11[0],row11[1],row11[2],row12[0],row12[1],row12[2],row13[0],row13[1],row13[2]};

    
    if(A==1){                    //Find determinate

        
    //Find Determinate
    printf("Determintate of given matrix is :%f\n",determinate(arr1));
    

   }

    if(A==2){                   //Find Transpose


    //Find Transpose
    transpose(arr1);
   }

    if(A==3){                   //Find adjoint


    //Find Determinate
    adjoint(arr1);
   }

    if(A==4){                   //Find Inverse

    //Find inverse
    inverse(arr1);
   }}

    if(A==5){                   //Multiply two matrix

    printf("Ok!So,you want to multiply two 3D matrix.\n");
    printf("format:first matrix * second matrix.\n");

    //First Matrix

    float row11[3];
    float row12[3];
    float row13[3];
    printf("**For 1st matrix**\n");
    printf("Enter 1st row:");
    scanf("%f %f %f",&row11[0],&row12[0],&row13[0]);
    printf("Enter 2nd row:");
    scanf("%f %f %f",&row11[1],&row12[1],&row13[1]);
    printf("Enter 3rd row:");
    scanf("%f %f %f",&row11[2],&row12[2],&row13[2]);

    //Second Matrix

    float row21[3];
    float row22[3];
    float row23[3];
    printf("**For 2nd matrix**\n");
    printf("Enter 1st row:");
    scanf("%f %f %f",&row21[0],&row22[0],&row23[0]);
    printf("Enter 2nd row:");
    scanf("%f %f %f",&row21[1],&row22[1],&row23[1]);
    printf("Enter 3rd row:");
    scanf("%f %f %f",&row21[2],&row22[2],&row23[2]);

    //Make two array

    float arr1[9] = {row11[0],row11[1],row11[2],row12[0],row12[1],row12[2],row13[0],row13[1],row13[2]};
    float arr2[9] = {row21[0],row21[1],row21[2],row22[0],row22[1],row22[2],row23[0],row23[1],row23[2]};
    
    //Multiply two array
    printf("Final matrix after multiplication:-\n");
    multiply(arr1,arr2);
   }

    if(A==6){                   //Multiply any two matrix
    int a,b,c,d,choice;
    
    

    printf("***This is a program for multiplying two matrix***\n");
    printf("Before doing any operation do you know what are rows and colums?(y/n):");
    char ans;
    scanf("%s",&ans);
    if(ans == 'n'|| ans =='N'){
            printf("-------R-O-W-------\n");
            printf(
                   "|\n"           
                   "C\n"
                   "|\n"
                   "O\n"
                   "|\n"
                   "L\n"
                   "|\n" );
                   }


//matrix 1
    printf("***For Matrix-1***\n");
    printf("Enter number of rows for first matrix:");
    scanf("%d",&a);
    printf("Enter number of colums for first matrix:");
    scanf("%d",&b);
    float mat1[b][a];
    
    for(int i = 0;i<a;i++){
    printf("Enter row number %d: ",i+1);
    for(int j = 0;j<b;j++){
                    scanf("%f",&mat1[j][i]);}
   
}

//matrix 2   
    printf("***For Matrix-2***\n");
    printf("Enter number of rows for second matrix:");
    scanf("%d",&c);
    printf("Enter number of colums for second matrix:");
    scanf("%d",&d);
    float mat2[d][c];

    for(int k = 0;k<c;k++){
    printf("Enter row number %d: ",k+1);
    for(int l = 0;l<d;l++){
                    scanf("%f",&mat2[l][k]);}
    
}
printf("Operations:-\n"
        "1.Matrix-1 * Matrix-2\n"
        "2.Matrix-2 * Matrix-1\n"
        "3.Both 1 and 2\n"

);
printf("Enter number according to your choice of operation:");
scanf("%d",&choice);
if(choice == 1){
    multiplyany(a,b,c,d,mat1,mat2);
}
if(choice == 2){
     multiplyany(c,d,a,b,mat2,mat1);
}
if(choice == 3){   
   printf("Matrix-1 * Matrix-2:\n");
   multiplyany(a,b,c,d,mat1,mat2);
   printf("Matrix-2 * Matrix-1:\n");
   multiplyany(c,d,a,b,mat2,mat1);
}

    }
    printf("Do you want to perform another operation? (y/n): ");
        scanf("%s", &Choice);
    }
    
    
    while(Choice == 'y' || Choice == 'Y');
    printf("Exiting the program.Goodbye!\n");

 
return 0;
}
