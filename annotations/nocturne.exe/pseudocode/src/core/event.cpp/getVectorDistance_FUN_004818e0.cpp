// Name: core_event.cpp_getVectorDistance_FUN_004818e0
// Address: 004818e0
// Address Range: [[004818e0, 00481914]]
// Convention: __cdecl
// Signature: float __cdecl core_event_cpp_getVectorDistance_FUN_004818e0(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_event_cpp_getVectorDistance_FUN_004818e0(CVector3f *a,CVector3f *b)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = a->x - b->x;
  fVar3 = a->y - b->y;
  fVar2 = a->z - b->z;
  return SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
}
