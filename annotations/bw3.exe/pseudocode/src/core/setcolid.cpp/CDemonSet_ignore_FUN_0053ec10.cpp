// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
// Address: 0053ec10
// Address Range: [[0053ec10, 0053ec6c]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet *this_ptr,CDemonActor *actor)

{
  if ((actor != (CDemonActor *)0x0) && (-1 < this_ptr->ignore_list_count)) {
    if (9 < this_ptr->ignore_list_count) {
      g_CurrentFilename = "..\\core\\setcolid.cpp";
      g_CurrentLineNumber = 1139;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonSet::ignore - ignore list is full");
    }
    this_ptr->ignore_list[this_ptr->ignore_list_count] = actor;
    this_ptr->ignore_list_count = this_ptr->ignore_list_count + 1;
  }
  return;
}
