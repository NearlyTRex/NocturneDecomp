// Name: shape_meshlod.cpp_calculateDistanceSquared_FUN_0051f800
// Address: 0051f800
// Address Range: [[0051f800, 0051f832]]
// Convention: __cdecl
// Signature: float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_0051f800(CVector3f *point1,CVector3f *point2)

#include "nocturne.h"

float __cdecl shape_meshlod_cpp_calculateDistanceSquared_FUN_0051f800(CVector3f *point1,CVector3f *point2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = point1->x - point2->x;
  fVar3 = point1->y - point2->y;
  fVar2 = point1->z - point2->z;
  return fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
}
