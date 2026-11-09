// Name: core_box.cpp_FUN_00420dc0
// Address: 00420dc0
// Address Range: [[00420dc0, 00420eda]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_FUN_00420dc0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_box_cpp_FUN_00420dc0(CBoundingBox3D *this_ptr)

{
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = (int)ROUND((*(float *)this_ptr + *(float *)&this_ptr->field_0xc) * _DAT_005d4bc4 *
                        _DAT_005fce08);
  local_24 = (int)ROUND((*(float *)&this_ptr->field_0x4 + *(float *)&this_ptr->field_0x10) *
                        _DAT_005d4bc4 * _DAT_005fce08);
  local_20 = (int)ROUND((*(float *)&this_ptr->field_0x8 + *(float *)&this_ptr->field_0x14) *
                        _DAT_005d4bc4 * _DAT_005fce08);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*DAT_00612560 + 0xea5d0),(CVector3i *)&local_28);
  if (0 < *(int *)(*DAT_00612560 + 0xea5d8)) {
    return ABS(((float)_DAT_01c4effc *
               ((*(float *)&this_ptr->field_0x10 - *(float *)&this_ptr->field_0x4) /
               ((float)*(int *)(*DAT_00612560 + 0xea5d8) * (float)_DAT_005d4bc8))) /
               (float)DAT_0061b4c4);
  }
  return 99999.0;
}
