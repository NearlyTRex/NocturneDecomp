// Name: core_netgame.cpp_FUN_0050ce70
// Address: 0050ce70
// Address Range: [[0050ce70, 0050cf47]]
// Convention: unknown
// Signature: int core_netgame_cpp_FUN_0050ce70(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_netgame_cpp_FUN_0050ce70(int param_1,uint *param_2,char *param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *dest;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (1 < *(int *)(param_1 + 0x1c)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x5ff;
    core_main_c_FUN_004e4500("CNetGame::addPlayer - too many players!");
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar2 + 1;
  dest = (char *)(param_1 + 0x20 + iVar2 * 0x80);
  memset(dest,0,0x80);
  pcVar5 = dest;
  do {
    cVar1 = *param_3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(dest + 0x1c) = *param_2;
  *(uint *)(dest + (uint)bVar6 * -8 + 0x20) = param_2[(uint)bVar6 * -2 + 1];
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
  *(uint *)(dest + 0x14) = param_4;
  *(uint *)(dest + 0x18) = param_5;
  iVar4 = _DAT_01d34e38;
  *(int *)(dest + 0x24) = _DAT_01d34e38;
  iVar4 = iVar4 + -0x1e0000;
  *(int *)(dest + 0x2c) = iVar4;
  *(int *)(dest + 0x30) = iVar4;
  iVar3 = _DAT_01d34e44;
  *(int *)(dest + 0x38) = iVar4;
  *(int *)(dest + 0x34) = iVar3 + -1;
  return iVar2;
}
