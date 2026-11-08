// Name: FUN_005adad0
// Address: 005adad0
// Address Range: [[005adad0, 005add25]]
// Convention: unknown
// Signature: void FUN_005adad0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005adad0(int param_1,float param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_18b0 [1478];
  uint auStack_134 [12];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint auStack_ec [6];
  uint uStack_d4;
  uint auStack_d0 [7];
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float afStack_98 [2];
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  float afStack_80 [5];
  uint auStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar4 = 0;
  FUN_0041c090(param_1,param_2);
  param_2 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = param_2;
  if (0.0 < param_2) {
    return;
  }
  *(uint *)(param_1 + 0x2a8) = 0x3dcccccd;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar2 = auStack_ec;
  puVar3 = &fStack_104;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_30 = fStack_104 + fStack_f8;
  fStack_2c = fStack_100 + fStack_f4;
  fStack_28 = fStack_fc + fStack_f0;
  fStack_3c = fStack_104 + fStack_f8;
  *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + 0x12) * 4) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + 0x15) * 4);
  *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13) * 4) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16) * 4);
  fStack_60 = fStack_3c * _DAT_005f0f37;
  fStack_5c = fStack_38 * _DAT_005f0f37;
  fStack_58 = fStack_34 * _DAT_005f0f37;
  uStack_24 = FUN_0040cf60(0,0x40c90fdb);
  uStack_14 = uStack_24;
  uStack_20 = FUN_0040cf60(0,0x40c90fdb);
  uStack_14 = uStack_20;
  uStack_14 = FUN_0040cf60(0,0x40c90fdb);
  uStack_a8 = uStack_24;
  uStack_18 = uStack_14;
  uStack_a4 = uStack_20;
  uStack_a0 = uStack_14;
  fStack_84 = fStack_60;
  *(uint *)((int)afStack_80 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + 9) * 4);
  *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 10) * 4);
  FUN_00594380(&uStack_a8);
  uStack_d4 = auStack_d0[3];
  *(uint *)((int)auStack_d0 + (uint)bVar4 * 0xfffffff8) =
       auStack_d0[(uint)bVar4 * 0xfffffffe + 4];
  auStack_d0[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       auStack_d0[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5];
  (auStack_d0 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1)[(uint)bVar4 * -2 + 1] =
       (auStack_d0 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5)[(uint)bVar4 * -2 + 1];
  FUN_00593a10(&uStack_d4);
  puVar2 = (uint *)&stack0xfffffe9c;
  puVar3 = auStack_134;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_88 = FUN_0040cf60(0x3f000000,0x3f800000,auStack_134);
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_1c = uStack_88;
  uStack_14 = uStack_88;
  FUN_00591530(&uStack_90);
  fStack_9c = afStack_80[2];
  *(uint *)((int)afStack_98 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + 3) * 4);
  *(uint *)((int)afStack_98 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
  fStack_54 = fStack_9c + fStack_84;
  fStack_50 = afStack_98[0] + afStack_80[0];
  fStack_4c = afStack_98[1] + afStack_80[1];
  fStack_48 = fStack_9c + fStack_84;
  *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + 0xf) * 4) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + 0xc) * 4);
  *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10) * 4) =
       *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd) * 4);
  auStack_6c[0] = _DAT_0265370c;
  *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + 6) * 4) =
       *(uint *)(&DAT_02653710 + (uint)bVar4 * -8);
  *(uint *)((int)afStack_80 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4) =
       *(uint *)(&DAT_02653714 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  uStack_b4 = 0;
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  fStack_48 = fStack_48 + *(float *)(param_1 + 0x20);
  fStack_44 = fStack_44 + *(float *)(param_1 + 0x24);
  fStack_40 = fStack_40 + *(float *)(param_1 + 0x28);
  FUN_005a8300(0x026687B0,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3ed26e98,0x3ee66666,0x3f800000,
               &fStack_48,auStack_6c,&uStack_b4,0);
  return;
}
