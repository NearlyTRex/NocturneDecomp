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
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_1930 [1490];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *puVar11;
  byte *puVar12;
  byte *puVar13;
  uint uVar14;
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
  float fStack_9c;
  uint auStack_98 [2];
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
  uint uStack_50;
  uint uStack_4c;
  float fStack_48;
  float afStack_44 [4];
  uint uStack_34;
  CComplexPolygon *pCStack_1c;
  CComplexPolygon *pCStack_18;
  uint uStack_14;
  
  bVar7 = 0;
  iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar3 == 0) {
    iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar3 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
    }
  }
  pCStack_1c = (CComplexPolygon *)(param_1 + 0x154);
  unkafter_superopt_cpp_FUN_005a8180(pCStack_1c,param_2);
  param_2 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = param_2;
  if (param_2 <= 0.0) {
    iVar3 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130(pCStack_1c);
    if (iVar3 != 0) {
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,param_1 + 0x1134 + *(int *)(param_1 + 0x11860) * 0x30);
      fStack_a8 = fStack_6c;
      *(uint *)((int)afStack_c0 + ((uint)bVar7 * -2 + 7) * 4) =
           *(uint *)((int)afStack_80 + ((uint)bVar7 * -2 + 6) * 4);
      *(uint *)((int)afStack_c0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 8) * 4) =
           *(uint *)((int)afStack_80 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 7) * 4);
      iVar3 = 0;
      *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
      pCStack_18 = pCStack_1c;
      do {
        iVar4 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar4 != 0) {
          afStack_44[3] = (float)core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
          uStack_14 = afStack_44[3];
          afStack_44[2] = (float)core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
          uStack_14 = afStack_44[2];
          uStack_14 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020(uStack_14);
          puVar13 = (byte *)&uStack_c4;
          uStack_c4 = auStack_100[3];
          *(uint *)((int)afStack_c0 + (uint)bVar7 * 0xfffffff8) =
               *(uint *)((int)auStack_100 + ((uint)bVar7 * -2 + 4) * 4);
          *(uint *)((int)afStack_c0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
               *(uint *)((int)auStack_100 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 5) * 4);
          ((uint *)((int)afStack_c0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4))
          [(uint)bVar7 * -2 + 1] =
               ((uint *)((int)auStack_100 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 5) * 4))
               [(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(afStack_44[2],puVar13);
          puVar13 = (byte *)&uStack_104;
          uStack_104 = auStack_150[3];
          *(uint *)((int)auStack_100 + (uint)bVar7 * 0xfffffff8) =
               auStack_150[(uint)bVar7 * 0xfffffffe + 4];
          *(uint *)((int)auStack_100 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
               auStack_150[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 5];
          ((uint *)((int)auStack_100 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4))
          [(uint)bVar7 * -2 + 1] =
               (auStack_150 + (uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 5)
               [(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(afStack_44[3],puVar13);
          uStack_114 = uStack_134;
          *(uint *)((int)auStack_110 + (uint)bVar7 * 0xfffffff8) =
               *(uint *)((int)auStack_110 + ((uint)bVar7 * -2 + -8) * 4);
          *(uint *)((int)auStack_110 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
               *(uint *)((int)auStack_110 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + -7) * 4);
          ((uint *)((int)auStack_110 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4))
          [(uint)bVar7 * -2 + 1] =
               ((uint *)((int)auStack_110 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + -7) * 4))
               [(uint)bVar7 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_114);
          uStack_e4 = uStack_154;
          *(uint *)((int)auStack_e0 + (uint)bVar7 * 0xfffffff8) =
               *(uint *)((int)auStack_150 + (uint)bVar7 * 0xfffffff8);
          *(uint *)((int)auStack_e0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
               auStack_150[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1];
          ((uint *)((int)auStack_e0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4))
          [(uint)bVar7 * -2 + 1] =
               (auStack_150 + (uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1)
               [(uint)bVar7 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_e4);
          uStack_d4 = uStack_124;
          *(uint *)((int)auStack_d0 + (uint)bVar7 * 0xfffffff8) =
               *(uint *)((int)auStack_100 + ((uint)bVar7 * -2 + -8) * 4);
          *(uint *)((int)auStack_d0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
               *(uint *)((int)auStack_100 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + -7) * 4);
          ((uint *)((int)auStack_d0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4))
          [(uint)bVar7 * -2 + 1] =
               ((uint *)((int)auStack_100 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + -7) * 4))
               [(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&uStack_d4);
          puVar5 = auStack_184;
          puVar6 = auStack_1b4;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          uStack_50 = core_actor_cpp_FUN_0040cf60(0x3f800000,0x40000000,auStack_1b4);
          uStack_54 = 0;
          uStack_4c = 0;
          uStack_34 = uStack_50;
          uStack_14 = uStack_50;
          core_xform_cpp_FUN_00591530(&uStack_54);
          uStack_90 = 0;
          uStack_8c = 0x40a00000;
          uStack_88 = 0;
          afStack_c0[3] = fStack_84;
          *(uint *)((int)afStack_c0 + ((uint)bVar7 * -2 + 4) * 4) =
               *(uint *)((int)afStack_80 + (uint)bVar7 * 0xfffffff8);
          *(uint *)((int)afStack_c0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 5) * 4) =
               *(uint *)((int)afStack_80 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4);
          uVar14 = 0;
          puVar13 = (byte *)&uStack_90;
          afStack_80[2] = afStack_c0[3] + fStack_a8;
          afStack_80[3] = fStack_b0 + fStack_a4;
          fStack_70 = fStack_ac + fStack_a0;
          fStack_48 = afStack_c0[3] + fStack_a8;
          *(uint *)((int)afStack_44 + (uint)bVar7 * 0xfffffff8) =
               *(uint *)((int)afStack_80 + ((uint)bVar7 * -2 + 3) * 4);
          *(uint *)((int)afStack_44 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
               *(uint *)((int)afStack_80 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4);
          puVar12 = (byte *)&fStack_9c;
          puVar11 = (byte *)&fStack_48;
          fStack_60 = fStack_48 - fStack_a8;
          uVar10 = 0;
          fStack_5c = afStack_44[0] - fStack_a4;
          uVar9 = 0x3e4ccccd;
          fStack_58 = afStack_44[1] - fStack_a0;
          uVar8 = 0;
          fStack_9c = fStack_48 - fStack_a8;
          *(uint *)((int)auStack_98 + (uint)bVar7 * 0xfffffff8) =
               *(uint *)((int)afStack_80 + ((uint)bVar7 * -2 + 9) * 4);
          *(uint *)((int)auStack_98 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
               *(uint *)((int)afStack_80 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 10) * 4);
          uStack_14 = core_actor_cpp_FUN_0040cf60(uVar8,uVar9,uVar10,puVar11,puVar12,puVar13,uVar14)
          ;
          uStack_14 = core_actor_cpp_FUN_0040cf60(0x3e99999a,0x3f19999a,uStack_14);
          unkafter_superopt_cpp_FUN_005a8300
                    (pCStack_18,0x3f800000,0x3f800000,0,0x3f333333,0,uStack_14);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
    }
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 != 0) {
    iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Chasing");
    if (iVar3 != 0) {
      iVar3 = unkaddr_0059d350_cpp_FUN_0059dae0
                        (param_1 + 0x10af8,"ChaseComplete","RangeAttack");
      if (iVar3 != 0) {
        fVar2 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(param_1 + 0x20);
        fVar1 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x28) - *(float *)(param_1 + 0x28);
        fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
        if (fVar1 < _DAT_005fedb0) {
          *(float *)(param_1 + 0x11394) = fVar1;
          return;
        }
      }
    }
  }
  return;
}
