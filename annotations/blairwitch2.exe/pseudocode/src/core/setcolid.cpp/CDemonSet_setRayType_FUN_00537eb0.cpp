// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
// Address: 00537eb0
// Address Range: [[00537eb0, 00537ee9]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet *this_ptr,int ray_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet *this_ptr,int ray_type)

{
  *(int *)&this_ptr->field_0x15f694 = ray_type;
  if (ray_type != 3) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\setcolid.cpp";
  _DAT_01d046a4 = 0x49a;
  core_main_c_FUN_004e4500("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
