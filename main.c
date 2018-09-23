#include <stdio.h>
#include <stdlib.h>
# include <string.h>
#include <time.h>
#define SIZE 10
int main()
{
  /** this edit is after my first trail in this programe Git hub */ 
    // arrays is a group of memory locations that have the same name and the same data type ex) name[] = {a,s,d,f,....} , name[] is undetermined size array

    // to refer to a position in the array we mention the name of the array and the position number of this element ex) name[0]=a ;

    //the first element is referred to it by 0 the second by 1 and so on

    //arrays can be used to save strings   ex) char name [] ="khaled" , then name[0]='k' and name[1]='h', this string consist of 7 elements which are six characters and one termination character (\0) which called null character

    // to print string we use conversion specifier (%s)

    // the first element must be initialized by zero so the rest of elements automatically become zeros too

    //if you wanna insert number into an array use a loop for inserting and another loop for displaying

    // to define a global variable or function use #define the function

    // to define an array you have to define its data type , name and size

    // to find an element in an array there are two ways (linear search ) and (binary search

    // in linear search the (search key ) is compared with every element in the array

    // linear search method works perfectly for unsorted and small arrays but for large arrays linear search is inefficient

    //in binary search the algorithm remove half of the array at every comparison

    // in binary search the algorithm compare the key search to one half of the array if not found remove this half and search in half of the remaining half and so on until the key found


     /** ###################### example to set an array to zero #############################*/

    /*
     long i , n[10] ;

     printf("%s\t%s\n","Element","value") ;

     for(i=0;i<10;i++){
        n[i] = 0 ;
        printf("%d\t%d\n",i,n[i]);
     }
    */



        /** ######################### a program to read numbers and place it into array ########################*/




/*
    long i ,n[10] ;
    printf("Enter 10 numbers to add to the array \n") ;
    for (i=0; i<10 ;i++) {
        scanf("%d",&n[i]) ;
    }
    printf("Element\tvalue\n") ;
        for (i=0; i<10 ;i++) {
                printf("%d\t%d\n",i,n[i]) ;

        }
        */

        /** ########################################### sum the element of array ################################*/



        /*
        long i ,j ,sum=0 ,poll[10] ;
        printf("Enter the student ranking \n") ;

        for (i=0;i<10;i++ ) {

                scanf("%d",&poll[i]) ;

        }
        for (j=0;j<10 ;j++)
        {

            sum =sum + poll[j] ;

        }
        printf("the summarize of the poll is %d\n",sum) ;

        */


        /** #################################### count the number of occurrence of elements in the array ######################################*/

        /*int arr[10] , i,freq[]={0} ;
        printf("Enter ten numbers \n");
        for (i=0 ; i<10 ; i++)
        {
            scanf("%d",&arr[i]);


        }

         for (i=0 ; i<10 ; i++)
        {

            ++ freq[arr[i]];

        }
        printf("num\tfreq\n");
        for (i=0 ; i<10 ; i++)
        {

            printf("%d\t%d\n",i,freq)

        }

        */
        /*

        long i,j,k , rating ,freq[11]={0},respons[15] ; // never forget to set the array to zero when you are gonna do operation on it

        printf("enter the student responses \n") ;

        for (i=0;i<15;i++){
            scanf("%d",&respons[i]);
        }

        for (j=0;j<15;j++){
            ++freq[respons[j]]; /* assume j was 3 and you entered the fourth element in the array(which represented by no.3) with 7 then the new look of this
                                    line will be (++freq[7])which means increase the element at seven in the freq array by one

        }
        printf("Rating\tfrequancy\n") ;
        for (k=1;k<11;k++){
            printf("%d\t%d\n",k,freq[k]) ;
        }


        */






        /**########################################################*/

        /*int x,y,z ,val[10] ;

        printf("Enter the values \n") ;

        for(x=0;x<10;x++)
        {
            scanf("%d",&val[x]);
        }

        printf("Element\tvalue\tHistogram\n") ;

        for(y=0;y<10;y++)
        {

            printf("%d\t%d\t",y,val[y]) ;

            for(z=0;z<val[y];z++)
            {

                printf("*");

            }

            printf("\n");
        }

    */


        /**############################################ arrays in the course ############################################### */
        /**#################################################################################################################*/
        /**##################################################################################################################*/

        /*
        int i ;

        char name[] = {'k','h','l','e','d'} ;

        for (i=0;i<5;i++){
            printf("%c",name[i]);
        }
        */





       /* char x,y , name[6] ;
        printf("enter the name\n") ;
        for (x=0;x<6;x++){

                scanf("%c",&name[x]);

        }
        for (y=0 ;y<6;y++) {
            printf("%c",name[y]);

        }
        */
        /** ################### swaping two arrays ########################### */

        /*
        int arr1[5] ,arr2[5] , i ,temp ;

        printf("Enter the first array \n");
        for (i=0 ; i<5 ;i++)
        {
            scanf("%d",&arr1[i]);
        }
        printf("Enter the second array \n");
        for(i=0; i<5 ;i++)
        {
            scanf("%d",&arr2[i]);
        }
        printf("array1\tarray2\n");
        for(i=0 ; i<5 ;i++)
        {
            printf("%d\t%d\n",arr1[i],arr2[i]);
        }
        for(i=0 ;i<5 ;i++)
        {
           temp = arr1[i] ;
           arr1[i] = arr2[i];
           arr2[i] = temp ;
        }
        printf("array1\tarray2\n");
        for(i=0 ; i<5 ;i++)
        {
            printf("%d\t%d\n",arr1[i],arr2[i]);
        }

        */

        /*
        long w,x,y ,z,c;
        char arr1[5] ,arr2 [5],b[5],a[5] ;

         printf("enter the first array\n") ;

        for (x=0 ;x<5;x++)
        {
            scanf(" %c",&arr1[x]);
        }

         printf("enter the second array\n") ;

        for (y=0 ;y<5;y++)
        {
            scanf(" %c",&arr2[y]);
        }

        for (w=0;w<5;w++)
        {
            b[w]=arr1[w];
            arr1[w]= arr2[w] ;
            arr2[w]=b[w] ;

        }
         for (z=0;z<5;z++)
        {
            printf(" %c",arr1[z]);


        }
         for (c=0;c<5;c++)
        {
            printf(" %c",arr2[c]);
        }
        */

         /**######################## string in array of character ############################33*/


  /*

         char name1 [] = "hello" ; // must add null character to terminate the string or tell the compiler the end of the string
        char bridge [6] ;
         char name2 [] = "khaled";
        printf("%d\n",strlen(name1)) ; //strlen function is used to find the length of the string
                                         //strcpy function is used to copy an array  into another array

       strcpy(bridge,name1) ;
       strcpy(name1,name2) ;
        strcpy(name2,bridge);
                            //        printf("%s\n",name1);

       printf("%s\n",name1);
       printf("%s\n",name2);
       printf("%d",strcmp(name1,name2)) ; // used to compare the length of the two arrays
       char a [] = {'h','e','l','l','o'} ;

       printf("%s",strcat(a," world"));
       */


       /** ########################### two dimensional arrays #####################################*/




       //char arr [2][5] = {{'h','e','l','l','o'},{'h','e','l','l','o'}} ; // two arrays each one has five elements / 2 is no of rows and 5 no of columns
       /*
       int arr1 [2][5] = {{1,2,3,4,5},{6,7,8,9,10}} ;
       int x,y ;

       for(x=0;x<2;x++){
        for(y=0 ;y<5 ;y++) {
            printf("%d ",arr1[x][y]) ;
        }
       }
       */
        /*
       int arr2 [12][12] ;

       int w,x,y,z ;

       for (x=0; x<12 ;x++) {
        for(y=0 ;y<12 ; y++) {
            arr2 [x][y] =(x+1)*(y+1);
                   printf("%d\t",arr2[x][y]);

        }
        printf("\n") ;

       }
       */


        /*

       int num,rem,i,out[4] ,j=0  ;

       printf("enter a 4 digit  number \n") ;

       scanf("%d",&num) ;

       while (num > 0 )
            {
                rem = num % 10 ;

                out [j] = rem ;

                num /= 10 ;

                j++ ;

            }

    for (i=3 ; i>=0 ; i-- )
        {
        printf("%d ",out[i] ) ;
    }
            */

    /**#####################Forty students were asked to rate the quality of the food in the student cafeteria on a
                            scale of 1 to 10 (1 means awful and 10 means excellent). Place the 40 responses in an
                            integer array and summarize the results of the poll.*/





		/*int arr[10] , freq[11] , i ;
		printf("Enter the student rates \n");
		for (i=0 ;i<10 ; i++)
		{
			scanf("%d",&arr[i]);
		}

        */
        /** a program to find the duplicated number */

        /*int arr [10]={4,2,3,10,4,6,5,7,8,9} ;
        int freq[11]={0};
        int i=0 ;
        for(i=0 ; i<=20 ;i++)
        {
            if(i<10)
            {
                ++freq[arr[i]];
            }

            else if(i<=20)
            {
                if (freq[i-10]>1 )
                printf("%d",i-10);
            }

        }
		*/










            /*
             int i ,freq[11]={0} ;


               int arr [10] = {1,7d,2,9,4,4,10,6,8,10} ;

            for(i=0 ; i<=10 ; i++)
                {
                    ++freq[arr[i]];
                }
            printf("Number\tfrequency\n") ;
            for(i=1 ; i<=10 ; i++)
                {
                    printf("%d\t%d\n",i,freq[i]) ;
                }
                */


                /**############################################################### Rolling a Die 6,000,000 Times and Summarizing the Results in an Array */

                /*
                int roll[6000] , freq [7] ,i ;

                for (i=0 ; i<6000;i++) {

                    roll[i] = 1 + rand () % 6 ;

                }

                for (i=0 ; i<6000;i++) {
                    ++freq[roll[i]] ;
                }
                printf("Number\tFrequency\n");
                for (i=1 ;i<7;i++){
                    printf("%d\t%d\n",i,freq[i]) ;
                }
                */


                /** ############################################################ Sorting an array's values into ascending order */

                /**???????????????????????????????????????????????????
                   how to stop the outer loop as soon as the numbers are in their right places
                   ???????????????????????????????????????????????????? */

                /*
                int arr[size] , hold , i ,j ,count = 0 ,count1 = 0 ;
                printf("Enter the array of numbers \n") ;

                for (i=0 ; i< size ; i++)
                    {
                        scanf("%d",&arr[i]) ;
                    }
                for (i=0 ; i <= size ; i++)
                    {
                        for (j=0 ; j < size -1 ; j++)
                            {


                                if ( arr[j] > arr[j+1] )
                                    {
                                        hold = arr[j];
                                        arr[j] = arr[j+1] ;
                                        arr[j+1]= hold ;

                                    }




                            } /** i want when this for didn't do any swaps to break the outer for and present the answer */

                    /*        count ++ ;

                    }



                    printf("Number of passes = %d\n", count) ;
                    for (i=0 ; i < size ; i++)
                        {
                            printf("%d  ",arr[i]) ;
                        }
                            */




            /**############################################### Linear search */
            /**############################################### Linear search */
            /**############################################### Linear search */
            /**############################################### Linear search */

    /*
            int num , size ,i , key ;

            printf("Enter the array size \n") ;

            scanf("%d",&size) ;

            int arr[size] ;

            printf("Enter the array \n") ;

            for (i=0 ; i<size ; i++)
                {
                    scanf("%d",&arr[i]) ;
                }
            printf("Enter the number to search \n") ;

            scanf("%d",&num) ;

            key = LinearSearch(arr,num,size) ;

            if (key != -1)
                {
                    printf("Number found in element number %d\n",key) ;
                }
            else if (key == -1)

                {
                    printf("Number not found \n");
                }

            */
         /** ############################################# binary search */
         /** ############################################# binary search */
         /** ############################################# binary search */
         /** ############################################# binary search */
         /** ############################################# binary search */



       /* int size , key ,i,num ;

        printf("Enter the size \n") ;

        scanf("%d",&size) ;

        printf("Enter the number \n");

        scanf("%d" ,&num) ;

        int arr [size] ;

        for (i=0 ; i < size ; i++)
            {
                arr [i] = i*2 ;
            }

        key = BinarySearch(arr ,num ,0 ,size);

        if (key != -1 )
            {
                printf("Number found  in  element no %d\n", key) ;
            }

        else if (key == -1)
            {
                printf("Number not found \n") ;
            }*/

            /**##################################################### two dimensional arrays / print / find max / find min / find avg */


            /*
            int arr [3][4] = { {77,68,86,73} ,{96,87,89,78}, {70,90,86,81} } ;
            int i , j , max = 0 , min ,  total =0 ;
            double avg ;
            for (i=0 ; i < 3 ; i++)
                {
                    printf("Degrees of student [%d]  :",i);
                    for (j=0 ; j<4;j++)
                        {
                            printf("%d  ",arr[i][j]) ;
                        }
                        printf("\n") ;
                }
                printf("\n") ;

            for (i=0 ; i < 3 ; i++)
                {
                    for (j=0 ; j<4;j++)
                        {

                            if (arr [i][j] > max )
                                {
                                    max = arr [i][j];
                                }
                        }
                }
            printf("Highest degree = %d \n", max) ;
             min = arr [0][0] ;
            for (i=0 ; i < 3 ; i++)
                {
                    for (j=0 ; j<4;j++)
                        {

                            if (arr [i][j] < min )
                                {
                                    min = arr [i][j];
                                }
                        }
                }

            printf("lowest degree = %d \n", min) ;


            for (i=0 ; i < 3 ; i++)
                {
                    for (j=0 ; j<4;j++)
                        {
                            total += arr [i][j] ;
                        }
                        avg =(double) total / 4 ;
                        total = 0 ;
                        printf("The average of student[%d] = %.2f \n",i,avg) ;
                }
                */


            /** ##################################################### (Duplicate Elimination) Use a single-subscripted array to solve the following problem.
                                                                        Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is read, print
                                                                        it only if it�s not a duplicate of a number already read. Provide for the �worst case� in which all 20
                                                                        numbers are different. Use the smallest possible array to solve this problem.*/


            /*
            int arr [10] , i,j,count =0 ;

            printf("Enter the array \n") ;

            for (i=0 ; i<10 ; i++)
                {
                    scanf("%d",&arr[i]) ;
                }

            for (i=0 ; i<10 ; i++)
                {
                    for (j=0 ; j<10 ;j++)
                        {
                            if (i==j)
                                {
                                    continue ;
                                }
                            if (arr[i]%arr[j]==0)
                                {
                                    count ++ ;
                                    continue ;
                                }
                            else
                                {
                                    if (j==9 && count ==0)
                                        {
                                            printf("%d  ",arr[i]) ;
                                        }

                                }

                        }
                        count =0 ;

                }
                */

                /**########################################### (Dice Rolling) Write a program that simulates the rolling of two dice. The program should
                                                                use rand twice to roll the first die and second die, respectively */
                /*
                int i,j , die1 , die2 ,sum[36000]={0} ,freq[12]={0} ;

                for (i=0 ;i<36000;i++)
                    {

                        die1 = 1 + rand()%6 ;
                        die2 = 1 + rand()%6 ;
                        sum[i] = die1 + die2 ;

                    }

                    for (i=0 ;i<36000;i++)
                    {

                         ++ freq [sum[i]] ;

                    }



                printf("Value\tFrequency\n") ;
                for (j=2 ;j<=12;j++)
                    {
                        printf("%d\t%d\n",j,freq[j]) ;
                    }
                    */

                    /** #################################################### (Airline Reservations System) A small airline has just purchased a computer for its new automated reservations system. The president has asked you to program the new system. You�ll write
                                                                                a program to assign seats on each flight of the airline�s only plane (capacity: 10 seats).

                                                                                Your program should display the following menu of alternatives: */

        /*
        int arr [10] = {0} , i=0,j=5 ,num,Seatno ;

        while ( 1)
            {
               printf("\npleas type 1 for 'first class \nplease type 2 for 'economy' \n") ;
                scanf("%d",&num) ;
                if (num == 1)
                    {
                       arr[i] = 1 ;
                        i++ ;
                        if (i== 5)
                            {
                                printf("first class seats are complete \n") ;
                            }
                    }
                else if (num == 2)
                    {
                        arr [j] = 1 ;
                        j++ ;
                        if (j== 10)
                            {
                                printf("economy seats are complete \n") ;
                            }
                    }
                if (arr [9]==1)
                    {
                        printf("All Seats complete \n") ;
                        break ;
                    }
            }
            for (i=0 ; i<10 ; i++)
                {
                    printf("Seat no [%d] :\t%d\n",i,arr[i]) ;
                }

            while (1){
                printf("Enter the seat number \n");
            scanf("%d",&Seatno) ;
                    if (Seatno>0 && Seatno<6)
                        {
                            printf("Seat no[%d] is first class \n",Seatno);
                        }
                    if (Seatno>=6 && Seatno<=10)
                        {
                            printf("Seat no[%d] is economy \n",Seatno) ;
                        }

                    if (Seatno== 0)
                        {
                            break ;
                        }
            }
            */
            /** (Duplicate Elimination) In Chapter 12, we explore the high-speed binary search tree data
                structure. One feature of a binary search tree is that duplicate values are discarded when insertions
                are made into the tree. This is referred to as duplicate elimination. Write a program that produces
                20 random numbers between 1 and 20. The program should store all nonduplicate values in an array. Use the smallest possible array to accomplish this task.
                 */




            /*

            int  i ,j , num ,random[10],count =0, count1 =0,k,arr [count1] ;
            srand(time(0));
            for (i=0 ; i<10 ; i++)
                {
                    random[i] = 1+rand()%20 ;
                }
                printf("the random numbers : duplicated + non duplicated \n") ;
            for (k=0 ; k< 10 ; k++ )
                        {
                          printf("%d\t",random[k]) ;
                        }
                        printf("\n") ;
                printf("the random numbers :  non duplicated only  \n") ;
            for (i=0 ; i <10 ; i++)
                {
                    for (j=0 ;j<10 ;j++)
                        {
                            if (i==j)
                                {
                                    continue ;

                                }
                            if (random[i]== random[j])
                                {
                                    count ++ ;
                                    break ;
                                }

                        }
                    if (count == 0)
                        {
                            printf("%d\t",random[i]);
                                  arr[count1] = random[i];
                                  count1 ++ ;
                        }

                    count =0 ;
                }
                printf("\n") ;
                    printf("the random numbers :  non duplicated only in  new array   \n") ;
                for (k=0 ; k<count1 ; k++ )
                        {
                          printf("%d\t",arr[k]) ;
                        }
                */


                        /** (The Sieve of Eratosthenes) A prime integer is any integer greater than 1 that can be divided
                            evenly only by itself and 1. The Sieve of Eratosthenes is a method of finding prime numbers. It
                            works as follows:
                            a) Create an array with all elements initialized to 1 (true). Array elements with prime subscripts will remain 1. All other array elements will eventually be set to zero.
                            b) Starting with array subscript 2 (subscript 1 is not prime), every time an array element is
                            found whose value is 1, loop through the remainder of the array and set to zero every
                            element whose subscript is a multiple of the subscript for the element with value 1. For
                            array subscript 2, all elements beyond 2 in the array that are multiples of 2 will be set to
                            zero (subscripts 4, 6, 8, 10, and so on.). For array subscript 3, all elements beyond 3 in
                            the array that are multiples of 3 will be set to zero (subscripts 6, 9, 12, 15, and so on.).**/

                /*int arr [1000]={0} , i ,j ;

                for (j=2 ; j<1000 ; j++)
                    {
                        arr[j] = 1 ;     // set all the array to one

                    }
                for (i=1000 ; i>=2 ; i--)
                    {
                        if (i%2 ==0)
                            {
                                arr[i] = 0 ;
                            }
                        if (i%3 ==0)
                            {
                                arr[i] = 0 ;
                            }

                        if (i%5 ==0)
                            {
                                arr[i] = 0 ;
                            }

                        if (i%7 ==0)
                            {
                                arr[i] = 0 ;
                            }



                    }
                for (i=2; i<= 1000 ; i++)
                    {
                        if (arr[i]==1)
                            {
                                printf("%d  ",i) ;
                            }
                    }*/


















            return 0;
        }



            /**############################################### Linear search */
            /**############################################### Linear search */
            /**############################################### Linear search */
            /**############################################### Linear search */


        /*
        int LinearSearch (int arr[] , int num , int size )

         {
             int i ;
             for (i=0 ; i< size ; i++)
                {
                    if (arr[i]== num )
                        {
                            return i ;
                        }

                }
                    return -1 ;
         }

            */
         /** ############################################# binary search */
         /** ############################################# binary search */
         /** ############################################# binary search */
         /** ############################################# binary search */
         /** ############################################# binary search */



         int BinarySearch ( int arr[] , int num , int low , int high)

         {
            int mid , i  ;

            mid = (high + low ) /2 ;

            while (low < high)
                {

                    if (num < arr [mid])
                        {
                            cont :
                            for (i= low ; i< mid -1 ; i++)
                                {
                                    if (arr[i]== num)
                                        {
                                            return i ;
                                        }


                                }


                            low = mid ;
                            mid = (high + low ) /2 ;

                            if (high == low)
                                {
                                    return -1 ;
                                    break ;
                                }
                                goto cont ;

                        }
                    else
                        {
                            again :
                            for (i= mid ; i<high ; i++)
                                {
                                    if (arr[i]== num)
                                        {
                                            return i ;
                                        }

                                }


                            high = mid ;
                            mid = (high + low ) /2 ;

                            if (high == low)
                                {
                                    return -1 ;
                                    break ;
                                }
                                goto again ;

                        }


                }

         }
