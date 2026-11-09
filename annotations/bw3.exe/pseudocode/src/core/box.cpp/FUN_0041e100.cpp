// Name: core_box.cpp_FUN_0041e100
// Address: 0041e100
// Address Range: [[0041e100, 0041e21a]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_FUN_0041e100(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_box_cpp_FUN_0041e100(CBoundingBox3D *this_ptr)

{
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = (int)ROUND((*(float *)this_ptr + *(float *)&this_ptr->field_0xc) * _DAT_005b74ad *
                        _DAT_005dc948);
  local_24 = (int)ROUND((*(float *)&this_ptr->field_0x4 + *(float *)&this_ptr->field_0x10) *
                        _DAT_005b74ad * _DAT_005dc948);
  local_20 = (int)ROUND((*(float *)&this_ptr->field_0x8 + *(float *)&this_ptr->field_0x14) *
                        _DAT_005b74ad * _DAT_005dc948);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*DAT_005f2afc + 0x124f50),(CVector3i *)&local_28);
  if (0 < *(int *)(*DAT_005f2afc + 0x124f58)) {
    return ABS(((float)_DAT_01c6b59c *
               ((*(float *)&this_ptr->field_0x10 - *(float *)&this_ptr->field_0x4) /
               ((float)*(int *)(*DAT_005f2afc + 0x124f58) * (float)_DAT_005b74b1))) /
               (float)DAT_005fba44);
  }
  return 99999.0;
}
