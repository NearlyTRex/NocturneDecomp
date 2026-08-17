// Name: core_script.cpp_CScript_executeInitSection_FUN_004ff170
// Address: 004ff170
// Address Range: [[004ff170, 004ff2bc]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_14;
  int local_10;
  
  _DAT_01e56418 = 0;
  if ((0 < this_ptr->parsed_line_count) && (this_ptr->parsed_lines != (SScriptLine *)0x0)) {
    iVar2 = core_script_cpp_CScript_findLabelIndex_FUN_00504c10(this_ptr,"initSection");
    if (-1 < iVar2) {
      iVar3 = core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                        (this_ptr,"initSectionEnd");
      if (iVar3 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 1052;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = this_ptr->next_cmd;
      _DAT_01e56c24 = 0;
      this_ptr->next_cmd = iVar2;
      iVar2 = 0;
      while( true ) {
        iVar1 = this_ptr->next_cmd;
        local_14 = 0.25;
        iVar4 = core_script_cpp_CScript_step_FUN_004ff2c0(this_ptr,&local_14);
        if (iVar4 < 0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 1080;
          core_main_c_displayErrorAndQuit_FUN_004c8440
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",this_ptr->parsed_lines[iVar1].line_number,
                     this_ptr->parsed_lines[iVar1].text,&DAT_01e56420);
        }
        if (iVar3 == this_ptr->next_cmd) break;
        iVar2 = iVar2 + 1;
        if (10000 < iVar2) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 1098;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01e56c24 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(g_CGame_PTR_005b9354);
        _DAT_01e56c24 = 0;
      }
      this_ptr->next_cmd = local_10;
      return;
    }
  }
  return;
}
