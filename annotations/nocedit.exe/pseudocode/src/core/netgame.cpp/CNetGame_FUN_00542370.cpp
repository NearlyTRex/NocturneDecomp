// Name: core_netgame.cpp_CNetGame_FUN_00542370
// Address: 00542370
// Address Range: [[00542370, 00542461]]
// Convention: unknown
// Signature: void core_netgame_cpp_CNetGame_FUN_00542370(void)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_FUN_00542370(byte param_1, uint
   param_2, uint param_3, uint param_4, uint param_5) */

void core_netgame_cpp_CNetGame_FUN_00542370(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  uint *in_stack_00000008;
  uint in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  
  bVar6 = 0;
  if (399 < g_ChatHistoryCount) {
    g_ChatHistoryCount = g_ChatHistoryCount + -1;
    memmove(g_ChatHistory,g_ChatHistory + 1,g_ChatHistoryCount * 0x120);
  }
  iVar2 = g_ChatHistoryCount;
  iVar3 = g_ChatHistoryCount * 0x120;
  *(uint *)g_ChatHistory[g_ChatHistoryCount].unk = *in_stack_00000008;
  *(uint *)(iVar3 + 0x2f7c8d4 + (uint)bVar6 * -8) = in_stack_00000008[(uint)bVar6 * -2 + 1];
  *(uint *)(g_ChatHistory[iVar2].unk + 8) = in_stack_0000000c;
  pcVar4 = g_ChatHistory[iVar2].unk + 0xc;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar5 = g_ChatHistory[g_ChatHistoryCount].unk + 0x20;
  pcVar4 = in_stack_00000014;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  g_ChatHistoryCount = g_ChatHistoryCount + 1;
  core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,in_stack_00000014,5.0);
  return;
}
