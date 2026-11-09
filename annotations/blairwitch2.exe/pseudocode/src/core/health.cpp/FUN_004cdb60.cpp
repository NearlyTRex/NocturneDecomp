// Name: core_health.cpp_FUN_004cdb60
// Address: 004cdb60
// Address Range: [[004cdb60, 004cdd9c]]
// Convention: unknown
// Signature: void core_health_cpp_FUN_004cdb60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_health_cpp_FUN_004cdb60(int param_1,float param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_18ac [1478];
  uint auStack_130 [12];
  uint auStack_100 [6];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint auStack_cc [7];
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint auStack_58 [2];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar4 = 0;
  unkafter_superopt_cpp_FUN_005a8180(param_1 + 0x154,param_2);
  param_2 = *(float *)(param_1 + 0x438) - param_2;
  *(float *)(param_1 + 0x438) = param_2;
  if (0.0 < param_2) {
    return;
  }
  *(uint *)(param_1 + 0x438) = 0x3e4ccccd;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar2 = auStack_100;
  puVar3 = &fStack_e8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_44 = fStack_e8 + fStack_dc;
  afStack_40[0] = fStack_e4 + fStack_d8;
  afStack_40[1] = fStack_e0 + fStack_d4;
  fStack_a4 = fStack_e8 + fStack_dc;
  *(uint *)((int)afStack_a0 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)afStack_40 + (uint)bVar4 * 0xfffffff8);
  *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)afStack_40 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
  fStack_2c = fStack_a4 * _DAT_005d99bc;
  fStack_28 = afStack_a0[0] * _DAT_005d99bc;
  fStack_24 = afStack_a0[1] * _DAT_005d99bc;
  uStack_1c = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
  uStack_14 = uStack_1c;
  uStack_18 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
  uStack_14 = uStack_18;
  uStack_14 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
  uStack_50 = uStack_1c;
  uStack_20 = uStack_14;
  uStack_4c = uStack_18;
  uStack_48 = uStack_14;
  fStack_80 = fStack_2c;
  *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + 9) * 4) =
       *(uint *)((int)afStack_40 + ((uint)bVar4 * -2 + 6) * 4);
  *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 10) * 4) =
       *(uint *)((int)afStack_40 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4);
  core_xform_cpp_FUN_00594380(&uStack_50);
  uStack_d0 = auStack_cc[3];
  *(uint *)((int)auStack_cc + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + -7) * 4);
  auStack_cc[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + -6) * 4);
  (auStack_cc + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1)[(uint)bVar4 * -2 + 1] =
       ((uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + -6) * 4))
       [(uint)bVar4 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&uStack_d0);
  uStack_68 = 0;
  puVar2 = (uint *)&stack0xfffffea0;
  puVar3 = auStack_130;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_64 = 0;
  uStack_60 = 0x3f000000;
  core_xform_cpp_FUN_00591530(&uStack_68,auStack_130);
  fStack_8c = afStack_a0[2];
  *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + 6) * 4) =
       *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + 3) * 4);
  *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4) =
       *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
  afStack_40[2] = fStack_8c + fStack_80;
  afStack_40[3] = fStack_88 + fStack_7c;
  fStack_30 = fStack_84 + fStack_78;
  fStack_74 = fStack_8c + fStack_80;
  *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + 0xc) * 4) =
       *(uint *)((int)afStack_40 + ((uint)bVar4 * -2 + 3) * 4);
  *(uint *)((int)afStack_a0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd) * 4) =
       *(uint *)((int)afStack_40 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
  uStack_5c = _DAT_0265370c;
  *(uint *)((int)auStack_58 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)(&DAT_02653710 + (uint)bVar4 * -8);
  *(uint *)((int)auStack_58 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)(&DAT_02653714 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  uStack_ac = 0x3f800000;
  uStack_b0 = 0;
  uStack_a8 = 0;
  fStack_74 = fStack_74 + *(float *)(param_1 + 0x20);
  fStack_70 = fStack_70 + *(float *)(param_1 + 0x24);
  fStack_6c = fStack_6c + *(float *)(param_1 + 0x28);
  unkafter_superopt_cpp_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3f800000,0,0,
             &fStack_74,&uStack_5c,&uStack_b0,0);
  return;
}
