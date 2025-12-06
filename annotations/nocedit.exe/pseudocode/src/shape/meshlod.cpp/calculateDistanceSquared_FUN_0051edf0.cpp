// Name: shape_meshlod.cpp_calculateDistanceSquared_FUN_0051edf0
// Address: 0051edf0
// Address Range: [[0051edf0, 0051ee22]]
// Convention: __cdecl
// Signature: float shape_meshlod.cpp_calculateDistanceSquared_FUN_0051edf0(CVector3f * point1, CVector3f * point2)

#include "nocturne.h"

float __cdecl
shape_meshlod_cpp_calculateDistanceSquared_FUN_0051edf0(CVector3f *point1,CVector3f *point2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = point1->x - point2->x;
  fVar3 = point1->y - point2->y;
  fVar2 = point1->z - point2->z;
  return fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
}
