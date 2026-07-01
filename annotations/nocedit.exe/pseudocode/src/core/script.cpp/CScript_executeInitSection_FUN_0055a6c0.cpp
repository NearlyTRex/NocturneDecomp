// Name: core_script.cpp_CScript_executeInitSection_FUN_0055a6c0
// Address: 0055a6c0
// Address Range: [[0055a6c0, 0055a80c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_executeInitSection_FUN_0055a6c0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_executeInitSection_FUN_0055a6c0(CScript *this_ptr)

{
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_14;
  int local_10;
  int iVar1;
  
  g_ScriptEventsEnabled = 0;
  if ((0 < this_ptr->parsed_line_count) && (this_ptr->parsed_lines != (SScriptLine *)0x0)) {
    iVar2 = core_script_cpp_CScript_findLabelIndex_FUN_00560160(this_ptr,"initSection");
    if (-1 < iVar2) {
      iVar3 = core_script_cpp_CScript_findLabelIndex_FUN_00560160
                        (this_ptr,"initSectionEnd");
      if (iVar3 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 1052;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = this_ptr->next_cmd;
      g_ScriptInputFlag = 0;
      this_ptr->next_cmd = iVar2;
      iVar5 = 0;
      while( true ) {
        iVar1 = this_ptr->next_cmd;
        local_14 = 0.25;
        iVar4 = core_script_cpp_CScript_step_FUN_0055a810(this_ptr,&local_14);
        if (iVar4 < 0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 1080;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",this_ptr->parsed_lines[iVar1].line_number,
                     this_ptr->parsed_lines[iVar1].text,g_ScriptErrorBuffer);
        }
        if (iVar3 == this_ptr->next_cmd) break;
        iVar5 = iVar5 + 1;
        if (10000 < iVar5) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 1098;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Infinite loop detected in initSection.\n");
        }
      }
      if (g_ScriptInputFlag != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(g_CGamePtr);
        g_ScriptInputFlag = 0;
      }
      this_ptr->next_cmd = local_10;
      return;
    }
  }
  return;
}
