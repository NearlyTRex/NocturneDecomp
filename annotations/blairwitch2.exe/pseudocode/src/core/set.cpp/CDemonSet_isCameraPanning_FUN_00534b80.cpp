// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_00534b80
// Address: 00534b80
// Address Range: [[00534b80, 00534bd8]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(CDemonSet *this_ptr)

{
  if (-1 < *(int *)&this_ptr->field_0x15aeb8) {
    return *(int *)(&this_ptr->field_0x144 + *(int *)&this_ptr->field_0x15aeb8 * 0x1a4);
  }
  _DAT_01d046a0 = "..\\core\\set.cpp";
  _DAT_01d046a4 = 0x149c;
  core_main_c_FUN_004e4500("CDemonSet::isCameraPanning - no camera selected");
  return *(int *)(&this_ptr->field_0x144 + *(int *)&this_ptr->field_0x15aeb8 * 0x1a4);
}
