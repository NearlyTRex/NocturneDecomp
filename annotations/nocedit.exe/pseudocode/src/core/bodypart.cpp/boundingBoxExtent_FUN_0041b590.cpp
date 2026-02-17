// Name: core_bodypart.cpp_boundingBoxExtent_FUN_0041b590
// Address: 0041b590
// Address Range: [[0041b590, 0041b5b5]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxExtent_FUN_0041b590(CBoundingBox3D *src,CBoundingBox3D *dst)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxExtent_FUN_0041b590(CBoundingBox3D *src,CBoundingBox3D *dst)

{
  (dst->min).x = (src->max).x - (src->min).x;
  (dst->min).y = (src->max).y - (src->min).y;
  (dst->min).z = (src->max).z - (src->min).z;
  return dst;
}
