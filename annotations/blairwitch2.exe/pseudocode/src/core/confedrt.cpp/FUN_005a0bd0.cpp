// Name: core_confedrt.cpp_FUN_005a0bd0
// Address: 005a0bd0
// Address Range: [[005a0bd0, 005a0fcf]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a0bd0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a0bd0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1930 [1490];
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  byte *puVar10;
  uint uVar11;
  uint auStack_1b4 [12];
  uint auStack_184 [12];
  uint uStack_154;
  uint auStack_150 [7];
  uint uStack_134;
  uint uStack_124;
  uint uStack_114;
  uint auStack_110 [3];
  uint uStack_104;
  uint auStack_100 [7];
  uint uStack_e4;
  uint auStack_e0 [3];
  uint uStack_d4;
  uint auStack_d0 [3];
  uint uStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CSimpleParticleSystem *pCStack_1c;
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar1 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar1 == 0) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
    }
  }
  pCStack_1c = (CSimpleParticleSystem *)(param_1 + 0x154);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_1c,param_2);
  param_2 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = param_2;
  if (param_2 <= 0.0) {
    iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_1c);
    if (iVar1 != 0) {
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,param_1 + 0x1134 + *(int *)(param_1 + 0x11860) * 0x30);
      fStack_a8 = fStack_6c;
      *(uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + 7) * 4) =
           *(uint *)((int)afStack_80 + ((uint)bVar5 * -2 + 6) * 4);
      *(uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 8) * 4) =
           *(uint *)((int)afStack_80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
      iVar1 = 0;
      *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
      pCStack_18 = pCStack_1c;
      do {
        iVar2 = core_bwgrndma_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          afStack_44[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = afStack_44[3];
          afStack_44[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = afStack_44[2];
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14);
          puVar10 = (byte *)&uStack_c4;
          uStack_c4 = auStack_100[3];
          *(uint *)((int)afStack_c0 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)auStack_100 + ((uint)bVar5 * -2 + 4) * 4);
          *(uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               *(uint *)((int)auStack_100 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
          ((uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
          [(uint)bVar5 * -2 + 1] =
               ((uint *)((int)auStack_100 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
               [(uint)bVar5 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(afStack_44[2],puVar10);
          puVar10 = (byte *)&uStack_104;
          uStack_104 = auStack_150[3];
          *(uint *)((int)auStack_100 + (uint)bVar5 * 0xfffffff8) =
               auStack_150[(uint)bVar5 * 0xfffffffe + 4];
          *(uint *)((int)auStack_100 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               auStack_150[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
          ((uint *)((int)auStack_100 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
          [(uint)bVar5 * -2 + 1] =
               (auStack_150 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)
               [(uint)bVar5 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(afStack_44[3],puVar10);
          uStack_114 = uStack_134;
          *(uint *)((int)auStack_110 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)auStack_110 + ((uint)bVar5 * -2 + -8) * 4);
          *(uint *)((int)auStack_110 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               *(uint *)((int)auStack_110 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
          ((uint *)((int)auStack_110 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
          [(uint)bVar5 * -2 + 1] =
               ((uint *)((int)auStack_110 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
               [(uint)bVar5 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_114);
          uStack_e4 = uStack_154;
          *(uint *)((int)auStack_e0 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)auStack_150 + (uint)bVar5 * 0xfffffff8);
          *(uint *)((int)auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               auStack_150[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
          ((uint *)((int)auStack_e0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
          [(uint)bVar5 * -2 + 1] =
               (auStack_150 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
               [(uint)bVar5 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_e4);
          uStack_d4 = uStack_124;
          *(uint *)((int)auStack_d0 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)auStack_100 + ((uint)bVar5 * -2 + -8) * 4);
          *(uint *)((int)auStack_d0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               *(uint *)((int)auStack_100 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
          ((uint *)((int)auStack_d0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
          [(uint)bVar5 * -2 + 1] =
               ((uint *)((int)auStack_100 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
               [(uint)bVar5 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&uStack_d4);
          puVar10 = (byte *)auStack_1b4;
          puVar3 = auStack_184;
          puVar4 = auStack_1b4;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          fStack_50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          uStack_54 = 0;
          uStack_4c = 0;
          fStack_34 = fStack_50;
          fStack_14 = fStack_50;
          core_xform_cpp_FUN_00591530(&uStack_54,puVar10);
          uStack_90 = 0;
          uStack_8c = 0x40a00000;
          uStack_88 = 0;
          afStack_c0[3] = fStack_84;
          *(uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + 4) * 4) =
               *(uint *)((int)afStack_80 + (uint)bVar5 * 0xfffffff8);
          *(uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4) =
               *(uint *)((int)afStack_80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
          uVar11 = 0;
          puVar3 = &uStack_90;
          afStack_80[2] = afStack_c0[3] + fStack_a8;
          afStack_80[3] = fStack_b0 + fStack_a4;
          fStack_70 = fStack_ac + fStack_a0;
          fStack_48 = afStack_c0[3] + fStack_a8;
          *(uint *)((int)afStack_44 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)afStack_80 + ((uint)bVar5 * -2 + 3) * 4);
          *(uint *)((int)afStack_44 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               *(uint *)((int)afStack_80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
          puVar4 = afStack_9c;
          pfVar9 = &fStack_48;
          fStack_60 = fStack_48 - fStack_a8;
          uVar8 = 0;
          fStack_5c = afStack_44[0] - fStack_a4;
          fVar7 = 0.2;
          fStack_58 = afStack_44[1] - fStack_a0;
          fVar6 = 0.0;
          afStack_9c[0] = fStack_48 - fStack_a8;
          *(uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + 10) * 4) =
               *(uint *)((int)afStack_80 + ((uint)bVar5 * -2 + 9) * 4);
          *(uint *)((int)afStack_c0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xb) * 4) =
               *(uint *)((int)afStack_80 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
          fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar6,fVar7);
          fStack_14 = fVar6;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_18,0x3f800000,0x3f800000,0,0x3f333333,0,fStack_14,fVar6,uVar8,pfVar9,
                     puVar4,puVar3,uVar11);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x14);
    }
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar1 != 0) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Chasing");
    if (iVar1 != 0) {
      iVar1 = core_muzzle_cpp_FUN_0059dae0
                        (param_1 + 0x10af8,"ChaseComplete","RangeAttack");
      if (iVar1 != 0) {
        fVar7 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(param_1 + 0x20);
        fVar6 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x28) - *(float *)(param_1 + 0x28);
        fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
        if (fVar6 < _DAT_005fedb0) {
          *(float *)(param_1 + 0x11394) = fVar6;
          return;
        }
      }
    }
  }
  return;
}
