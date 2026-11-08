// Name: FUN_005297a0
// Address: 005297a0
// Address Range: [[005297a0, 0052991a]]
// Convention: unknown
// Signature: void FUN_005297a0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005297a0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_70 [100];
  
  bVar7 = 0;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0xbf800000;
  param_1[0x13] = 0xbf800000;
  *param_1 = 0;
  iVar3 = _DAT_01d5ba14;
  param_1[1] = 0;
  uVar2 = *(uint *)(iVar3 * 4 + 0x1d5ba04);
  param_1[6] = 0;
  param_1[3] = uVar2;
  iVar3 = 0x01D2130C;
  param_1[4] = 1;
  *(uint *)(iVar3 + 0x250) = 1;
  *(uint *)(iVar3 + 0x254) = 1;
  *(uint *)(iVar3 + 0x24c) = 0;
  _DAT_01ed7010 = 0;
  param_1[0x114] = 0xbf800000;
  param_1[0x115] = 0xffffffff;
  iVar3 = 0x01ED78C8 + 0x14d0f0;
  param_1[0x116] = 0;
  _DAT_01ed7018 = 0;
  param_1[5] = 0;
  FUN_005a5128(iVar3,0,0,local_70,0);
  pcVar4 = &DAT_005cdf02;
  iVar3 = -1;
  pcVar6 = local_70;
  do {
    pcVar5 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = FUN_005a3260(local_70,"smill.wav");
  if (iVar3 == 0) {
    pcVar4 = &DAT_005cdf11;
    iVar3 = -1;
    pcVar6 = local_70;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = FUN_005a3260(local_70,"town.wav");
  if (iVar3 == 0) {
    pcVar4 = &DAT_005cdf20;
    iVar3 = -1;
    pcVar6 = local_70;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  FUN_00560940(0x02CF5680,local_70);
  param_1[7] = 0;
  return;
}
