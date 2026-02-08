// Name: core_stairs.cpp_CStairs_getBoundingBox_FUN_005ba490
// Address: 005ba490
// Address Range: [[005ba490, 005ba4e3]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_stairs_cpp_CStairs_getBoundingBox_FUN_005ba490(CStairs *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_stairs_cpp_CStairs_getBoundingBox_FUN_005ba490(CStairs *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)0.5;
  (out_box->min).x = -this_ptr->width * fVar2;
  fVar1 = this_ptr->width;
  (out_box->min).y = 0.0;
  (out_box->min).z = 0.0;
  (out_box->max).x = fVar1 * fVar2;
  (out_box->max).y = (float)this_ptr->stair_count * this_ptr->rise;
  (out_box->max).z = (float)this_ptr->stair_count * this_ptr->run;
  return out_box;
}
