#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    float    m[8]; 
    float    sum = 0; 
    float    result = 1; 
    int      iMax, iMin, i, j, b=i+1; 
 
    /* Запрашиваем ввод данных в массив с клавиатуры */ 3
    0/4
    for (int i = 0; i < 8; i++) 
     { 
         printf("m[%d] = ", i); 
         scanf("%f", &m[i]); 
     } 
   /*  Находим номер минимального элемента массива*/ 
    m[iMin] =  m[0]; 
    for (i = 0; i < 8; i++) 
     { 
          if(m[i]<m[iMin]) 
         { 
             m[iMin]=m[i]; 
              b=i; 
         } 
     }   
    printf(" Nomer Minimalnogo elementa - m[%d]=%.2f", b, m[b]); 
    /* Находим сумму элементов массива, расположенных между первым 
  и вторым отрицательными элементами*/ 
    float s=0; 
    for (i = 0; i < 8; i++) 
     { 
        if(m[i]<0) 
       { 
         i++; 
     while(m[i]>=0) 
      {  
          s=s+m[i]; 
       i++;  
       } 
   
           break; 
   } 
  } 
    printf("\nSumma mejdu otritatelnimi %.2f", s); 
    /*Преобразовываем массив таким образом, чтобы сначала располагались все элементы,  
 модуль которых не превышает 1, а потом - все остальные.*/  
    for (i = 0; i < 8; i++) 
    { 
        for (int j = i + 1; j < 8; j++) 
        { 
            if (fabs(m[i]) > fabs(m[j])) 
            { 
                result = m[i]; 
                m[i] = m[j]; 
                m[j] = result; 
            } 
        } 
    } 
    printf("\nOtsortirovanii massiv :\n"); 
    for (i = 0; i < 8; printf("%.2f ", m[i++])); 
 
    return 0; 
}