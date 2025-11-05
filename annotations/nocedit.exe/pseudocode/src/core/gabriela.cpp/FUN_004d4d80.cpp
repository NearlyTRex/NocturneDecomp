// Name: core_gabriela.cpp_FUN_004d4d80
// Address: 004d4d80
// Address Range: [[004d4d80, 004d5547]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4d80()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d34cf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CGun_0062af71
//   double DOUBLE_0062af7d = 0.00100000000000000
//   double DOUBLE_0062af85 = 0.900000000000000
//   float FLOAT_0062af8d = 3.141593
//   float FLOAT_0062af91 = 180
//   float FLOAT_0062af95 = 0.005555556
//   float FLOAT_0062af99 = -1.221730
//   double DOUBLE_0062af9d = 1.30000000000000
//   undefined4 DAT_0065e7b0
//   undefined4 DAT_0065e7b4
//   undefined4 DAT_0065e7b8
//   undefined4 DAT_02d7b7f4
//   undefined4 DAT_02d7b7fc
//   undefined4 DAT_02d7b800
//   undefined1 DAT_02d7b804
//   undefined4 DAT_02d7b838
//   undefined4 DAT_02d7b83c
//   undefined4 DAT_02d7b840
//   undefined4 DAT_02d7b844
//   undefined4 DAT_02d7b848
//   undefined4 DAT_02d7b84c
//   undefined4 DAT_02d7b858
//   undefined4 DAT_02d7b860
//   undefined4 DAT_02d7b87c
//   undefined4 DAT_02d7b880
//   undefined4 DAT_02d7b884
//   undefined4 DAT_02d7b88c
//   undefined4 DAT_02d7b890
//   undefined4 DAT_02d7b894
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_gabriela.cpp_FUN_004d4c90
//   core_gabriela.cpp_FUN_004d4ce0
//   core_motion.cpp_CMotionController_FUN_0052e3a0
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d4d80(undefined4 param_1) */

