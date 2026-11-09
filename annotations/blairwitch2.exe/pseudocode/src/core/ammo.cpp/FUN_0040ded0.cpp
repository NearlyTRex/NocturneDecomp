// Name: core_ammo.cpp_FUN_0040ded0
// Address: 0040ded0
// Address Range: [[0040ded0, 0040e0ea]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040ded0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ammo_cpp_FUN_0040ded0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_18a0 [1478];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *puVar9;
  byte *puVar10;
  uint uVar11;
  uint uVar12;
  uint auStack_154 [12];
  uint auStack_124 [12];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint auStack_dc [6];
  uint uStack_c4;
  uint auStack_c0 [3];
  uint uStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float afStack_94 [4];
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar5 = 0;
  param_2 = *(float *)(param_1 + 0x478) - param_2;
  *(float *)(param_1 + 0x478) = param_2;
  if (0.0 < param_2) {
    return;
  }
  *(uint *)(param_1 + 0x478) = 0x3dcccccd;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar3 = auStack_dc;
  puVar4 = &fStack_f4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  afStack_b0[3] = fStack_f4 + fStack_e8;
  fStack_a0 = fStack_f0 + fStack_e4;
  fStack_9c = fStack_ec + fStack_e0;
  fStack_50 = fStack_f4 + fStack_e8;
  *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 6) * 4) =
       *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + 4) * 4);
  *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
       *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
  afStack_94[2] = fStack_50 * _DAT_005cb0da;
  afStack_94[3] = fStack_4c * _DAT_005cb0da;
  fStack_84 = fStack_48 * _DAT_005cb0da;
  uStack_1c = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
  uStack_14 = uStack_1c;
  uVar1 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
  fStack_2c = afStack_94[2];
  *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 0xf) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + 3) * 4);
  *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
  uStack_20 = uVar1;
  uStack_14 = uVar1;
  uStack_78 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
  uStack_80 = uStack_1c;
  uStack_7c = uStack_20;
  uStack_18 = uStack_78;
  uStack_14 = uStack_78;
  core_xform_cpp_FUN_00594380(&uStack_80);
  uStack_b4 = uStack_c4;
  *(uint *)((int)afStack_b0 + (uint)bVar5 * 0xfffffff8) =
       *(uint *)((int)auStack_c0 + (uint)bVar5 * 0xfffffff8);
  *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -3) * 4);
  ((uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
  [(uint)bVar5 * -2 + 1] =
       ((uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -3) * 4))
       [(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&uStack_b4);
  uStack_74 = 0;
  puVar3 = auStack_124;
  puVar4 = auStack_154;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uStack_70 = 0;
  uStack_6c = 0x3e800000;
  core_xform_cpp_FUN_00591530(&uStack_74,auStack_154);
  puVar10 = (byte *)&uStack_98;
  fStack_38 = fStack_44;
  *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 0xc) * 4) =
       *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 9) * 4);
  *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4) =
       *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
  uVar12 = 0;
  uVar11 = 0;
  afStack_64[2] = fStack_38 + fStack_2c;
  afStack_64[3] = fStack_34 + fStack_28;
  fStack_54 = fStack_30 + fStack_24;
  fStack_68 = fStack_38 + fStack_2c;
  *(uint *)((int)afStack_64 + (uint)bVar5 * 0xfffffff8) =
       *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + 3) * 4);
  *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)afStack_64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
  puVar9 = (byte *)&fStack_68;
  uVar8 = 0x3f800000;
  uVar7 = 0x3f800000;
  uVar6 = 0x3f800000;
  uVar1 = 0;
  uStack_98 = _DAT_0265370c;
  *(uint *)((int)afStack_94 + (uint)bVar5 * 0xfffffff8) =
       *(uint *)(&DAT_02653710 + (uint)bVar5 * -8);
  *(uint *)((int)afStack_94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_68 = fStack_68 + *(float *)(param_1 + 0x20);
  afStack_64[0] = afStack_64[0] + *(float *)(param_1 + 0x24);
  afStack_64[1] = afStack_64[1] + *(float *)(param_1 + 0x28);
  unkafter_superopt_cpp_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f000000,0x3f800000,0,0x3e4ccccd,uVar1,uVar6,uVar7,uVar8,
             puVar9,puVar10,uVar11,uVar12);
  return;
}
