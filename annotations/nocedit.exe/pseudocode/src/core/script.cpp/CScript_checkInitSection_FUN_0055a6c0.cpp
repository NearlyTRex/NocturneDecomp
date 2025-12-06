// Name: core_script.cpp_CScript_checkInitSection_FUN_0055a6c0
// Address: 0055a6c0
// Address Range: [[0055a6c0, 0055a80c]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_checkInitSection_FUN_0055a6c0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_checkInitSection(uint param_1) */

void core_script_cpp_CScript_checkInitSection_FUN_0055a6c0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  
  DAT_0310ec9c = 0;
  if ((0 < *(int *)(in_stack_00000004 + 0x30)) && (*(int *)(in_stack_00000004 + 0x34) != 0)) {
    iVar3 = core_script_cpp_FUN_00560160();
    if (-1 < iVar3) {
      iVar4 = core_script_cpp_FUN_00560160();
      if (iVar4 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x41c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      uVar1 = *(uint *)(in_stack_00000004 + 0x48);
      DAT_0310f4a4 = 0;
      *(int *)(in_stack_00000004 + 0x48) = iVar3;
      iVar3 = 0;
      while( true ) {
        iVar2 = *(int *)(in_stack_00000004 + 0x48);
        iVar5 = core_script_cpp_CScript_step_FUN_0055a810();
        if (iVar5 < 0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x438;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(*(int *)(in_stack_00000004 + 0x34) + iVar2 * 8),
                     *(uint *)(*(int *)(in_stack_00000004 + 0x34) + 4 + iVar2 * 8),
                     &DAT_0310eca0);
        }
        if (iVar4 == *(int *)(in_stack_00000004 + 0x48)) break;
        iVar3 = iVar3 + 1;
        if (10000 < iVar3) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x44a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Infinite loop detected in initSection.\n");
        }
      }
      if (DAT_0310f4a4 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(g_CGamePtr);
        DAT_0310f4a4 = 0;
      }
      *(uint *)(in_stack_00000004 + 0x48) = uVar1;
      return;
    }
  }
  return;
}
