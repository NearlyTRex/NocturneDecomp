// Name: core_script.cpp_CScript_clear_FUN_00521630
// Address: 00521630
// Address Range: [[00521630, 00521678]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_clear_FUN_00521630(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_clear_FUN_00521630(CScript *this_ptr)

{
  shape_edittool_cpp_CStrList_clear_FUN_00480e10(&this_ptr->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_00521680(this_ptr);
  if (this_ptr->dialog_entries != (SDialogEntry *)0x0) {
    FUN_005b86a0(this_ptr->dialog_entries);
    this_ptr->dialog_entries = (SDialogEntry *)0x0;
  }
  this_ptr->dialog_entry_count = 0;
  shape_edittool_cpp_CPickList_clear_FUN_00483d10(&g_ScriptPickList);
  return;
}
