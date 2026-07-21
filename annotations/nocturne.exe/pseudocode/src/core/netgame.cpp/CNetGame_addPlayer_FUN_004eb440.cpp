// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
// Address: 004eb440
// Address Range: [[004eb440, 004eb51f]]
// Convention: unknown
// Signature: int core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(int param_1,uint *param_2,char *param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (1 < *(int *)(param_1 + 0x1c)) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x5ff;
    FUN_004c8440("CNetGame::addPlayer - too many players!");
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  pcVar5 = (char *)(param_1 + 0x20 + iVar2 * 0x78);
  *(int *)(param_1 + 0x1c) = iVar2 + 1;
  memset(pcVar5,0,0x78);
  pcVar6 = pcVar5;
  do {
    cVar1 = *param_3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(pcVar5 + 0x1c) = *param_2;
  *(uint *)(pcVar5 + (uint)bVar7 * -8 + 0x20) = param_2[(uint)bVar7 * -2 + 1];
  pcVar5[0x28] = '\0';
  pcVar5[0x29] = '\0';
  pcVar5[0x2a] = -0x80;
  pcVar5[0x2b] = -0x41;
  pcVar5[0x44] = '\0';
  pcVar5[0x45] = '\0';
  pcVar5[0x46] = '\0';
  pcVar5[0x47] = '\0';
  pcVar5[0x40] = '\0';
  pcVar5[0x41] = '\0';
  pcVar5[0x42] = '\0';
  pcVar5[0x43] = '\0';
  pcVar5[0x3c] = '\0';
  pcVar5[0x3d] = '\0';
  pcVar5[0x3e] = '\0';
  pcVar5[0x3f] = '\0';
  *(uint *)(pcVar5 + 0x14) = param_4;
  *(uint *)(pcVar5 + 0x18) = param_5;
  iVar4 = _DAT_01cea3f8;
  *(int *)(pcVar5 + 0x24) = _DAT_01cea3f8;
  iVar4 = iVar4 + -0x1e0000;
  *(int *)(pcVar5 + 0x2c) = iVar4;
  *(int *)(pcVar5 + 0x30) = iVar4;
  iVar3 = _DAT_01cea404;
  *(int *)(pcVar5 + 0x38) = iVar4;
  *(int *)(pcVar5 + 0x34) = iVar3 + -1;
  return iVar2;
}
