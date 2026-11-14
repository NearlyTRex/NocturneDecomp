// Name: core_script.cpp_CScript_clear_FUN_00543740
// Address: 00543740
// Address Range: [[00543740, 00543788]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_clear_FUN_00543740(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_clear_FUN_00543740(CScript *this_ptr)

{
  shape_edittool_cpp_CStrList_clear_FUN_00499470(&this_ptr->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_00543790(this_ptr);
  if (this_ptr->dialog_entries != (SDialogEntry *)0x0) {
    FUN_005c09f0(this_ptr->dialog_entries);
    this_ptr->dialog_entries = (SDialogEntry *)0x0;
  }
  this_ptr->dialog_entry_count = 0;
  shape_edittool_cpp_CPickList_clear_FUN_0049c370(&g_ScriptPickList);
  return;
}
