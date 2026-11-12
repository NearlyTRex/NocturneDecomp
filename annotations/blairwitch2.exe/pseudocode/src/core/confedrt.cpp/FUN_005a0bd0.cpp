// Name: core_confedrt.cpp_FUN_005a0bd0
// Address: 005a0bd0
// Address Range: [[005a0bd0, 005a0fcf]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a0bd0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a0bd0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1930 [1490];
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  byte *puVar12;
  uint uVar13;
  CMatrix3x4f CStack_184;
  uint uStack_154;
  float afStack_150 [7];
  uint uStack_134;
  float fStack_124;
  float afStack_114 [4];
  float afStack_104 [4];
  uint uStack_f4;
  float afStack_e4 [4];
  CQuaternion4f CStack_d4;
  uint uStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  float afStack_90 [4];
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
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
      afStack_c0[(uint)bVar5 * -2 + 7] = afStack_80[(uint)bVar5 * -2 + 6];
      afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
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
          puVar11 = &uStack_c4;
          uStack_c4 = uStack_f4;
          afStack_c0[(uint)bVar5 * -2] = afStack_150[(uint)bVar5 * -2 + 0x18];
          afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
          (afStack_c0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
               (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(afStack_44[2],puVar11);
          pfVar4 = afStack_150 + 0x13;
          afStack_104[0] = afStack_150[3];
          afStack_150[(uint)bVar5 * -2 + 0x14] = afStack_150[(uint)bVar5 * -2 + 4];
          afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15] =
               afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
          (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1] =
               (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(afStack_44[3],pfVar4);
          afStack_114[0] = (float)uStack_134;
          afStack_150[(uint)bVar5 * -2 + 0x10] = afStack_150[(uint)bVar5 * -2 + 8];
          afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
               afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
          (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1] =
               (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_150 + 0xf);
          afStack_e4[0] = (float)uStack_154;
          afStack_150[(uint)bVar5 * -2 + 0x1c] = afStack_150[(uint)bVar5 * -2];
          afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d] =
               afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1] =
               (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_150 + 0x1b);
          CStack_d4.w = fStack_124;
          pfVar4 = (float *)((int)&CStack_d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          *(float *)((int)&CStack_d4 + (uint)bVar5 * -8 + 4) = afStack_150[(uint)bVar5 * -2 + 0xc];
          *pfVar4 = afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
          pfVar4[(uint)bVar5 * -2 + 1] =
               (afStack_150 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_d4,&CStack_184);
          puVar12 = &stack0xfffffe4c;
          pCVar3 = &CStack_184;
          pfVar4 = (float *)&stack0xfffffe4c;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar4 = pCVar3->m[0].w;
            pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
            pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
          }
          fStack_50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          fStack_54 = 0.0;
          uStack_4c = 0;
          fStack_34 = fStack_50;
          fStack_14 = fStack_50;
          core_xform_cpp_FUN_00591530(afStack_80 + 0xb,puVar12);
          afStack_90[0] = 0.0;
          afStack_90[1] = 5.0;
          afStack_90[2] = 0.0;
          afStack_c0[3] = afStack_90[3];
          afStack_c0[(uint)bVar5 * -2 + 4] = afStack_80[(uint)bVar5 * -2];
          afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
               afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          uVar13 = 0;
          pfVar4 = afStack_c0 + 0xc;
          afStack_80[2] = afStack_c0[3] + fStack_a8;
          afStack_80[3] = fStack_b0 + fStack_a4;
          fStack_70 = fStack_ac + fStack_a0;
          fStack_48 = afStack_c0[3] + fStack_a8;
          afStack_44[(uint)bVar5 * -2] = afStack_80[(uint)bVar5 * -2 + 3];
          afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          pfVar10 = afStack_c0 + 9;
          pfVar9 = afStack_80 + 0xe;
          fStack_60 = fStack_48 - fStack_a8;
          uVar8 = 0;
          fStack_5c = afStack_44[0] - fStack_a4;
          fVar7 = 0.2;
          fStack_58 = afStack_44[1] - fStack_a0;
          fVar6 = 0.0;
          afStack_9c[0] = fStack_48 - fStack_a8;
          afStack_c0[(uint)bVar5 * -2 + 10] = afStack_80[(uint)bVar5 * -2 + 9];
          afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xb] =
               afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar6,fVar7);
          fStack_14 = fVar6;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_18,0x3f800000,0x3f800000,0,0x3f333333,0,fStack_14,fVar6,uVar8,pfVar9,
                     pfVar10,pfVar4,uVar13);
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
