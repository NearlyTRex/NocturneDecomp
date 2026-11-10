// Name: core_script.cpp_FUN_00521630
// Address: 00521630
// Address Range: [[00521630, 00521678]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00521630(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_00521630(CScript *param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00480e10(&param_1->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_00521680(param_1);
  if (param_1->dialog_entries != (SDialogEntry *)0x0) {
    FUN_005b86a0(param_1->dialog_entries);
    param_1->dialog_entries = (SDialogEntry *)0x0;
  }
  param_1->dialog_entry_count = 0;
  shape_edittool_cpp_CPickList_clear_FUN_00483d10(&g_ScriptPickList);
  return;
}
