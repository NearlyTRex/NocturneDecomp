// Name: core_script.cpp_FUN_00543740
// Address: 00543740
// Address Range: [[00543740, 00543788]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00543740(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00543740(CScript *param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00499470(&param_1->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_00543790(param_1);
  if (param_1->dialog_entries != (SDialogEntry *)0x0) {
    FUN_005c09f0(param_1->dialog_entries);
    param_1->dialog_entries = (SDialogEntry *)0x0;
  }
  param_1->dialog_entry_count = 0;
  shape_edittool_cpp_CPickList_clear_FUN_0049c370(&g_ScriptPickList);
  return;
}
