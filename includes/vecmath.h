/*
*Author Sonu Aryan
*/
#ifndef VECMATH_H
#define VECMATH_H
#include "vectors.h"
#define VECTOR_CALL __stdcall
#if VECTOR_BUILD_MODE
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif
extern "C++"{
  	Vector2f VECTOR_API VECTOR_CALL operator+(Vector2f,Vector2f);
  	Vector2f VECTOR_API VECTOR_CALL operator-(Vector2f,Vector2f);
  	Vector2f VECTOR_API VECTOR_CALL operator*(Vector2f,Vector2f);
  	
  	Vector3f VECTOR_API VECTOR_CALL operator+(Vector3f,Vector3f);
  	Vector3f VECTOR_API VECTOR_CALL operator-(Vector3f,Vector3f);
  	Vector3f VECTOR_API VECTOR_CALL operator*(Vector3f,Vector3f);
  	
  	Vector2d VECTOR_API VECTOR_CALL operator+(Vector2d,Vector2d);
  	Vector2d VECTOR_API VECTOR_CALL operator-(Vector2d,Vector2d);
  	Vector2d VECTOR_API VECTOR_CALL operator*(Vector2d,Vector2d);
  	
  	Vector3d VECTOR_API VECTOR_CALL operator+(Vector3d,Vector3d);
  	Vector3d VECTOR_API VECTOR_CALL operator-(Vector3d,Vector3d);
  	Vector3d VECTOR_API VECTOR_CALL operator*(Vector3d,Vector3d);
  	
  	Vector2i VECTOR_API VECTOR_CALL operator+(Vector2i,Vector2i);
  	Vector2i VECTOR_API VECTOR_CALL operator-(Vector2i,Vector2i);
  	Vector2i VECTOR_API VECTOR_CALL operator*(Vector2i,Vector2i);
  	
  	Vector3i VECTOR_API VECTOR_CALL operator+(Vector3i,Vector3i);
  	Vector3i VECTOR_API VECTOR_CALL operator-(Vector3i,Vector3i);
  	Vector3i VECTOR_API VECTOR_CALL operator*(Vector3i,Vector3i);
  	
  	float VECTOR_API VECTOR_CALL distance(Vector2f,Vector2f);
  	float VECTOR_API VECTOR_CALL distance(Vector3f,Vector3f);
  	
  	double VECTOR_API VECTOR_CALL distance(Vector2d,Vector2d);
  	double VECTOR_API VECTOR_CALL distance(Vector3d,Vector3d);
  	
  	int VECTOR_API VECTOR_CALL distance(Vector2i,Vector2i);
  	int VECTOR_API VECTOR_CALL distance(Vector3i,Vector3i);
};
#endif
