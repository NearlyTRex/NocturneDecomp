// Name: core_script.cpp_FUN_00528d50
// Address: 00528d50
// Address Range: [[00528d50, 00528d98]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00528d50(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00528d50(CScript *param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00482010(&param_1->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_00528da0(param_1);
  if (param_1->dialog_entries != (SDialogEntry *)0x0) {
    FUN_005a3770(param_1->dialog_entries);
    param_1->dialog_entries = (SDialogEntry *)0x0;
  }
  param_1->dialog_entry_count = 0;
  shape_edittool_cpp_CPickList_clear_FUN_00484f10(&g_ScriptPickList);
  return;
}
