// Name: core_script.cpp_CScript_skipCinematic_FUN_005602e0
// Address: 005602e0
// Address Range: [[005602e0, 005603b3]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_skipCinematic_FUN_005602e0(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_skipCinematic_FUN_005602e0(CScript *this_ptr)

{
  int iVar2;
  int iVar3;
  float local_c;
  int iVar1;
  
  if (this_ptr->saved_cmd_index < 0) {
    return 0;
  }
  core_script_cpp_CScript_resetDialogState_FUN_005602b0(this_ptr);
  iVar3 = 0;
  this_ptr->next_cmd = this_ptr->saved_cmd_index;
  while ((g_CGamePtr->letterbox_mode != 0 && (this_ptr->script_pause_flag == 0))) {
    local_c = 0.25;
    iVar1 = this_ptr->next_cmd;
    iVar2 = core_script_cpp_CScript_step_FUN_0055a810(this_ptr,&local_c);
    if (iVar2 < 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 this_ptr->parsed_lines[iVar1].line_number,this_ptr->parsed_lines[iVar1].text,
                 g_ScriptErrorBuffer);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      g_CurrentLineNumber = 0xea5;
      g_CurrentFilename = "..\\core\\script.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Infinite loop detected trying to skip cinematic, at script line %d",
                 this_ptr->parsed_lines[this_ptr->next_cmd].line_number);
    }
  }
  return 1;
}
