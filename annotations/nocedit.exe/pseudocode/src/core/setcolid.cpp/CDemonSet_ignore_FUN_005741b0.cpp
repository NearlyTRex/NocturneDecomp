// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
// Address: 005741b0
// Address Range: [[005741b0, 0057420c]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet *this_ptr,CDemonActor *actor)

{
  if ((actor != (CDemonActor *)0x0) && (-1 < this_ptr->ignore_list_count)) {
    if (9 < this_ptr->ignore_list_count) {
      g_CurrentFilename = "..\\core\\setcolid.cpp";
      g_CurrentLineNumber = 0x473;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::ignore - ignore list is full");
    }
    this_ptr->ignore_list[this_ptr->ignore_list_count] = actor;
    this_ptr->ignore_list_count = this_ptr->ignore_list_count + 1;
  }
  return;
}
