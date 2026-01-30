// Name: core_script.cpp_CScript_FUN_0055a6c0
// Address: 0055a6c0
// Address Range: [[0055a6c0, 0055a80c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_0055a6c0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_0055a6c0(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  int local_10;
  
  DAT_0310ec9c = 0;
  if ((0 < *(int *)(this_ptr->unk4 + 0x18)) && (*(int *)(this_ptr->unk4 + 0x1c) != 0)) {
    iVar2 = core_script_cpp_CScript_FUN_00560160(this_ptr,"initSection");
    if (-1 < iVar2) {
      iVar3 = core_script_cpp_CScript_FUN_00560160(this_ptr,"initSectionEnd");
      if (iVar3 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x41c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = this_ptr->next_cmd;
      DAT_0310f4a4 = 0;
      this_ptr->next_cmd = iVar2;
      iVar2 = 0;
      while( true ) {
        iVar1 = this_ptr->next_cmd;
        local_14 = 0x3e800000;
        iVar4 = core_script_cpp_CScript_step_FUN_0055a810(this_ptr,(int)&local_14);
        if (iVar4 < 0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x438;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + iVar1 * 8),
                     *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + 4 + iVar1 * 8),&DAT_0310eca0)
          ;
        }
        if (iVar3 == this_ptr->next_cmd) break;
        iVar2 = iVar2 + 1;
        if (10000 < iVar2) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x44a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Infinite loop detected in initSection.\n");
        }
      }
      if (DAT_0310f4a4 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(g_CGamePtr);
        DAT_0310f4a4 = 0;
      }
      this_ptr->next_cmd = local_10;
      return;
    }
  }
  return;
}
