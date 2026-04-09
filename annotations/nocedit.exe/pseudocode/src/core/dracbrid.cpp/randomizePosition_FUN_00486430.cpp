// Name: core_dracbrid.cpp_randomizePosition_FUN_00486430
// Address: 00486430
// Address Range: [[00486430, 004864b6]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dracbrid_cpp_randomizePosition_FUN_00486430(CVector3f *dest,CVector3f *src)

#include "nocturne.h"

CVector3f * __cdecl core_dracbrid_cpp_randomizePosition_FUN_00486430(CVector3f *dest,CVector3f *src)

{
  float fVar1;
  float fVar2;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
  src->x = fVar1 + src->x;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-2.0,2.0);
  src->y = fVar2 + src->y;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
  src->z = fVar2 + src->z;
  dest->x = src->x;
  dest->y = src->y;
  dest->z = src->z;
  return dest;
}
