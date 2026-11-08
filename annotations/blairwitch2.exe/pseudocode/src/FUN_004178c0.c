// Name: FUN_004178c0
// Address: 004178c0
// Address Range: [[004178c0, 00417a66]]
// Convention: unknown
// Signature: void FUN_004178c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004178c0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_104c [999];
  float *pfVar5;
  uint uVar6;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar4 = 0;
  if ((2 < *(int *)(param_1 + 0x2d0)) && (0 < *(int *)(param_1 + 0x2dc))) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    puVar2 = (uint *)&stack0xffffff6c;
    puVar3 = &stack0xffffff84;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_34 = local_7c + fStack_70;
    fStack_30 = fStack_78 + fStack_6c;
    fStack_2c = fStack_74 + fStack_68;
    fStack_4c = local_7c + fStack_70;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    pfVar5 = &stack0xffffffa8;
    fStack_10 = fStack_4c * _DAT_005cbfb6;
    fStack_c = fStack_48 * _DAT_005cbfb6;
    fStack_8 = fStack_44 * _DAT_005cbfb6;
    fStack_58 = fStack_4c * _DAT_005cbfb6;
    *(uint *)((int)&stack0xffffffac + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xfffffff4 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_00408d70(param_1,pfVar5);
    pfVar5 = &stack0xffffffd8;
    uVar6 = 0x40a00000;
    uStack_40 = uStack_64;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_1c = fStack_70 - local_7c;
    iVar1 = param_1 + 0x30;
    fStack_18 = fStack_6c - fStack_78;
    puVar2 = &stack0xffffffc0;
    param_1 = param_1 + 0x10e0;
    fStack_14 = fStack_68 - fStack_74;
    fStack_28 = fStack_70 - local_7c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_005b1c80(param_1,puVar2,iVar1,pfVar5,uVar6);
    return;
  }
  *(uint *)(param_1 + 0x70) = 2;
  FUN_00415890(param_1,0,0);
  puVar2 = (uint *)(param_1 + 0x2c4);
  if (puVar2 != (uint *)&DAT_0265370c) {
    *puVar2 = _DAT_0265370c;
    *(uint *)(param_1 + 0x2c8) = _DAT_02653710;
    *(uint *)(param_1 + 0x2cc) = _DAT_02653714;
  }
  if ((uint *)(param_1 + 0x2b8) != puVar2) {
    *(uint *)(param_1 + 0x2b8) = *puVar2;
    *(uint *)(param_1 + 700) = *(uint *)(param_1 + 0x2c8);
    *(uint *)(param_1 + 0x2c0) = *(uint *)(param_1 + 0x2cc);
  }
  return;
}
