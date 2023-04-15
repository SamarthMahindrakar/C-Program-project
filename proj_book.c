#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct bookdetails
{
	char bookn[20];
	int id;
	char author[20];
	int price;
	int rating;
}book;
int n;
void storevalue(book*,int);
void display(book*,int);
void maxPrice(book*,int);
void minPrice(book*,int);
void highRate(book*,int);
void searchBook(book*,int);
void updateBook(book*,int);
void deleteBook(book*,int);

void main()
{
	int choice;
	book*b1;
	b1=	book* arr[5];
	
	storevalue(b1,3);
	
	do
	{
		printf("\n\n1. Display BookDetails --\n2. Maximum Price of Book --\n3. Minimum Price of Book --\n4. Highest Rating--\n5. Search BookDetails --\n6. Update BookDetails --\n7. Delete BookDetails --");

		printf("\n\nPlease Enter your Choice : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			display(b1,num);
		}
		else if(choice==2)
		{
			maxPrice(b1,num);
		}
		else if(choice==3)
		{
			minPrice(b1,num);
		}
		else if(choice==4)
		{
			highRate(b1,num);
		}
		else if(choice==5)
		{
			searchBook(b1,num);
		}
		else if(choice==6)
		{
			updateBook(b1,num);
		}
		else if(choice==7)
		{
			deleteBook(b1,num);
		}
		else
		{
			printf("\nYour Choice is Invalid");
		}
	}
	while(choice!=0);
}




						//------------------StoreValue Function-------------------

void storevalue(book* ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n\nBook No. %d",i+1);
		printf("\nPlease Enter the Book Name : ");
		scanf("%s",&ptr[i].bookn);
		printf("Please Enter the Book Id : ");
		scanf("%d",&ptr[i].id);
		printf("Please Enter the Author Name : ");
		scanf("%s",&ptr[i].author);
		printf("Please Enter the Book Price : ");
		scanf("%d",&ptr[i].price);
		printf("Please Enter the Book Ratings (0-5) : ");
		scanf("%d",&ptr[i].rating);
	}
}




					//---------------------Display BookDetails-----------------
					
void display(book*arr,int p)
{
	printf("\n\n\n\t\t\t\t\t!!!!!!------------------Display BookDetails------------------!!!!!!");
	int i;
	for(i=0;i<p;i++)
	{
		printf("\n\n\t\tBook Name : %s \t\tBook Id : %d \t\tAuthor Name : %s \t\tBook Price : %d \t\tBook Rating : %d",arr[i].bookn,arr[i].id,arr[i].author,arr[i].price,arr[i].rating);
	}
}




					//--------------------Maximum Price--------------------
					
void maxPrice(book* brr,int mx)
{
	int max=0,i,maxi;
	max = brr[0].price;
	for(i=0;i<mx;i++)
	{
		if(max<brr[i].price)
		{
			max = brr[i].price;
			maxi=i;
		}
	}
	printf("\n\n\n\t\t\t\t\t!!!!!!------------------Maximum Price of Book------------------!!!!!!");
	printf("\n\n\t\tMaximum Price of the Book is : %d",max);
	printf("\n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",brr[maxi].bookn,brr[maxi].id,brr[maxi].author,brr[maxi].price,brr[maxi].rating);
}




						//--------------------Minimum Price---------------------
					
void minPrice(book* brr,int mn)
{
	int min=0,i,mini;
	min = brr[0].price;
	for(i=0;i<mn;i++)
	{
		if(min>brr[i].price)
		{
			min = brr[i].price;
			mini=i;
		}
	}
	printf("\n\n\n\t\t\t\t\t!!!!!!------------------Minimum Price of Book------------------!!!!!!");
	printf("\n\n\t\tMinimum Price of the Book is : %d",min);
	printf("\n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",brr[mini].bookn,brr[mini].id,brr[mini].author,brr[mini].price,brr[mini].rating);
}




						//----------------------Highest rating----------------------

void highRate(book* hrr,int h)
{
	int i,hr=0,rate,j,y,temp;
	for(i=0;i<h;i++)
	{
		hr = hrr[0].rating;
		if(hr<hrr[i].rating)
		{
			hr = hrr[i].rating;
			rate=i;
		}
	}
	
	printf("\n\n\n\t\t\t\t\t\t\t!!!!!!------------------Highest Rating Book------------------!!!!!!");
	printf("\n\n\t\tHighest Rating of the Book is : ");
	printf("\n\t\tBook Name is : %s\t\tBook Id is : %d\t\tAuthor Name is : %s\t\tBook Price is : %d\t\tBook Rating is : %d",hrr[rate].bookn,hrr[rate].id,hrr[rate].author,hrr[rate].price,hrr[rate].rating);

}




						//----------------------Search Book----------------------

