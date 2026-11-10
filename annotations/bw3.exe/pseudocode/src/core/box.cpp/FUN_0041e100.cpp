// Name: core_box.cpp_FUN_0041e100
// Address: 0041e100
// Address Range: [[0041e100, 0041e21a]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_FUN_0041e100(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_box_cpp_FUN_0041e100(CBoundingBox3D *this_ptr)

{
  CVector3i local_28 [2];
  
  local_28[0].x =
       (int)ROUND(((this_ptr->min).x + (this_ptr->max).x) * _DAT_005b74ad * _DAT_005dc948);
  local_28[0].y =
       (int)ROUND(((this_ptr->min).y + (this_ptr->max).y) * _DAT_005b74ad * _DAT_005dc948);
  local_28[0].z =
       (int)ROUND(((this_ptr->min).z + (this_ptr->max).z) * _DAT_005b74ad * _DAT_005dc948);
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*DAT_005f2afc + 0x124f50),local_28);
  if (0 < *(int *)(*DAT_005f2afc + 0x124f58)) {
    return ABS(((float)_DAT_01c6b59c *
               (((this_ptr->max).y - (this_ptr->min).y) /
               ((float)*(int *)(*DAT_005f2afc + 0x124f58) * (float)_DAT_005b74b1))) /
               (float)DAT_005fba44);
  }
  return 99999.0;
}
