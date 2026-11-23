// Name: core_script.cpp_CScript_skipCinematic_FUN_00529b30
// Address: 00529b30
// Address Range: [[00529b30, 00529c03]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_skipCinematic_FUN_00529b30(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_skipCinematic_FUN_00529b30(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  float local_c;
  
  if (this_ptr->saved_cmd_index < 0) {
    return 0;
  }
  core_script_cpp_CScript_resetDialogState_FUN_00529b00(this_ptr);
  iVar2 = 0;
  this_ptr->next_cmd = this_ptr->saved_cmd_index;
  while ((g_CGamePtr->letterbox_mode != 0 && (this_ptr->mission_ended == 0))) {
    local_c = 0.25;
    iVar1 = core_script_cpp_CScript_step_FUN_00522350(this_ptr,&local_c);
    if (iVar1 < 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n");
    }
    iVar2 = iVar2 + 1;
    if (300 < iVar2) {
      g_CurrentLineNumber = 4498;
      g_CurrentFilename = "..\\core\\script.cpp";
      core_main_c_displayErrorAndQuit_FUN_004e4500("Infinite loop detected trying to skip cinematic, at script line %d");
    }
  }
  return 1;
}
