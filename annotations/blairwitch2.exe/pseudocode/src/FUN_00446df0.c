// Name: FUN_00446df0
// Address: 00446df0
// Address Range: [[00446df0, 00446f41]]
// Convention: unknown
// Signature: undefined4 FUN_00446df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,uint *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00446df0(int param_1,uint param_2,uint param_3,uint param_4,float *param_5,uint *param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1010 [1014];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  iVar3 = -1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar5 = 0;
    do {
      iVar2 = FUN_00445620(*(int *)(param_1 + 0x2c) + iVar5,param_2,param_3,param_4);
      if (iVar2 != 0) {
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  if (-1 < iVar3) {
    puVar1 = *(uint **)(iVar3 * 0x20 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_01510da8) {
      _DAT_01510da8 = *puVar1;
      _DAT_01510db0 = puVar1[2];
      _DAT_01510dac = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + 4 + iVar3 * 0x20);
    if (puVar1 != (uint *)&DAT_01510db4) {
      _DAT_01510db4 = *puVar1;
      _DAT_01510dbc = puVar1[2];
      _DAT_01510db8 = puVar1[1];
    }
    puVar1 = *(uint **)(iVar3 * 0x20 + 8 + *(int *)(param_1 + 0x2c));
    if (puVar1 != (uint *)&DAT_01510dc0) {
      _DAT_01510dc0 = *puVar1;
      _DAT_01510dc8 = puVar1[2];
      _DAT_01510dc4 = puVar1[1];
    }
    *param_6 = (uint)*(byte *)(*(int *)(param_1 + 0x30) + iVar3);
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar3 = iVar3 * 0x20;
    local_1c = -*(float *)(iVar4 + 0xc + iVar3);
    local_18 = -*(float *)(iVar4 + 0x10 + iVar3);
    local_14 = -*(float *)(iVar4 + 0x14 + iVar3);
    local_28 = local_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (&stack0xffffffd8 != param_5) {
      *param_5 = local_28;
      param_5[1] = local_24;
      param_5[2] = local_20;
    }
    return 1;
  }
  return 0;
}
