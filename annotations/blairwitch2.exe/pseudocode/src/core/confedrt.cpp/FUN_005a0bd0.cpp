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
  uint *puVar3;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1930 [1490];
  float fVar8;
  float fVar9;
  float blue;
  CVector3f *position_offset;
  CVector3f *velocity;
  CQuaternion4f *quat2_in;
  CVector3f *acceleration;
  CQuaternion4f *quat2_in_00;
  CMatrix3x4f *matrix;
  CMatrix3x4f CStack_1b4;
  CMatrix3x4f CStack_184;
  CQuaternion4f CStack_154;
  CQuaternion4f CStack_144;
  CQuaternion4f CStack_134;
  CQuaternion4f CStack_124;
  CQuaternion4f CStack_114;
  CQuaternion4f CStack_104;
  CQuaternion4f CStack_f4;
  CQuaternion4f CStack_e4;
  CQuaternion4f CStack_d4;
  CQuaternion4f CStack_c4;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CSimpleParticleSystem *pCStack_1c;
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
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
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 (CMatrix3x4f *)(param_1 + 0x1134 + *(int *)(param_1 + 0x11860) * 0x30),&CStack_6c);
      afStack_b0[2] = CStack_6c.x;
      afStack_b0[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_6c + (uint)bVar7 * -8 + 4);
      afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_6c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      iVar1 = 0;
      *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
      pCStack_18 = pCStack_1c;
      do {
        iVar2 = core_bwgrndma_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_38;
          fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_3c;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14,&CStack_f4);
          quat2_in_00 = &CStack_c4;
          CStack_c4.w = CStack_f4.w;
          puVar5 = (uint *)((int)&CStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&CStack_f4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&CStack_c4 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_f4 + (uint)bVar7 * -8 + 4);
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_3c,&CStack_144);
          quat2_in = &CStack_104;
          CStack_104.w = CStack_144.w;
          puVar5 = (uint *)((int)&CStack_104 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&CStack_144 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&CStack_104 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_144 + (uint)bVar7 * -8 + 4);
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_38,&CStack_134);
          CStack_114.w = CStack_134.w;
          puVar5 = (uint *)((int)&CStack_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&CStack_134 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_134 + (uint)bVar7 * -8 + 4);
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_114,quat2_in,&CStack_154);
          CStack_e4.w = CStack_154.w;
          puVar5 = (uint *)((int)&CStack_e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&CStack_154 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&CStack_e4 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_154 + (uint)bVar7 * -8 + 4);
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_e4,quat2_in_00,&CStack_124);
          CStack_d4.w = CStack_124.w;
          puVar5 = (uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          puVar3 = (uint *)((int)&CStack_124 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_124 + (uint)bVar7 * -8 + 4);
          *puVar5 = *puVar3;
          puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_d4,&CStack_184);
          matrix = &CStack_1b4;
          pCVar4 = &CStack_184;
          pCVar6 = &CStack_1b4;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            pCVar6->m[0].w = pCVar4->m[0].w;
            pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
          }
          CStack_54.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
          CStack_54.x = 0.0;
          CStack_54.z = 0.0;
          fStack_34 = CStack_54.y;
          fStack_14 = CStack_54.y;
          core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_54,matrix,&CStack_84);
          CStack_90.x = 0.0;
          CStack_90.y = 5.0;
          CStack_90.z = 0.0;
          fStack_b4 = CStack_84.x;
          afStack_b0[(uint)bVar7 * -2] = *(float *)((int)&CStack_84 + (uint)bVar7 * -8 + 4);
          afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)((int)&CStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          iVar2 = 0;
          acceleration = &CStack_90;
          fStack_78 = fStack_b4 + afStack_b0[2];
          afStack_74[0] = afStack_b0[0] + afStack_b0[3];
          afStack_74[1] = afStack_b0[1] + fStack_a0;
          CStack_48.x = fStack_b4 + afStack_b0[2];
          *(float *)((int)&CStack_48 + (uint)bVar7 * -8 + 4) = afStack_74[(uint)bVar7 * -2];
          *(float *)((int)&CStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          velocity = &CStack_9c;
          position_offset = &CStack_48;
          fStack_60 = CStack_48.x - afStack_b0[2];
          blue = 0.0;
          afStack_5c[0] = CStack_48.y - afStack_b0[3];
          fVar9 = 0.2;
          afStack_5c[1] = CStack_48.z - fStack_a0;
          fVar8 = 0.0;
          CStack_9c.x = CStack_48.x - afStack_b0[2];
          *(float *)((int)&CStack_9c + (uint)bVar7 * -8 + 4) = afStack_5c[(uint)bVar7 * -2];
          *(float *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar8,fVar9);
          fStack_14 = fVar8;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_18,1.0,1.0,0.0,0.7,0.0,fStack_14,fVar8,blue,position_offset,velocity,
                     acceleration,iVar2);
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
        fVar9 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(param_1 + 0x20);
        fVar8 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x28) - *(float *)(param_1 + 0x28);
        fVar8 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
        if (fVar8 < _DAT_005fedb0) {
          *(float *)(param_1 + 0x11394) = fVar8;
          return;
        }
      }
    }
  }
  return;
}
