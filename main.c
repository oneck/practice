#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, k;
    int e, s, m ;
    int a, b, c, i, j;
    int A[100000000];
    int l;

  
   
        printf("숫자 갯수 입력하시오(단, 1부터 100 중에 선택) \n");    
        scanf("%d", &n);    // 표준 입력을 받아서 변수에 저장

        printf("Lower Bound 기준 숫자를 입력하시오(단, 1부터 100중에 선택) \n");
        scanf("%d", &k);    // 표준 입력을 받아서 변수에 저장

        


    for ( i=0; i < n ; i++)
        A[i] = ( rand() % 100 ) + 1   // 1부터 100 중에 숫자 랜덤 받아오기
    ;
       
    for ( j=1; j <= n; j++)
    {
        for ( i=0; i < n ; i++)   
        {
          if ( A[i+1] < A[i] )                          // 오름차순 정리
            c = A[i+1],
            A[i+1] = A[i],
            A[i] = c;   
        }   
    }

                                        // 중간부터 Lower Bound 찾아가기

    s=0,
    e = (n-1) + 1;
    m = (s + e) / 2;


    if (A[n-1] >= k)
    {
        /* code */
    
    
         while (e-s > 1)
        {

            if (A[m] >= k)
            {
                e = m;
                m = (s + e) / 2;
            }

            else
            {
                s = m + 1;
                m = (s + e) / 2;
            }

        }
    }

    if (A[n-1] < k)
        l = n + 1;

    else
        l = e,  
        
    printf(" %d 보다 같거나 큰 수가 처음으로 나오는 위치는 %d", k, l);



    
    return 0;
}

