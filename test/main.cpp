#include <vecmath.h>
#include <stdio.h>
int main(int argc, char** argv) {
	Vector3f s={1.0f,5.0f,-1.0f};
	Vector3f d={1.0f,5.0f,10.0f};
	Vector3f m=s*d;
	printf("%f\n",distance(s,d));
	printf("x:%f,y:%f,z:%f\n",m.x,m.y,m.z);
	return 0;
}
