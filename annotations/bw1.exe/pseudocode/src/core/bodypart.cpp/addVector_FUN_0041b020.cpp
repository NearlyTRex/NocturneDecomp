// Name: core_bodypart.cpp_addVector_FUN_0041b020
// Address: 0041b020
// Address Range: [[0041b020, 0041b05e]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_bodypart_cpp_addVector_FUN_0041b020(CVector3f *a,CVector3f *b,CVector3f *dst)

#include "nocturne.h"

CVector3f * __stack2_esi core_bodypart_cpp_addVector_FUN_0041b020(CVector3f *a,CVector3f *b,CVector3f *dst)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = a->y;
  fVar2 = a->z;
  fVar3 = b->y;
  fVar4 = b->z;
  dst->x = a->x + b->x;
  dst->y = fVar1 + fVar3;
  dst->z = fVar2 + fVar4;
  return dst;
}
