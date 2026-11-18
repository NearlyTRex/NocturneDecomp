// Name: core_bodypart.cpp_boundingBoxExtent_FUN_00417c00
// Address: 00417c00
// Address Range: [[00417c00, 00417c3d]]
// Convention: __stack_esi
// Signature: CBoundingBox3D * __stack_esi core_bodypart_cpp_boundingBoxExtent_FUN_00417c00(CBoundingBox3D *src,CBoundingBox3D *dst)

#include "nocturne.h"

CBoundingBox3D * __stack_esi core_bodypart_cpp_boundingBoxExtent_FUN_00417c00(CBoundingBox3D *src,CBoundingBox3D *dst)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (src->max).y;
  fVar2 = (src->max).z;
  fVar3 = (src->min).y;
  fVar4 = (src->min).z;
  (dst->min).x = (src->max).x - (src->min).x;
  (dst->min).y = fVar1 - fVar3;
  (dst->min).z = fVar2 - fVar4;
  return dst;
}
