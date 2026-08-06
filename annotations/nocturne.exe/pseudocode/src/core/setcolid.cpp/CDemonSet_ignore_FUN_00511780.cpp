// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
// Address: 00511780
// Address Range: [[00511780, 005117dc]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(CDemonSet *this_ptr,CDemonActor *actor)

{
  if ((actor != (CDemonActor *)0x0) && (-1 < this_ptr->ignore_list_count)) {
    if (9 < this_ptr->ignore_list_count) {
      g_CurrentFilename = "..\\core\\setcolid.cpp";
      g_CurrentLineNumber = 1139;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::ignore - ignore list is full");
    }
    this_ptr->ignore_list[this_ptr->ignore_list_count] = actor;
    this_ptr->ignore_list_count = this_ptr->ignore_list_count + 1;
  }
  return;
}
