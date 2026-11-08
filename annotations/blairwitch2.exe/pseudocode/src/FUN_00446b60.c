// Name: FUN_00446b60
// Address: 00446b60
// Address Range: [[00446b60, 00446d10]]
// Convention: unknown
// Signature: float FUN_00446b60(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00446b60(int param_1,uint param_2,uint param_3,float *param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_101c [1012];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  iVar2 = 0;
  local_1c = -1;
  local_18 = 1.0001;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = 0;
    do {
      local_14 = (float)FUN_00444a40(*(int *)(param_1 + 0x2c) + iVar3,param_2,param_3);
      if (((0.0 <= local_14) && (local_14 < local_18)) && (local_14 <= 1.0)) {
        local_1c = iVar2;
        local_18 = local_14;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  if (-1 < local_1c) {
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar3 = local_1c * 0x20;
    local_28 = -*(float *)(iVar2 + 0xc + iVar3);
    local_24 = -*(float *)(iVar2 + 0x10 + iVar3);
    local_20 = -*(float *)(iVar2 + 0x14 + iVar3);
    local_34 = local_28;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xffffffcc != param_4) {
      *param_4 = local_34;
      param_4[1] = local_30;
      param_4[2] = local_2c;
    }
    *param_5 = (uint)*(byte *)(*(int *)(param_1 + 0x30) + local_1c);
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + local_1c * 0x20);
    if (puVar1 != (uint *)&DAT_01510da8) {
      _DAT_01510da8 = *puVar1;
      _DAT_01510db0 = puVar1[2];
      _DAT_01510dac = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + 4 + local_1c * 0x20);
    if (puVar1 != (uint *)&DAT_01510db4) {
      _DAT_01510db4 = *puVar1;
      _DAT_01510dbc = puVar1[2];
      _DAT_01510db8 = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)(param_1 + 0x2c) + 8 + local_1c * 0x20);
    if (puVar1 != (uint *)&DAT_01510dc0) {
      _DAT_01510dc4 = puVar1[1];
      _DAT_01510dc8 = puVar1[2];
      _DAT_01510dc0 = *puVar1;
      return local_18;
    }
  }
  return local_18;
}
