// Name: FUN_00544190
// Address: 00544190
// Address Range: [[00544190, 0054430a]]
// Convention: unknown
// Signature: void FUN_00544190(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544190(uint *param_1)

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
  iVar3 = _DAT_01d06ab4;
  param_1[1] = 0;
  uVar2 = *(uint *)(iVar3 * 4 + 0x1d06aa4);
  param_1[6] = 0;
  param_1[3] = uVar2;
  iVar3 = 0x01CCF390;
  param_1[4] = 1;
  *(uint *)(iVar3 + 0x248) = 1;
  *(uint *)(iVar3 + 0x24c) = 1;
  *(uint *)(iVar3 + 0x244) = 0;
  _DAT_01e818b0 = 0;
  param_1[0x114] = 0xbf800000;
  param_1[0x115] = 0xffffffff;
  iVar3 = 0x01E82168 + 0x14d0f0;
  param_1[0x116] = 0;
  _DAT_01e818b8 = 0;
  param_1[5] = 0;
  FUN_005c2238(iVar3,0,0,local_70,0);
  pcVar4 = &DAT_005ee2a1;
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
  iVar3 = FUN_005c04e0(local_70,"smill.wav");
  if (iVar3 == 0) {
    pcVar4 = &DAT_005ee2b0;
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
  iVar3 = FUN_005c04e0(local_70,"town.wav");
  if (iVar3 == 0) {
    pcVar4 = &DAT_005ee2bf;
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
  FUN_0057d810(0x02C82A60,local_70);
  param_1[7] = 0;
  return;
}
