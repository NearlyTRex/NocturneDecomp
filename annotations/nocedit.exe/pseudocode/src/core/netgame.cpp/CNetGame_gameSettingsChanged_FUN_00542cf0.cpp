// Name: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
// Address: 00542cf0
// Address Range: [[00542cf0, 00542dcb]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_gameSettingsChanged(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_stack_00000004;
  
  if (*in_stack_00000004 != 1) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x88c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  DAT_02f7c8c4 = DAT_02f7c8c4 + 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  piVar4 = in_stack_00000004;
  g_LastPingTime = iVar1;
  if (0 < in_stack_00000004[7]) {
    do {
      if (iVar3 == in_stack_00000004[0x45]) {
        piVar4[0x15] = DAT_02f7c8c4;
      }
      else {
        piVar4[0x16] = (g_CurrentGameTime + iVar2) - 0x1e0000;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x1e;
    } while (iVar3 < in_stack_00000004[7]);
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  return;
}
