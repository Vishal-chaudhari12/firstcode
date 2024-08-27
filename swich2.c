
// // // #include<stdio.h>

// // // int main()
// // // {
// // //     int n;
// // //     int r,s,l,b,h,area;

// // //     printf("\n1 Area of circle\n2 Area of square\n3 area of rectangular\n4 Area of trangle\nenter choice :");
// // //     scanf("%d",&n);
  

// // //     switch(n)
// // //     {
// // //     case 1:
// // //         printf("\n Enter a radius of circle");
// // //         scanf("%d",&r);
// // //         area =3.14*r*r;

// // //         printf("\n Area of circle is %d",area);
// // //         break;

// // //     case 2:
// // //         printf("\n Enter a side of square");
// // //         scanf("%d",&s);
// // //         area = s*s;

// // //         printf("\n Area of square is %d",area);
// // //         break;  

// // //      case 3:
        
// // //         printf("\n Enter a Lenghth and breath ");
// // //         scanf("%d%d",&l,&b);
// // //         area = l*b;

// // //         printf("\n Area of Rectangular is %d",area);
// // //         break; 

// // //      case 4:
// // //         printf("\n Enter a hight and base of trangle ");
// // //         scanf("%d%d",&h,&b);
// // //         area = 0.5*h*b;

// // //         printf("\n Area of Rectangular is %d",area);
// // //         break; 


    
// // //     default:
// // //         printf("\n");
// // //         break;
// // //     }

// // //     return 0;
// // // }


// // // Enter a Number and find the  number of Months Days 

// // #include<stdio.h>

// // int main()
// // {
// //     int n;

// //     printf("Enter Your Number:");
// //     scanf("%d",&n);

// //     switch (n)
// //     {
// //     case 1:
// //     printf("Month is jan:");
// //     case 3:
// //     case 5 :
// //     case 7:
// //     case 9:
// //     case 12:

// //     printf("31 Days");
// //     break;

// //     case 2:
// //     printf("28 or 29 Days");
// //     break;

// //     case 4:
// //     case 6:
// //     case 8:
     

// //     printf("No of Days is 30");  
// //     break;
    
// //     default:
// //     printf("Invalid Numbers");
// //         break;
// //     }
// // }


// #include<stdio.h>

// int main()
// {
//     int add,sub,mul,n1,n2,ch;

//     printf("\n1Add\n2 Sub\n3mul");
//     printf("\n Enter your choice:");
//     scanf("\n %d",&ch);


//     switch (ch)
//     {
//     case 1:
//         printf("\n Enter your Numbers:");
//         scanf("%d%d",&n1,&n2);
//         add=n1+n2;
//         printf("\n Addition is %d",add);
        
//         break;

//     case 2:
//         printf("\n Enter your Numbers:");
//         scanf("%d%d",&n1,&n2);
//         sub=n1-n2;
//         printf("\n Addition is %d",sub);
        
//         break;  

//     case 3:
//         printf("\n Enter your Numbers:");
//         scanf("%d%d",&n1,&n2);
//         mul=n1*n2;
//         printf("\n Addition is %d",mul);
        
//         break;      
    
//     default:
//         break;
//     }
// }

//----ATM Operation--- 