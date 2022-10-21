/*
Name: Kishan Kumar Sah
Dep:IT4

Sec:A
Roll no:16

*/
#include <stdio.h>
int stack[100], choice, top, n, x, i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top = -1;
    printf("Enter the size of stack  (limit is 100) :");
    scanf("%d", &n);
    printf("\n STACK OPERATION USING ARRAY \n");
    printf("\t----------------------------------------------\n");
    printf("\n 1.Push() \n 2.Pop() \n 3.Exit \n 4. Display \n");
    do
    {
        printf("\n Enter Your Choice :\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exit point");
            break;
        }

        default:
        {
            printf("Please Enter a valid  choice number (ie:1-4):\n");
            break;
        }
        }

    } while (choice != 4);

    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}