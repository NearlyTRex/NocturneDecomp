// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
// Address: 0051c3d0
// Address Range: [[0051c3d0, 0051caa1]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance *param_1,int param_2,float param_3,float param_4,int param_5,code *param_6)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance *param_1,int param_2,float param_3,float param_4,int param_5,code *param_6)

{
  SPose *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar11;
  float fVar12;
  float fVar13;
  CSkeleton *this_ptr;
  int iVar14;
  int iVar15;
  CQuaternion4f *pCVar16;
  uint *puVar17;
  float *pfVar18;
  float *pfVar19;
  uint *puVar20;
  byte bVar21;
  float afStackY_1940 [1020];
  uint *puVar22;
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
  int local_18;
  
  bVar21 = 0;
  if ((float)0.001 < param_4) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
              (&param_1->motion_controller,param_2,param_3,local_58,&local_5c,&stack0xfffff6c8);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
    if (param_1->bone_update_mode == 0) {
      if (0 < this_ptr->bone_count) {
        local_2c = (param_1->bone_transform).pose_data.bone_rotations;
        local_34 = param_1;
        local_1c = 0;
        do {
          iVar15 = local_1c;
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                             (this_ptr,local_1c,param_5);
          if (-1 < iVar14) {
            iVar14 = (*param_6)(iVar15,param_5,param_4,iVar14,param_1);
            local_18 = iVar14;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                      (this_ptr,iVar15,local_58[0],local_5c,local_938,&CStack_164);
            pCVar16 = local_2c;
            pfVar18 = afStack_150 + 3;
            afStack_150[3] = CStack_164.w;
            pfVar19 = (float *)((int)&CStack_164 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            afStack_150[(uint)bVar21 * -2 + 4] =
                 *(float *)((int)&CStack_164 + (uint)bVar21 * -8 + 4);
            afStack_150[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5] = *pfVar19;
            (afStack_150 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 5)[(uint)bVar21 * -2 + 1] =
                 pfVar19[(uint)bVar21 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(pCVar16,pfVar18,iVar14);
            pfVar18 = (float *)((int)local_34 + (uint)bVar21 * -8 + 0x6b4);
            (local_34->bone_transform).pose_data.bone_rotations[0].w = fStack_154;
            pfVar19 = pfVar18 + (uint)bVar21 * -2 + 1;
            *pfVar18 = afStack_150[(uint)bVar21 * -2];
            *pfVar19 = afStack_150[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            pfVar19[(uint)bVar21 * -2 + 1] =
                 (afStack_150 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
          }
          local_34 = (CDeformableModelInstance *)&(local_34->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (local_1c < this_ptr->bone_count);
      }
    }
    else if (param_1->bone_update_mode == 1) {
      local_20 = 0;
      if (0 < this_ptr->bone_count) {
        local_44 = 0;
        local_28 = 0;
        do {
          iVar15 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                             (this_ptr,local_20,param_5);
          *(int *)((int)aiStack_2f4 + local_28) = iVar15;
          if (-1 < iVar15) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                      (this_ptr,local_20,local_58[0],local_5c,local_938,&local_124);
            puVar17 = (uint *)((int)local_934 + (uint)bVar21 * -8 + local_44 + 4);
            *(float *)((int)&local_934[0].w + local_44) = local_124.w;
            puVar20 = puVar17 + (uint)bVar21 * -2 + 1;
            puVar22 = (uint *)((int)&local_124 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            *puVar17 = *(uint *)((int)&local_124 + (uint)bVar21 * -8 + 4);
            *puVar20 = *puVar22;
            puVar20[(uint)bVar21 * -2 + 1] = puVar22[(uint)bVar21 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_44 = local_44 + 0x10;
        } while (local_20 < this_ptr->bone_count);
      }
      iVar15 = this_ptr->bone_list[param_5].parent_index;
      if (-1 < iVar15) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                  (this_ptr,iVar15,local_58[0],local_5c,local_938,&local_f4);
        puVar17 = (uint *)((int)local_934 + (uint)bVar21 * -8 + iVar15 * 0x10 + 4);
        local_934[iVar15].w = local_f4.w;
        puVar20 = puVar17 + (uint)bVar21 * -2 + 1;
        puVar22 = (uint *)((int)&local_f4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        *puVar17 = *(uint *)((int)&local_f4 + (uint)bVar21 * -8 + 4);
        *puVar20 = *puVar22;
        puVar20[(uint)bVar21 * -2 + 1] = puVar22[(uint)bVar21 * -2 + 1];
      }
      local_24 = 0;
      if (0 < this_ptr->bone_count) {
        local_4c = (param_1->bone_transform).pose_data.bone_rotations;
        local_3c = 0;
        local_38 = param_1;
        local_30 = this_ptr;
        local_40 = local_4c;
        do {
          if (-1 < *(int *)((int)aiStack_2f4 + local_3c)) {
            iVar15 = local_30->bone_list[0].parent_index;
            local_48 = local_24 * 0x10;
            if (iVar15 < 0) {
              pCVar16 = local_934 + local_24;
            }
            else {
              local_18 = iVar15 * 0x10;
              core_xform_cpp_negateFirstComponent_FUN_0055d0d0(local_934 + iVar15,&local_e4);
              puVar22 = auStack_d0 + 7;
              iVar15 = (int)&local_934[0].w + local_48;
              local_b4[0] = local_e4.w;
              puVar17 = (uint *)((int)&local_e4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              auStack_d0[(uint)bVar21 * -2 + 8] =
                   *(uint *)((int)&local_e4 + (uint)bVar21 * -8 + 4);
              auStack_d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 9] = *puVar17;
              (auStack_d0 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 9)[(uint)bVar21 * -2 + 1] =
                   puVar17[(uint)bVar21 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_0055d130(iVar15,puVar22);
              iVar15 = (int)&local_4c->w + local_18;
              local_114 = auStack_d0[3];
              auStack_110[(uint)bVar21 * -2] = auStack_d0[(uint)bVar21 * -2 + 4];
              auStack_110[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   auStack_d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
              (auStack_110 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                   (auStack_d0 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 5)[(uint)bVar21 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_114,iVar15);
              pCVar16 = (CQuaternion4f *)(auStack_110 + 3);
            }
            puVar22 = (uint *)((int)pCVar16 + ((uint)bVar21 * -2 + 1) * 4);
            local_d4 = pCVar16->w;
            puVar17 = puVar22 + (uint)bVar21 * -2 + 1;
            auStack_d0[(uint)bVar21 * -2] = *puVar22;
            auStack_d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] = *puVar17;
            (auStack_d0 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1] =
                 puVar17[(uint)bVar21 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_40,&local_d4,param_4);
            pfVar18 = (float *)((int)local_38 + (uint)bVar21 * -8 + 0x6b4);
            (local_38->bone_transform).pose_data.bone_rotations[0].w = local_134;
            pfVar19 = pfVar18 + (uint)bVar21 * -2 + 1;
            *pfVar18 = afStack_150[(uint)bVar21 * -2 + 8];
            *pfVar19 = afStack_150[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 9];
            pfVar19[(uint)bVar21 * -2 + 1] =
                 (afStack_150 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 9)[(uint)bVar21 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_3c = local_3c + 4;
          local_30 = (CSkeleton *)((local_30->motion_list).state_names[1] + 2);
          local_38 = (CDeformableModelInstance *)&(local_38->motion_controller).tween_speed;
          local_40 = local_40 + 1;
        } while (local_24 < this_ptr->bone_count);
      }
    }
    else {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0xa82;
      core_main_c_FUN_004c8440("Write me!");
    }
    if (param_5 < 0) {
      pCVar10 = this_ptr->frame_positions_1;
      fVar2 = pCVar10[local_5c].y;
      fVar3 = pCVar10[local_5c].z;
      fVar12 = 1.0 - local_938;
      pCVar11 = this_ptr->frame_positions_1;
      fVar4 = pCVar11[local_58[0]].y;
      fVar5 = pCVar11[local_58[0]].z;
      fVar6 = (param_1->scaled_model_dimensions).y;
      fVar7 = (param_1->scaled_model_dimensions).z;
      fVar13 = 1.0 - param_4;
      pSVar1 = &param_1->bone_transform;
      fVar8 = (param_1->bone_transform).pose_data.root_position.y;
      fVar9 = (param_1->bone_transform).pose_data.root_position.z;
      if (pSVar1 != (SPose *)afStack_68) {
        (pSVar1->pose_data).root_position.x =
             (pSVar1->pose_data).root_position.x * fVar13 +
             (pCVar11[local_58[0]].x * fVar12 + pCVar10[local_5c].x * local_938) *
             (param_1->scaled_model_dimensions).x * param_4;
        (param_1->bone_transform).pose_data.root_position.y =
             fVar8 * fVar13 + (fVar4 * fVar12 + fVar2 * local_938) * fVar6 * param_4;
        (param_1->bone_transform).pose_data.root_position.z =
             fVar9 * fVar13 + (fVar5 * fVar12 + fVar3 * local_938) * fVar7 * param_4;
        return;
      }
    }
  }
  return;
}
