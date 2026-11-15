// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
// Address: 0054cc90
// Address Range: [[0054cc90, 0054d3b7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

{
  SPose *pSVar1;
  CVector3f *pCVar2;
  EBoneUpdateMode current_bone_index;
  CSkeleton *this_ptr_00;
  int iVar3;
  float fVar4;
  CQuaternion4f *quat1_in;
  uint *puVar5;
  CQuaternion4f *pCVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1988 [1020];
  float local_980;
  CQuaternion4f local_97c [100];
  int aiStack_33c [100];
  float fStack_1ac;
  float afStack_1a8 [3];
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
  float fStack_15c;
  float afStack_158 [7];
  CQuaternion4f CStack_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  float local_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int local_5c;
  float fStack_58;
  int local_54;
  float fStack_50;
  CQuaternion4f *local_4c;
  int local_48;
  CDeformableModelInstance *local_44;
  int local_40;
  CQuaternion4f *local_3c;
  CDeformableModelInstance *local_38;
  CQuaternion4f *local_34;
  int local_30;
  CSkeleton *local_2c;
  int local_28;
  int local_24;
  int local_20;
  EBoneUpdateMode local_1c;
  float local_18;
  
  bVar11 = 0;
  if ((float)_DAT_005d1ff4 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50
              (&this_ptr->base,target_motion_index,target_frame_number,&local_5c,&local_54,
               &stack0xfffff680);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
    local_1c = this_ptr->bone_update_mode;
    if (local_1c == BONE_UPDATE_SIMPLE_FLAT) {
      if (0 < this_ptr_00->bone_count) {
        local_3c = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_44 = this_ptr;
        do {
          current_bone_index = local_1c;
          iVar3 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                            (this_ptr_00,local_1c,bone_index);
          if (-1 < iVar3) {
            fVar4 = (*callback_func)(current_bone_index,bone_index,blend_weight,iVar3,this_ptr);
            local_18 = fVar4;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                      (this_ptr_00,current_bone_index,local_5c,local_54,local_980,&CStack_13c);
            pCVar6 = local_3c;
            pfVar7 = &fStack_15c;
            fStack_15c = CStack_13c.w;
            pfVar8 = (float *)((int)&CStack_13c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            afStack_158[(uint)bVar11 * -2] = *(float *)((int)&CStack_13c + (uint)bVar11 * -8 + 4);
            afStack_158[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = *pfVar8;
            (afStack_158 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
                 pfVar8[(uint)bVar11 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00585b20(pCVar6,pfVar7,fVar4);
            pfVar7 = (float *)((int)local_44 + (uint)bVar11 * -8 + 0x6b4);
            (local_44->bone_transform).pose_data.bone_rotations[0].w = fStack_1ac;
            pfVar8 = pfVar7 + (uint)bVar11 * -2 + 1;
            *pfVar7 = afStack_1a8[(uint)bVar11 * -2];
            *pfVar8 = afStack_1a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            pfVar8[(uint)bVar11 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          }
          local_1c = local_1c + BONE_UPDATE_HIERARCHICAL_ACCUM;
          local_44 = (CDeformableModelInstance *)&(local_44->base).tween_speed;
          local_3c = local_3c + 1;
        } while ((int)local_1c < this_ptr_00->bone_count);
      }
    }
    else if (local_1c == BONE_UPDATE_HIERARCHICAL_ACCUM) {
      local_20 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_40 = 0;
        local_28 = 0;
        do {
          iVar3 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                            (this_ptr_00,local_20,bone_index);
          *(int *)((int)aiStack_33c + local_28) = iVar3;
          if (-1 < iVar3) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                      (this_ptr_00,local_20,local_5c,local_54,local_980,&local_19c);
            puVar9 = (uint *)((int)local_97c + (uint)bVar11 * -8 + local_40 + 4);
            *(float *)((int)&local_97c[0].w + local_40) = local_19c.w;
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar5 = (uint *)((int)&local_19c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            *puVar9 = *(uint *)((int)&local_19c + (uint)bVar11 * -8 + 4);
            *puVar10 = *puVar5;
            puVar10[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_40 = local_40 + 0x10;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar3 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar3) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                  (this_ptr_00,iVar3,local_5c,local_54,local_980,&local_16c);
        puVar9 = (uint *)((int)local_97c + (uint)bVar11 * -8 + iVar3 * 0x10 + 4);
        local_97c[iVar3].w = local_16c.w;
        puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
        puVar5 = (uint *)((int)&local_16c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *puVar9 = *(uint *)((int)&local_16c + (uint)bVar11 * -8 + 4);
        *puVar10 = *puVar5;
        puVar10[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
      }
      local_24 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_4c = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_30 = 0;
        local_38 = this_ptr;
        local_2c = this_ptr_00;
        local_34 = local_4c;
        do {
          if (-1 < *(int *)((int)aiStack_33c + local_30)) {
            iVar3 = local_2c->bone_list[0].parent_index;
            local_48 = local_24 * 0x10;
            if (iVar3 < 0) {
              pCVar6 = local_97c + local_24;
            }
            else {
              local_18 = (float)(iVar3 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_00585930(local_97c + iVar3,&local_10c);
              pCVar6 = &local_12c;
              quat1_in = (CQuaternion4f *)((int)&local_97c[0].w + local_48);
              local_12c.w = local_10c.w;
              puVar9 = (uint *)((int)&local_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              puVar5 = (uint *)((int)&local_10c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              *(uint *)((int)&local_12c + (uint)bVar11 * -8 + 4) =
                   *(uint *)((int)&local_10c + (uint)bVar11 * -8 + 4);
              *puVar9 = *puVar5;
              puVar9[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00585990(quat1_in,pCVar6,&local_18c);
              pCVar6 = (CQuaternion4f *)((int)&local_4c->w + (int)local_18);
              local_17c.w = local_18c.w;
              puVar9 = (uint *)((int)&local_17c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              puVar5 = (uint *)((int)&local_18c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              *(uint *)((int)&local_17c + (uint)bVar11 * -8 + 4) =
                   *(uint *)((int)&local_18c + (uint)bVar11 * -8 + 4);
              *puVar9 = *puVar5;
              puVar9[(uint)bVar11 * -2 + 1] = puVar5[(uint)bVar11 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_17c,pCVar6,&local_11c);
              pCVar6 = &local_11c;
            }
            pfVar7 = (float *)((int)pCVar6 + ((uint)bVar11 * -2 + 1) * 4);
            afStack_158[3] = pCVar6->w;
            pfVar8 = pfVar7 + (uint)bVar11 * -2 + 1;
            afStack_158[(uint)bVar11 * -2 + 4] = *pfVar7;
            afStack_158[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] = *pfVar8;
            (afStack_158 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1] =
                 pfVar8[(uint)bVar11 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00585b20(local_34,afStack_158 + 3,blend_weight);
            pfVar7 = (float *)((int)local_38 + (uint)bVar11 * -8 + 0x6b4);
            (local_38->bone_transform).pose_data.bone_rotations[0].w = local_fc;
            pfVar8 = pfVar7 + (uint)bVar11 * -2 + 1;
            *pfVar7 = afStack_f8[(uint)bVar11 * -2];
            *pfVar8 = afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            pfVar8[(uint)bVar11 * -2 + 1] =
                 (afStack_f8 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_30 = local_30 + 4;
          local_2c = (CSkeleton *)((local_2c->motion_list).state_names[1] + 2);
          local_38 = (CDeformableModelInstance *)&(local_38->base).tween_speed;
          local_34 = local_34 + 1;
        } while (local_24 < this_ptr_00->bone_count);
      }
    }
    else {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0xa98;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Write me!");
    }
    if (bone_index < 0) {
      pCVar2 = this_ptr_00->frame_positions_1;
      local_bc = pCVar2[local_54].x * local_980;
      local_b8 = pCVar2[local_54].y * local_980;
      fStack_b4 = pCVar2[local_54].z * local_980;
      afStack_f8[3] = local_bc;
      afStack_f8[(uint)bVar11 * -2 + 4] = afStack_f8[(uint)bVar11 * -2 + 0x10];
      afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
           afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11];
      fStack_58 = 1.0 - local_980;
      fStack_a4 = pCVar2[local_5c].x * fStack_58;
      fStack_a0 = pCVar2[local_5c].y * fStack_58;
      fStack_9c = pCVar2[local_5c].z * fStack_58;
      fStack_c8 = fStack_a4;
      afStack_f8[(uint)bVar11 * -2 + 0xd] = afStack_f8[(uint)bVar11 * -2 + 0x16];
      afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xe] =
           afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x17];
      fStack_80 = fStack_c8 + afStack_f8[3];
      fStack_7c = fStack_c4 + fStack_e8;
      fStack_78 = fStack_c0 + fStack_e4;
      fStack_8c = fStack_c8 + afStack_f8[3];
      afStack_f8[(uint)bVar11 * -2 + 0x1c] = afStack_f8[(uint)bVar11 * -2 + 0x1f];
      afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1d] =
           afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x20];
      fStack_8c = fStack_8c * (this_ptr->root_offset_scale).x;
      fStack_88 = fStack_88 * (this_ptr->root_offset_scale).y;
      fStack_84 = fStack_84 * (this_ptr->root_offset_scale).z;
      fStack_e0 = fStack_8c * blend_weight;
      fVar4 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      fStack_dc = fStack_88 * blend_weight;
      fStack_d8 = fStack_84 * blend_weight;
      fStack_68 = fStack_e0;
      afStack_f8[(uint)bVar11 * -2 + 0x25] = afStack_f8[(uint)bVar11 * -2 + 7];
      afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x26] =
           afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8];
      fStack_50 = fVar4;
      fStack_d4 = (pSVar1->pose_data).root_position.x * fVar4;
      fStack_d0 = (this_ptr->bone_transform).pose_data.root_position.y * fVar4;
      fStack_cc = (this_ptr->bone_transform).pose_data.root_position.z * fVar4;
      fStack_b0 = fStack_d4;
      afStack_f8[(uint)bVar11 * -2 + 0x13] = afStack_f8[(uint)bVar11 * -2 + 10];
      afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x14] =
           afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb];
      fStack_98 = fStack_b0 + fStack_68;
      fStack_94 = fStack_ac + fStack_64;
      fStack_90 = fStack_a8 + fStack_60;
      fStack_74 = fStack_b0 + fStack_68;
      afStack_f8[(uint)bVar11 * -2 + 0x22] = afStack_f8[(uint)bVar11 * -2 + 0x19];
      afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x23] =
           afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1a];
      if (pSVar1 != (SPose *)(afStack_f8 + 0x21)) {
        (pSVar1->pose_data).root_position.x = fStack_74;
        (this_ptr->bone_transform).pose_data.root_position.y = fStack_70;
        (this_ptr->bone_transform).pose_data.root_position.z = fStack_6c;
        return;
      }
    }
  }
  return;
}
