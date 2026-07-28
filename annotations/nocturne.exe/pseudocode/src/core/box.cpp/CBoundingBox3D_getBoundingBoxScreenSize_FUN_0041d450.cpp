// Name: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450
// Address: 0041d450
// Address Range: [[0041d450, 0041d547]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450(CBoundingBox3D *this_ptr)

{
  CVector3i local_34;
  float local_28;
  float local_24;
  float local_20;
  
  local_28 = ((this_ptr->min).x + (this_ptr->max).x) * 0.5f;
  local_24 = ((this_ptr->min).y + (this_ptr->max).y) * 0.5f;
  local_20 = ((this_ptr->min).z + (this_ptr->max).z) * 0.5f;
  local_34.x = (int)ROUND(local_28 * _DAT_0059aa80);
  local_34.y = (int)ROUND(local_24 * _DAT_0059aa80);
  local_34.z = (int)ROUND(local_20 * _DAT_0059aa80);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*DAT_005ae704 + 0xea5d0),&local_34);
  if (0 < *(int *)(*DAT_005ae704 + 0xea5d8)) {
    return ABS(((float)_DAT_01c00c4c *
               (((this_ptr->max).y - (this_ptr->min).y) /
               ((float)*(int *)(*DAT_005ae704 + 0xea5d8) * (float)0.00390625))) /
               (float)DAT_005b7648);
  }
  return 99999.0;
}
