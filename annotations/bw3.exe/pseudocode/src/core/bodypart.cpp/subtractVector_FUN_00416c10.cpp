// Name: core_bodypart.cpp_subtractVector_FUN_00416c10
// Address: 00416c10
// Address Range: [[00416c10, 00416c4e]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_bodypart_cpp_subtractVector_FUN_00416c10(CVector3f *a,CVector3f *b,CVector3f *dst)

#include "nocturne.h"

CVector3f * __stack2_esi core_bodypart_cpp_subtractVector_FUN_00416c10(CVector3f *a,CVector3f *b,CVector3f *dst)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = a->y;
  fVar2 = a->z;
  fVar3 = b->y;
  fVar4 = b->z;
  dst->x = a->x - b->x;
  dst->y = fVar1 - fVar3;
  dst->z = fVar2 - fVar4;
  return dst;
}
