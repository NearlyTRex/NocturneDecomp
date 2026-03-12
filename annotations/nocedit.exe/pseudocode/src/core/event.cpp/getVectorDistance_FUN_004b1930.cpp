// Name: core_event.cpp_getVectorDistance_FUN_004b1930
// Address: 004b1930
// Address Range: [[004b1930, 004b1964]]
// Convention: __cdecl
// Signature: float __cdecl core_event_cpp_getVectorDistance_FUN_004b1930(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_event_cpp_getVectorDistance_FUN_004b1930(CVector3f *a,CVector3f *b)

{
  float fVar2;
  float fVar3;
  float fVar1;
  
  fVar1 = a->x - b->x;
  fVar3 = a->y - b->y;
  fVar2 = a->z - b->z;
  return SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
}
