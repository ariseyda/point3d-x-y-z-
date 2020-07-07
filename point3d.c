#include<stdio.h>
#include<math.h>

//Define a structure called point3d that encapsulates values for x, y, and z coordinates of a point and following functions:
//- a function to display a point3d variable. 
//- a function to receive coordinates of a point3d variable from user.
//- a function to compute distance between two point3d variables.
//- a function to check if two point3d variables are same or not. 
//Test your functions in a program.

struct point3d{
	
	int x;
	int y;
	int z;
};

int main(){
	
	struct point3d p1;
	struct point3d p2;
	
	printf("Enter x value of point one:");
	scanf("%d",&p1.x);
	printf("Enter y value of point one:");
	scanf("%d",&p1.y);
	printf("Enter z value of point one:");
	scanf("%d",&p1.z);
	
	printf("\nEnter x value of point two:");
	scanf("%d",&p2.x);
	printf("Enter y value of point two:");
	scanf("%d",&p2.y);
	printf("Enter z value of point two:");
	scanf("%d",&p2.z);
	
	int sum_x=p1.x-p2.x;
	int sum_y=p1.y-p2.y;
	int sum_z=p1.z-p2.z;
	
	int sqr=pow(sum_x,2)+pow(sum_y,2)+pow(sum_z,2);
	double distance=sqrt(sqr);
	printf("\nDistance between two point3d variables:%.2f",distance);
	
	if(p1.x==p2.x&&p1.y==p2.y&&p1.z==p2.z){
		printf("\nSame");
	}
	else{
		printf("\nDifferent points");  		
	}
	
	return 0;
}
