// Name: FUN_004a08b0
// Address: 004a08b0
// Address Range: [[004a08b0, 004a0974]]
// Convention: unknown
// Signature: void FUN_004a08b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a08b0(int param_1)

{
  float fVar1;
  int iVar2;
  float *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1028 [1005];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar3 = (uint *)&stack0xffffff90;
  puVar4 = &stack0xffffffa8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar1 = fStack_48 - fStack_54;
  fStack_1c = fStack_58 + fStack_4c;
  fStack_18 = fStack_54 + fStack_48;
  fStack_14 = fStack_50 + fStack_44;
  fStack_28 = fStack_58 + fStack_4c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_34 = fStack_28 * _DAT_005dcb62;
  fStack_30 = fStack_24 * _DAT_005dcb62;
  fStack_2c = fStack_20 * _DAT_005dcb62;
  fStack_40 = fStack_28 * _DAT_005dcb62;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_3c = fStack_48 - fVar1 * (float)_DAT_005dcb6a;
  *unaff_ESI = fStack_40;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(float *)((int)&stack0xffffffc4 + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(float *)(&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
