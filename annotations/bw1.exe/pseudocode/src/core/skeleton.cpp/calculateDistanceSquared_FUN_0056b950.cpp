// Name: core_skeleton.cpp_calculateDistanceSquared_FUN_0056b950
// Address: 0056b950
// Address Range: [[0056b950, 0056b982]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_calculateDistanceSquared_FUN_0056b950(CVector3f *point1,CVector3f *point2)

#include "nocturne.h"

float __cdecl core_skeleton_cpp_calculateDistanceSquared_FUN_0056b950(CVector3f *point1,CVector3f *point2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = point1->x - point2->x;
  fVar3 = point1->y - point2->y;
  fVar2 = point1->z - point2->z;
  return fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
}
