// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
// Address: 00559250
// Address Range: [[00559250, 005592ac]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(CDemonSet *this_ptr,CDemonActor *actor)

{
  if ((actor != (CDemonActor *)0x0) && (-1 < *(int *)&this_ptr->field_0x15f6ac)) {
    if (9 < *(int *)&this_ptr->field_0x15f6ac) {
      _DAT_01d1d400 = "..\\core\\setcolid.cpp";
      _DAT_01d1d404 = 0x473;
      core_main_c_FUN_005030e0("CDemonSet::ignore - ignore list is full");
    }
    *(CDemonActor **)(&this_ptr->field_0x15f6b4 + *(int *)&this_ptr->field_0x15f6ac * 4) = actor;
    *(int *)&this_ptr->field_0x15f6ac = *(int *)&this_ptr->field_0x15f6ac + 1;
  }
  return;
}
