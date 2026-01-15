// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
// Address: 00542ff0
// Address Range: [[00542ff0, 00543144]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_sendMyStateChanged(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *in_stack_00000004;
  char local_33 [20];
  int local_1f;
  int local_1b;
  int local_17;
  
  if ((*in_stack_00000004 != 2) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8d0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  local_1f = in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0x19];
  local_1b = in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0xd];
  local_17 = in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0xe];
  pcVar5 = local_33;
  piVar4 = in_stack_00000004 + in_stack_00000004[0x45] * 0x1e + 8;
  do {
    iVar3 = *piVar4;
    *pcVar5 = (char)iVar3;
    if ((char)iVar3 == '\0') break;
    cVar1 = *(char *)((int)piVar4 + 1);
    piVar4 = (int *)((int)piVar4 + 2);
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  g_LastPingTime = iVar2 / 0x12;
  core_netgame_cpp_CNetGame_send_FUN_005411c0();
  DAT_00680a04 = 1;
  in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0x18] = g_CurrentGameTime;
  return;
}
