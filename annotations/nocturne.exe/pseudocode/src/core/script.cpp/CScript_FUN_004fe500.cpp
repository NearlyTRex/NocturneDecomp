// Name: core_script.cpp_CScript_FUN_004fe500
// Address: 004fe500
// Address Range: [[004fe500, 004fe548]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_004fe500(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_004fe500(CScript *this_ptr)

{
  shape_edittool_cpp_CStrList_clear_FUN_00473c50(&this_ptr->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_004fe550(this_ptr);
  if (this_ptr->dialog_entries != (SDialogEntry *)0x0) {
    free(this_ptr->dialog_entries);
    this_ptr->dialog_entries = (SDialogEntry *)0x0;
  }
  this_ptr->dialog_entry_count = 0;
  shape_edittool_cpp_CPickList_clear_FUN_00476160(&g_CPickList_01e56c30);
  return;
}
