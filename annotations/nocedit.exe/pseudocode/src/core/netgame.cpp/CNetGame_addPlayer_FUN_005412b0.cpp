// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
// Address: 005412b0
// Address Range: [[005412b0, 0054138f]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(void)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_addPlayer(CNetGame* param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *dest;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  uint *in_stack_00000008;
  char *in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  bVar7 = 0;
  if (1 < *(int *)(in_stack_00000004 + 0x1c)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x5ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::addPlayer - too many players!");
  }
  iVar2 = *(int *)(in_stack_00000004 + 0x1c);
  dest = (char *)(in_stack_00000004 + 0x20 + iVar2 * 0x78);
  *(int *)(in_stack_00000004 + 0x1c) = iVar2 + 1;
  memset(dest,0,0x78);
  pcVar6 = dest;
  do {
    cVar1 = *in_stack_0000000c;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(dest + 0x1c) = *in_stack_00000008;
  *(uint *)(dest + (uint)bVar7 * -8 + 0x20) = in_stack_00000008[(uint)bVar7 * -2 + 1];
  dest[0x28] = '\0';
  dest[0x29] = '\0';
  dest[0x2a] = -0x80;
  dest[0x2b] = -0x41;
  dest[0x44] = '\0';
  dest[0x45] = '\0';
  dest[0x46] = '\0';
  dest[0x47] = '\0';
  dest[0x40] = '\0';
  dest[0x41] = '\0';
  dest[0x42] = '\0';
  dest[0x43] = '\0';
  dest[0x3c] = '\0';
  dest[0x3d] = '\0';
  dest[0x3e] = '\0';
  dest[0x3f] = '\0';
  *(uint *)(dest + 0x14) = in_stack_00000010;
  *(uint *)(dest + 0x18) = in_stack_00000014;
  uVar3 = g_CurrentGameTime;
  *(uint *)(dest + 0x24) = g_CurrentGameTime;
  iVar5 = uVar3 - 0x1e0000;
  *(int *)(dest + 0x2c) = iVar5;
  *(int *)(dest + 0x30) = iVar5;
  iVar4 = DAT_02f7c8c4;
  *(int *)(dest + 0x38) = iVar5;
  *(int *)(dest + 0x34) = iVar4 + -1;
  return iVar2;
}
