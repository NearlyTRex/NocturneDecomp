// Name: core_box.cpp_FUN_00420dc0
// Address: 00420dc0
// Address Range: [[00420dc0, 00420eda]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_FUN_00420dc0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_box_cpp_FUN_00420dc0(CBoundingBox3D *this_ptr)

{
  CVector3i local_28 [2];
  
  local_28[0].x =
       (int)ROUND(((this_ptr->min).x + (this_ptr->max).x) * _DAT_005d4bc4 * _DAT_005fce08);
  local_28[0].y =
       (int)ROUND(((this_ptr->min).y + (this_ptr->max).y) * _DAT_005d4bc4 * _DAT_005fce08);
  local_28[0].z =
       (int)ROUND(((this_ptr->min).z + (this_ptr->max).z) * _DAT_005d4bc4 * _DAT_005fce08);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)(*DAT_00612560 + 0xea5d0),local_28);
  if (0 < *(int *)(*DAT_00612560 + 0xea5d8)) {
    return ABS(((float)_DAT_01c4effc *
               (((this_ptr->max).y - (this_ptr->min).y) /
               ((float)*(int *)(*DAT_00612560 + 0xea5d8) * (float)_DAT_005d4bc8))) /
               (float)DAT_0061b4c4);
  }
  return 99999.0;
}
