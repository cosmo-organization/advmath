#include <vecmath.h>
#include <stdio.h>
void perform(){
	Vector2i vec1={10,10};
	vec1=vec1+vec1;
	vec1=vec1*vec1;
	printf("x:%d,y:%d\n",vec1.x,vec1.y);
}
int main(int argc, char** argv) {
	perform();
	return 0;
}
