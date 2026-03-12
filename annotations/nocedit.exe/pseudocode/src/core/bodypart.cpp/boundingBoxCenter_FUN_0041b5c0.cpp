// Name: core_bodypart.cpp_boundingBoxCenter_FUN_0041b5c0
// Address: 0041b5c0
// Address Range: [[0041b5c0, 0041b615]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxCenter_FUN_0041b5c0(CBoundingBox3D *src,CBoundingBox3D *dst)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxCenter_FUN_0041b5c0(CBoundingBox3D *src,CBoundingBox3D *dst)

{
  float fVar3;
  float fVar5;
  float fVar2;
  float fVar1;
  float fVar4;
  
  fVar5 = 0.5f;
  fVar1 = (src->min).y;
  fVar2 = (src->max).y;
  fVar3 = (src->min).z;
  fVar4 = (src->max).z;
  (dst->min).x = ((src->min).x + (src->max).x) * 0.5f;
  (dst->min).y = (fVar1 + fVar2) * fVar5;
  (dst->min).z = fVar5 * (fVar3 + fVar4);
  return dst;
}
