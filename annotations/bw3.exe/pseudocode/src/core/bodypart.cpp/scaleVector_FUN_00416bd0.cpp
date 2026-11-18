// Name: core_bodypart.cpp_scaleVector_FUN_00416bd0
// Address: 00416bd0
// Address Range: [[00416bd0, 00416c04]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_bodypart_cpp_scaleVector_FUN_00416bd0(CVector3f *src,float *scalar,CVector3f *dst)

#include "nocturne.h"

CVector3f * __stack2_esi core_bodypart_cpp_scaleVector_FUN_00416bd0(CVector3f *src,float *scalar,CVector3f *dst)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = src->y;
  fVar2 = *scalar;
  fVar3 = src->z;
  fVar4 = *scalar;
  dst->x = src->x * *scalar;
  dst->y = fVar1 * fVar2;
  dst->z = fVar3 * fVar4;
  return dst;
}
