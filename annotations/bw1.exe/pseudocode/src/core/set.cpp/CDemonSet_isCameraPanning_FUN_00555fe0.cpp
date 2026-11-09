// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_00555fe0
// Address: 00555fe0
// Address Range: [[00555fe0, 00556038]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00555fe0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00555fe0(CDemonSet *this_ptr)

{
  if (-1 < *(int *)&this_ptr->field_0x15aeb8) {
    return *(int *)(&this_ptr->field_0x144 + *(int *)&this_ptr->field_0x15aeb8 * 0x1a4);
  }
  _DAT_01d1d400 = "..\\core\\set.cpp";
  _DAT_01d1d404 = 0x14d5;
  core_main_c_FUN_005030e0("CDemonSet::isCameraPanning - no camera selected");
  return *(int *)(&this_ptr->field_0x144 + *(int *)&this_ptr->field_0x15aeb8 * 0x1a4);
}