void searchBook(book* crr,int s)
{
	printf("\n\n\n\t\t\t\t\t!!!!!!------------------Search Book------------------!!!!!!");
	int ch=0,count=0;
	printf("\n\n\nEnter Choice : 1.for Search Book By Book Id -- 2.for Search Book By Book Name -- 3.for Search Book By Auther Name");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		int i,id1,nid=0;
		printf("Enter Search Book Id : ");
		scanf("%d",&id1);
	
		for(i=0;i<s;i++)
		{
			if(crr[i].id==id1)
			{
				nid=i;
				count++;
			}
		}
		if(count==0)
		{
			printf("\nYou didn't have this book in your library");
		}
		else
		{
			printf("\nYour Book is : \n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",crr[nid].bookn,crr[nid].id,crr[nid].author,crr[nid].price,crr[nid].rating);
		}
	}
	
	if(ch==2)
	{
		int i,sbname=0;
		char bname[20];
		printf("Enter search Book Name : ");
		scanf("%s",&bname);
		for(i=0;i<s;i++)
		{	
			if(!strcmp(bname,crr[i].bookn))
			{	
				sbname=i;
				count++;
			}
		}
		if(count==0)
		{
			printf("\nYou didn't have this book in your library");
		}
		else
		{
			printf("\nYour Book is :\n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",crr[sbname].bookn,crr[sbname].id,crr[sbname].author,crr[sbname].price,crr[sbname].rating);
		}
	}
	
	if(ch==3)
	{
		int i,sauthor=0;
		char author1[20];
		printf("Enter search Auther Name : ");
		scanf("%s",&author1);
		
		for(i=0;i<s;i++)
		{	
			if(!strcmp(author1,crr[i].author))
			sauthor=i;
			count++;
		}
		if(count==0)
		{
			printf("\nYou didn't have this book in your library");
		}
		else
		{
			printf("\nYour Book is:\n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",crr[sauthor].bookn,crr[sauthor].id,crr[sauthor].author,crr[sauthor].price,crr[sauthor].rating);
		}
	}
}




						//----------------------Update BookDetails----------------------

void updateBook(book* urr,int u)
{
	printf("\n\n\n\t\t\t\t\t!!!!!!------------------Update BookDetails------------------!!!!!!");
	int i,ch1,x=0;
	char addbook[20];
	printf("\nWhich Book you want to Update?\nEnter Available Book Name : ");
	scanf("%s",&addbook);
	
	for(i=0;i<u;i++)
	{
		if(!strcmp(addbook,urr[i].bookn))
		x=i;
	}
	printf("\nYour Book is Found");
	
	
	printf("\n\nEnter Choice : 1.for Update Book Price -- 2.for Update Book Rating --\n");
	scanf("%d",&ch1);
		
	if(ch1==1)
	{
		printf("Enter Book New Price : ");
		scanf("%d",&urr[x].price);
		printf("\n\n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",urr[x].bookn,urr[x].id,urr[x].author,urr[x].price,urr[x].rating);
	}
	if(ch1==2)
	{
		printf("Enter Book New Rating : ");
		scanf("%d",&urr[x].rating);
		printf("\n\n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",urr[x].bookn,urr[x].id,urr[x].author,urr[x].price,urr[x].rating);
	}
	
}




						//----------------------Delete BookDetails----------------------

void deleteBook(book* drr,int d)
{
	printf("\n\n\n\t\t\t\t\t!!!!!!------------------Delete Book------------------!!!!!!");
	int i,j,id2,index=0;
	printf("\n\nPlease Enter Id for Delete : ");
	scanf("%d",&id2);
	
	for(i=0;i<d;i++)
	{
		if(id2==drr[i].id)
		{
			index=i;
		}
		strcpy(drr[j].bookn,drr[j+1].bookn);
		drr[j].id=drr[j+1].id;
		strcpy(drr[j].author,drr[j+1].author);
		drr[j].price=drr[j+1].price;
		drr[j].rating=drr[j+1].rating;
	}
	num=d-1;	
	printf("\nRemaining Books are : \n");
	for(i=0;i<d-1;i++)
	{
		printf("\n\n\t\tBook Name : %s\t\tBook Id : %d\t\tAuthor Name : %s\t\tBook Price : %d\t\tBook Rating : %d",drr[i].bookn,drr[i].id,drr[i].author,drr[i].price,drr[i].rating);
	}
}

