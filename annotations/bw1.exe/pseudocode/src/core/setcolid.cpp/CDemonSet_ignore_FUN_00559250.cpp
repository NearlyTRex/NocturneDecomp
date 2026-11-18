// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
// Address: 00559250
// Address Range: [[00559250, 005592ac]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(CDemonSet *this_ptr,CDemonActor *actor)

{
  if ((actor != (CDemonActor *)0x0) && (-1 < this_ptr->ignore_list_count)) {
    if (9 < this_ptr->ignore_list_count) {
      g_CHAR_PTR_01d1d400 = "..\\core\\setcolid.cpp";
      g_INT_01d1d404 = 0x473;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonSet::ignore - ignore list is full");
    }
    this_ptr->ignore_list[this_ptr->ignore_list_count] = actor;
    this_ptr->ignore_list_count = this_ptr->ignore_list_count + 1;
  }
  return;
}
