// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0
// Address: 0059e0a0
// Address Range: [[0059e0a0, 0059eb43]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0()
// Cross-references:
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d5202 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020 (0059e020) at 0059e02f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070 (0059e070) at 0059e081 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf75e [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052e4c0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
//   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_negateFirstComponent_FUN_005f75e0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0(undefined4 param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4) */

void core_skeleton_cpp_CDeformableModelInstance_FUN_0059e0a0
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
               CDeformableModelInstance *param_5,int param_6,undefined4 param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  CSkeleton *this_ptr;
  int iVar7;
  int extraout_EAX;
  CQuaternion4f *pCVar8;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  CDeformableModelInstance *pCVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float *pfVar15;
  float *pfVar16;
  byte bVar17;
  float afStackY_1a54 [117];
  CQuaternion4f *in_stack_ffffe798;
  float fVar18;
  CQuaternion4f *in_stack_ffffe79c;
  CQuaternion4f *in_stack_ffffe7a0;
  CQuaternion4f *in_stack_ffffe7a4;
  CQuaternion4f *in_stack_ffffe7a8;
  CQuaternion4f *in_stack_ffffe7ac;
  CQuaternion4f *in_stack_ffffe7b0;
  CQuaternion4f CStack_1220;
  float afStack_1208 [393];
  undefined1 auStack_be4 [1596];
  int aiStack_5a8 [100];
  int aiStack_418 [104];
  undefined4 uStack_278;
  CQuaternion4f CStack_274;
  float afStack_264 [4];
  float fStack_254;
  float afStack_250 [10];
  undefined4 auStack_228 [2];
  undefined4 uStack_220;
  undefined4 local_21c [4];
  undefined4 local_20c;
  float afStack_208 [2];
  CQuaternion4f CStack_200;
  undefined4 uStack_1e4;
  float afStack_1e0 [2];
  undefined1 auStack_1d8 [16];
  float afStack_1c8 [2];
  undefined1 auStack_1c0 [8];
  float afStack_1b8 [6];
  undefined4 uStack_1a0;
  CQuaternion4f local_19c;
  float fStack_180;
  undefined4 local_17c [4];
  undefined1 local_16c [12];
  float afStack_160 [4];
  undefined4 uStack_150;
  float local_13c;
  undefined4 auStack_138 [7];
  float local_11c;
  float afStack_118 [6];
  float afStack_100 [5];
  undefined4 local_ec;
  undefined4 auStack_e8 [4];
  undefined1 auStack_d8 [16];
  float fStack_c8;
  CQuaternion4f CStack_c4;
  CQuaternion4f local_ac [2];
  float local_8c [2];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  char *local_6c;
  float local_64;
  char *local_60;
  int local_5c;
  CDeformableModelInstance *local_58;
  CDeformableModelInstance *local_54;
  int local_50;
  int local_4c;
  CSkeleton *local_44;
  CDeformableModelInstance *local_40;
  int local_3c;
  int local_38;
  CDeformableModelInstance *local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_1c;
  int local_18;
  CDeformableModelInstance *pCStack_14;
  int iVar19;
  
  bVar17 = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(param_5);
  core_motion_cpp_CMotionController_FUN_0052e4c0();
  if ((int)param_8 < 0) {
    local_2c = 0;
    if (0 < this_ptr->bone_count) {
      local_54 = param_5;
      local_34 = param_5;
      do {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr,local_2c,local_7c,local_80,(float)in_stack_ffffe798);
        pCVar12 = local_34;
        local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).current_motion_index;
        pfVar16 = (float *)((int)local_54 + (uint)bVar17 * -8 + 0x6b4);
        *(float *)(local_54->field3_0x508 + 0x1a8) = afStack_250[3];
        pfVar11 = pfVar16 + (uint)bVar17 * -2 + 1;
        *pfVar16 = afStack_250[(uint)bVar17 * -2 + 4];
        *pfVar11 = afStack_250[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
        pfVar11[(uint)bVar17 * -2 + 1] =
             (afStack_250 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 5)[(uint)bVar17 * -2 + 1];
        *(undefined4 *)(pCVar12->field3_0x508 + 0x7e8) =
             *(undefined4 *)(pCVar12->field3_0x508 + 0xc);
        local_2c = local_2c + 1;
        local_54 = (CDeformableModelInstance *)&(local_54->motion_controller).tween_speed;
      } while (local_2c < this_ptr->bone_count);
    }
    pCVar4 = this_ptr->frame_positions_1;
    fVar18 = pCVar4[local_80].y;
    fVar1 = pCVar4[local_80].z;
    fVar6 = 1.0 - (float)in_stack_ffffe798;
    pCVar5 = this_ptr->frame_positions_1;
    fVar2 = pCVar5[local_7c].y;
    fVar3 = pCVar5[local_7c].z;
    if ((float *)(param_5->field3_0x508 + 0x19c) != local_8c) {
      *(float *)(param_5->field3_0x508 + 0x19c) =
           pCVar5[local_7c].x * fVar6 + pCVar4[local_80].x * (float)in_stack_ffffe798;
      *(float *)(param_5->field3_0x508 + 0x1a0) = fVar2 * fVar6 + fVar18 * (float)in_stack_ffffe798;
      *(float *)(param_5->field3_0x508 + 0x1a4) = fVar3 * fVar6 + fVar1 * (float)in_stack_ffffe798;
    }
    fVar18 = *(float *)param_5->field3_0x508;
    *(float *)(param_5->field3_0x508 + 0x1a0) =
         *(float *)(param_5->field3_0x508 + 4) * *(float *)(param_5->field3_0x508 + 0x1a0);
    *(float *)(param_5->field3_0x508 + 0x1a4) =
         *(float *)(param_5->field3_0x508 + 8) * *(float *)(param_5->field3_0x508 + 0x1a4);
    *(float *)(param_5->field3_0x508 + 0x19c) = fVar18 * *(float *)(param_5->field3_0x508 + 0x19c);
    return;
  }
  if (param_5->field9_0x2250 == 1) {
    pCStack_14 = (CDeformableModelInstance *)0x0;
    if (0 < this_ptr->bone_count) {
      local_4c = 0;
      local_30 = 0;
      do {
        iVar19 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr,(int)pCStack_14,(int)param_8);
        *(int *)((int)aiStack_5a8 + (int)local_34) = iVar19;
        if (-1 < iVar19) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr,local_18,local_80,local_84,(float)in_stack_ffffe798);
          puVar9 = (undefined4 *)(auStack_be4 + (uint)bVar17 * -8 + local_4c + 4);
          *(float *)(auStack_be4 + local_4c) = CStack_c4.w;
          puVar10 = (undefined4 *)((int)&CStack_c4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          *puVar9 = *(undefined4 *)((int)&CStack_c4 + (uint)bVar17 * -8 + 4);
          puVar9[(uint)bVar17 * -2 + 1] = *puVar10;
          (puVar9 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] = puVar10[(uint)bVar17 * -2 + 1];
        }
        pCStack_14 = (CDeformableModelInstance *)((int)pCStack_14 + 1);
        local_30 = local_30 + 4;
        local_4c = local_4c + 0x10;
      } while ((int)pCStack_14 < this_ptr->bone_count);
    }
    iVar19 = this_ptr->bone_list[(int)param_8].parent_index;
    if (-1 < iVar19) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr,iVar19,local_7c,local_80,(float)in_stack_ffffe798);
      pfVar16 = (float *)(auStack_be4 + (uint)bVar17 * -8 + iVar19 * 0x10 + 4);
      *(float *)(auStack_be4 + iVar19 * 0x10) = afStack_1b8[1];
      *pfVar16 = afStack_1b8[(uint)bVar17 * -2 + 2];
      pfVar16[(uint)bVar17 * -2 + 1] = afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 3];
      (pfVar16 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
           (afStack_1b8 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 3)[(uint)bVar17 * -2 + 1];
    }
    local_24 = 0;
    if (0 < this_ptr->bone_count) {
      local_50 = 0;
      local_6c = param_5->field3_0x508 + 0x1a8;
      local_44 = this_ptr;
      local_40 = param_5;
      do {
        if (-1 < *(int *)((int)aiStack_5a8 + local_50 + 4)) {
          local_78 = local_44->bone_list[0].parent_index;
          local_60 = (char *)(local_24 * 0x10);
          if (local_78 < 0) {
            puVar10 = (undefined4 *)(auStack_be4 + local_24 * 0x10);
            pCVar12 = local_40;
          }
          else {
            local_78 = local_78 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)(auStack_be4 + local_78),in_stack_ffffe798);
            pCVar8 = &CStack_200;
            iVar19 = local_5c + 4;
            afStack_208[1] = (float)uStack_150;
            puVar10 = (undefined4 *)((int)&CStack_200 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 4);
            *(float *)((int)&CStack_200 + (uint)bVar17 * -8) = afStack_160[(uint)bVar17 * -2 + 5];
            *puVar10 = auStack_138[(uint)bVar17 * -2 + (uint)bVar17 * -2 + -4];
            puVar10[(uint)bVar17 * -2 + 1] =
                 (auStack_138 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + -4)[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      ((CQuaternion4f *)(auStack_be4 + iVar19),pCVar8,in_stack_ffffe79c);
            in_stack_ffffe79c = (CQuaternion4f *)((int)local_64 + local_70);
            in_stack_ffffe798 = local_ac;
            local_ac[0].w = local_13c;
            puVar10 = (undefined4 *)((int)local_ac + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(undefined4 *)((int)local_ac + (uint)bVar17 * -8 + 4) = auStack_138[(uint)bVar17 * -2];
            *puVar10 = auStack_138[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            puVar10[(uint)bVar17 * -2 + 1] =
                 (auStack_138 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe798,in_stack_ffffe79c,in_stack_ffffe7a0);
            puVar10 = auStack_228;
            pCVar12 = local_34;
          }
          puVar13 = (undefined4 *)((int)pCVar12 + (uint)bVar17 * -8 + 0x6b4);
          puVar9 = puVar10 + (uint)bVar17 * -2 + 1;
          *(undefined4 *)(pCVar12->field3_0x508 + 0x1a8) = *puVar10;
          puVar10 = puVar13 + (uint)bVar17 * -2 + 1;
          *puVar13 = *puVar9;
          *puVar10 = puVar9[(uint)bVar17 * -2 + 1];
          puVar10[(uint)bVar17 * -2 + 1] = (puVar9 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
        }
        local_24 = local_24 + 1;
        local_50 = local_50 + 4;
        local_40 = (CDeformableModelInstance *)&(local_40->motion_controller).tween_speed;
        local_44 = (CSkeleton *)((local_44->motion_list).state_names[1] + 2);
      } while (local_24 < this_ptr->bone_count);
    }
  }
  else if (param_5->field9_0x2250 == 2) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(param_5);
    iVar19 = 0;
    local_64 = *(float *)(param_6 * 0x54c + 0x9c8 + extraout_EAX);
    if (0 < this_ptr->bone_count) {
      local_38 = 0;
      local_34 = (CDeformableModelInstance *)0x0;
      do {
        fVar18 = param_8;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                          (this_ptr,iVar19,(int)param_8);
        *(int *)((int)aiStack_418 + local_3c) = iVar7;
        if (-1 < iVar7) {
          pCVar8 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                             (this_ptr,(int)pCStack_14,(int)local_6c);
          puVar13 = (undefined4 *)((int)&CStack_1220 + (uint)bVar17 * -8 + local_3c);
          puVar10 = (undefined4 *)((int)pCVar8 + (uint)bVar17 * -8 + 4);
          *(float *)(&stack0xffffeddc + local_3c) = pCVar8->w;
          puVar14 = puVar13 + (uint)bVar17 * -2 + 1;
          puVar9 = puVar10 + (uint)bVar17 * -2 + 1;
          *puVar13 = *puVar10;
          *puVar14 = *puVar9;
          puVar14[(uint)bVar17 * -2 + 1] = puVar9[(uint)bVar17 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr,unaff_EBP,local_7c,local_80,fVar18);
          pfVar16 = (float *)(&stack0xffffe7a4 + (uint)bVar17 * -8 + local_38);
          *(float *)(&stack0xffffe7a0 + local_38) = afStack_160[0];
          *pfVar16 = afStack_160[(uint)bVar17 * -2 + 1];
          pfVar16[(uint)bVar17 * -2 + 1] = afStack_160[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2];
          (pfVar16 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
               (afStack_160 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 2)[(uint)bVar17 * -2 + 1];
        }
        iVar19 = iVar19 + 1;
        local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).current_motion_index;
        local_38 = local_38 + 0x10;
      } while (iVar19 < this_ptr->bone_count);
    }
    local_6c = (char *)this_ptr->bone_list[(int)param_8].parent_index;
    if (-1 < (int)local_6c) {
      iVar19 = (int)local_6c * 0x10;
      fVar18 = local_64;
      pCVar8 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                         (this_ptr,(int)local_6c,(int)local_64);
      puVar13 = (undefined4 *)((int)&CStack_1220 + (uint)bVar17 * -8 + iVar19);
      puVar10 = (undefined4 *)((int)pCVar8 + (uint)bVar17 * -8 + 4);
      *(float *)(&stack0xffffeddc + iVar19) = pCVar8->w;
      puVar14 = puVar13 + (uint)bVar17 * -2 + 1;
      puVar9 = puVar10 + (uint)bVar17 * -2 + 1;
      *puVar13 = *puVar10;
      *puVar14 = *puVar9;
      puVar14[(uint)bVar17 * -2 + 1] = puVar9[(uint)bVar17 * -2 + 1];
      local_78 = iVar19;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr,local_70,local_7c,local_80,fVar18);
      puVar10 = (undefined4 *)(&stack0xffffe7a4 + (uint)bVar17 * -8 + local_74);
      *(undefined4 *)(&stack0xffffe7a0 + local_74) = uStack_220;
      *puVar10 = local_21c[(uint)bVar17 * -2];
      puVar10[(uint)bVar17 * -2 + 1] = local_21c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      (puVar10 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
           (local_21c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
    }
    local_24 = 0;
    if (0 < this_ptr->bone_count) {
      local_58 = (CDeformableModelInstance *)0x0;
      local_60 = param_5->field3_0x508 + 0x1a8;
      local_44 = this_ptr;
      pCStack_14 = param_5;
      do {
        if (-1 < *(int *)((int)aiStack_418 + (int)local_58 + 8)) {
          local_1c = local_44->bone_list[0].parent_index;
          iVar19 = local_24 * 0x10;
          pfVar16 = (float *)((int)&CStack_1220 + (uint)bVar17 * -8 + iVar19 + 4);
          auStack_1c0._0_4_ = (&CStack_1220)[local_24].w;
          pfVar11 = pfVar16 + (uint)bVar17 * -2 + 1;
          afStack_1b8[(uint)bVar17 * -2 + -1] = *pfVar16;
          afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2] = *pfVar11;
          (afStack_1b8 + (uint)bVar17 * -2 + (uint)bVar17 * -2)[(uint)bVar17 * -2 + 1] =
               pfVar11[(uint)bVar17 * -2 + 1];
          puVar10 = (undefined4 *)(&stack0xffffe7a4 + (uint)bVar17 * -8 + iVar19);
          auStack_d8._8_4_ = *(float *)(&stack0xffffe7a0 + iVar19);
          *(undefined4 *)(auStack_d8 + (uint)bVar17 * -8 + 0xc) = *puVar10;
          iVar19 = local_1c;
          (&fStack_c8)[(uint)bVar17 * -2 + (uint)bVar17 * -2] =
               (float)puVar10[(uint)bVar17 * -2 + 1];
          (&fStack_c8 + (uint)bVar17 * -2 + (uint)bVar17 * -2)[(uint)bVar17 * -2 + 1] =
               (float)(puVar10 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
          puVar10 = (undefined4 *)((int)pCStack_14 + (uint)bVar17 * -8 + 0x6b4);
          auStack_e8[2] = *(undefined4 *)(pCStack_14->field3_0x508 + 0x1a8);
          puVar9 = puVar10 + (uint)bVar17 * -2 + 1;
          *(undefined4 *)(auStack_d8 + (uint)bVar17 * -8 + -4) = *puVar10;
          *(undefined4 *)(auStack_d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8) = *puVar9;
          *(undefined4 *)
           ((int)(auStack_d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8) + ((uint)bVar17 * -2 + 1) * 4)
               = puVar9[(uint)bVar17 * -2 + 1];
          if (-1 < iVar19) {
            local_74 = iVar19 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      (&CStack_1220 + iVar19,in_stack_ffffe79c);
            pCVar8 = &local_19c;
            uStack_1a0 = local_ec;
            puVar10 = (undefined4 *)((int)&local_19c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 4);
            *(undefined4 *)((int)&local_19c + (uint)bVar17 * -8) = auStack_e8[(uint)bVar17 * -2];
            *puVar10 = auStack_e8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            puVar10[(uint)bVar17 * -2 + 1] =
                 (auStack_e8 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      ((CQuaternion4f *)(auStack_1c0 + 4),pCVar8,in_stack_ffffe7a0);
            auStack_1c0._4_4_ = afStack_250[2];
            afStack_1b8[(uint)bVar17 * -2] = afStack_250[(uint)bVar17 * -2 + 3];
            afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 afStack_250[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
            (afStack_1b8 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                 (afStack_250 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 4)[(uint)bVar17 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)(&stack0xffffe7a8 + (int)local_6c),in_stack_ffffe7a4);
            pCVar8 = &CStack_274;
            in_stack_ffffe7a0 = &CStack_c4;
            uStack_278 = uStack_1e4;
            *(float *)((int)&CStack_274 + (uint)bVar17 * -8) = afStack_1e0[(uint)bVar17 * -2];
            afStack_264[(uint)bVar17 * -2 + (uint)bVar17 * -2 + -3] =
                 *(float *)(auStack_1d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + -4);
            (afStack_264 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + -3)[(uint)bVar17 * -2 + 1] =
                 *(float *)((int)(auStack_1d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + -4) +
                           ((uint)bVar17 * -2 + 1) * 4);
            in_stack_ffffe79c = (CQuaternion4f *)0x59ea73;
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe7a0,pCVar8,in_stack_ffffe7a8);
            pCVar8 = (CQuaternion4f *)(local_50 + (int)local_64);
            CStack_c4.x = fStack_180;
            puVar10 = (undefined4 *)((int)&CStack_c4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 0xc);
            *(undefined4 *)((int)&CStack_c4 + (uint)bVar17 * -8 + 8) = local_17c[(uint)bVar17 * -2];
            *puVar10 = local_17c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            puVar10[(uint)bVar17 * -2 + 1] =
                 (local_17c + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(pCVar8,in_stack_ffffe7ac);
            in_stack_ffffe7ac = (CQuaternion4f *)local_16c;
            in_stack_ffffe7a8 = (CQuaternion4f *)(auStack_d8 + 0xc);
            local_17c[3] = local_ec;
            *(undefined4 *)(local_16c + (uint)bVar17 * -8) = auStack_e8[(uint)bVar17 * -2];
            *(undefined4 *)(local_16c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 4) =
                 auStack_e8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            *(undefined4 *)
             ((int)(local_16c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 4) +
             ((uint)bVar17 * -2 + 1) * 4) =
                 (auStack_e8 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            in_stack_ffffe7a4 = (CQuaternion4f *)0x59eadd;
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe7a8,in_stack_ffffe7ac,in_stack_ffffe7b0);
            auStack_d8._12_4_ = afStack_118[0];
            pfVar16 = (float *)((int)&CStack_c4 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
            (&fStack_c8)[(uint)bVar17 * -2] = afStack_118[(uint)bVar17 * -2 + 1];
            *pfVar16 = afStack_118[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2];
            pfVar16[(uint)bVar17 * -2 + 1] =
                 (afStack_118 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 2)[(uint)bVar17 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_005f75e0
                    ((CQuaternion4f *)auStack_1c0,in_stack_ffffe79c);
          pCVar8 = (CQuaternion4f *)(auStack_1d8 + 0xc);
          auStack_1d8._8_4_ = local_11c;
          afStack_1c8[(uint)bVar17 * -2 + -1] = afStack_118[(uint)bVar17 * -2];
          afStack_1c8[(uint)bVar17 * -2 + (uint)bVar17 * -2] =
               afStack_118[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          (afStack_1c8 + (uint)bVar17 * -2 + (uint)bVar17 * -2)[(uint)bVar17 * -2 + 1] =
               (afStack_118 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    ((CQuaternion4f *)(auStack_d8 + 0xc),pCVar8,in_stack_ffffe7a0);
          in_stack_ffffe7a0 = (CQuaternion4f *)auStack_1d8;
          in_stack_ffffe79c = (CQuaternion4f *)auStack_d8;
          afStack_1e0[1] = CStack_274.z;
          *(float *)(auStack_1d8 + (uint)bVar17 * -8) = afStack_264[(uint)bVar17 * -2];
          *(float *)(auStack_1d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 4) =
               afStack_264[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          *(float *)((int)(auStack_1d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 4) +
                    ((uint)bVar17 * -2 + 1) * 4) =
               (afStack_264 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    (in_stack_ffffe79c,in_stack_ffffe7a0,in_stack_ffffe7a4);
          local_16c._4_4_ = fStack_254;
          afStack_160[(uint)bVar17 * -2 + -1] = afStack_250[(uint)bVar17 * -2];
          afStack_160[(uint)bVar17 * -2 + (uint)bVar17 * -2] =
               afStack_250[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          (afStack_160 + (uint)bVar17 * -2 + (uint)bVar17 * -2)[(uint)bVar17 * -2 + 1] =
               (afStack_250 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
          if (unaff_EBP < 0) {
            pfVar16 = afStack_264 + 4;
            iVar19 = unaff_ESI;
          }
          else {
            in_stack_ffffe7a4 = (CQuaternion4f *)(unaff_EBP * 0x10 + (int)local_54);
            in_stack_ffffe7a0 = (CQuaternion4f *)(local_16c + 8);
            in_stack_ffffe79c = (CQuaternion4f *)0x59e94d;
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe7a0,in_stack_ffffe7a4,in_stack_ffffe7a8);
            pfVar16 = afStack_100;
            iVar19 = unaff_EBX;
          }
          pfVar15 = (float *)(iVar19 + 0x6b4 + (uint)bVar17 * -8);
          pfVar11 = pfVar16 + (uint)bVar17 * -2 + 1;
          *(float *)(iVar19 + 0x6b0) = *pfVar16;
          pfVar16 = pfVar15 + (uint)bVar17 * -2 + 1;
          *pfVar15 = *pfVar11;
          *pfVar16 = pfVar11[(uint)bVar17 * -2 + 1];
          pfVar16[(uint)bVar17 * -2 + 1] = (pfVar11 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
        }
        local_24 = local_24 + 1;
        local_58 = (CDeformableModelInstance *)((int)local_58 + 4);
        local_44 = (CSkeleton *)((local_44->motion_list).state_names[1] + 2);
        pCStack_14 = (CDeformableModelInstance *)&(pCStack_14->motion_controller).tween_speed;
      } while (local_24 < this_ptr->bone_count);
    }
  }
  else {
    local_1c = 0;
    if (0 < this_ptr->bone_count) {
      local_58 = param_5;
      do {
        iVar19 = local_1c;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                          (this_ptr,local_1c,(int)param_8);
        if (-1 < iVar7) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr,iVar19,local_78,local_7c,(float)in_stack_ffffe79c);
          pfVar16 = (float *)(local_50 + 0x6b4 + (uint)bVar17 * -8);
          *(undefined4 *)(local_50 + 0x6b0) = local_20c;
          pfVar11 = pfVar16 + (uint)bVar17 * -2 + 1;
          *pfVar16 = afStack_208[(uint)bVar17 * -2];
          *pfVar11 = afStack_208[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          pfVar11[(uint)bVar17 * -2 + 1] =
               (afStack_208 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
        }
        local_58 = (CDeformableModelInstance *)&(local_58->motion_controller).tween_speed;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->bone_count);
    }
  }
  return;
}


// Assembly code:
// 0059e0a0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0
// 0059e0a1: PUSH ESI
// 0059e0a2: PUSH EDI
// 0059e0a3: PUSH EBP
// 0059e0a4: MOV EBP,ESP
// 0059e0a6: SUB ESP,0x185c
// 0059e0ac: AND ESP,0xfffffff8
// 0059e0af: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059e0b2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e0b5: PUSH EDX
// 0059e0b6: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059e0bb: MOV ESI,EAX
// 0059e0bd: ADD ESP,0x4
// 0059e0c0: MOV EBX,EAX
// 0059e0c2: MOV EAX,ESP
// 0059e0c4: PUSH EAX
// 0059e0c5: LEA EAX,[ESP + 0x17ec]
//   XREF to: Stack[-0x88] (DATA)
// 0059e0cc: PUSH EAX
// 0059e0cd: LEA EAX,[ESP + 0x17f4]
//   XREF to: Stack[-0x84] (DATA)
// 0059e0d4: PUSH EAX
// 0059e0d5: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059e0d8: PUSH EDI
// 0059e0d9: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e0dc: PUSH ECX
// 0059e0dd: CALL core_motion.cpp_CMotionController_FUN_0052e4c0
//   XREF to: 0052e4c0 (UNCONDITIONAL_CALL)
// 0059e0e2: ADD ESP,0x18
// 0059e0e5: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 0059e0e9: JL 0x0059e175
//   XREF to: 0059e175 (CONDITIONAL_JUMP)
// 0059e0ef: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e0f2: MOV EDX,dword ptr [EAX + 0x2250]
// 0059e0f8: CMP EDX,0x1
// 0059e0fb: JZ 0x0059e382
//   XREF to: 0059e382 (CONDITIONAL_JUMP)
// 0059e101: CMP EDX,0x2
// 0059e104: JZ 0x0059e633
//   XREF to: 0059e633 (CONDITIONAL_JUMP)
// 0059e10a: XOR EDI,EDI
// 0059e10c: MOV EAX,dword ptr [ESI + 0x28558]
// 0059e112: MOV dword ptr [ESP + 0x184c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0059e119: TEST EAX,EAX
// 0059e11b: JLE 0x0059e16e
//   XREF to: 0059e16e (CONDITIONAL_JUMP)
// 0059e11d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e120: MOV dword ptr [ESP + 0x1810],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0059e127: MOV ESI,dword ptr [EBP + 0x20]
//   Label: LAB_0059e127
//   XREF to: Stack[0x10] (READ)
// 0059e12a: PUSH ESI
// 0059e12b: MOV EDI,dword ptr [ESP + 0x1850]
//   XREF to: Stack[-0x24] (READ)
// 0059e132: PUSH EDI
// 0059e133: PUSH EBX
// 0059e134: CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059e139: ADD ESP,0xc
// 0059e13c: TEST EAX,EAX
// 0059e13e: JGE 0x0059eb03
//   XREF to: 0059eb03 (CONDITIONAL_JUMP)
// 0059e144: MOV EAX,dword ptr [ESP + 0x1810]
//   Label: LAB_0059e144
//   XREF to: Stack[-0x60] (READ)
// 0059e14b: MOV EDX,dword ptr [ESP + 0x184c]
//   XREF to: Stack[-0x24] (READ)
// 0059e152: MOV ECX,dword ptr [EBX + 0x28558]
// 0059e158: ADD EAX,0x10
// 0059e15b: INC EDX
// 0059e15c: MOV dword ptr [ESP + 0x1810],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0059e163: MOV dword ptr [ESP + 0x184c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059e16a: CMP EDX,ECX
// 0059e16c: JL 0x0059e127
//   XREF to: 0059e127 (CONDITIONAL_JUMP)
// 0059e16e: MOV ESP,EBP
//   Label: LAB_0059e16e
// 0059e170: POP EBP
// 0059e171: POP EDI
// 0059e172: POP ESI
// 0059e173: POP EBX
// 0059e174: RET
// 0059e175: XOR ECX,ECX
//   Label: LAB_0059e175
// 0059e177: MOV EDI,dword ptr [ESI + 0x28558]
// 0059e17d: MOV dword ptr [ESP + 0x183c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0059e184: TEST EDI,EDI
// 0059e186: JLE 0x0059e230
//   XREF to: 0059e230 (CONDITIONAL_JUMP)
// 0059e18c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e18f: MOV dword ptr [ESP + 0x1814],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0059e196: MOV dword ptr [ESP + 0x1834],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0059e19d: MOV ESI,dword ptr [ESP + 0x17e8]
//   Label: LAB_0059e19d
//   XREF to: Stack[-0x88] (READ)
// 0059e1a4: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e1a7: PUSH ESI
// 0059e1a8: MOV EDI,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x84] (READ)
// 0059e1af: PUSH EDI
// 0059e1b0: MOV EAX,dword ptr [ESP + 0x1848]
//   XREF to: Stack[-0x34] (READ)
// 0059e1b7: PUSH EAX
// 0059e1b8: PUSH EBX
// 0059e1b9: LEA ESI,[ESP + 0x1638]
//   XREF to: Stack[-0x24c] (DATA)
// 0059e1c0: CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059e1c5: ADD ESP,0x14
// 0059e1c8: LEA ESI,[ESP + 0x1624]
//   XREF to: Stack[-0x24c] (DATA)
// 0059e1cf: MOV EDI,dword ptr [ESP + 0x1814]
//   XREF to: Stack[-0x5c] (READ)
// 0059e1d6: MOV EAX,dword ptr [ESP + 0x1834]
//   XREF to: Stack[-0x3c] (READ)
// 0059e1dd: MOV ECX,dword ptr [ESP + 0x1814]
//   XREF to: Stack[-0x5c] (READ)
// 0059e1e4: LEA EDX,[EAX + 0x4]
// 0059e1e7: LEA EDI,[EDI + 0x6b0]
// 0059e1ed: ADD ECX,0x10
// 0059e1f0: MOV dword ptr [ESP + 0x1834],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0059e1f7: MOVSD ES:EDI,ESI
// 0059e1f8: MOVSD ES:EDI,ESI
// 0059e1f9: MOVSD ES:EDI,ESI
// 0059e1fa: MOVSD ES:EDI,ESI
// 0059e1fb: MOV dword ptr [ESP + 0x1814],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 0059e202: FLD float ptr [EAX + 0x514]
// 0059e208: MOV ESI,dword ptr [ESP + 0x183c]
//   XREF to: Stack[-0x34] (READ)
// 0059e20f: FSTP float ptr [EAX + 0xcf0]
// 0059e215: INC ESI
// 0059e216: MOV EDI,dword ptr [EBX + 0x28558]
// 0059e21c: MOV dword ptr [ESP + 0x183c],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0059e223: CMP ESI,EDI
// 0059e225: JL 0x0059e19d
//   XREF to: 0059e19d (CONDITIONAL_JUMP)
// 0059e22b: LEA EAX,[EAX]
// 0059e22e: MOV ECX,ECX
// 0059e230: MOV ESI,dword ptr [ESP + 0x17e8]
//   Label: LAB_0059e230
//   XREF to: Stack[-0x88] (READ)
// 0059e237: LEA EAX,[ESI*0x4 + 0x0]
// 0059e23e: SUB EAX,ESI
// 0059e240: MOV ESI,dword ptr [EBX + 0x29374]
// 0059e246: FLD float ptr [ESI + EAX*0x4]
// 0059e249: FMUL float ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e24c: FSTP float ptr [ESP + 0x17c4]
//   XREF to: Stack[-0xac] (WRITE)
// 0059e253: FLD float ptr [ESI + EAX*0x4 + 0x4]
// 0059e257: FMUL float ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e25a: FSTP float ptr [ESP + 0x17c8]
//   XREF to: Stack[-0xa8] (WRITE)
// 0059e261: FLD float ptr [ESI + EAX*0x4 + 0x8]
// 0059e265: FMUL float ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e268: MOV ESI,dword ptr [ESP + 0x17ec]
//   XREF to: Stack[-0x84] (READ)
// 0059e26f: FLD float ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e272: LEA EAX,[ESI*0x4 + 0x0]
// 0059e279: FLD1
// 0059e27b: SUB EAX,ESI
// 0059e27d: FSUBRP
// 0059e27f: LEA ESI,[EAX*0x4 + 0x0]
// 0059e286: FXCH
// 0059e288: FSTP float ptr [ESP + 0x17cc]
//   XREF to: Stack[-0xa4] (WRITE)
// 0059e28f: MOV EAX,dword ptr [EBX + 0x29374]
// 0059e295: FSTP float ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x7c] (WRITE)
// 0059e29c: FLD float ptr [ESI + EAX*0x1]
// 0059e29f: FMUL float ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x7c] (READ)
// 0059e2a6: FSTP float ptr [ESP + 0x17d0]
//   XREF to: Stack[-0xa0] (WRITE)
// 0059e2ad: FLD float ptr [ESI + EAX*0x1 + 0x4]
// 0059e2b1: FMUL float ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x7c] (READ)
// 0059e2b8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e2bb: FSTP float ptr [ESP + 0x17d4]
//   XREF to: Stack[-0x9c] (WRITE)
// 0059e2c2: FLD float ptr [ESI + EAX*0x1 + 0x8]
// 0059e2c6: FMUL float ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x7c] (READ)
// 0059e2cd: ADD EBX,0x6a4
// 0059e2d3: FLD float ptr [ESP + 0x17d0]
//   XREF to: Stack[-0xa0] (READ)
// 0059e2da: FADD float ptr [ESP + 0x17c4]
//   XREF to: Stack[-0xac] (READ)
// 0059e2e1: FLD float ptr [ESP + 0x17d4]
//   XREF to: Stack[-0x9c] (READ)
// 0059e2e8: FXCH
// 0059e2ea: FSTP float ptr [ESP + 0x17dc]
//   XREF to: Stack[-0x94] (WRITE)
// 0059e2f1: LEA EAX,[ESP + 0x17dc]
//   XREF to: Stack[-0x94] (DATA)
// 0059e2f8: FADD float ptr [ESP + 0x17c8]
//   XREF to: Stack[-0xa8] (READ)
// 0059e2ff: FXCH
// 0059e301: FST float ptr [ESP + 0x17d8]
//   XREF to: Stack[-0x98] (WRITE)
// 0059e308: FADD float ptr [ESP + 0x17cc]
//   XREF to: Stack[-0xa4] (READ)
// 0059e30f: FXCH
// 0059e311: FSTP float ptr [ESP + 0x17e0]
//   XREF to: Stack[-0x90] (WRITE)
// 0059e318: FSTP float ptr [ESP + 0x17e4]
//   XREF to: Stack[-0x8c] (WRITE)
// 0059e31f: CMP EBX,EAX
// 0059e321: JZ 0x0059e340
//   XREF to: 0059e340 (CONDITIONAL_JUMP)
// 0059e323: MOV EAX,dword ptr [ESP + 0x17dc]
//   XREF to: Stack[-0x94] (DATA)
// 0059e32a: MOV dword ptr [EBX],EAX
// 0059e32c: MOV EAX,dword ptr [ESP + 0x17e0]
//   XREF to: Stack[-0x90] (READ)
// 0059e333: MOV dword ptr [EBX + 0x4],EAX
// 0059e336: MOV EAX,dword ptr [ESP + 0x17e4]
//   XREF to: Stack[-0x8c] (READ)
// 0059e33d: MOV dword ptr [EBX + 0x8],EAX
// 0059e340: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0059e340
//   XREF to: Stack[0x4] (READ)
// 0059e343: FLD float ptr [EAX + 0x508]
// 0059e349: FMUL float ptr [EAX + 0x6a4]
// 0059e34f: FLD float ptr [EAX + 0x50c]
// 0059e355: FMUL float ptr [EAX + 0x6a8]
// 0059e35b: FLD float ptr [EAX + 0x510]
// 0059e361: FMUL float ptr [EAX + 0x6ac]
// 0059e367: FXCH
// 0059e369: FSTP float ptr [EAX + 0x6a8]
// 0059e36f: FSTP float ptr [EAX + 0x6ac]
// 0059e375: FSTP float ptr [EAX + 0x6a4]
// 0059e37b: MOV ESP,EBP
// 0059e37d: POP EBP
// 0059e37e: POP EDI
// 0059e37f: POP ESI
// 0059e380: POP EBX
// 0059e381: RET
// 0059e382: XOR EAX,EAX
//   Label: LAB_0059e382
// 0059e384: MOV EDX,dword ptr [ESI + 0x28558]
// 0059e38a: MOV dword ptr [ESP + 0x1854],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059e391: TEST EDX,EDX
// 0059e393: JLE 0x0059e451
//   XREF to: 0059e451 (CONDITIONAL_JUMP)
// 0059e399: MOV dword ptr [ESP + 0x181c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0059e3a0: MOV dword ptr [ESP + 0x1838],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0059e3a7: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_0059e3a7
//   XREF to: Stack[0x10] (READ)
// 0059e3aa: PUSH EAX
// 0059e3ab: MOV EDX,dword ptr [ESP + 0x1858]
//   XREF to: Stack[-0x1c] (READ)
// 0059e3b2: PUSH EDX
// 0059e3b3: PUSH EBX
// 0059e3b4: CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059e3b9: ADD ESP,0xc
// 0059e3bc: MOV ESI,dword ptr [ESP + 0x1838]
//   XREF to: Stack[-0x38] (READ)
// 0059e3c3: MOV dword ptr [ESP + ESI*0x1 + 0x12c4],EAX
// 0059e3ca: TEST EAX,EAX
// 0059e3cc: JL 0x0059e412
//   XREF to: 0059e412 (CONDITIONAL_JUMP)
// 0059e3ce: MOV ESI,dword ptr [ESP + 0x17e8]
//   XREF to: Stack[-0x88] (READ)
// 0059e3d5: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e3d8: PUSH ESI
// 0059e3d9: MOV EDI,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x84] (READ)
// 0059e3e0: PUSH EDI
// 0059e3e1: MOV EAX,dword ptr [ESP + 0x1860]
//   XREF to: Stack[-0x1c] (READ)
// 0059e3e8: PUSH EAX
// 0059e3e9: PUSH EBX
// 0059e3ea: LEA ESI,[ESP + 0x17b8]
//   XREF to: Stack[-0xcc] (DATA)
// 0059e3f1: CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059e3f6: ADD ESP,0x14
// 0059e3f9: MOV EDI,dword ptr [ESP + 0x181c]
//   XREF to: Stack[-0x54] (READ)
// 0059e400: LEA ESI,[ESP + 0x17a4]
//   XREF to: Stack[-0xcc] (DATA)
// 0059e407: LEA EDI,[ESP + EDI*0x1 + 0xc84]
// 0059e40e: MOVSD ES:EDI,ESI
// 0059e40f: MOVSD ES:EDI,ESI
// 0059e410: MOVSD ES:EDI,ESI
// 0059e411: MOVSD ES:EDI,ESI
// 0059e412: MOV EDI,dword ptr [ESP + 0x1838]
//   Label: LAB_0059e412
//   XREF to: Stack[-0x38] (READ)
// 0059e419: MOV EAX,dword ptr [ESP + 0x181c]
//   XREF to: Stack[-0x54] (READ)
// 0059e420: MOV EDX,dword ptr [ESP + 0x1854]
//   XREF to: Stack[-0x1c] (READ)
// 0059e427: MOV ECX,dword ptr [EBX + 0x28558]
// 0059e42d: ADD EDI,0x4
// 0059e430: ADD EAX,0x10
// 0059e433: INC EDX
// 0059e434: MOV dword ptr [ESP + 0x1838],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 0059e43b: MOV dword ptr [ESP + 0x181c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0059e442: MOV dword ptr [ESP + 0x1854],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059e449: CMP EDX,ECX
// 0059e44b: JL 0x0059e3a7
//   XREF to: 0059e3a7 (CONDITIONAL_JUMP)
// 0059e451: MOV ESI,dword ptr [EBP + 0x20]
//   Label: LAB_0059e451
//   XREF to: Stack[0x10] (READ)
// 0059e454: LEA EAX,[ESI*0x8 + 0x0]
// 0059e45b: ADD EAX,ESI
// 0059e45d: SHL EAX,0x2
// 0059e460: LEA EDI,[EBX + EAX*0x1]
// 0059e463: MOV EDI,dword ptr [EDI + 0x2857c]
// 0059e469: TEST EDI,EDI
// 0059e46b: JL 0x0059e4a6
//   XREF to: 0059e4a6 (CONDITIONAL_JUMP)
// 0059e46d: MOV ESI,dword ptr [ESP + 0x17e8]
//   XREF to: Stack[-0x88] (READ)
// 0059e474: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e477: PUSH ESI
// 0059e478: MOV EAX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x84] (READ)
// 0059e47f: PUSH EAX
// 0059e480: PUSH EDI
// 0059e481: PUSH EBX
// 0059e482: LEA ESI,[ESP + 0x16c8]
//   XREF to: Stack[-0x1bc] (DATA)
// 0059e489: CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059e48e: SHL EDI,0x4
// 0059e491: ADD ESP,0x14
// 0059e494: LEA ESI,[ESP + 0x16b4]
//   XREF to: Stack[-0x1bc] (DATA)
// 0059e49b: LEA EDI,[ESP + EDI*0x1 + 0xc84]
// 0059e4a2: MOVSD ES:EDI,ESI
// 0059e4a3: MOVSD ES:EDI,ESI
// 0059e4a4: MOVSD ES:EDI,ESI
// 0059e4a5: MOVSD ES:EDI,ESI
// 0059e4a6: XOR EDX,EDX
//   Label: LAB_0059e4a6
// 0059e4a8: MOV ECX,dword ptr [EBX + 0x28558]
// 0059e4ae: MOV dword ptr [ESP + 0x1844],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059e4b5: TEST ECX,ECX
// 0059e4b7: JLE 0x0059e16e
//   XREF to: 0059e16e (CONDITIONAL_JUMP)
// 0059e4bd: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e4c0: ADD EAX,0x6b0
// 0059e4c5: MOV dword ptr [ESP + 0x1818],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 0059e4cc: MOV dword ptr [ESP + 0x17fc],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0059e4d3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e4d6: MOV dword ptr [ESP + 0x1824],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 0059e4dd: MOV dword ptr [ESP + 0x1828],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0059e4e4: MOV EAX,dword ptr [ESP + 0x1818]
//   Label: LAB_0059e4e4
//   XREF to: Stack[-0x58] (READ)
// 0059e4eb: CMP dword ptr [ESP + EAX*0x1 + 0x12c4],0x0
// 0059e4f3: JL 0x0059e52f
//   XREF to: 0059e52f (CONDITIONAL_JUMP)
// 0059e4f5: MOV ESI,dword ptr [ESP + 0x1844]
//   XREF to: Stack[-0x2c] (READ)
// 0059e4fc: MOV EAX,dword ptr [ESP + 0x1824]
//   XREF to: Stack[-0x4c] (READ)
// 0059e503: SHL ESI,0x4
// 0059e506: MOV EAX,dword ptr [EAX + 0x2857c]
// 0059e50c: MOV dword ptr [ESP + 0x1808],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 0059e513: TEST EAX,EAX
// 0059e515: JGE 0x0059e584
//   XREF to: 0059e584 (CONDITIONAL_JUMP)
// 0059e517: MOV EDI,dword ptr [ESP + 0x1828]
//   XREF to: Stack[-0x48] (READ)
// 0059e51e: LEA ESI,[ESP + ESI*0x1 + 0xc84]
// 0059e525: LEA EDI,[EDI + 0x6b0]
//   Label: LAB_0059e525
// 0059e52b: MOVSD ES:EDI,ESI
// 0059e52c: MOVSD ES:EDI,ESI
// 0059e52d: MOVSD ES:EDI,ESI
// 0059e52e: MOVSD ES:EDI,ESI
// 0059e52f: MOV EDX,dword ptr [ESP + 0x1818]
//   Label: LAB_0059e52f
//   XREF to: Stack[-0x58] (READ)
// 0059e536: MOV ECX,dword ptr [ESP + 0x1828]
//   XREF to: Stack[-0x48] (READ)
// 0059e53d: MOV ESI,dword ptr [ESP + 0x1824]
//   XREF to: Stack[-0x4c] (READ)
// 0059e544: MOV EDI,dword ptr [ESP + 0x1844]
//   XREF to: Stack[-0x2c] (READ)
// 0059e54b: ADD EDX,0x4
// 0059e54e: ADD ECX,0x10
// 0059e551: ADD ESI,0x24
// 0059e554: INC EDI
// 0059e555: MOV dword ptr [ESP + 0x1818],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 0059e55c: MOV dword ptr [ESP + 0x1828],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 0059e563: MOV dword ptr [ESP + 0x1824],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 0059e56a: MOV EDX,dword ptr [EBX + 0x28558]
// 0059e570: MOV dword ptr [ESP + 0x1844],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0059e577: CMP EDI,EDX
// 0059e579: JGE 0x0059e16e
//   XREF to: 0059e16e (CONDITIONAL_JUMP)
// 0059e57f: JMP 0x0059e4e4
//   XREF to: 0059e4e4 (UNCONDITIONAL_JUMP)
// 0059e584: SHL EAX,0x4
//   Label: LAB_0059e584
// 0059e587: MOV dword ptr [ESP + 0x17f0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0059e58e: LEA EAX,[ESP + 0xc84]
//   XREF to: Stack[-0xbec] (DATA)
// 0059e595: ADD EAX,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x80] (READ)
// 0059e59c: PUSH EAX
// 0059e59d: LEA ESI,[ESP + 0x1718]
//   XREF to: Stack[-0x15c] (DATA)
// 0059e5a4: LEA EDI,[ESP + 0x1668]
//   XREF to: Stack[-0x20c] (DATA)
// 0059e5ab: CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   XREF to: 005f75e0 (UNCONDITIONAL_CALL)
// 0059e5b0: ADD ESP,0x4
// 0059e5b3: LEA EAX,[ESP + 0x1664]
//   XREF to: Stack[-0x20c] (DATA)
// 0059e5ba: MOV EDX,dword ptr [ESP + 0x1808]
//   XREF to: Stack[-0x68] (READ)
// 0059e5c1: PUSH EAX
// 0059e5c2: LEA EAX,[ESP + 0xc88]
//   XREF to: Stack[-0xbec] (DATA)
// 0059e5c9: LEA ESI,[ESP + 0x1718]
//   XREF to: Stack[-0x15c] (DATA)
// 0059e5d0: ADD EAX,EDX
// 0059e5d2: MOVSD ES:EDI,ESI
// 0059e5d3: MOVSD ES:EDI,ESI
// 0059e5d4: MOVSD ES:EDI,ESI
// 0059e5d5: MOVSD ES:EDI,ESI
// 0059e5d6: PUSH EAX
// 0059e5d7: LEA ESI,[ESP + 0x172c]
//   XREF to: Stack[-0x14c] (DATA)
// 0059e5de: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059e5e3: ADD ESP,0x8
// 0059e5e6: MOV EAX,dword ptr [ESP + 0x17fc]
//   XREF to: Stack[-0x74] (READ)
// 0059e5ed: MOV ECX,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x80] (READ)
// 0059e5f4: LEA EDI,[ESP + 0x17b4]
//   XREF to: Stack[-0xbc] (DATA)
// 0059e5fb: ADD EAX,ECX
// 0059e5fd: LEA ESI,[ESP + 0x1724]
//   XREF to: Stack[-0x14c] (DATA)
// 0059e604: PUSH EAX
// 0059e605: LEA EAX,[ESP + 0x17b8]
//   XREF to: Stack[-0xbc] (DATA)
// 0059e60c: MOVSD ES:EDI,ESI
// 0059e60d: MOVSD ES:EDI,ESI
// 0059e60e: MOVSD ES:EDI,ESI
// 0059e60f: MOVSD ES:EDI,ESI
// 0059e610: PUSH EAX
// 0059e611: LEA ESI,[ESP + 0x163c]
//   XREF to: Stack[-0x23c] (DATA)
// 0059e618: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059e61d: ADD ESP,0x8
// 0059e620: MOV EDI,dword ptr [ESP + 0x1828]
//   XREF to: Stack[-0x48] (READ)
// 0059e627: LEA ESI,[ESP + 0x1634]
//   XREF to: Stack[-0x23c] (DATA)
// 0059e62e: JMP 0x0059e525
//   XREF to: 0059e525 (UNCONDITIONAL_JUMP)
// 0059e633: IMUL EDI,EDI,0x54c
//   Label: LAB_0059e633
// 0059e639: PUSH EAX
// 0059e63a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059e63f: ADD ESP,0x4
// 0059e642: XOR ECX,ECX
// 0059e644: MOV dword ptr [ESP + 0x1858],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0059e64b: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x9c8]
// 0059e652: MOV EDI,dword ptr [ESI + 0x28558]
// 0059e658: MOV dword ptr [ESP + 0x1800],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0059e65f: TEST EDI,EDI
// 0059e661: JLE 0x0059e749
//   XREF to: 0059e749 (CONDITIONAL_JUMP)
// 0059e667: MOV dword ptr [ESP + 0x182c],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0059e66e: MOV dword ptr [ESP + 0x1830],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 0059e675: MOV ECX,dword ptr [EBP + 0x20]
//   Label: LAB_0059e675
//   XREF to: Stack[0x10] (READ)
// 0059e678: PUSH ECX
// 0059e679: MOV ESI,dword ptr [ESP + 0x185c]
//   XREF to: Stack[-0x18] (READ)
// 0059e680: PUSH ESI
// 0059e681: PUSH EBX
// 0059e682: CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059e687: ADD ESP,0xc
// 0059e68a: MOV ESI,dword ptr [ESP + 0x1830]
//   XREF to: Stack[-0x40] (READ)
// 0059e691: MOV dword ptr [ESP + ESI*0x1 + 0x1454],EAX
// 0059e698: TEST EAX,EAX
// 0059e69a: JL 0x0059e70a
//   XREF to: 0059e70a (CONDITIONAL_JUMP)
// 0059e69c: MOV EAX,dword ptr [ESP + 0x1800]
//   XREF to: Stack[-0x70] (READ)
// 0059e6a3: PUSH EAX
// 0059e6a4: MOV EDX,dword ptr [ESP + 0x185c]
//   XREF to: Stack[-0x18] (READ)
// 0059e6ab: PUSH EDX
// 0059e6ac: PUSH EBX
// 0059e6ad: CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
//   XREF to: 0059a050 (UNCONDITIONAL_CALL)
// 0059e6b2: ADD ESP,0xc
// 0059e6b5: MOV EDI,dword ptr [ESP + 0x182c]
//   XREF to: Stack[-0x44] (READ)
// 0059e6bc: MOV ESI,EAX
// 0059e6be: LEA EDI,[ESP + EDI*0x1 + 0x644]
// 0059e6c5: MOVSD ES:EDI,ESI
// 0059e6c6: MOVSD ES:EDI,ESI
// 0059e6c7: MOVSD ES:EDI,ESI
// 0059e6c8: MOVSD ES:EDI,ESI
// 0059e6c9: MOV ECX,dword ptr [ESP + 0x17e8]
//   XREF to: Stack[-0x88] (READ)
// 0059e6d0: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e6d3: PUSH ECX
// 0059e6d4: MOV ESI,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x84] (READ)
// 0059e6db: PUSH ESI
// 0059e6dc: MOV EDI,dword ptr [ESP + 0x1864]
//   XREF to: Stack[-0x18] (READ)
// 0059e6e3: PUSH EDI
// 0059e6e4: PUSH EBX
// 0059e6e5: LEA ESI,[ESP + 0x1718]
//   XREF to: Stack[-0x16c] (DATA)
// 0059e6ec: CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059e6f1: ADD ESP,0x14
// 0059e6f4: MOV EDI,dword ptr [ESP + 0x182c]
//   XREF to: Stack[-0x44] (READ)
// 0059e6fb: LEA ESI,[ESP + 0x1704]
//   XREF to: Stack[-0x16c] (DATA)
// 0059e702: LEA EDI,[ESP + EDI*0x1 + 0x4]
// 0059e706: MOVSD ES:EDI,ESI
// 0059e707: MOVSD ES:EDI,ESI
// 0059e708: MOVSD ES:EDI,ESI
// 0059e709: MOVSD ES:EDI,ESI
// 0059e70a: MOV ESI,dword ptr [ESP + 0x1830]
//   Label: LAB_0059e70a
//   XREF to: Stack[-0x40] (READ)
// 0059e711: MOV EDI,dword ptr [ESP + 0x182c]
//   XREF to: Stack[-0x44] (READ)
// 0059e718: MOV EAX,dword ptr [ESP + 0x1858]
//   XREF to: Stack[-0x18] (READ)
// 0059e71f: MOV EDX,dword ptr [EBX + 0x28558]
// 0059e725: ADD ESI,0x4
// 0059e728: ADD EDI,0x10
// 0059e72b: INC EAX
// 0059e72c: MOV dword ptr [ESP + 0x1830],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 0059e733: MOV dword ptr [ESP + 0x182c],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 0059e73a: MOV dword ptr [ESP + 0x1858],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0059e741: CMP EAX,EDX
// 0059e743: JL 0x0059e675
//   XREF to: 0059e675 (CONDITIONAL_JUMP)
// 0059e749: MOV ESI,dword ptr [EBP + 0x20]
//   Label: LAB_0059e749
//   XREF to: Stack[0x10] (READ)
// 0059e74c: LEA EAX,[ESI*0x8 + 0x0]
// 0059e753: ADD EAX,ESI
// 0059e755: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2857c]
// 0059e75c: MOV dword ptr [ESP + 0x17f8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0059e763: TEST EAX,EAX
// 0059e765: JL 0x0059e7d7
//   XREF to: 0059e7d7 (CONDITIONAL_JUMP)
// 0059e767: MOV ESI,dword ptr [ESP + 0x1800]
//   XREF to: Stack[-0x70] (READ)
// 0059e76e: MOV EDI,EAX
// 0059e770: PUSH ESI
// 0059e771: MOV ESI,EDI
// 0059e773: PUSH EAX
// 0059e774: SHL ESI,0x4
// 0059e777: PUSH EBX
// 0059e778: MOV EDI,ESI
// 0059e77a: CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
//   XREF to: 0059a050 (UNCONDITIONAL_CALL)
// 0059e77f: ADD ESP,0xc
// 0059e782: LEA EDI,[ESP + EDI*0x1 + 0x644]
// 0059e789: MOV dword ptr [ESP + 0x17f0],ESI
//   XREF to: Stack[-0x80] (WRITE)
// 0059e790: MOV ESI,EAX
// 0059e792: MOVSD ES:EDI,ESI
// 0059e793: MOVSD ES:EDI,ESI
// 0059e794: MOVSD ES:EDI,ESI
// 0059e795: MOVSD ES:EDI,ESI
// 0059e796: MOV EAX,dword ptr [ESP + 0x17e8]
//   XREF to: Stack[-0x88] (READ)
// 0059e79d: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059e7a0: PUSH EAX
// 0059e7a1: MOV EDX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x84] (READ)
// 0059e7a8: PUSH EDX
// 0059e7a9: MOV ECX,dword ptr [ESP + 0x1804]
//   XREF to: Stack[-0x78] (READ)
// 0059e7b0: PUSH ECX
// 0059e7b1: PUSH EBX
// 0059e7b2: LEA ESI,[ESP + 0x1658]
//   XREF to: Stack[-0x22c] (DATA)
// 0059e7b9: CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059e7be: ADD ESP,0x14
// 0059e7c1: MOV EDI,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x80] (READ)
// 0059e7c8: LEA ESI,[ESP + 0x1644]
//   XREF to: Stack[-0x22c] (DATA)
// 0059e7cf: LEA EDI,[ESP + EDI*0x1 + 0x4]
// 0059e7d3: MOVSD ES:EDI,ESI
// 0059e7d4: MOVSD ES:EDI,ESI
// 0059e7d5: MOVSD ES:EDI,ESI
// 0059e7d6: MOVSD ES:EDI,ESI
// 0059e7d7: XOR ESI,ESI
//   Label: LAB_0059e7d7
// 0059e7d9: MOV EDI,dword ptr [EBX + 0x28558]
// 0059e7df: MOV dword ptr [ESP + 0x1840],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0059e7e6: TEST EDI,EDI
// 0059e7e8: JLE 0x0059e16e
//   XREF to: 0059e16e (CONDITIONAL_JUMP)
// 0059e7ee: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e7f1: ADD EAX,0x6b0
// 0059e7f6: MOV dword ptr [ESP + 0x180c],ESI
//   XREF to: Stack[-0x64] (WRITE)
// 0059e7fd: MOV dword ptr [ESP + 0x1804],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0059e804: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e807: MOV dword ptr [ESP + 0x1820],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 0059e80e: MOV dword ptr [ESP + 0x1850],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059e815: MOV EAX,dword ptr [ESP + 0x180c]
//   Label: LAB_0059e815
//   XREF to: Stack[-0x64] (READ)
// 0059e81c: CMP dword ptr [ESP + EAX*0x1 + 0x1454],0x0
// 0059e824: JL 0x0059e968
//   XREF to: 0059e968 (CONDITIONAL_JUMP)
// 0059e82a: MOV EAX,dword ptr [ESP + 0x1820]
//   XREF to: Stack[-0x50] (READ)
// 0059e831: MOV EAX,dword ptr [EAX + 0x2857c]
// 0059e837: MOV dword ptr [ESP + 0x1848],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059e83e: MOV EAX,dword ptr [ESP + 0x1840]
//   XREF to: Stack[-0x30] (READ)
// 0059e845: SHL EAX,0x4
// 0059e848: LEA EDI,[ESP + 0x16a4]
//   XREF to: Stack[-0x1cc] (DATA)
// 0059e84f: LEA ESI,[ESP + EAX*0x1 + 0x644]
// 0059e856: MOVSD ES:EDI,ESI
// 0059e857: MOVSD ES:EDI,ESI
// 0059e858: MOVSD ES:EDI,ESI
// 0059e859: MOVSD ES:EDI,ESI
// 0059e85a: LEA EDI,[ESP + 0x1794]
//   XREF to: Stack[-0xdc] (DATA)
// 0059e861: LEA ESI,[ESP + EAX*0x1 + 0x4]
// 0059e865: MOVSD ES:EDI,ESI
// 0059e866: MOVSD ES:EDI,ESI
// 0059e867: MOVSD ES:EDI,ESI
// 0059e868: MOVSD ES:EDI,ESI
// 0059e869: MOV ESI,dword ptr [ESP + 0x1850]
//   XREF to: Stack[-0x20] (READ)
// 0059e870: LEA EDI,[ESP + 0x1784]
//   XREF to: Stack[-0xec] (DATA)
// 0059e877: LEA ESI,[ESI + 0x6b0]
// 0059e87d: MOV ECX,dword ptr [ESP + 0x1848]
//   XREF to: Stack[-0x28] (READ)
// 0059e884: MOVSD ES:EDI,ESI
// 0059e885: MOVSD ES:EDI,ESI
// 0059e886: MOVSD ES:EDI,ESI
// 0059e887: MOVSD ES:EDI,ESI
// 0059e888: TEST ECX,ECX
// 0059e88a: JGE 0x0059e9bd
//   XREF to: 0059e9bd (CONDITIONAL_JUMP)
// 0059e890: LEA EAX,[ESP + 0x16a4]
//   Label: LAB_0059e890
//   XREF to: Stack[-0x1cc] (DATA)
// 0059e897: PUSH EAX
// 0059e898: LEA ESI,[ESP + 0x1748]
//   XREF to: Stack[-0x12c] (DATA)
// 0059e89f: LEA EDI,[ESP + 0x1698]
//   XREF to: Stack[-0x1dc] (DATA)
// 0059e8a6: CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   XREF to: 005f75e0 (UNCONDITIONAL_CALL)
// 0059e8ab: ADD ESP,0x4
// 0059e8ae: LEA EAX,[ESP + 0x1694]
//   XREF to: Stack[-0x1dc] (DATA)
// 0059e8b5: LEA ESI,[ESP + 0x1744]
//   XREF to: Stack[-0x12c] (DATA)
// 0059e8bc: PUSH EAX
// 0059e8bd: LEA EAX,[ESP + 0x1798]
//   XREF to: Stack[-0xdc] (DATA)
// 0059e8c4: MOVSD ES:EDI,ESI
// 0059e8c5: MOVSD ES:EDI,ESI
// 0059e8c6: MOVSD ES:EDI,ESI
// 0059e8c7: MOVSD ES:EDI,ESI
// 0059e8c8: PUSH EAX
// 0059e8c9: LEA ESI,[ESP + 0x15fc]
//   XREF to: Stack[-0x27c] (DATA)
// 0059e8d0: LEA EDI,[ESP + 0x168c]
//   XREF to: Stack[-0x1ec] (DATA)
// 0059e8d7: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059e8dc: ADD ESP,0x8
// 0059e8df: LEA EAX,[ESP + 0x1684]
//   XREF to: Stack[-0x1ec] (DATA)
// 0059e8e6: LEA ESI,[ESP + 0x15f4]
//   XREF to: Stack[-0x27c] (DATA)
// 0059e8ed: PUSH EAX
// 0059e8ee: LEA EAX,[ESP + 0x1788]
//   XREF to: Stack[-0xec] (DATA)
// 0059e8f5: MOVSD ES:EDI,ESI
// 0059e8f6: MOVSD ES:EDI,ESI
// 0059e8f7: MOVSD ES:EDI,ESI
// 0059e8f8: MOVSD ES:EDI,ESI
// 0059e8f9: PUSH EAX
// 0059e8fa: LEA ESI,[ESP + 0x160c]
//   XREF to: Stack[-0x26c] (DATA)
// 0059e901: LEA EDI,[ESP + 0x16fc]
//   XREF to: Stack[-0x17c] (DATA)
// 0059e908: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059e90d: ADD ESP,0x8
// 0059e910: LEA ESI,[ESP + 0x1604]
//   XREF to: Stack[-0x26c] (DATA)
// 0059e917: MOV ECX,dword ptr [ESP + 0x1848]
//   XREF to: Stack[-0x28] (READ)
// 0059e91e: MOVSD ES:EDI,ESI
// 0059e91f: MOVSD ES:EDI,ESI
// 0059e920: MOVSD ES:EDI,ESI
// 0059e921: MOVSD ES:EDI,ESI
// 0059e922: TEST ECX,ECX
// 0059e924: JL 0x0059eaf0
//   XREF to: 0059eaf0 (CONDITIONAL_JUMP)
// 0059e92a: MOV EAX,ECX
// 0059e92c: MOV ESI,dword ptr [ESP + 0x1804]
//   XREF to: Stack[-0x6c] (READ)
// 0059e933: SHL EAX,0x4
// 0059e936: ADD EAX,ESI
// 0059e938: PUSH EAX
// 0059e939: LEA EAX,[ESP + 0x16f8]
//   XREF to: Stack[-0x17c] (DATA)
// 0059e940: PUSH EAX
// 0059e941: LEA ESI,[ESP + 0x175c]
//   XREF to: Stack[-0x11c] (DATA)
// 0059e948: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059e94d: ADD ESP,0x8
// 0059e950: MOV EDI,dword ptr [ESP + 0x1850]
//   XREF to: Stack[-0x20] (READ)
// 0059e957: LEA ESI,[ESP + 0x1754]
//   XREF to: Stack[-0x11c] (DATA)
// 0059e95e: LEA EDI,[EDI + 0x6b0]
//   Label: LAB_0059e95e
// 0059e964: MOVSD ES:EDI,ESI
// 0059e965: MOVSD ES:EDI,ESI
// 0059e966: MOVSD ES:EDI,ESI
// 0059e967: MOVSD ES:EDI,ESI
// 0059e968: MOV EAX,dword ptr [ESP + 0x180c]
//   Label: LAB_0059e968
//   XREF to: Stack[-0x64] (READ)
// 0059e96f: MOV EDX,dword ptr [ESP + 0x1820]
//   XREF to: Stack[-0x50] (READ)
// 0059e976: MOV ECX,dword ptr [ESP + 0x1850]
//   XREF to: Stack[-0x20] (READ)
// 0059e97d: MOV ESI,dword ptr [ESP + 0x1840]
//   XREF to: Stack[-0x30] (READ)
// 0059e984: MOV EDI,dword ptr [EBX + 0x28558]
// 0059e98a: ADD EAX,0x4
// 0059e98d: ADD EDX,0x24
// 0059e990: ADD ECX,0x10
// 0059e993: INC ESI
// 0059e994: MOV dword ptr [ESP + 0x180c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0059e99b: MOV dword ptr [ESP + 0x1820],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0059e9a2: MOV dword ptr [ESP + 0x1850],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0059e9a9: MOV dword ptr [ESP + 0x1840],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0059e9b0: CMP ESI,EDI
// 0059e9b2: JGE 0x0059e16e
//   XREF to: 0059e16e (CONDITIONAL_JUMP)
// 0059e9b8: JMP 0x0059e815
//   XREF to: 0059e815 (UNCONDITIONAL_JUMP)
// 0059e9bd: MOV EAX,ECX
//   Label: LAB_0059e9bd
// 0059e9bf: SHL EAX,0x4
// 0059e9c2: MOV dword ptr [ESP + 0x17f0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0059e9c9: LEA EAX,[ESP + 0x644]
//   XREF to: Stack[-0x122c] (DATA)
// 0059e9d0: ADD EAX,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x80] (READ)
// 0059e9d7: PUSH EAX
// 0059e9d8: LEA ESI,[ESP + 0x1778]
//   XREF to: Stack[-0xfc] (DATA)
// 0059e9df: LEA EDI,[ESP + 0x16c8]
//   XREF to: Stack[-0x1ac] (DATA)
// 0059e9e6: CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   XREF to: 005f75e0 (UNCONDITIONAL_CALL)
// 0059e9eb: ADD ESP,0x4
// 0059e9ee: LEA EAX,[ESP + 0x16c4]
//   XREF to: Stack[-0x1ac] (DATA)
// 0059e9f5: LEA ESI,[ESP + 0x1774]
//   XREF to: Stack[-0xfc] (DATA)
// 0059e9fc: PUSH EAX
// 0059e9fd: LEA EAX,[ESP + 0x16a8]
//   XREF to: Stack[-0x1cc] (DATA)
// 0059ea04: MOVSD ES:EDI,ESI
// 0059ea05: MOVSD ES:EDI,ESI
// 0059ea06: MOVSD ES:EDI,ESI
// 0059ea07: MOVSD ES:EDI,ESI
// 0059ea08: PUSH EAX
// 0059ea09: LEA ESI,[ESP + 0x161c]
//   XREF to: Stack[-0x25c] (DATA)
// 0059ea10: LEA EDI,[ESP + 0x16ac]
//   XREF to: Stack[-0x1cc] (DATA)
// 0059ea17: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059ea1c: LEA ESI,[ESP + 0x161c]
//   XREF to: Stack[-0x25c] (DATA)
// 0059ea23: ADD ESP,0x8
// 0059ea26: MOVSD ES:EDI,ESI
// 0059ea27: MOVSD ES:EDI,ESI
// 0059ea28: MOVSD ES:EDI,ESI
// 0059ea29: MOVSD ES:EDI,ESI
// 0059ea2a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x186c] (DATA)
// 0059ea2e: ADD EAX,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x80] (READ)
// 0059ea35: PUSH EAX
// 0059ea36: LEA ESI,[ESP + 0x1678]
//   XREF to: Stack[-0x1fc] (DATA)
// 0059ea3d: LEA EDI,[ESP + 0x15e8]
//   XREF to: Stack[-0x28c] (DATA)
// 0059ea44: CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   XREF to: 005f75e0 (UNCONDITIONAL_CALL)
// 0059ea49: ADD ESP,0x4
// 0059ea4c: LEA EAX,[ESP + 0x15e4]
//   XREF to: Stack[-0x28c] (DATA)
// 0059ea53: LEA ESI,[ESP + 0x1674]
//   XREF to: Stack[-0x1fc] (DATA)
// 0059ea5a: PUSH EAX
// 0059ea5b: LEA EAX,[ESP + 0x1798]
//   XREF to: Stack[-0xdc] (DATA)
// 0059ea62: MOVSD ES:EDI,ESI
// 0059ea63: MOVSD ES:EDI,ESI
// 0059ea64: MOVSD ES:EDI,ESI
// 0059ea65: MOVSD ES:EDI,ESI
// 0059ea66: PUSH EAX
// 0059ea67: LEA ESI,[ESP + 0x16dc]
//   XREF to: Stack[-0x19c] (DATA)
// 0059ea6e: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059ea73: ADD ESP,0x8
// 0059ea76: LEA EDI,[ESP + 0x1794]
//   XREF to: Stack[-0xdc] (DATA)
// 0059ea7d: MOV EAX,dword ptr [ESP + 0x1804]
//   XREF to: Stack[-0x6c] (READ)
// 0059ea84: MOV EDX,dword ptr [ESP + 0x17f0]
//   XREF to: Stack[-0x80] (READ)
// 0059ea8b: LEA ESI,[ESP + 0x16d4]
//   XREF to: Stack[-0x19c] (DATA)
// 0059ea92: ADD EAX,EDX
// 0059ea94: MOVSD ES:EDI,ESI
// 0059ea95: MOVSD ES:EDI,ESI
// 0059ea96: MOVSD ES:EDI,ESI
// 0059ea97: MOVSD ES:EDI,ESI
// 0059ea98: PUSH EAX
// 0059ea99: LEA ESI,[ESP + 0x1768]
//   XREF to: Stack[-0x10c] (DATA)
// 0059eaa0: LEA EDI,[ESP + 0x16e8]
//   XREF to: Stack[-0x18c] (DATA)
// 0059eaa7: CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   XREF to: 005f75e0 (UNCONDITIONAL_CALL)
// 0059eaac: ADD ESP,0x4
// 0059eaaf: LEA EAX,[ESP + 0x16e4]
//   XREF to: Stack[-0x18c] (DATA)
// 0059eab6: LEA ESI,[ESP + 0x1764]
//   XREF to: Stack[-0x10c] (DATA)
// 0059eabd: PUSH EAX
// 0059eabe: LEA EAX,[ESP + 0x1788]
//   XREF to: Stack[-0xec] (DATA)
// 0059eac5: MOVSD ES:EDI,ESI
// 0059eac6: MOVSD ES:EDI,ESI
// 0059eac7: MOVSD ES:EDI,ESI
// 0059eac8: MOVSD ES:EDI,ESI
// 0059eac9: PUSH EAX
// 0059eaca: LEA ESI,[ESP + 0x173c]
//   XREF to: Stack[-0x13c] (DATA)
// 0059ead1: LEA EDI,[ESP + 0x178c]
//   XREF to: Stack[-0xec] (DATA)
// 0059ead8: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059eadd: LEA ESI,[ESP + 0x173c]
//   XREF to: Stack[-0x13c] (DATA)
// 0059eae4: ADD ESP,0x8
// 0059eae7: MOVSD ES:EDI,ESI
// 0059eae8: MOVSD ES:EDI,ESI
// 0059eae9: MOVSD ES:EDI,ESI
// 0059eaea: MOVSD ES:EDI,ESI
// 0059eaeb: JMP 0x0059e890
//   XREF to: 0059e890 (UNCONDITIONAL_JUMP)
// 0059eaf0: MOV EDI,dword ptr [ESP + 0x1850]
//   Label: LAB_0059eaf0
//   XREF to: Stack[-0x20] (READ)
// 0059eaf7: LEA ESI,[ESP + 0x1604]
//   XREF to: Stack[-0x26c] (DATA)
// 0059eafe: JMP 0x0059e95e
//   XREF to: 0059e95e (UNCONDITIONAL_JUMP)
// 0059eb03: MOV EAX,dword ptr [ESP + 0x17e8]
//   Label: LAB_0059eb03
//   XREF to: Stack[-0x88] (READ)
// 0059eb0a: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x1870] (DATA)
// 0059eb0d: PUSH EAX
// 0059eb0e: MOV EDX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0x84] (READ)
// 0059eb15: PUSH EDX
// 0059eb16: PUSH EDI
// 0059eb17: PUSH EBX
// 0059eb18: LEA ESI,[ESP + 0x1668]
//   XREF to: Stack[-0x21c] (DATA)
// 0059eb1f: CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059eb24: ADD ESP,0x14
// 0059eb27: MOV EDI,dword ptr [ESP + 0x1810]
//   XREF to: Stack[-0x60] (READ)
// 0059eb2e: LEA ESI,[ESP + 0x1654]
//   XREF to: Stack[-0x21c] (DATA)
// 0059eb35: LEA EDI,[EDI + 0x6b0]
// 0059eb3b: MOVSD ES:EDI,ESI
// 0059eb3c: MOVSD ES:EDI,ESI
// 0059eb3d: MOVSD ES:EDI,ESI
// 0059eb3e: MOVSD ES:EDI,ESI
// 0059eb3f: JMP 0x0059e144
//   XREF to: 0059e144 (UNCONDITIONAL_JUMP)
