// Name: core_bodypart.cpp_boundingBoxExtent_FUN_00418010
// Address: 00418010
// Address Range: [[00418010, 00418035]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxExtent_FUN_00418010(CBoundingBox3D *src,CBoundingBox3D *dst)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxExtent_FUN_00418010(CBoundingBox3D *src,CBoundingBox3D *dst)

{
  (dst->min).x = (src->max).x - (src->min).x;
  (dst->min).y = (src->max).y - (src->min).y;
  (dst->min).z = (src->max).z - (src->min).z;
  return dst;
}
