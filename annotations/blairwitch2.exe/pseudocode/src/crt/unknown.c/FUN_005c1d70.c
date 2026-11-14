// Name: crt_unknown.c_FUN_005c1d70
// Address: 005c1d70
// Address Range: [[005c1d70, 005c1f31]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c1d70(byte *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_005c1d70(byte *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte local_40 [20];
  uint local_2c;
  uint local_28;
  ushort local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte local_14;
  
  local_20 = param_1;
  for (; (bVar5 = *param_1, bVar5 == 0x20 || ((8 < bVar5 && (bVar5 < 0xe)))); param_1 = param_1 + 1)
  {
  }
  local_14 = 0;
  pbVar2 = param_1 + 1;
  if ((bVar5 != 0x2b) && (pbVar2 = param_1, bVar5 == 0x2d)) {
    local_14 = 1;
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
      if ((local_14 & 8) != 0) goto LAB_005c1df8;
      local_14 = local_14 | 8;
      pbVar2 = pbVar3;
    }
    if ((bVar1 < 0x30) || (0x39 < bVar1)) break;
    if ((local_14 & 8) != 0) {
      iVar8 = iVar8 + 1;
    }
    bVar5 = bVar5 | bVar1;
    if (bVar5 != 0x30) {
      if (iVar6 < 0x13) {
        local_40[iVar6] = bVar1;
      }
      iVar6 = iVar6 + 1;
    }
    local_14 = local_14 | 4;
    pbVar2 = pbVar3;
  }
LAB_005c1df8:
  iVar7 = 0;
  if (((local_14 & 4) != 0) && ((bVar1 == 0x65 || (local_20 = pbVar2, bVar1 == 0x45)))) {
    local_20 = pbVar2 + 2;
    if ((*pbVar3 != 0x2b) && (local_20 = pbVar3, *pbVar3 == 0x2d)) {
      local_14 = local_14 | 2;
      local_20 = pbVar2 + 2;
    }
    local_14 = local_14 & 0xfb;
    for (; (bVar5 = *local_20, 0x2f < bVar5 && (bVar5 < 0x3a)); local_20 = local_20 + 1) {
      if (iVar7 < 1000) {
        local_18 = iVar7 * 10;
        iVar7 = (uint)bVar5 + local_18 + -0x30;
      }
      local_14 = local_14 | 4;
    }
    if ((local_14 & 2) != 0) {
      iVar7 = -iVar7;
    }
    local_1c = pbVar2;
    if ((local_14 & 4) == 0) {
      local_20 = pbVar2;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_20;
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
    local_40[iVar6] = 0;
    FUN_005c476c();
    if (iVar7 != 0) {
      FUN_005bc220(&local_2c,iVar7);
    }
    if ((local_14 & 1) != 0) {
      local_24 = local_24 | 0x8000;
    }
    *(ushort *)(param_2 + 2) = local_24;
    param_2[1] = local_28;
    *param_2 = local_2c;
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
