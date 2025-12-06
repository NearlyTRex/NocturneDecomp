// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
// Address: 0059e0a0
// Address Range: [[0059e0a0, 0059eb43]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
          (CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  CSkeleton *this_ptr_00;
  int iVar7;
  CSkeleton *pCVar8;
  CQuaternion4f *pCVar9;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  uint *puVar10;
  uint *puVar11;
  float *pfVar12;
  CDeformableModelInstance *pCVar13;
  uint *puVar14;
  uint *puVar15;
  float *pfVar16;
  float *pfVar17;
  byte bVar18;
  float afStackY_1a54 [116];
  CQuaternion4f *in_stack_ffffe798;
  float fVar19;
  CQuaternion4f *in_stack_ffffe79c;
  CQuaternion4f *in_stack_ffffe7a0;
  CQuaternion4f *in_stack_ffffe7a4;
  CQuaternion4f *in_stack_ffffe7a8;
  CQuaternion4f *in_stack_ffffe7ac;
  CQuaternion4f *in_stack_ffffe7b0;
  CQuaternion4f CStack_1220;
  float afStack_1208 [393];
  byte auStack_be4 [1596];
  int aiStack_5a8 [100];
  int aiStack_418 [104];
  uint uStack_278;
  CQuaternion4f CStack_274;
  float afStack_264 [4];
  float fStack_254;
  float afStack_250 [10];
  float afStack_228 [2];
  uint uStack_220;
  uint local_21c [4];
  uint local_20c;
  float afStack_208 [2];
  CQuaternion4f CStack_200;
  uint uStack_1e4;
  float afStack_1e0 [2];
  byte auStack_1d8 [16];
  float afStack_1c8 [2];
  byte auStack_1c0 [8];
  float afStack_1b8 [6];
  uint uStack_1a0;
  CQuaternion4f local_19c;
  float fStack_180;
  uint local_17c [4];
  byte local_16c [12];
  float afStack_160 [4];
  uint uStack_150;
  float local_13c;
  uint auStack_138 [7];
  float local_11c;
  float afStack_118 [6];
  float afStack_100 [5];
  uint local_ec;
  float afStack_e8 [4];
  byte auStack_d8 [16];
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
  CQuaternion4f *local_6c;
  float local_64;
  CQuaternion4f *local_60;
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
  int iVar20;
  
  bVar18 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
            (&this_ptr->motion_controller,motion_index,frame_number,&local_80,&local_84,
             (float *)&stack0xffffe794);
  if (bone_index < 0) {
    local_2c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_54 = this_ptr;
      local_34 = this_ptr;
      do {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,local_2c,local_7c,local_80,(float)in_stack_ffffe798);
        pCVar13 = local_34;
        local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).current_motion_index;
        pfVar17 = (float *)((int)local_54 + (uint)bVar18 * -8 + 0x6b4);
        (local_54->bone_transform).bone_rotations[0].w = afStack_250[3];
        pfVar12 = pfVar17 + (uint)bVar18 * -2 + 1;
        *pfVar17 = afStack_250[(uint)bVar18 * -2 + 4];
        *pfVar12 = afStack_250[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
        pfVar12[(uint)bVar18 * -2 + 1] =
             (afStack_250 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1];
        (pCVar13->bone_transform).current_pose_data[0] = pCVar13->rest_pose_data[0];
        local_2c = local_2c + 1;
        local_54 = (CDeformableModelInstance *)&(local_54->motion_controller).tween_speed;
      } while (local_2c < this_ptr_00->bone_count);
    }
    pCVar4 = this_ptr_00->frame_positions_1;
    fVar19 = pCVar4[local_80].y;
    fVar1 = pCVar4[local_80].z;
    fVar6 = 1.0 - (float)in_stack_ffffe798;
    pCVar5 = this_ptr_00->frame_positions_1;
    fVar2 = pCVar5[local_7c].y;
    fVar3 = pCVar5[local_7c].z;
    if (&this_ptr->bone_transform != (SBoneTransformData *)local_8c) {
      (this_ptr->bone_transform).root_position.x =
           pCVar5[local_7c].x * fVar6 + pCVar4[local_80].x * (float)in_stack_ffffe798;
      (this_ptr->bone_transform).root_position.y = fVar2 * fVar6 + fVar19 * (float)in_stack_ffffe798
      ;
      (this_ptr->bone_transform).root_position.z = fVar3 * fVar6 + fVar1 * (float)in_stack_ffffe798;
    }
    fVar19 = (this_ptr->scaled_model_dimensions).x;
    fVar1 = (this_ptr->bone_transform).root_position.x;
    fVar2 = (this_ptr->scaled_model_dimensions).z;
    fVar3 = (this_ptr->bone_transform).root_position.z;
    (this_ptr->bone_transform).root_position.y =
         (this_ptr->scaled_model_dimensions).y * (this_ptr->bone_transform).root_position.y;
    (this_ptr->bone_transform).root_position.z = fVar2 * fVar3;
    (this_ptr->bone_transform).root_position.x = fVar19 * fVar1;
    return;
  }
  if (this_ptr->field11_0x2250 == 1) {
    pCStack_14 = (CDeformableModelInstance *)0x0;
    if (0 < this_ptr_00->bone_count) {
      local_4c = 0;
      local_30 = 0;
      do {
        iVar20 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr_00,(int)pCStack_14,bone_index);
        *(int *)((int)aiStack_5a8 + (int)local_34) = iVar20;
        if (-1 < iVar20) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,local_18,local_80,local_84,(float)in_stack_ffffe798);
          puVar11 = (uint *)(auStack_be4 + (uint)bVar18 * -8 + local_4c + 4);
          *(float *)(auStack_be4 + local_4c) = CStack_c4.w;
          puVar10 = (uint *)((int)&CStack_c4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          *puVar11 = *(uint *)((int)&CStack_c4 + (uint)bVar18 * -8 + 4);
          puVar11[(uint)bVar18 * -2 + 1] = *puVar10;
          (puVar11 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] = puVar10[(uint)bVar18 * -2 + 1];
        }
        pCStack_14 = (CDeformableModelInstance *)((int)pCStack_14 + 1);
        local_30 = local_30 + 4;
        local_4c = local_4c + 0x10;
      } while ((int)pCStack_14 < this_ptr_00->bone_count);
    }
    iVar20 = this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < iVar20) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,iVar20,local_7c,local_80,(float)in_stack_ffffe798);
      pfVar17 = (float *)(auStack_be4 + (uint)bVar18 * -8 + iVar20 * 0x10 + 4);
      *(float *)(auStack_be4 + iVar20 * 0x10) = afStack_1b8[1];
      *pfVar17 = afStack_1b8[(uint)bVar18 * -2 + 2];
      pfVar17[(uint)bVar18 * -2 + 1] = afStack_1b8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 3];
      (pfVar17 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
           (afStack_1b8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 3)[(uint)bVar18 * -2 + 1];
    }
    local_24 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_50 = 0;
      local_6c = (this_ptr->bone_transform).bone_rotations;
      local_44 = this_ptr_00;
      local_40 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_5a8 + local_50 + 4)) {
          local_78 = local_44->bone_list[0].parent_index;
          local_60 = (CQuaternion4f *)(local_24 * 0x10);
          if (local_78 < 0) {
            pfVar17 = (float *)(auStack_be4 + local_24 * 0x10);
            pCVar13 = local_40;
          }
          else {
            local_78 = local_78 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)(auStack_be4 + local_78),in_stack_ffffe798);
            pCVar9 = &CStack_200;
            iVar20 = local_5c + 4;
            afStack_208[1] = (float)uStack_150;
            puVar10 = (uint *)((int)&CStack_200 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4);
            *(float *)((int)&CStack_200 + (uint)bVar18 * -8) = afStack_160[(uint)bVar18 * -2 + 5];
            *puVar10 = auStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -4];
            puVar10[(uint)bVar18 * -2 + 1] =
                 (auStack_138 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + -4)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      ((CQuaternion4f *)(auStack_be4 + iVar20),pCVar9,in_stack_ffffe79c);
            in_stack_ffffe79c = (CQuaternion4f *)((int)local_64 + local_70);
            in_stack_ffffe798 = local_ac;
            local_ac[0].w = local_13c;
            puVar10 = (uint *)((int)local_ac + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            *(uint *)((int)local_ac + (uint)bVar18 * -8 + 4) = auStack_138[(uint)bVar18 * -2];
            *puVar10 = auStack_138[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            puVar10[(uint)bVar18 * -2 + 1] =
                 (auStack_138 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe798,in_stack_ffffe79c,in_stack_ffffe7a0);
            pfVar17 = afStack_228;
            pCVar13 = local_34;
          }
          pfVar16 = (float *)((int)pCVar13 + (uint)bVar18 * -8 + 0x6b4);
          pfVar12 = pfVar17 + (uint)bVar18 * -2 + 1;
          (pCVar13->bone_transform).bone_rotations[0].w = *pfVar17;
          pfVar17 = pfVar16 + (uint)bVar18 * -2 + 1;
          *pfVar16 = *pfVar12;
          *pfVar17 = pfVar12[(uint)bVar18 * -2 + 1];
          pfVar17[(uint)bVar18 * -2 + 1] = (pfVar12 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
        }
        local_24 = local_24 + 1;
        local_50 = local_50 + 4;
        local_40 = (CDeformableModelInstance *)&(local_40->motion_controller).tween_speed;
        local_44 = (CSkeleton *)((local_44->motion_list).state_names[1] + 2);
      } while (local_24 < this_ptr_00->bone_count);
    }
  }
  else if (this_ptr->field11_0x2250 == 2) {
    pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    iVar20 = 0;
    local_64 = (float)(pCVar8->motion_list).motions[motion_index].frame_start;
    if (0 < this_ptr_00->bone_count) {
      local_38 = 0;
      local_34 = (CDeformableModelInstance *)0x0;
      do {
        fVar19 = (float)bone_index;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                          (this_ptr_00,iVar20,bone_index);
        *(int *)((int)aiStack_418 + local_3c) = iVar7;
        if (-1 < iVar7) {
          pCVar9 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                             (this_ptr_00,(int)pCStack_14,(int)local_6c);
          puVar14 = (uint *)((int)&CStack_1220 + (uint)bVar18 * -8 + local_3c);
          puVar10 = (uint *)((int)pCVar9 + (uint)bVar18 * -8 + 4);
          *(float *)(&stack0xffffeddc + local_3c) = pCVar9->w;
          puVar15 = puVar14 + (uint)bVar18 * -2 + 1;
          puVar11 = puVar10 + (uint)bVar18 * -2 + 1;
          *puVar14 = *puVar10;
          *puVar15 = *puVar11;
          puVar15[(uint)bVar18 * -2 + 1] = puVar11[(uint)bVar18 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,unaff_EBP,local_7c,local_80,fVar19);
          pfVar17 = (float *)(&stack0xffffe7a4 + (uint)bVar18 * -8 + local_38);
          *(float *)(&stack0xffffe7a0 + local_38) = afStack_160[0];
          *pfVar17 = afStack_160[(uint)bVar18 * -2 + 1];
          pfVar17[(uint)bVar18 * -2 + 1] = afStack_160[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
          (pfVar17 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
               (afStack_160 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 2)[(uint)bVar18 * -2 + 1];
        }
        iVar20 = iVar20 + 1;
        local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).current_motion_index;
        local_38 = local_38 + 0x10;
      } while (iVar20 < this_ptr_00->bone_count);
    }
    local_6c = (CQuaternion4f *)this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < (int)local_6c) {
      iVar20 = (int)local_6c * 0x10;
      fVar19 = local_64;
      pCVar9 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                         (this_ptr_00,(int)local_6c,(int)local_64);
      puVar14 = (uint *)((int)&CStack_1220 + (uint)bVar18 * -8 + iVar20);
      puVar10 = (uint *)((int)pCVar9 + (uint)bVar18 * -8 + 4);
      *(float *)(&stack0xffffeddc + iVar20) = pCVar9->w;
      puVar15 = puVar14 + (uint)bVar18 * -2 + 1;
      puVar11 = puVar10 + (uint)bVar18 * -2 + 1;
      *puVar14 = *puVar10;
      *puVar15 = *puVar11;
      puVar15[(uint)bVar18 * -2 + 1] = puVar11[(uint)bVar18 * -2 + 1];
      local_78 = iVar20;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,local_70,local_7c,local_80,fVar19);
      puVar10 = (uint *)(&stack0xffffe7a4 + (uint)bVar18 * -8 + local_74);
      *(uint *)(&stack0xffffe7a0 + local_74) = uStack_220;
      *puVar10 = local_21c[(uint)bVar18 * -2];
      puVar10[(uint)bVar18 * -2 + 1] = local_21c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      (puVar10 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
           (local_21c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
    }
    local_24 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_58 = (CDeformableModelInstance *)0x0;
      local_60 = (this_ptr->bone_transform).bone_rotations;
      local_44 = this_ptr_00;
      pCStack_14 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_418 + (int)local_58 + 8)) {
          local_1c = local_44->bone_list[0].parent_index;
          iVar20 = local_24 * 0x10;
          pfVar17 = (float *)((int)&CStack_1220 + (uint)bVar18 * -8 + iVar20 + 4);
          auStack_1c0._0_4_ = (&CStack_1220)[local_24].w;
          pfVar12 = pfVar17 + (uint)bVar18 * -2 + 1;
          afStack_1b8[(uint)bVar18 * -2 + -1] = *pfVar17;
          afStack_1b8[(uint)bVar18 * -2 + (uint)bVar18 * -2] = *pfVar12;
          (afStack_1b8 + (uint)bVar18 * -2 + (uint)bVar18 * -2)[(uint)bVar18 * -2 + 1] =
               pfVar12[(uint)bVar18 * -2 + 1];
          puVar10 = (uint *)(&stack0xffffe7a4 + (uint)bVar18 * -8 + iVar20);
          auStack_d8._8_4_ = *(float *)(&stack0xffffe7a0 + iVar20);
          *(uint *)(auStack_d8 + (uint)bVar18 * -8 + 0xc) = *puVar10;
          iVar20 = local_1c;
          (&fStack_c8)[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
               (float)puVar10[(uint)bVar18 * -2 + 1];
          (&fStack_c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2)[(uint)bVar18 * -2 + 1] =
               (float)(puVar10 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          puVar10 = (uint *)((int)pCStack_14 + (uint)bVar18 * -8 + 0x6b4);
          afStack_e8[2] = (pCStack_14->bone_transform).bone_rotations[0].w;
          puVar11 = puVar10 + (uint)bVar18 * -2 + 1;
          *(uint *)(auStack_d8 + (uint)bVar18 * -8 + -4) = *puVar10;
          *(uint *)(auStack_d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8) = *puVar11;
          *(uint *)
           ((int)(auStack_d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8) + ((uint)bVar18 * -2 + 1) * 4)
               = puVar11[(uint)bVar18 * -2 + 1];
          if (-1 < iVar20) {
            local_74 = iVar20 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      (&CStack_1220 + iVar20,in_stack_ffffe79c);
            pCVar9 = &local_19c;
            uStack_1a0 = local_ec;
            pfVar17 = (float *)((int)&local_19c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4);
            *(float *)((int)&local_19c + (uint)bVar18 * -8) = afStack_e8[(uint)bVar18 * -2];
            *pfVar17 = afStack_e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            pfVar17[(uint)bVar18 * -2 + 1] =
                 (afStack_e8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      ((CQuaternion4f *)(auStack_1c0 + 4),pCVar9,in_stack_ffffe7a0);
            auStack_1c0._4_4_ = afStack_250[2];
            afStack_1b8[(uint)bVar18 * -2] = afStack_250[(uint)bVar18 * -2 + 3];
            afStack_1b8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 afStack_250[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
            (afStack_1b8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
                 (afStack_250 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 4)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)(&stack0xffffe7a8 + (int)local_6c),in_stack_ffffe7a4);
            pCVar9 = &CStack_274;
            in_stack_ffffe7a0 = &CStack_c4;
            uStack_278 = uStack_1e4;
            *(float *)((int)&CStack_274 + (uint)bVar18 * -8) = afStack_1e0[(uint)bVar18 * -2];
            afStack_264[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -3] =
                 *(float *)(auStack_1d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + -4);
            (afStack_264 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + -3)[(uint)bVar18 * -2 + 1] =
                 *(float *)((int)(auStack_1d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + -4) +
                           ((uint)bVar18 * -2 + 1) * 4);
            in_stack_ffffe79c = (CQuaternion4f *)0x59ea73;
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe7a0,pCVar9,in_stack_ffffe7a8);
            pCVar9 = (CQuaternion4f *)(local_50 + (int)local_64);
            CStack_c4.x = fStack_180;
            puVar10 = (uint *)((int)&CStack_c4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 0xc);
            *(uint *)((int)&CStack_c4 + (uint)bVar18 * -8 + 8) = local_17c[(uint)bVar18 * -2];
            *puVar10 = local_17c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            puVar10[(uint)bVar18 * -2 + 1] =
                 (local_17c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(pCVar9,in_stack_ffffe7ac);
            in_stack_ffffe7ac = (CQuaternion4f *)local_16c;
            in_stack_ffffe7a8 = (CQuaternion4f *)(auStack_d8 + 0xc);
            local_17c[3] = local_ec;
            *(float *)(local_16c + (uint)bVar18 * -8) = afStack_e8[(uint)bVar18 * -2];
            *(float *)(local_16c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4) =
                 afStack_e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            *(float *)((int)(local_16c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4) +
                      ((uint)bVar18 * -2 + 1) * 4) =
                 (afStack_e8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            in_stack_ffffe7a4 = (CQuaternion4f *)0x59eadd;
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe7a8,in_stack_ffffe7ac,in_stack_ffffe7b0);
            auStack_d8._12_4_ = afStack_118[0];
            pfVar17 = (float *)((int)&CStack_c4 + (uint)bVar18 * -8 + (uint)bVar18 * -8);
            (&fStack_c8)[(uint)bVar18 * -2] = afStack_118[(uint)bVar18 * -2 + 1];
            *pfVar17 = afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
            pfVar17[(uint)bVar18 * -2 + 1] =
                 (afStack_118 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 2)[(uint)bVar18 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_005f75e0
                    ((CQuaternion4f *)auStack_1c0,in_stack_ffffe79c);
          pCVar9 = (CQuaternion4f *)(auStack_1d8 + 0xc);
          auStack_1d8._8_4_ = local_11c;
          afStack_1c8[(uint)bVar18 * -2 + -1] = afStack_118[(uint)bVar18 * -2];
          afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
               afStack_118[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2)[(uint)bVar18 * -2 + 1] =
               (afStack_118 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    ((CQuaternion4f *)(auStack_d8 + 0xc),pCVar9,in_stack_ffffe7a0);
          in_stack_ffffe7a0 = (CQuaternion4f *)auStack_1d8;
          in_stack_ffffe79c = (CQuaternion4f *)auStack_d8;
          afStack_1e0[1] = CStack_274.z;
          *(float *)(auStack_1d8 + (uint)bVar18 * -8) = afStack_264[(uint)bVar18 * -2];
          *(float *)(auStack_1d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4) =
               afStack_264[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          *(float *)((int)(auStack_1d8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 4) +
                    ((uint)bVar18 * -2 + 1) * 4) =
               (afStack_264 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    (in_stack_ffffe79c,in_stack_ffffe7a0,in_stack_ffffe7a4);
          local_16c._4_4_ = fStack_254;
          afStack_160[(uint)bVar18 * -2 + -1] = afStack_250[(uint)bVar18 * -2];
          afStack_160[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
               afStack_250[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          (afStack_160 + (uint)bVar18 * -2 + (uint)bVar18 * -2)[(uint)bVar18 * -2 + 1] =
               (afStack_250 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          if (unaff_EBP < 0) {
            pfVar17 = afStack_264 + 4;
            iVar20 = unaff_ESI;
          }
          else {
            in_stack_ffffe7a4 = (CQuaternion4f *)(unaff_EBP * 0x10 + (int)local_54);
            in_stack_ffffe7a0 = (CQuaternion4f *)(local_16c + 8);
            in_stack_ffffe79c = (CQuaternion4f *)0x59e94d;
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (in_stack_ffffe7a0,in_stack_ffffe7a4,in_stack_ffffe7a8);
            pfVar17 = afStack_100;
            iVar20 = unaff_EBX;
          }
          pfVar16 = (float *)(iVar20 + 0x6b4 + (uint)bVar18 * -8);
          pfVar12 = pfVar17 + (uint)bVar18 * -2 + 1;
          *(float *)(iVar20 + 0x6b0) = *pfVar17;
          pfVar17 = pfVar16 + (uint)bVar18 * -2 + 1;
          *pfVar16 = *pfVar12;
          *pfVar17 = pfVar12[(uint)bVar18 * -2 + 1];
          pfVar17[(uint)bVar18 * -2 + 1] = (pfVar12 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
        }
        local_24 = local_24 + 1;
        local_58 = (CDeformableModelInstance *)((int)local_58 + 4);
        local_44 = (CSkeleton *)((local_44->motion_list).state_names[1] + 2);
        pCStack_14 = (CDeformableModelInstance *)&(pCStack_14->motion_controller).tween_speed;
      } while (local_24 < this_ptr_00->bone_count);
    }
  }
  else {
    local_1c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_58 = this_ptr;
      do {
        iVar20 = local_1c;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                          (this_ptr_00,local_1c,bone_index);
        if (-1 < iVar7) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,iVar20,local_78,local_7c,(float)in_stack_ffffe79c);
          pfVar17 = (float *)(local_50 + 0x6b4 + (uint)bVar18 * -8);
          *(uint *)(local_50 + 0x6b0) = local_20c;
          pfVar12 = pfVar17 + (uint)bVar18 * -2 + 1;
          *pfVar17 = afStack_208[(uint)bVar18 * -2];
          *pfVar12 = afStack_208[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          pfVar12[(uint)bVar18 * -2 + 1] =
               (afStack_208 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
        }
        local_58 = (CDeformableModelInstance *)&(local_58->motion_controller).tween_speed;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr_00->bone_count);
    }
  }
  return;
}
