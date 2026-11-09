// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
// Address: 0053ec10
// Address Range: [[0053ec10, 0053ec6c]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet *this_ptr,CDemonActor *actor)

{
  if ((actor != (CDemonActor *)0x0) && (-1 < *(int *)&this_ptr->field_0x15f6ac)) {
    if (9 < *(int *)&this_ptr->field_0x15f6ac) {
      _DAT_01d71de0 = "..\\core\\setcolid.cpp";
      _DAT_01d71de4 = 0x473;
      core_main_c_FUN_004e4330("CDemonSet::ignore - ignore list is full");
    }
    *(CDemonActor **)(&this_ptr->field_0x15f6b4 + *(int *)&this_ptr->field_0x15f6ac * 4) = actor;
    *(int *)&this_ptr->field_0x15f6ac = *(int *)&this_ptr->field_0x15f6ac + 1;
  }
  return;
}
