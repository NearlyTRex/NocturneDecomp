// Name: core_bodypart.cpp_boundingBoxCenter_FUN_00418040
// Address: 00418040
// Address Range: [[00418040, 00418095]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxCenter_FUN_00418040(CBoundingBox3D *src,CBoundingBox3D *dst)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxCenter_FUN_00418040(CBoundingBox3D *src,CBoundingBox3D *dst)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = _DAT_00578e76;
  fVar1 = (src->min).y;
  fVar2 = (src->max).y;
  fVar3 = (src->min).z;
  fVar4 = (src->max).z;
  (dst->min).x = ((src->min).x + (src->max).x) * _DAT_00578e76;
  (dst->min).y = (fVar1 + fVar2) * fVar5;
  (dst->min).z = fVar5 * (fVar3 + fVar4);
  return dst;
}
