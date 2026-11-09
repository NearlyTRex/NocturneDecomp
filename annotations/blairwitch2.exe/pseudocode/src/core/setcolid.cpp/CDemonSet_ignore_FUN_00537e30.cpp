// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
// Address: 00537e30
// Address Range: [[00537e30, 00537e8c]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet *this_ptr,CDemonActor *actor)

{
  if ((actor != (CDemonActor *)0x0) && (-1 < *(int *)&this_ptr->field_0x15f6a8)) {
    if (9 < *(int *)&this_ptr->field_0x15f6a8) {
      _DAT_01d046a0 = "..\\core\\setcolid.cpp";
      _DAT_01d046a4 = 0x473;
      core_main_c_FUN_004e4500("CDemonSet::ignore - ignore list is full");
    }
    *(CDemonActor **)(&this_ptr->field_0x15f6b0 + *(int *)&this_ptr->field_0x15f6a8 * 4) = actor;
    *(int *)&this_ptr->field_0x15f6a8 = *(int *)&this_ptr->field_0x15f6a8 + 1;
  }
  return;
}
