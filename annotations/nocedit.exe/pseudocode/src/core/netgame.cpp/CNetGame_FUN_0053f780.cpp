// Name: core_netgame.cpp_CNetGame_FUN_0053f780
// Address: 0053f780
// Address Range: [[0053f780, 0053f821]]
// Convention: unknown
// Signature: void core_netgame_cpp_CNetGame_FUN_0053f780(void)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_FUN_0053f780(uint param_1) */

void core_netgame_cpp_CNetGame_FUN_0053f780(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  CNetGame *in_stack_00000004;
  
  remove("netlog.txt");
  g_CurrentGameTime = 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  g_LastPingTime = iVar2 / 0x12;
  support_trisock_cpp_startupWinsock_FUN_005e1ec0();
  pcVar3 = getenv("USERNAME");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = getenv("COMPUTERNAME");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "MyComputer";
  }
  pcVar4 = in_stack_00000004->network_data;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  g_ChatHistoryCount = 0;
  DAT_02f98ad0 = 0;
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  return;
}
