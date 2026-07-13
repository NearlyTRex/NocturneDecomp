// Name: FUN_0056f690
// Address: 0056f690
// Address Range: [[0056f690, 0056f851]]
// Convention: unknown
// Signature: undefined4 FUN_0056f690(byte *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_0056f690(byte *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte abStack_40 [20];
  uint uStack_2c;
  uint uStack_28;
  ushort uStack_24;
  byte *pbStack_20;
  byte *pbStack_1c;
  int iStack_18;
  byte bStack_14;
  
  pbStack_20 = param_1;
  for (; (bVar5 = *param_1, bVar5 == 0x20 || ((8 < bVar5 && (bVar5 < 0xe)))); param_1 = param_1 + 1)
  {
  }
  bStack_14 = 0;
  pbVar2 = param_1 + 1;
  if ((bVar5 != 0x2b) && (pbVar2 = param_1, bVar5 == 0x2d)) {
    bStack_14 = 1;
    pbVar2 = param_1 + 1;
  }
  bVar5 = 0x30;
  iVar6 = 0;
  iVar8 = 0;
  while( true ) {
    while( true ) {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2 + 1;
      if (bVar1 != 0x2e) break;
      if ((bStack_14 & 8) != 0) goto LAB_0056f718;
      bStack_14 = bStack_14 | 8;
      pbVar2 = pbVar3;
    }
    if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
    if ((bStack_14 & 8) != 0) {
      iVar8 = iVar8 + 1;
    }
    bVar5 = bVar5 | bVar1;
    if (bVar5 != 0x30) {
      if (iVar6 < 0x13) {
        abStack_40[iVar6] = bVar1;
      }
      iVar6 = iVar6 + 1;
    }
    bStack_14 = bStack_14 | 4;
    pbVar2 = pbVar3;
  }
LAB_0056f718:
  iVar7 = 0;
  if (((bStack_14 & 4) != 0) && ((bVar1 == 0x65 || (pbStack_20 = pbVar2, bVar1 == 0x45)))) {
    pbStack_20 = pbVar2 + 2;
    if ((*pbVar3 != 0x2b) && (pbStack_20 = pbVar3, *pbVar3 == 0x2d)) {
      bStack_14 = bStack_14 | 2;
      pbStack_20 = pbVar2 + 2;
    }
    bStack_14 = bStack_14 & 0xfb;
    for (; (bVar5 = *pbStack_20, 0x2f < bVar5 && (bVar5 < 0x3a)); pbStack_20 = pbStack_20 + 1) {
      if (iVar7 < 1000) {
        iStack_18 = iVar7 * 10;
        iVar7 = (uint)bVar5 + iStack_18 + -0x30;
      }
      bStack_14 = bStack_14 | 4;
    }
    if ((bStack_14 & 2) != 0) {
      iVar7 = -iVar7;
    }
    pbStack_1c = pbVar2;
    if ((bStack_14 & 4) == 0) {
      pbStack_20 = pbVar2;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = pbStack_20;
  }
  iVar7 = iVar7 - iVar8;
  if (0x13 < iVar6) {
    iVar7 = iVar7 + iVar6 + -0x13;
    iVar6 = 0x13;
  }
  for (; (0 < iVar6 && ((&stack0xffffffbf)[iVar6] == '0')); iVar6 = iVar6 + -1) {
    iVar7 = iVar7 + 1;
  }
  if (iVar6 == 0) {
    *(ushort *)(param_2 + 2) = 0;
    param_2[1] = 0;
    *param_2 = 0;
    uVar4 = 0;
  }
  else {
    abStack_40[iVar6] = 0;
    FUN_00571b2c();
    if (iVar7 != 0) {
      FUN_0056a320(&uStack_2c,iVar7);
    }
    if ((bStack_14 & 1) != 0) {
      uStack_24 = uStack_24 | 0x8000;
    }
    *(ushort *)(param_2 + 2) = uStack_24;
    param_2[1] = uStack_28;
    *param_2 = uStack_2c;
    iVar6 = iVar7 + -1 + iVar6;
    if (iVar6 < 0x135) {
      if (iVar6 < -0x134) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
}