void core_gabriela_cpp_FUN_004d4d80(void)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  byte bVar6;
  int in_stack_00000004;
  float afStackY_19d0 [1525];
  CVector3f *in_stack_fffffe10;
  float in_stack_fffffe18;
  float fVar7;
  CQuaternion4f *in_stack_fffffe24;
  CQuaternion4f *in_stack_fffffe28;
  CQuaternion4f *pCVar8;
  undefined4 *puVar9;
  CQuaternion4f *in_stack_fffffe2c;
  CQuaternion4f *in_stack_fffffe30;
  CQuaternion4f *in_stack_fffffe34;
  code *pcVar10;
  CDeformableModel_MotionBlendWeightFunc *in_stack_fffffe3c;
  float in_stack_fffffe4c;
  int in_stack_fffffe50;
  CDeformableModel_MotionBlendWeightFunc *in_stack_fffffe54;
  CQuaternion4f local_1a4;
  CQuaternion4f local_194;
  float local_184;
  float afStack_180 [3];
  CQuaternion4f local_174;
  CQuaternion4f local_164;
  undefined4 local_154;
  float afStack_150 [3];
  CQuaternion4f local_144;
  float local_134;
  float afStack_130 [7];
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  float local_f4;
  float afStack_f0 [7];
  undefined4 local_d4;
  float local_c4;
  CQuaternion4f local_b4;
  undefined4 local_a4;
  float afStack_a0 [7];
  float local_84;
  float local_80;
  float local_7c;
  undefined1 local_78 [16];
  float local_68;
  float local_64;
  double local_58;
  CDeformableModelInstance *local_50;
  float local_4c;
  CDeformableModelInstance *local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
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
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CQuaternion4f *)local_78,in_stack_fffffe10);
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
    if (DAT_0065e7b8 < *(float *)(in_stack_00000004 + 0x1fbdc)) {
      local_28 = (1.0 - (1.0 - *(float *)(in_stack_00000004 + 0x1fc10)) *
                        ((*(float *)(in_stack_00000004 + 0x1fbdc) - DAT_0065e7b8) /
                        (1.0 - DAT_0065e7b8))) * local_28;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (*(CDemonActor **)(in_stack_00000004 + 0x1fa68),"CGun");
    if (iVar1 == 0) {
      if ((float)DOUBLE_0062af7d < local_28) {
        local_24 = *(float *)(in_stack_00000004 + 0x1fbdc);
        if (DAT_0065e7b8 < local_24) {
          local_24 = DAT_0065e7b8;
        }
        local_24 = (local_24 - _DAT_0065e7b0) / (1.0 - _DAT_0065e7b0);
        if (local_24 < 0.0) {
          local_24 = 0.0;
        }
        if (1.0 < local_24) {
          local_24 = 1.0;
        }
        local_50 = (CDeformableModelInstance *)core_motion_cpp_CMotionController_FUN_0052e3a0();
        local_14 = local_50;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d7b87c,
                   (float)local_50,local_28,DAT_02d7b858,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        if (DAT_0065e7b8 <= *(float *)(in_stack_00000004 + 0x1fbdc)) {
          local_2c = ((*(float *)(in_stack_00000004 + 0x1fbdc) - DAT_0065e7b8) /
                     (1.0 - DAT_0065e7b8)) * *(float *)(in_stack_00000004 + 0x1fc10);
          if (local_2c < *(float *)(in_stack_00000004 + 0x1fc0c)) {
            local_2c = *(float *)(in_stack_00000004 + 0x1fc0c);
          }
          if ((float)DOUBLE_0062af7d < local_2c) {
            local_58 = (double)*(float *)(in_stack_00000004 + 0x1fc0c);
            local_34 = 0.0;
            if (0.0 < local_58) {
              local_34 = 1.0 - *(float *)(in_stack_00000004 + 0x1fc0c);
            }
            local_14 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
            core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                      (local_14,DAT_02d7b880,local_34,local_2c * (float)DOUBLE_0062af85,DAT_02d7b890
                       ,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            local_84 = _DAT_02d7b838 * FLOAT_0062af8d;
            local_78._12_4_ = local_84 / FLOAT_0062af91;
            local_80 = _DAT_02d7b83c * FLOAT_0062af8d;
            local_7c = _DAT_02d7b840 * FLOAT_0062af8d;
            local_68 = local_80 * FLOAT_0062af95;
            local_64 = local_7c * FLOAT_0062af95;
            core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                      ((CQuaternion4f *)(local_78 + 0xc),(CVector3f *)&local_1a4);
            local_174.w = local_184;
            pfVar3 = (float *)((int)&local_174 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(float *)((int)&local_174 + (uint)bVar6 * -8 + 4) = afStack_180[(uint)bVar6 * -2];
            *pfVar3 = afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            pfVar3[(uint)bVar6 * -2 + 1] =
                 (afStack_180 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&local_174,in_stack_fffffe24,in_stack_fffffe28);
            fVar7 = local_2c;
            pcVar10 = core_gabriela_cpp_FUN_004d2a80;
            local_104.w = local_f4;
            pfVar3 = (float *)((int)&local_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(float *)((int)&local_104 + (uint)bVar6 * -8 + 4) = afStack_f0[(uint)bVar6 * -2];
            iVar1 = DAT_02d7b894;
            *pfVar3 = afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            pfVar3[(uint)bVar6 * -2 + 1] =
                 (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (local_14,&local_104,fVar7,iVar1,pcVar10);
          }
        }
      }
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((CQuaternion4f *)(in_stack_00000004 + 0x808 + DAT_02d7b88c * 0x10),
                 (CQuaternion4f *)(DAT_02d7b860 * 0x10 + in_stack_00000004 + 0x808),
                 (CQuaternion4f *)(*(float *)(in_stack_00000004 + 0x1fbdc) / _DAT_0065e7b4),
                 (float)in_stack_fffffe30);
      pfVar3 = (float *)(DAT_02d7b88c * 0x10 + 0x808 + in_stack_00000004);
      pfVar5 = pfVar3 + (uint)bVar6 * -2 + 1;
      *pfVar3 = in_stack_fffffe4c;
      *pfVar5 = *(float *)(&stack0xfffffe50 + (uint)bVar6 * -8);
      pfVar5[(uint)bVar6 * -2 + 1] =
           *(float *)(&stack0xfffffe54 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           *(float *)((int)(&stack0xfffffe54 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                     ((uint)bVar6 * -2 + 1) * 4);
      if (0.0 < *(float *)(in_stack_00000004 + 0x1fc0c)) {
        *(undefined4 *)(in_stack_00000004 + 0x23a8) = 2;
        local_1c = (CDeformableModelInstance *)core_motion_cpp_CMotionController_FUN_0052e3a0();
        local_14 = local_1c;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d7b880,
                   (float)local_1c,0);
        *(undefined4 *)(in_stack_00000004 + 0x23a8) = 0;
      }
    }
    else {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                ((CQuaternion4f *)(in_stack_00000004 + 0x808 + DAT_02d7b88c * 0x10),
                 (CQuaternion4f *)(DAT_02d7b860 * 0x10 + in_stack_00000004 + 0x808),
                 (CQuaternion4f *)(*(float *)(in_stack_00000004 + 0x1fbdc) / _DAT_0065e7b4),
                 in_stack_fffffe18);
      puVar9 = (undefined4 *)(in_stack_00000004 + 0x808 + DAT_02d7b88c * 0x10);
      puVar4 = puVar9 + (uint)bVar6 * -2 + 1;
      *puVar9 = in_stack_fffffe3c;
      *puVar4 = *(undefined4 *)(&stack0xfffffe40 + (uint)bVar6 * -8);
      puVar4[(uint)bVar6 * -2 + 1] =
           *(undefined4 *)(&stack0xfffffe44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xfffffe44 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      if ((float)DOUBLE_0062af7d < local_28) {
        local_20 = *(float *)(in_stack_00000004 + 0x1fbdc);
        if (DAT_0065e7b8 < local_20) {
          local_20 = DAT_0065e7b8;
        }
        local_20 = (local_20 - _DAT_0065e7b0) / (1.0 - _DAT_0065e7b0);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        pCVar2 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
        local_44 = (CDeformableModelInstance *)core_motion_cpp_CMotionController_FUN_0052e3a0();
        iVar1 = DAT_02d7b858;
        local_14 = local_44;
        core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                  (pCVar2,DAT_02d7b87c,(float)local_44,local_28,DAT_02d7b858,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        if ((DAT_0065e7b8 <= *(float *)(in_stack_00000004 + 0x1fbdc)) &&
           (local_40 = ((*(float *)(in_stack_00000004 + 0x1fbdc) - DAT_0065e7b8) /
                       (1.0 - DAT_0065e7b8)) * *(float *)(in_stack_00000004 + 0x1fc10),
           (float)DOUBLE_0062af7d < local_40)) {
          if ((DAT_02d7b804 & 1) == 0) {
            DAT_02d7b804 = DAT_02d7b804 | 1;
            core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30
                      ((CQuaternion4f *)0xbfc90fdb,(float)in_stack_fffffe28);
            puVar9 = &local_a4;
            local_a4 = afStack_f0[3];
            afStack_a0[(uint)bVar6 * -2] = afStack_f0[(uint)bVar6 * -2 + 4];
            afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
            (afStack_a0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
                 (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)0xbfc90fdb,(float)puVar9);
            local_b4.w = (float)pCVar2;
            puVar9 = (undefined4 *)((int)&local_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            *(undefined4 *)((int)&local_b4 + (uint)bVar6 * -8 + 4) =
                 *(undefined4 *)(&stack0xfffffe10 + (uint)bVar6 * -8);
            *puVar9 = *(undefined4 *)(&stack0xfffffe14 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            puVar9[(uint)bVar6 * -2 + 1] =
                 *(undefined4 *)
                  ((int)(&stack0xfffffe14 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                  ((uint)bVar6 * -2 + 1) * 4);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&local_b4,in_stack_fffffe2c,in_stack_fffffe30);
            DAT_02d7b7f4 = iVar1;
            (&DAT_02d7b7f8)[(uint)bVar6 * -2] = *(undefined4 *)(&stack0xfffffe20 + (uint)bVar6 * -8)
            ;
            (&DAT_02d7b7fc)[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
                 *(undefined4 *)(&stack0xfffffe24 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            (&DAT_02d7b7fc + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
                 *(undefined4 *)
                  ((int)(&stack0xfffffe24 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                  ((uint)bVar6 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    ((CQuaternion4f *)&DAT_02d7b7f4,&local_1a4,in_stack_fffffe34);
          fVar7 = local_40;
          pcVar10 = core_gabriela_cpp_FUN_004d29f0;
          pCVar8 = &local_114;
          pCVar2 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
          local_114.w = local_40;
          puVar9 = (undefined4 *)((int)&local_114 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          *(undefined4 *)((int)&local_114 + (uint)bVar6 * -8 + 4) =
               *(undefined4 *)(&stack0xfffffe30 + (uint)bVar6 * -8);
          iVar1 = DAT_02d7b858;
          *puVar9 = *(undefined4 *)(&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          puVar9[(uint)bVar6 * -2 + 1] =
               *(undefined4 *)
                ((int)(&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                ((uint)bVar6 * -2 + 1) * 4);
          core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
                    (pCVar2,pCVar8,fVar7,iVar1,pcVar10);
        }
      }
      if (0.0 < *(float *)(in_stack_00000004 + 0x1fc0c)) {
        *(undefined4 *)(in_stack_00000004 + 0x23a8) = 2;
        local_18 = (CDeformableModelInstance *)core_motion_cpp_CMotionController_FUN_0052e3a0();
        local_14 = local_18;
        core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
                  ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d7b884,
                   (float)local_18,DAT_02d7b860);
        *(undefined4 *)(in_stack_00000004 + 0x23a8) = 0;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_30 = 0xbfdf66f3;
  local_38 = 0x3fdf66f3;
  if ((float)local_78._0_4_ < FLOAT_0062af99) {
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
  pcVar10 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  fVar7 = DAT_02d7b848;
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CQuaternion4f *)local_78,
             (CVector3f *)
             (*(float *)(in_stack_00000004 + 0x1fbe0) * *(float *)(in_stack_00000004 + 0x1fc10)));
  pCVar8 = &local_194;
  pCVar2 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  local_194.w = local_c4;
  pfVar3 = (float *)((int)&local_194 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_194 + (uint)bVar6 * -8 + 4) = afStack_f0[(uint)bVar6 * -2 + 0xc];
  *pfVar3 = afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar2,pCVar8,fVar7,(int)pcVar10,in_stack_fffffe3c);
  local_4c = (float)core_gabriela_cpp_FUN_004d4c90();
  local_14 = (CDeformableModelInstance *)local_4c;
  local_14 = (CDeformableModelInstance *)core_gabriela_cpp_FUN_004d4ce0();
  _DAT_02d7b844 =
       (1.0 - (*(float *)(in_stack_00000004 + 0x1fbe8) - local_4c) / ((float)local_14 - local_4c)) *
       (float)DOUBLE_0062af9d;
  if (1.0 < _DAT_02d7b844) {
    _DAT_02d7b844 = 1.0;
  }
  pcVar10 = core_gabriela_cpp_FUN_004d2a30;
  pCVar8 = DAT_02d7b84c;
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbe8),
             *(float *)(in_stack_00000004 + 0x1fbe4));
  puVar9 = &local_154;
  local_154 = local_d4;
  afStack_150[(uint)bVar6 * -2] = afStack_f0[(uint)bVar6 * -2 + 8];
  afStack_150[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
  (afStack_150 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (afStack_f0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,(float)puVar9);
  local_164.w = local_134;
  pfVar3 = (float *)((int)&local_164 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_164 + (uint)bVar6 * -8 + 4) = afStack_130[(uint)bVar6 * -2];
  *pfVar3 = afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_130 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_164,pCVar8,(CQuaternion4f *)pcVar10);
  pCVar8 = &local_144;
  pCVar2 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  local_144.w = afStack_a0[3];
  pfVar3 = (float *)((int)&local_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&local_144 + (uint)bVar6 * -8 + 4) = afStack_a0[(uint)bVar6 * -2 + 4];
  *pfVar3 = afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_a0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar2,pCVar8,in_stack_fffffe4c,in_stack_fffffe50,in_stack_fffffe54);
  return;
}


// Assembly code:
// 004d4d80: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d4d80
// 004d4d81: PUSH ESI
// 004d4d82: PUSH EDI
// 004d4d83: PUSH EBP
// 004d4d84: MOV EBP,ESP
// 004d4d86: SUB ESP,0x1e4
// 004d4d8c: SUB EBP,0x7e
// 004d4d8f: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004d4d95: LEA EAX,[EBX + 0x158]
// 004d4d9b: PUSH EAX
// 004d4d9c: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004d4da1: MOV EAX,dword ptr [EBX + 0x1fc04]
// 004d4da7: XOR EDX,EDX
// 004d4da9: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004d4dac: MOV dword ptr [EBP + 0x1e],EDX
//   XREF to: Stack[-0x70] (WRITE)
// 004d4daf: MOV EAX,dword ptr [EBX + 0x1fc08]
// 004d4db5: ADD ESP,0x4
// 004d4db8: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004d4dbb: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x78] (DATA)
// 004d4dbe: PUSH EAX
// 004d4dbf: LEA ESI,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x124] (DATA)
// 004d4dc5: LEA EDI,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a4] (DATA)
// 004d4dcb: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 004d4dd0: LEA ESI,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x124] (DATA)
// 004d4dd6: MOVSD ES:EDI,ESI
// 004d4dd7: MOVSD ES:EDI,ESI
// 004d4dd8: MOVSD ES:EDI,ESI
// 004d4dd9: MOVSD ES:EDI,ESI
// 004d4dda: ADD ESP,0x4
// 004d4ddd: FLD float ptr [EBX + 0x1fbdc]
// 004d4de3: FLDZ
// 004d4de5: FCOMPP
// 004d4de7: FNSTSW AX
// 004d4de9: SAHF
// 004d4dea: JC 0x004d4f88
//   XREF to: 004d4f88 (CONDITIONAL_JUMP)
// 004d4df0: FLD float ptr [EBP + 0x16]
//   Label: LAB_004d4df0
//   XREF to: Stack[-0x78] (READ)
// 004d4df3: MOV EDX,0x3f490fdb
// 004d4df8: MOV ECX,0xbfdf66f3
// 004d4dfd: MOV ESI,0x3fdf66f3
// 004d4e02: MOV dword ptr [EBP + 0x52],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004d4e05: MOV dword ptr [EBP + 0x5e],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004d4e08: MOV dword ptr [EBP + 0x56],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 004d4e0b: FCOMP float ptr [0x0062af99]
//   XREF to: 0062af99 (READ)
// 004d4e11: FNSTSW AX
// 004d4e13: SAHF
// 004d4e14: JNC 0x004d4e1d
//   XREF to: 004d4e1d (CONDITIONAL_JUMP)
// 004d4e16: MOV dword ptr [EBP + 0x16],0xbf9c61aa
//   XREF to: Stack[-0x78] (WRITE)
// 004d4e1d: FLD float ptr [EBP + 0x16]
//   Label: LAB_004d4e1d
//   XREF to: Stack[-0x78] (READ)
// 004d4e20: FCOMP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 004d4e23: FNSTSW AX
// 004d4e25: SAHF
// 004d4e26: JBE 0x004d4e2e
//   XREF to: 004d4e2e (CONDITIONAL_JUMP)
// 004d4e28: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 004d4e2b: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004d4e2e: FLD float ptr [EBP + 0x1a]
//   Label: LAB_004d4e2e
//   XREF to: Stack[-0x74] (READ)
// 004d4e31: FCOMP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 004d4e34: FNSTSW AX
// 004d4e36: SAHF
// 004d4e37: JNC 0x004d4e3f
//   XREF to: 004d4e3f (CONDITIONAL_JUMP)
// 004d4e39: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 004d4e3c: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004d4e3f: FLD float ptr [EBP + 0x1a]
//   Label: LAB_004d4e3f
//   XREF to: Stack[-0x74] (READ)
// 004d4e42: FCOMP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (READ)
// 004d4e45: FNSTSW AX
// 004d4e47: SAHF
// 004d4e48: JBE 0x004d4e50
//   XREF to: 004d4e50 (CONDITIONAL_JUMP)
// 004d4e4a: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (READ)
// 004d4e4d: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004d4e50: PUSH 0x59ddb0
//   Label: LAB_004d4e50
//   XREF to: 0059ddb0 (DATA)
// 004d4e55: MOV EAX,[0x02d7b848]
//   XREF to: 02d7b848 (READ)
// 004d4e5a: FLD float ptr [EBX + 0x1fbe0]
// 004d4e60: PUSH EAX
// 004d4e61: FMUL float ptr [EBX + 0x1fc10]
// 004d4e67: SUB ESP,0x4
// 004d4e6a: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x78] (DATA)
// 004d4e6d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x200] (DATA)
// 004d4e70: PUSH EAX
// 004d4e71: LEA ESI,[EBP + -0x36]
//   XREF to: Stack[-0xc4] (DATA)
// 004d4e74: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 004d4e79: ADD ESP,0x4
// 004d4e7c: LEA EAX,[EBP + 0xfffffefa]
//   XREF to: Stack[-0x194] (DATA)
// 004d4e82: LEA EDI,[EBP + 0xfffffefa]
//   XREF to: Stack[-0x194] (DATA)
// 004d4e88: PUSH EAX
// 004d4e89: LEA EAX,[EBX + 0x158]
// 004d4e8f: LEA ESI,[EBP + -0x36]
//   XREF to: Stack[-0xc4] (DATA)
// 004d4e92: PUSH EAX
// 004d4e93: MOVSD ES:EDI,ESI
// 004d4e94: MOVSD ES:EDI,ESI
// 004d4e95: MOVSD ES:EDI,ESI
// 004d4e96: MOVSD ES:EDI,ESI
// 004d4e97: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 004d4e9c: ADD ESP,0x14
// 004d4e9f: PUSH EBX
// 004d4ea0: CALL core_gabriela.cpp_FUN_004d4c90
//   XREF to: 004d4c90 (UNCONDITIONAL_CALL)
// 004d4ea5: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d4ea8: ADD ESP,0x4
// 004d4eab: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d4eae: PUSH EBX
// 004d4eaf: FSTP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (WRITE)
// 004d4eb2: CALL core_gabriela.cpp_FUN_004d4ce0
//   XREF to: 004d4ce0 (UNCONDITIONAL_CALL)
// 004d4eb7: FLD float ptr [EBX + 0x1fbe8]
// 004d4ebd: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d4ec0: FSUB float ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 004d4ec3: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d4ec6: FSUB float ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 004d4ec9: FDIVP
// 004d4ecb: FLD1
// 004d4ecd: FSUBRP
// 004d4ecf: FMUL double ptr [0x0062af9d]
//   XREF to: 0062af9d (READ)
// 004d4ed5: ADD ESP,0x4
// 004d4ed8: FST float ptr [0x02d7b844]
//   XREF to: 02d7b844 (WRITE)
// 004d4ede: FLD1
// 004d4ee0: FCOMPP
// 004d4ee2: FNSTSW AX
// 004d4ee4: SAHF
// 004d4ee5: JNC 0x004d4ef1
//   XREF to: 004d4ef1 (CONDITIONAL_JUMP)
// 004d4ee7: MOV dword ptr [0x02d7b844],0x3f800000
//   XREF to: 02d7b844 (WRITE)
// 004d4ef1: PUSH 0x4d2a30
//   Label: LAB_004d4ef1
//   XREF to: 004d2a30 (DATA)
// 004d4ef6: MOV ECX,dword ptr [0x02d7b84c]
//   XREF to: 02d7b84c (READ)
// 004d4efc: PUSH ECX
// 004d4efd: PUSH dword ptr [EBX + 0x1fbe4]
// 004d4f03: LEA ESI,[EBP + -0x46]
//   XREF to: Stack[-0xd4] (DATA)
// 004d4f06: PUSH dword ptr [EBX + 0x1fbe8]
// 004d4f0c: LEA EDI,[EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (DATA)
// 004d4f12: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 004d4f17: ADD ESP,0x4
// 004d4f1a: LEA EAX,[EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (DATA)
// 004d4f20: LEA ESI,[EBP + -0x46]
//   XREF to: Stack[-0xd4] (DATA)
// 004d4f23: PUSH EAX
// 004d4f24: MOVSD ES:EDI,ESI
// 004d4f25: MOVSD ES:EDI,ESI
// 004d4f26: MOVSD ES:EDI,ESI
// 004d4f27: MOVSD ES:EDI,ESI
// 004d4f28: PUSH 0x3fc90fdb
// 004d4f2d: LEA ESI,[EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (DATA)
// 004d4f33: LEA EDI,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x164] (DATA)
// 004d4f39: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 004d4f3e: LEA ESI,[EBP + 0xffffff5a]
//   XREF to: Stack[-0x134] (DATA)
// 004d4f44: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x164] (DATA)
// 004d4f4a: ADD ESP,0x4
// 004d4f4d: MOVSD ES:EDI,ESI
// 004d4f4e: MOVSD ES:EDI,ESI
// 004d4f4f: MOVSD ES:EDI,ESI
// 004d4f50: MOVSD ES:EDI,ESI
// 004d4f51: PUSH EAX
// 004d4f52: LEA ESI,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 004d4f55: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 004d4f5a: ADD ESP,0x8
// 004d4f5d: LEA EAX,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x144] (DATA)
// 004d4f63: ADD EBX,0x158
// 004d4f69: PUSH EAX
// 004d4f6a: LEA EDI,[EBP + 0xffffff4a]
//   XREF to: Stack[-0x144] (DATA)
// 004d4f70: LEA ESI,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 004d4f73: PUSH EBX
// 004d4f74: MOVSD ES:EDI,ESI
// 004d4f75: MOVSD ES:EDI,ESI
// 004d4f76: MOVSD ES:EDI,ESI
// 004d4f77: MOVSD ES:EDI,ESI
// 004d4f78: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 004d4f7d: ADD ESP,0x14
// 004d4f80: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 004d4f83: POP EBP
// 004d4f84: POP EDI
// 004d4f85: POP ESI
// 004d4f86: POP EBX
// 004d4f87: RET
// 004d4f88: FLD float ptr [EBX + 0x1fbdc]
//   Label: LAB_004d4f88
// 004d4f8e: FDIV float ptr [0x0065e7b0]
//   XREF to: 0065e7b0 (READ)
// 004d4f94: FST float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (WRITE)
// 004d4f97: FLD1
// 004d4f99: FCOMPP
// 004d4f9b: FNSTSW AX
// 004d4f9d: SAHF
// 004d4f9e: JNC 0x004d4fa7
//   XREF to: 004d4fa7 (CONDITIONAL_JUMP)
// 004d4fa0: MOV dword ptr [EBP + 0x66],0x3f800000
//   XREF to: Stack[-0x28] (WRITE)
// 004d4fa7: FLD float ptr [EBX + 0x1fbdc]
//   Label: LAB_004d4fa7
// 004d4fad: FCOMP float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d4fb3: FNSTSW AX
// 004d4fb5: SAHF
// 004d4fb6: JBE 0x004d4fe2
//   XREF to: 004d4fe2 (CONDITIONAL_JUMP)
// 004d4fb8: FLD float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d4fbe: FLD float ptr [EBX + 0x1fbdc]
// 004d4fc4: FSUB ST0,ST1
// 004d4fc6: FLD1
// 004d4fc8: FSUBRP ST2,ST0
// 004d4fca: FDIVRP
// 004d4fcc: FLD float ptr [EBX + 0x1fc10]
// 004d4fd2: FLD1
// 004d4fd4: FSUBRP
// 004d4fd6: FMULP
// 004d4fd8: FLD1
// 004d4fda: FSUBRP
// 004d4fdc: FMUL float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 004d4fdf: FSTP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (WRITE)
// 004d4fe2: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_004d4fe2
// 004d4fe8: PUSH 0x62af71
//   XREF to: 0062af71 (DATA)
// 004d4fed: MOV EAX,dword ptr [EAX + 0x330]
// 004d4ff3: PUSH EAX
// 004d4ff4: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004d4ff9: ADD ESP,0x8
// 004d4ffc: TEST EAX,EAX
// 004d4ffe: JZ 0x004d5288
//   XREF to: 004d5288 (CONDITIONAL_JUMP)
// 004d5004: FLD float ptr [EBX + 0x1fbdc]
// 004d500a: FDIV float ptr [0x0065e7b4]
//   XREF to: 0065e7b4 (READ)
// 004d5010: MOV ESI,dword ptr [0x02d7b860]
//   XREF to: 02d7b860 (READ)
// 004d5016: LEA EAX,[EBX + 0x808]
// 004d501c: SHL ESI,0x4
// 004d501f: SUB ESP,0x4
// 004d5022: ADD ESI,EAX
// 004d5024: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f8] (DATA)
// 004d5027: PUSH ESI
// 004d5028: MOV ESI,dword ptr [0x02d7b88c]
//   XREF to: 02d7b88c (READ)
// 004d502e: SHL ESI,0x4
// 004d5031: ADD EAX,ESI
// 004d5033: PUSH EAX
// 004d5034: LEA ESI,[EBP + 0xfffffeca]
//   XREF to: Stack[-0x1c4] (DATA)
// 004d503a: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 004d503f: MOV EAX,[0x02d7b88c]
//   XREF to: 02d7b88c (READ)
// 004d5044: SHL EAX,0x4
// 004d5047: LEA ESI,[EBP + 0xfffffeca]
//   XREF to: Stack[-0x1c4] (DATA)
// 004d504d: LEA EDI,[EBX + EAX*0x1 + 0x808]
// 004d5054: FLD float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 004d5057: ADD ESP,0xc
// 004d505a: MOVSD ES:EDI,ESI
// 004d505b: MOVSD ES:EDI,ESI
// 004d505c: MOVSD ES:EDI,ESI
// 004d505d: MOVSD ES:EDI,ESI
// 004d505e: FCOMP double ptr [0x0062af7d]
//   XREF to: 0062af7d (READ)
// 004d5064: FNSTSW AX
// 004d5066: SAHF
// 004d5067: JBE 0x004d519f
//   XREF to: 004d519f (CONDITIONAL_JUMP)
// 004d506d: MOV EAX,dword ptr [EBX + 0x1fbdc]
// 004d5073: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004d5076: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 004d5079: FCOMP float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d507f: FNSTSW AX
// 004d5081: SAHF
// 004d5082: JBE 0x004d508c
//   XREF to: 004d508c (CONDITIONAL_JUMP)
// 004d5084: MOV EAX,[0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d5089: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004d508c: FLD float ptr [0x0065e7b0]
//   Label: LAB_004d508c
//   XREF to: 0065e7b0 (READ)
// 004d5092: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 004d5095: FSUB ST0,ST1
// 004d5097: FLD1
// 004d5099: FSUBRP ST2,ST0
// 004d509b: FDIVRP
// 004d509d: FST float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (WRITE)
// 004d50a0: FLDZ
// 004d50a2: FCOMPP
// 004d50a4: FNSTSW AX
// 004d50a6: SAHF
// 004d50a7: JBE 0x004d50ae
//   XREF to: 004d50ae (CONDITIONAL_JUMP)
// 004d50a9: XOR EDX,EDX
// 004d50ab: MOV dword ptr [EBP + 0x6e],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004d50ae: FLD float ptr [EBP + 0x6e]
//   Label: LAB_004d50ae
//   XREF to: Stack[-0x20] (READ)
// 004d50b1: FLD1
// 004d50b3: FCOMPP
// 004d50b5: FNSTSW AX
// 004d50b7: SAHF
// 004d50b8: JNC 0x004d50c1
//   XREF to: 004d50c1 (CONDITIONAL_JUMP)
// 004d50ba: MOV dword ptr [EBP + 0x6e],0x3f800000
//   XREF to: Stack[-0x20] (WRITE)
// 004d50c1: MOV ESI,dword ptr [0x02d7b87c]
//   Label: LAB_004d50c1
//   XREF to: 02d7b87c (READ)
// 004d50c7: PUSH dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 004d50ca: PUSH ESI
// 004d50cb: LEA ESI,[EBX + 0x158]
// 004d50d1: PUSH ESI
// 004d50d2: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 004d50d7: ADD ESP,0xc
// 004d50da: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004d50df: MOV EDI,dword ptr [0x02d7b858]
//   XREF to: 02d7b858 (READ)
// 004d50e5: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d50e8: PUSH EDI
// 004d50e9: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d50ec: MOV EAX,[0x02d7b87c]
//   XREF to: 02d7b87c (READ)
// 004d50f1: PUSH dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 004d50f4: FSTP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (WRITE)
// 004d50f7: PUSH dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 004d50fa: PUSH EAX
// 004d50fb: PUSH ESI
// 004d50fc: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004d5101: FLD float ptr [EBX + 0x1fbdc]
// 004d5107: ADD ESP,0x18
// 004d510a: FCOMP float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d5110: FNSTSW AX
// 004d5112: SAHF
// 004d5113: JC 0x004d519f
//   XREF to: 004d519f (CONDITIONAL_JUMP)
// 004d5119: FLD float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d511f: FLD float ptr [EBX + 0x1fbdc]
// 004d5125: FSUB ST0,ST1
// 004d5127: FLD1
// 004d5129: FSUBRP ST2,ST0
// 004d512b: FDIVRP
// 004d512d: FMUL float ptr [EBX + 0x1fc10]
// 004d5133: FST float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (WRITE)
// 004d5136: FCOMP double ptr [0x0062af7d]
//   XREF to: 0062af7d (READ)
// 004d513c: FNSTSW AX
// 004d513e: SAHF
// 004d513f: JBE 0x004d519f
//   XREF to: 004d519f (CONDITIONAL_JUMP)
// 004d5141: MOV AH,byte ptr [0x02d7b804]
//   XREF to: 02d7b804 (READ)
// 004d5147: TEST AH,0x1
// 004d514a: JZ 0x004d5219
//   XREF to: 004d5219 (CONDITIONAL_JUMP)
// 004d5150: LEA EAX,[EBP + 0xfffffeea]
//   Label: LAB_004d5150
//   XREF to: Stack[-0x1a4] (DATA)
// 004d5156: PUSH EAX
// 004d5157: PUSH 0x2d7b7f4
//   XREF to: 02d7b7f4 (DATA)
// 004d515c: LEA ESI,[EBP + 0xfffffeba]
//   XREF to: Stack[-0x1d4] (DATA)
// 004d5162: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 004d5167: ADD ESP,0x8
// 004d516a: PUSH 0x4d29f0
//   XREF to: 004d29f0 (DATA)
// 004d516f: MOV EDX,dword ptr [0x02d7b858]
//   XREF to: 02d7b858 (READ)
// 004d5175: PUSH EDX
// 004d5176: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 004d517c: PUSH dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (READ)
// 004d517f: LEA EDI,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 004d5185: PUSH EAX
// 004d5186: LEA EAX,[EBX + 0x158]
// 004d518c: LEA ESI,[EBP + 0xfffffeba]
//   XREF to: Stack[-0x1d4] (DATA)
// 004d5192: PUSH EAX
// 004d5193: MOVSD ES:EDI,ESI
// 004d5194: MOVSD ES:EDI,ESI
// 004d5195: MOVSD ES:EDI,ESI
// 004d5196: MOVSD ES:EDI,ESI
// 004d5197: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 004d519c: ADD ESP,0x14
// 004d519f: FLD float ptr [EBX + 0x1fc0c]
//   Label: LAB_004d519f
// 004d51a5: FLDZ
// 004d51a7: FCOMPP
// 004d51a9: FNSTSW AX
// 004d51ab: SAHF
// 004d51ac: JNC 0x004d4df0
//   XREF to: 004d4df0 (CONDITIONAL_JUMP)
// 004d51b2: FLD float ptr [EBX + 0x1fc0c]
// 004d51b8: FMUL double ptr [0x0062af85]
//   XREF to: 0062af85 (READ)
// 004d51be: SUB ESP,0x4
// 004d51c1: MOV dword ptr [EBX + 0x23a8],0x2
// 004d51cb: FLD1
// 004d51cd: FSUBRP
// 004d51cf: MOV ECX,dword ptr [0x02d7b884]
//   XREF to: 02d7b884 (READ)
// 004d51d5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f8] (DATA)
// 004d51d8: PUSH ECX
// 004d51d9: LEA ESI,[EBX + 0x158]
// 004d51df: PUSH ESI
// 004d51e0: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 004d51e5: MOV EDI,dword ptr [0x02d7b860]
//   XREF to: 02d7b860 (READ)
// 004d51eb: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d51ee: ADD ESP,0xc
// 004d51f1: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d51f4: MOV EAX,[0x02d7b884]
//   XREF to: 02d7b884 (READ)
// 004d51f9: PUSH EDI
// 004d51fa: FSTP float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (WRITE)
// 004d51fd: PUSH dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 004d5200: PUSH EAX
// 004d5201: PUSH ESI
// 004d5202: CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
//   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)
// 004d5207: ADD ESP,0x10
// 004d520a: MOV dword ptr [EBX + 0x23a8],0x0
// 004d5214: JMP 0x004d4df0
//   XREF to: 004d4df0 (UNCONDITIONAL_JUMP)
// 004d5219: PUSH 0xbfc90fdb
//   Label: LAB_004d5219
// 004d521e: MOV DL,AH
// 004d5220: LEA ESI,[EBP + -0x56]
//   XREF to: Stack[-0xe4] (DATA)
// 004d5223: OR DL,0x1
// 004d5226: LEA EDI,[EBP + -0x16]
//   XREF to: Stack[-0xa4] (DATA)
// 004d5229: MOV byte ptr [0x02d7b804],DL
//   XREF to: 02d7b804 (WRITE)
// 004d522f: CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   XREF to: 005f7a30 (UNCONDITIONAL_CALL)
// 004d5234: ADD ESP,0x4
// 004d5237: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa4] (DATA)
// 004d523a: LEA ESI,[EBP + -0x56]
//   XREF to: Stack[-0xe4] (DATA)
// 004d523d: PUSH EAX
// 004d523e: MOVSD ES:EDI,ESI
// 004d523f: MOVSD ES:EDI,ESI
// 004d5240: MOVSD ES:EDI,ESI
// 004d5241: MOVSD ES:EDI,ESI
// 004d5242: PUSH 0xbfc90fdb
// 004d5247: LEA ESI,[EBP + 0xfffffe9a]
//   XREF to: Stack[-0x1f4] (DATA)
// 004d524d: LEA EDI,[EBP + -0x26]
//   XREF to: Stack[-0xb4] (DATA)
// 004d5250: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 004d5255: LEA ESI,[EBP + 0xfffffe9a]
//   XREF to: Stack[-0x1f4] (DATA)
// 004d525b: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb4] (DATA)
// 004d525e: ADD ESP,0x4
// 004d5261: MOVSD ES:EDI,ESI
// 004d5262: MOVSD ES:EDI,ESI
// 004d5263: MOVSD ES:EDI,ESI
// 004d5264: MOVSD ES:EDI,ESI
// 004d5265: PUSH EAX
// 004d5266: LEA ESI,[EBP + 0xfffffeaa]
//   XREF to: Stack[-0x1e4] (DATA)
// 004d526c: MOV EDI,0x2d7b7f4
//   XREF to: 02d7b7f4 (DATA)
// 004d5271: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 004d5276: LEA ESI,[EBP + 0xfffffeaa]
//   XREF to: Stack[-0x1e4] (DATA)
// 004d527c: ADD ESP,0x8
// 004d527f: MOVSD ES:EDI,ESI
//   XREF to: 02d7b7f4 (WRITE)
// 004d5280: MOVSD ES:EDI,ESI
//   XREF to: 02d7b7f8 (WRITE)
// 004d5281: MOVSD ES:EDI,ESI
//   XREF to: 02d7b7fc (WRITE)
// 004d5282: MOVSD ES:EDI,ESI
//   XREF to: 02d7b800 (WRITE)
// 004d5283: JMP 0x004d5150
//   XREF to: 004d5150 (UNCONDITIONAL_JUMP)
// 004d5288: FLD float ptr [EBP + 0x66]
//   Label: LAB_004d5288
//   XREF to: Stack[-0x28] (READ)
// 004d528b: FCOMP double ptr [0x0062af7d]
//   XREF to: 0062af7d (READ)
// 004d5291: FNSTSW AX
// 004d5293: SAHF
// 004d5294: JBE 0x004d548b
//   XREF to: 004d548b (CONDITIONAL_JUMP)
// 004d529a: MOV EAX,dword ptr [EBX + 0x1fbdc]
// 004d52a0: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004d52a3: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 004d52a6: FCOMP float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d52ac: FNSTSW AX
// 004d52ae: SAHF
// 004d52af: JBE 0x004d52b9
//   XREF to: 004d52b9 (CONDITIONAL_JUMP)
// 004d52b1: MOV EAX,[0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d52b6: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004d52b9: FLD float ptr [0x0065e7b0]
//   Label: LAB_004d52b9
//   XREF to: 0065e7b0 (READ)
// 004d52bf: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 004d52c2: FSUB ST0,ST1
// 004d52c4: FLD1
// 004d52c6: FSUBRP ST2,ST0
// 004d52c8: FDIVRP
// 004d52ca: FST float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (WRITE)
// 004d52cd: FLDZ
// 004d52cf: FCOMPP
// 004d52d1: FNSTSW AX
// 004d52d3: SAHF
// 004d52d4: JBE 0x004d52db
//   XREF to: 004d52db (CONDITIONAL_JUMP)
// 004d52d6: XOR ESI,ESI
// 004d52d8: MOV dword ptr [EBP + 0x6a],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004d52db: FLD float ptr [EBP + 0x6a]
//   Label: LAB_004d52db
//   XREF to: Stack[-0x24] (READ)
// 004d52de: FLD1
// 004d52e0: FCOMPP
// 004d52e2: FNSTSW AX
// 004d52e4: SAHF
// 004d52e5: JNC 0x004d52ee
//   XREF to: 004d52ee (CONDITIONAL_JUMP)
// 004d52e7: MOV dword ptr [EBP + 0x6a],0x3f800000
//   XREF to: Stack[-0x24] (WRITE)
// 004d52ee: MOV EAX,[0x02d7b87c]
//   Label: LAB_004d52ee
//   XREF to: 02d7b87c (READ)
// 004d52f3: PUSH dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 004d52f6: PUSH EAX
// 004d52f7: LEA ESI,[EBX + 0x158]
// 004d52fd: PUSH ESI
// 004d52fe: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 004d5303: ADD ESP,0xc
// 004d5306: MOV EDX,dword ptr [0x02d7b858]
//   XREF to: 02d7b858 (READ)
// 004d530c: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004d5311: MOV ECX,dword ptr [0x02d7b87c]
//   XREF to: 02d7b87c (READ)
// 004d5317: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d531a: PUSH EDX
// 004d531b: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d531e: PUSH dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 004d5321: FSTP float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (WRITE)
// 004d5324: PUSH dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (READ)
// 004d5327: PUSH ECX
// 004d5328: PUSH ESI
// 004d5329: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004d532e: FLD float ptr [EBX + 0x1fbdc]
// 004d5334: ADD ESP,0x18
// 004d5337: FCOMP float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d533d: FNSTSW AX
// 004d533f: SAHF
// 004d5340: JC 0x004d548b
//   XREF to: 004d548b (CONDITIONAL_JUMP)
// 004d5346: FLD float ptr [0x0065e7b8]
//   XREF to: 0065e7b8 (READ)
// 004d534c: FLD float ptr [EBX + 0x1fbdc]
// 004d5352: FSUB ST0,ST1
// 004d5354: FLD1
// 004d5356: FSUBRP ST2,ST0
// 004d5358: FDIVRP
// 004d535a: FMUL float ptr [EBX + 0x1fc10]
// 004d5360: FST float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (WRITE)
// 004d5363: FCOMP float ptr [EBX + 0x1fc0c]
// 004d5369: FNSTSW AX
// 004d536b: SAHF
// 004d536c: JNC 0x004d5377
//   XREF to: 004d5377 (CONDITIONAL_JUMP)
// 004d536e: MOV EAX,dword ptr [EBX + 0x1fc0c]
// 004d5374: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d5377: FLD float ptr [EBP + 0x62]
//   Label: LAB_004d5377
//   XREF to: Stack[-0x2c] (READ)
// 004d537a: FCOMP double ptr [0x0062af7d]
//   XREF to: 0062af7d (READ)
// 004d5380: FNSTSW AX
// 004d5382: SAHF
// 004d5383: JBE 0x004d548b
//   XREF to: 004d548b (CONDITIONAL_JUMP)
// 004d5389: FLDZ
// 004d538b: FLD float ptr [EBX + 0x1fc0c]
// 004d5391: XOR ESI,ESI
// 004d5393: FSTP double ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (WRITE)
// 004d5396: MOV dword ptr [EBP + 0x5a],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 004d5399: FCOMP double ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 004d539c: FNSTSW AX
// 004d539e: SAHF
// 004d539f: JNC 0x004d53a9
//   XREF to: 004d53a9 (CONDITIONAL_JUMP)
// 004d53a1: FLD1
// 004d53a3: FSUB double ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 004d53a6: FSTP float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (WRITE)
// 004d53a9: PUSH 0x59ddb0
//   Label: LAB_004d53a9
//   XREF to: 0059ddb0 (DATA)
// 004d53ae: MOV EDI,dword ptr [0x02d7b890]
//   XREF to: 02d7b890 (READ)
// 004d53b4: FLD float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 004d53b7: PUSH EDI
// 004d53b8: FMUL double ptr [0x0062af85]
//   XREF to: 0062af85 (READ)
// 004d53be: SUB ESP,0x4
// 004d53c1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x200] (DATA)
// 004d53c4: MOV EAX,[0x02d7b880]
//   XREF to: 02d7b880 (READ)
// 004d53c9: PUSH dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 004d53cc: PUSH EAX
// 004d53cd: LEA EAX,[EBX + 0x158]
// 004d53d3: PUSH EAX
// 004d53d4: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d53d7: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004d53dc: FLD float ptr [0x0062af8d]
//   XREF to: 0062af8d (READ)
// 004d53e2: FLD float ptr [0x02d7b838]
//   XREF to: 02d7b838 (READ)
// 004d53e8: FMUL ST1
// 004d53ea: FST float ptr [EBP + 0xa]
//   XREF to: Stack[-0x84] (WRITE)
// 004d53ed: FDIV float ptr [0x0062af91]
//   XREF to: 0062af91 (READ)
// 004d53f3: FLD float ptr [0x02d7b83c]
//   XREF to: 02d7b83c (READ)
// 004d53f9: FMUL ST2
// 004d53fb: FLD float ptr [0x02d7b840]
//   XREF to: 02d7b840 (READ)
// 004d5401: FMULP ST3
// 004d5403: FST float ptr [EBP + 0xe]
//   XREF to: Stack[-0x80] (WRITE)
// 004d5406: FLD float ptr [0x0062af95]
//   XREF to: 0062af95 (READ)
// 004d540c: FXCH
// 004d540e: FMUL ST1
// 004d5410: FXCH ST3
// 004d5412: FST float ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (WRITE)
// 004d5415: FMULP
// 004d5417: ADD ESP,0x18
// 004d541a: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a4] (DATA)
// 004d5420: LEA ESI,[EBP + 0xffffff0a]
//   XREF to: Stack[-0x184] (DATA)
// 004d5426: PUSH EAX
// 004d5427: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x6c] (DATA)
// 004d542a: LEA EDI,[EBP + 0xffffff1a]
//   XREF to: Stack[-0x174] (DATA)
// 004d5430: PUSH EAX
// 004d5431: FXCH ST2
// 004d5433: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (WRITE)
// 004d5436: FXCH
// 004d5438: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x64] (WRITE)
// 004d543b: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x6c] (WRITE)
// 004d543e: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 004d5443: LEA ESI,[EBP + 0xffffff0a]
//   XREF to: Stack[-0x184] (DATA)
// 004d5449: LEA EAX,[EBP + 0xffffff1a]
//   XREF to: Stack[-0x174] (DATA)
// 004d544f: ADD ESP,0x4
// 004d5452: MOVSD ES:EDI,ESI
// 004d5453: MOVSD ES:EDI,ESI
// 004d5454: MOVSD ES:EDI,ESI
// 004d5455: MOVSD ES:EDI,ESI
// 004d5456: PUSH EAX
// 004d5457: LEA ESI,[EBP + -0x66]
//   XREF to: Stack[-0xf4] (DATA)
// 004d545a: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 004d545f: ADD ESP,0x8
// 004d5462: PUSH 0x4d2a80
//   XREF to: 004d2a80 (DATA)
// 004d5467: MOV ECX,dword ptr [0x02d7b894]
//   XREF to: 02d7b894 (READ)
// 004d546d: LEA EDI,[EBP + -0x76]
//   XREF to: Stack[-0x104] (DATA)
// 004d5470: PUSH ECX
// 004d5471: LEA ESI,[EBP + -0x66]
//   XREF to: Stack[-0xf4] (DATA)
// 004d5474: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x104] (DATA)
// 004d5477: PUSH dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 004d547a: MOVSD ES:EDI,ESI
// 004d547b: MOVSD ES:EDI,ESI
// 004d547c: MOVSD ES:EDI,ESI
// 004d547d: MOVSD ES:EDI,ESI
// 004d547e: PUSH EAX
// 004d547f: MOV ESI,dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d5482: PUSH ESI
// 004d5483: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 004d5488: ADD ESP,0x14
// 004d548b: FLD float ptr [EBX + 0x1fbdc]
//   Label: LAB_004d548b
// 004d5491: FDIV float ptr [0x0065e7b4]
//   XREF to: 0065e7b4 (READ)
// 004d5497: MOV ESI,dword ptr [0x02d7b860]
//   XREF to: 02d7b860 (READ)
// 004d549d: LEA EAX,[EBX + 0x808]
// 004d54a3: SHL ESI,0x4
// 004d54a6: SUB ESP,0x4
// 004d54a9: ADD ESI,EAX
// 004d54ab: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f8] (DATA)
// 004d54ae: PUSH ESI
// 004d54af: MOV ESI,dword ptr [0x02d7b88c]
//   XREF to: 02d7b88c (READ)
// 004d54b5: SHL ESI,0x4
// 004d54b8: ADD EAX,ESI
// 004d54ba: PUSH EAX
// 004d54bb: LEA ESI,[EBP + 0xfffffeda]
//   XREF to: Stack[-0x1b4] (DATA)
// 004d54c1: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 004d54c6: MOV ESI,dword ptr [0x02d7b88c]
//   XREF to: 02d7b88c (READ)
// 004d54cc: SHL ESI,0x4
// 004d54cf: LEA EDI,[ESI + EBX*0x1 + 0x808]
// 004d54d6: LEA ESI,[EBP + 0xfffffeda]
//   XREF to: Stack[-0x1b4] (DATA)
// 004d54dc: MOVSD ES:EDI,ESI
// 004d54dd: MOVSD ES:EDI,ESI
// 004d54de: MOVSD ES:EDI,ESI
// 004d54df: MOVSD ES:EDI,ESI
// 004d54e0: ADD ESP,0xc
// 004d54e3: FLD float ptr [EBX + 0x1fc0c]
// 004d54e9: FLDZ
// 004d54eb: FCOMPP
// 004d54ed: FNSTSW AX
// 004d54ef: SAHF
// 004d54f0: JNC 0x004d4df0
//   XREF to: 004d4df0 (CONDITIONAL_JUMP)
// 004d54f6: MOV EDI,dword ptr [0x02d7b880]
//   XREF to: 02d7b880 (READ)
// 004d54fc: PUSH dword ptr [EBX + 0x1fc0c]
// 004d5502: PUSH EDI
// 004d5503: LEA ESI,[EBX + 0x158]
// 004d5509: PUSH ESI
// 004d550a: MOV dword ptr [EBX + 0x23a8],0x2
// 004d5514: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 004d5519: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d551c: ADD ESP,0xc
// 004d551f: FLD float ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d5522: PUSH 0x0
// 004d5524: MOV EAX,[0x02d7b880]
//   XREF to: 02d7b880 (READ)
// 004d5529: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (WRITE)
// 004d552c: PUSH dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 004d552f: PUSH EAX
// 004d5530: PUSH ESI
// 004d5531: CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
//   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)
// 004d5536: ADD ESP,0x10
// 004d5539: MOV dword ptr [EBX + 0x23a8],0x0
// 004d5543: JMP 0x004d4df0
//   XREF to: 004d4df0 (UNCONDITIONAL_JUMP)
