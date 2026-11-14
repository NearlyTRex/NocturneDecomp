// Name: core_script.cpp_CScript_clear_FUN_00528d50
// Address: 00528d50
// Address Range: [[00528d50, 00528d98]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_clear_FUN_00528d50(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_clear_FUN_00528d50(CScript *this_ptr)

{
  shape_edittool_cpp_CStrList_clear_FUN_00482010(&this_ptr->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_00528da0(this_ptr);
  if (this_ptr->dialog_entries != (SDialogEntry *)0x0) {
    FUN_005a3770(this_ptr->dialog_entries);
    this_ptr->dialog_entries = (SDialogEntry *)0x0;
  }
  this_ptr->dialog_entry_count = 0;
  shape_edittool_cpp_CPickList_clear_FUN_00484f10(&g_ScriptPickList);
  return;
}
