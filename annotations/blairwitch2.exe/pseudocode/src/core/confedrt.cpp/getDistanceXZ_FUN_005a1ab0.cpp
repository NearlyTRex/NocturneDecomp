// Name: core_confedrt.cpp_getDistanceXZ_FUN_005a1ab0
// Address: 005a1ab0
// Address Range: [[005a1ab0, 005a1ad8]]
// Convention: __cdecl
// Signature: float __cdecl core_confedrt_cpp_getDistanceXZ_FUN_005a1ab0(CVector3f *point_a,CVector3f *point_b)

#include "nocturne.h"

float __cdecl core_confedrt_cpp_getDistanceXZ_FUN_005a1ab0(CVector3f *point_a,CVector3f *point_b)

{
  float fVar1;
  float fVar2;
  
  fVar1 = point_a->x - point_b->x;
  fVar2 = point_a->z - point_b->z;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}
