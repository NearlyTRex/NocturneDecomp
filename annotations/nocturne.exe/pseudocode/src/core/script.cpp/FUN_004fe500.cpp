// Name: core_script.cpp_FUN_004fe500
// Address: 004fe500
// Address Range: [[004fe500, 004fe548]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_004fe500(CScript *param_1)

#include "nocturne.h"

void core_script_cpp_FUN_004fe500(CScript *param_1)

{
  shape_edittool_cpp_CStrList_clear_FUN_00473c50(&param_1->script_text);
  core_script_cpp_CScript_freeParsedLines_FUN_004fe550(param_1);
  if (param_1->dialog_entries != (SDialogEntry *)0x0) {
    FUN_005638d0(param_1->dialog_entries);
    param_1->dialog_entries = (SDialogEntry *)0x0;
  }
  param_1->dialog_entry_count = 0;
  shape_edittool_cpp_FUN_00476160(&g_CPickList_01e56c30);
  return;
}
