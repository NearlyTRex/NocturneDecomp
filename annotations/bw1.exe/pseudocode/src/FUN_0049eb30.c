// Name: FUN_0049eb30
// Address: 0049eb30
// Address Range: [[0049eb30, 0049ed8b]]
// Convention: unknown
// Signature: void FUN_0049eb30(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049eb30(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10a8 [1010];
  uint *puVar5;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  
  bVar4 = 0;
  iVar3 = FUN_00483e60(DAT_00612560);
  if (iVar3 != 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  puVar5 = &stack0xffffff64;
  uStack_9c = uStack_3c;
  *(uint *)((int)&stack0xffffff68 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffff6c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_00408b40(param_1,puVar5);
  fStack_c0 = fStack_b4;
  (&stack0xffffff44)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffff50 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff48 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff54 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  uStack_88 = *(uint *)(param_1 + 0x2e8);
  uStack_90 = 0;
  uStack_8c = 0;
  FUN_00408ac0(param_1,&stack0xffffff70);
  fVar2 = fStack_bc;
  fVar1 = fStack_c0;
  fStack_6c = fStack_24;
  (&stack0xffffff98)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff9c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_48 = -fStack_6c;
  fStack_30 = fVar1 + fStack_6c;
  fStack_2c = fVar2 + fStack_68;
  fStack_28 = fStack_b8 + fStack_64;
  fStack_60 = fVar1 + fStack_6c;
  (&stack0xffffffa4)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_44 = -fStack_68;
  fStack_40 = -fStack_64;
  fStack_84 = fStack_48;
  (&stack0xffffff80)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&stack0xffffff88 != &stack0xffffff7c) {
    fStack_78 = fStack_84;
    fStack_74 = fStack_80;
    fStack_70 = fStack_7c;
  }
  fStack_18 = SQRT(fStack_70 * fStack_70 + fStack_78 * fStack_78 + fStack_74 * fStack_74);
  if (fStack_18 <= 0.0) {
    fStack_74 = 0.0;
    fStack_78 = 0.0;
    fStack_70 = 0.0;
  }
  else {
    fVar1 = 1.0 / fStack_18;
    fStack_78 = fStack_78 * fVar1;
    fStack_74 = fStack_74 * fVar1;
    fStack_70 = fStack_70 * fVar1;
  }
  FUN_004b60e0(0x01C57074,&stack0xffffff40,&stack0xffffffa0,0x3f800000,0,0xff,0,
               *(float *)(param_1 + 0x578) * _DAT_005dc91f * _DAT_005dc923);
  *(uint *)(param_1 + 0x57c) = 1;
  fStack_54 = fStack_60 - fStack_c0;
  fStack_50 = fStack_5c - fStack_bc;
  fStack_4c = fStack_58 - fStack_b8;
  fStack_a8 = fStack_60 - fStack_c0;
  *(uint *)((int)&stack0xffffff5c + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff60 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  *(float *)(param_1 + 0x580) =
       SQRT(fStack_a0 * fStack_a0 + fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4);
  return;
}
