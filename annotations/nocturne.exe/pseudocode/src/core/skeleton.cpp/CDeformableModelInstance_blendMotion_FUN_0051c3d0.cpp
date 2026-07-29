// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
// Address: 0051c3d0
// Address Range: [[0051c3d0, 0051caa1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

{
  SPose *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  float fVar11;
  float fVar12;
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  float fVar13;
  int iVar14;
  CQuaternion4f *pCVar15;
  uint *puVar16;
  float *pfVar17;
  float *pfVar18;
  uint *puVar19;
  byte bVar20;
  float afStackY_1940 [1020];
  uint *puVar21;
  float local_938;
  CQuaternion4f local_934 [100];
  int aiStack_2f4 [100];
  CQuaternion4f CStack_164;
  float fStack_154;
  float afStack_150 [7];
  float local_134;
  CQuaternion4f local_124;
  uint local_114;
  uint auStack_110 [3];
  CQuaternion4f local_104;
  CQuaternion4f local_f4;
  CQuaternion4f local_e4;
  float local_d4;
  uint auStack_d0 [7];
  float local_b4 [19];
  float afStack_68 [3];
  int local_5c;
  int local_58 [3];
  CQuaternion4f *local_4c;
  int local_48;
  int local_44;
  CQuaternion4f *local_40;
  int local_3c;
  CDeformableModelInstance *local_38;
  CDeformableModelInstance *local_34;
  CSkeleton *local_30;
  CQuaternion4f *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar20 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,local_58,
               &local_5c,&stack0xfffff6c8);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
    if (this_ptr->bone_update_mode == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_2c = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_34 = this_ptr;
        local_1c = 0;
        do {
          iVar14 = local_1c;
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                         (this_ptr_00,local_1c,bone_index);
          if (-1 < hierarchy_distance) {
            fVar13 = (*callback_func)(iVar14,bone_index,blend_weight,hierarchy_distance,this_ptr);
            local_18 = fVar13;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                      (this_ptr_00,iVar14,local_58[0],local_5c,local_938,&CStack_164);
            pCVar15 = local_2c;
            pfVar17 = afStack_150 + 3;
            afStack_150[3] = CStack_164.w;
            pfVar18 = (float *)((int)&CStack_164 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            afStack_150[(uint)bVar20 * -2 + 4] =
                 *(float *)((int)&CStack_164 + (uint)bVar20 * -8 + 4);
            afStack_150[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5] = *pfVar18;
            (afStack_150 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1] =
                 pfVar18[(uint)bVar20 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(pCVar15,pfVar17,fVar13);
            pfVar17 = (float *)((int)local_34 + (uint)bVar20 * -8 + 0x6b4);
            (local_34->bone_transform).pose_data.bone_rotations[0].w = fStack_154;
            pfVar18 = pfVar17 + (uint)bVar20 * -2 + 1;
            *pfVar17 = afStack_150[(uint)bVar20 * -2];
            *pfVar18 = afStack_150[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pfVar18[(uint)bVar20 * -2 + 1] =
                 (afStack_150 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
          }
          local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (local_1c < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->bone_update_mode == 1) {
      local_20 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_44 = 0;
        local_28 = 0;
        do {
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                             (this_ptr_00,local_20,bone_index);
          *(int *)((int)aiStack_2f4 + local_28) = iVar14;
          if (-1 < iVar14) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                      (this_ptr_00,local_20,local_58[0],local_5c,local_938,&local_124);
            puVar16 = (uint *)((int)local_934 + (uint)bVar20 * -8 + local_44 + 4);
            *(float *)((int)&local_934[0].w + local_44) = local_124.w;
            puVar19 = puVar16 + (uint)bVar20 * -2 + 1;
            puVar21 = (uint *)((int)&local_124 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *puVar16 = *(uint *)((int)&local_124 + (uint)bVar20 * -8 + 4);
            *puVar19 = *puVar21;
            puVar19[(uint)bVar20 * -2 + 1] = puVar21[(uint)bVar20 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_44 = local_44 + 0x10;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar14 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar14) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                  (this_ptr_00,iVar14,local_58[0],local_5c,local_938,&local_f4);
        puVar16 = (uint *)((int)local_934 + (uint)bVar20 * -8 + iVar14 * 0x10 + 4);
        local_934[iVar14].w = local_f4.w;
        puVar19 = puVar16 + (uint)bVar20 * -2 + 1;
        puVar21 = (uint *)((int)&local_f4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
        *puVar16 = *(uint *)((int)&local_f4 + (uint)bVar20 * -8 + 4);
        *puVar19 = *puVar21;
        puVar19[(uint)bVar20 * -2 + 1] = puVar21[(uint)bVar20 * -2 + 1];
      }
      local_24 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_4c = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_3c = 0;
        local_38 = this_ptr;
        local_30 = this_ptr_00;
        local_40 = local_4c;
        do {
          if (-1 < *(int *)((int)aiStack_2f4 + local_3c)) {
            iVar14 = local_30->bone_list[0].parent_index;
            local_48 = local_24 * 0x10;
            if (iVar14 < 0) {
              pCVar15 = local_934 + local_24;
            }
            else {
              local_18 = (float)(iVar14 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_0055d0d0(local_934 + iVar14,&local_e4);
              puVar21 = auStack_d0 + 7;
              iVar14 = (int)&local_934[0].w + local_48;
              local_b4[0] = local_e4.w;
              puVar16 = (uint *)((int)&local_e4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
              auStack_d0[(uint)bVar20 * -2 + 8] =
                   *(uint *)((int)&local_e4 + (uint)bVar20 * -8 + 4);
              auStack_d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9] = *puVar16;
              (auStack_d0 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1] =
                   puVar16[(uint)bVar20 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_0055d130(iVar14,puVar21);
              iVar14 = (int)&local_4c->w + (int)local_18;
              local_114 = auStack_d0[3];
              auStack_110[(uint)bVar20 * -2] = auStack_d0[(uint)bVar20 * -2 + 4];
              auStack_110[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   auStack_d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
              (auStack_110 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                   (auStack_d0 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_114,iVar14);
              pCVar15 = (CQuaternion4f *)(auStack_110 + 3);
            }
            puVar21 = (uint *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
            local_d4 = pCVar15->w;
            puVar16 = puVar21 + (uint)bVar20 * -2 + 1;
            auStack_d0[(uint)bVar20 * -2] = *puVar21;
            auStack_d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] = *puVar16;
            (auStack_d0 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                 puVar16[(uint)bVar20 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_40,&local_d4,blend_weight);
            pfVar17 = (float *)((int)local_38 + (uint)bVar20 * -8 + 0x6b4);
            (local_38->bone_transform).pose_data.bone_rotations[0].w = local_134;
            pfVar18 = pfVar17 + (uint)bVar20 * -2 + 1;
            *pfVar17 = afStack_150[(uint)bVar20 * -2 + 8];
            *pfVar18 = afStack_150[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9];
            pfVar18[(uint)bVar20 * -2 + 1] =
                 (afStack_150 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_3c = local_3c + 4;
          local_30 = (CSkeleton *)((local_30->motion_list).state_names[1] + 2);
          local_38 = (CDeformableModelInstance *)&(local_38->motion_controller).tween_speed;
          local_40 = local_40 + 1;
        } while (local_24 < this_ptr_00->bone_count);
      }
    }
    else {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0xa82;
      core_main_c_FUN_004c8440("Write me!");
    }
    if (bone_index < 0) {
      pCVar9 = this_ptr_00->frame_positions_1;
      fVar13 = pCVar9[local_5c].y;
      fVar2 = pCVar9[local_5c].z;
      fVar11 = 1.0 - local_938;
      pCVar10 = this_ptr_00->frame_positions_1;
      fVar3 = pCVar10[local_58[0]].y;
      fVar4 = pCVar10[local_58[0]].z;
      fVar5 = (this_ptr->scaled_model_dimensions).y;
      fVar6 = (this_ptr->scaled_model_dimensions).z;
      fVar12 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fVar7 = (this_ptr->bone_transform).pose_data.root_position.y;
      fVar8 = (this_ptr->bone_transform).pose_data.root_position.z;
      if (pSVar1 != (SPose *)afStack_68) {
        (pSVar1->pose_data).root_position.x =
             (pSVar1->pose_data).root_position.x * fVar12 +
             (pCVar10[local_58[0]].x * fVar11 + pCVar9[local_5c].x * local_938) *
             (this_ptr->scaled_model_dimensions).x * blend_weight;
        (this_ptr->bone_transform).pose_data.root_position.y =
             fVar7 * fVar12 + (fVar3 * fVar11 + fVar13 * local_938) * fVar5 * blend_weight;
        (this_ptr->bone_transform).pose_data.root_position.z =
             fVar8 * fVar12 + (fVar4 * fVar11 + fVar2 * local_938) * fVar6 * blend_weight;
        return;
      }
    }
  }
  return;
}
