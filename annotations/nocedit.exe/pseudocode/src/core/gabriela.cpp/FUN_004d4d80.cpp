// Name: core_gabriela.cpp_FUN_004d4d80
// Address: 004d4d80
// Address Range: [[004d4d80, 004d5547]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4d80()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_gabriella.cpp_FUN_004d4d80(uint param_1) */

void core_gabriela_cpp_FUN_004d4d80(void)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000004;
  float afStackY_19d0 [1521];
  CQuaternion4f *pCVar7;
  CVector3f *euler_angles;
  CQuaternion4f *quat2_ptr;
  float fVar8;
  code *pcVar9;
  CQuaternion4f *in_stack_fffffe0c;
  uint local_1e4;
  float local_1d4;
  uint local_1c4;
  uint local_1b4;
  CQuaternion4f local_1a4;
  CQuaternion4f local_194;
  float local_184;
  float afStack_180 [3];
  CQuaternion4f local_174;
  CQuaternion4f local_164;
  CQuaternion4f local_154;
  CQuaternion4f local_144;
  float local_134;
  float afStack_130 [7];
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  float local_f4;
  float afStack_f0 [7];
  float local_d4;
  float local_c4;
  CQuaternion4f local_b4;
  CQuaternion4f local_a4;
  float local_94;
  float afStack_90 [4];
  float local_80;
  float local_7c;
  byte local_78 [16];
  float local_68;
  float local_64;
  double local_58;
  CDeformableModelInstance *local_50;
  float local_4c;
  CDeformableModelInstance *local_44;
  float local_40;
  uint local_3c;
  uint local_38;
  float local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar6 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158));
  local_78._0_4_ = *(float *)(in_stack_00000004 + 0x1fc04);
  local_78._8_4_ = 0.0;
  local_78._4_4_ = *(float *)(in_stack_00000004 + 0x1fc08);
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CQuaternion4f *)local_78,(CVector3f *)in_stack_fffffe0c);
  local_1a4.w = afStack_130[3];
  pfVar3 = (float *)((int)&local_1a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_1a4 + (uint)bVar6 * -8 + 4) = afStack_130[(uint)bVar6 * -2 + 4];
  *pfVar3 = afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_130 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  if (0.0 < *(float *)(in_stack_00000004 + 0x1fbdc)) {
    local_28 = *(float *)(in_stack_00000004 + 0x1fbdc) / _DAT_0065e7b0;
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    if (0x3F51EB85 < *(float *)(in_stack_00000004 + 0x1fbdc)) {
      local_28 = (1.0 - (1.0 - *(float *)(in_stack_00000004 + 0x1fc10)) *
                        ((*(float *)(in_stack_00000004 + 0x1fbdc) - 0x3F51EB85) /
                        (1.0 - 0x3F51EB85))) * local_28;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (*(CDemonActor **)(in_stack_00000004 + 0x1fa68),"CGun");
    if (iVar1 == 0) {
      if ((float)0.001 < local_28) {
        local_24 = *(float *)(in_stack_00000004 + 0x1fbdc);
        if (0x3F51EB85 < local_24) {
          local_24 = 0x3F51EB85;
        }
        local_24 = (local_24 - _DAT_0065e7b0) / (1.0 - _DAT_0065e7b0);
        if (local_24 < 0.0) {
          local_24 = 0.0;
        }
        if (1.0 < local_24) {
          local_24 = 1.0;
        }
        local_50 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             ((CMotionController *)(in_stack_00000004 + 0x158),DAT_02d7b87c,local_24
                             );
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d7b87c,
                   (float)local_50,local_28,DAT_02d7b858,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        if (0x3F51EB85 <= *(float *)(in_stack_00000004 + 0x1fbdc)) {
          local_2c = ((*(float *)(in_stack_00000004 + 0x1fbdc) - 0x3F51EB85) /
                     (1.0 - 0x3F51EB85)) * *(float *)(in_stack_00000004 + 0x1fc10);
          if (local_2c < *(float *)(in_stack_00000004 + 0x1fc0c)) {
            local_2c = *(float *)(in_stack_00000004 + 0x1fc0c);
          }
          if ((float)0.001 < local_2c) {
            local_58 = (double)*(float *)(in_stack_00000004 + 0x1fc0c);
            local_34 = 0.0;
            if (0.0 < local_58) {
              local_34 = 1.0 - *(float *)(in_stack_00000004 + 0x1fc0c);
            }
            local_14 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                      (local_14,DAT_02d7b880,local_34,local_2c * (float)0.90000000000000002,DAT_02d7b890
                       ,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            afStack_90[3] = _DAT_02d7b838 * 3.141593f;
            local_78._12_4_ = afStack_90[3] / 180.0f;
            local_80 = _DAT_02d7b83c * 3.141593f;
            local_7c = _DAT_02d7b840 * 3.141593f;
            local_68 = local_80 * 0.005555556f;
            local_64 = local_7c * 0.005555556f;
            pCVar7 = &local_1a4;
            core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                      ((CQuaternion4f *)(local_78 + 0xc),(CVector3f *)pCVar7);
            local_174.w = local_184;
            pfVar3 = (float *)((int)&local_174 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(float *)((int)&local_174 + (uint)bVar6 * -8 + 4) = afStack_180[(uint)bVar6 * -2];
            *pfVar3 = afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            pfVar3[(uint)bVar6 * -2 + 1] =
                 (afStack_180 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_174,pCVar7,in_stack_fffffe0c);
            fVar8 = local_2c;
            pcVar9 = core_gabriela_cpp_FUN_004d2a80;
            local_104.w = local_f4;
            pfVar3 = (float *)((int)&local_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(float *)((int)&local_104 + (uint)bVar6 * -8 + 4) = afStack_f0[(uint)bVar6 * -2];
            iVar1 = DAT_02d7b894;
            *pfVar3 = afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            pfVar3[(uint)bVar6 * -2 + 1] =
                 (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (local_14,&local_104,fVar8,iVar1,pcVar9);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((CQuaternion4f *)(in_stack_00000004 + 0x808 + DAT_02d7b88c * 0x10),
                 (CQuaternion4f *)(DAT_02d7b860 * 0x10 + in_stack_00000004 + 0x808),
                 (CQuaternion4f *)(*(float *)(in_stack_00000004 + 0x1fbdc) / _DAT_0065e7b4),
                 (float)in_stack_fffffe0c);
      puVar5 = (uint *)(DAT_02d7b88c * 0x10 + 0x808 + in_stack_00000004);
      puVar4 = puVar5 + (uint)bVar6 * -2 + 1;
      *puVar5 = local_1b4;
      *puVar4 = *(uint *)(&stack0xfffffe50 + (uint)bVar6 * -8);
      puVar4[(uint)bVar6 * -2 + 1] =
           *(uint *)(&stack0xfffffe54 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffe54 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      iVar1 = DAT_02d7b880;
      if (0.0 < *(float *)(in_stack_00000004 + 0x1fc0c)) {
        *(uint *)(in_stack_00000004 + 0x23a8) = 2;
        local_1c = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             ((CMotionController *)(in_stack_00000004 + 0x158),iVar1,
                              *(float *)(in_stack_00000004 + 0x1fc0c));
        local_14 = local_1c;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d7b880,
                   (float)local_1c,0);
        *(uint *)(in_stack_00000004 + 0x23a8) = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((CQuaternion4f *)(in_stack_00000004 + 0x808 + DAT_02d7b88c * 0x10),
                 (CQuaternion4f *)(DAT_02d7b860 * 0x10 + in_stack_00000004 + 0x808),
                 (CQuaternion4f *)(*(float *)(in_stack_00000004 + 0x1fbdc) / _DAT_0065e7b4),
                 (float)in_stack_fffffe0c);
      puVar5 = (uint *)(in_stack_00000004 + 0x808 + DAT_02d7b88c * 0x10);
      puVar4 = puVar5 + (uint)bVar6 * -2 + 1;
      *puVar5 = local_1c4;
      *puVar4 = *(uint *)(&stack0xfffffe40 + (uint)bVar6 * -8);
      puVar4[(uint)bVar6 * -2 + 1] =
           *(uint *)(&stack0xfffffe44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffe44 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      if ((float)0.001 < local_28) {
        local_20 = *(float *)(in_stack_00000004 + 0x1fbdc);
        if (0x3F51EB85 < local_20) {
          local_20 = 0x3F51EB85;
        }
        local_20 = (local_20 - _DAT_0065e7b0) / (1.0 - _DAT_0065e7b0);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        local_44 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             ((CMotionController *)(in_stack_00000004 + 0x158),DAT_02d7b87c,local_20
                             );
        local_14 = local_44;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d7b87c,
                   (float)local_44,local_28,DAT_02d7b858,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        if ((0x3F51EB85 <= *(float *)(in_stack_00000004 + 0x1fbdc)) &&
           (local_40 = ((*(float *)(in_stack_00000004 + 0x1fbdc) - 0x3F51EB85) /
                       (1.0 - 0x3F51EB85)) * *(float *)(in_stack_00000004 + 0x1fc10),
           (float)0.001 < local_40)) {
          if ((DAT_02d7b804 & 1) == 0) {
            DAT_02d7b804 = DAT_02d7b804 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30
                      ((CQuaternion4f *)0xbfc90fdb,(float)in_stack_fffffe0c);
            pCVar7 = &local_a4;
            local_a4.w = afStack_f0[3];
            pfVar3 = (float *)((int)&local_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(float *)((int)&local_a4 + (uint)bVar6 * -8 + 4) = afStack_f0[(uint)bVar6 * -2 + 4];
            *pfVar3 = afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
            pfVar3[(uint)bVar6 * -2 + 1] =
                 (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)0xbfc90fdb,(float)pCVar7);
            local_b4.w = (float)in_stack_fffffe0c;
            puVar5 = (uint *)((int)&local_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(uint *)((int)&local_b4 + (uint)bVar6 * -8 + 4) =
                 *(uint *)(&stack0xfffffe10 + (uint)bVar6 * -8);
            *puVar5 = *(uint *)(&stack0xfffffe14 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            puVar5[(uint)bVar6 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xfffffe14 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                  ((uint)bVar6 * -2 + 1) * 4);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_b4,pCVar7,in_stack_fffffe0c);
            DAT_02d7b7f4 = local_1e4;
            (&DAT_02d7b7f8)[(uint)bVar6 * -2] = *(uint *)(&stack0xfffffe20 + (uint)bVar6 * -8)
            ;
            (&DAT_02d7b7fc)[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
                 *(uint *)(&stack0xfffffe24 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            (&DAT_02d7b7fc + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xfffffe24 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                  ((uint)bVar6 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    ((CQuaternion4f *)&DAT_02d7b7f4,&local_1a4,in_stack_fffffe0c);
          fVar8 = local_40;
          pcVar9 = core_gabriela_cpp_FUN_004d29f0;
          pCVar7 = &local_114;
          pCVar2 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
          local_114.w = local_1d4;
          puVar5 = (uint *)((int)&local_114 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(uint *)((int)&local_114 + (uint)bVar6 * -8 + 4) =
               *(uint *)(&stack0xfffffe30 + (uint)bVar6 * -8);
          iVar1 = DAT_02d7b858;
          *puVar5 = *(uint *)(&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          puVar5[(uint)bVar6 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                ((uint)bVar6 * -2 + 1) * 4);
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
                    (pCVar2,pCVar7,fVar8,iVar1,pcVar9);
        }
      }
      if (0.0 < *(float *)(in_stack_00000004 + 0x1fc0c)) {
        fVar8 = (float)0.90000000000000002;
        *(uint *)(in_stack_00000004 + 0x23a8) = 2;
        local_18 = (CDeformableModelInstance *)
                   core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                             ((CMotionController *)(in_stack_00000004 + 0x158),DAT_02d7b884,
                              1.0 - *(float *)(in_stack_00000004 + 0x1fc0c) * fVar8);
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d7b884,
                   (float)local_18,DAT_02d7b860);
        *(uint *)(in_stack_00000004 + 0x23a8) = 0;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_30 = 0xbfdf66f3;
  local_38 = 0x3fdf66f3;
  if ((float)local_78._0_4_ < -1.22173f) {
    local_78._0_4_ = -1.2217305;
  }
  if (0.7853982 < (float)local_78._0_4_) {
    local_78._0_4_ = 0.7853982;
  }
  if ((float)local_78._4_4_ < -1.7453293) {
    local_78._4_4_ = -1.7453293;
  }
  if (1.7453293 < (float)local_78._4_4_) {
    local_78._4_4_ = 1.7453293;
  }
  pcVar9 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  euler_angles = (CVector3f *)
                 (*(float *)(in_stack_00000004 + 0x1fbe0) * *(float *)(in_stack_00000004 + 0x1fc10))
  ;
  iVar1 = DAT_02d7b848;
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CQuaternion4f *)local_78,euler_angles);
  pCVar7 = &local_194;
  pCVar2 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  local_194.w = local_c4;
  pfVar3 = (float *)((int)&local_194 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_194 + (uint)bVar6 * -8 + 4) = afStack_f0[(uint)bVar6 * -2 + 0xc];
  *pfVar3 = afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar2,pCVar7,(float)euler_angles,iVar1,pcVar9);
  local_4c = (float)core_gabriela_cpp_FUN_004d4c90();
  local_14 = (CDeformableModelInstance *)local_4c;
  local_14 = (CDeformableModelInstance *)core_gabriela_cpp_FUN_004d4ce0();
  _DAT_02d7b844 =
       (1.0 - (*(float *)(in_stack_00000004 + 0x1fbe8) - local_4c) / ((float)local_14 - local_4c)) *
       (float)1.3;
  if (1.0 < _DAT_02d7b844) {
    _DAT_02d7b844 = 1.0;
  }
  pcVar9 = core_gabriela_cpp_FUN_004d2a30;
  quat2_ptr = *(CQuaternion4f **)(in_stack_00000004 + 0x1fbe4);
  iVar1 = DAT_02d7b84c;
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbe8),(float)quat2_ptr);
  pCVar7 = &local_154;
  local_154.w = local_d4;
  pfVar3 = (float *)((int)&local_154 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_154 + (uint)bVar6 * -8 + 4) = afStack_f0[(uint)bVar6 * -2 + 8];
  *pfVar3 = afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,(float)pCVar7);
  local_164.w = local_134;
  pfVar3 = (float *)((int)&local_164 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_164 + (uint)bVar6 * -8 + 4) = afStack_130[(uint)bVar6 * -2];
  *pfVar3 = afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_130 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_164,pCVar7,quat2_ptr);
  pCVar7 = &local_144;
  pCVar2 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  local_144.w = local_94;
  pfVar3 = (float *)((int)&local_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_144 + (uint)bVar6 * -8 + 4) = afStack_90[(uint)bVar6 * -2];
  *pfVar3 = afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_90 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar2,pCVar7,(float)quat2_ptr,iVar1,pcVar9);
  return;
}
