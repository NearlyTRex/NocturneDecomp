// Name: core_box.cpp_FUN_0041ae50
// Address: 0041ae50
// Address Range: [[0041ae50, 0041af6a]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_FUN_0041ae50(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_box_cpp_FUN_0041ae50(CBoundingBox3D *this_ptr)

{
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = (int)ROUND((*(float *)this_ptr + *(float *)&this_ptr->field_0xc) * _DAT_005cc4d5 *
                        _DAT_005f39d8);
  local_24 = (int)ROUND((*(float *)&this_ptr->field_0x4 + *(float *)&this_ptr->field_0x10) *
                        _DAT_005cc4d5 * _DAT_005f39d8);
  local_20 = (int)ROUND((*(float *)&this_ptr->field_0x8 + *(float *)&this_ptr->field_0x14) *
                        _DAT_005cc4d5 * _DAT_005f39d8);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*DAT_0060b280 + 0xea5d0),(CVector3i *)&local_28);
  if (0 < *(int *)(*DAT_0060b280 + 0xea5d8)) {
    return ABS(((float)_DAT_01c35e3c *
               ((*(float *)&this_ptr->field_0x10 - *(float *)&this_ptr->field_0x4) /
               ((float)*(int *)(*DAT_0060b280 + 0xea5d8) * (float)_DAT_005cc4d9))) /
               (float)DAT_006141e4);
  }
  return 99999.0;
}
