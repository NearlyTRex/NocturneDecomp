// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100
// Address: 00568100
// Address Range: [[00568100, 00568827]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

{
  SPose *pSVar1;
  CVector3f *pCVar2;
  EBoneUpdateMode current_bone_index;
  CSkeleton *this_ptr_00;
  int iVar3;
  float fVar4;
  CQuaternion4f *pCVar5;
  CQuaternion4f *pCVar6;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1988 [1020];
  float local_980;
  CQuaternion4f local_97c [100];
  int aiStack_33c [100];
  CQuaternion4f CStack_1ac;
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
  CQuaternion4f CStack_15c;
  CQuaternion4f local_14c;
  CQuaternion4f CStack_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  float local_ec;
  float afStack_e8 [4];
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
  uint *puVar7;
  
  bVar10 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_00525240
              (&this_ptr->base,target_motion_index,target_frame_number,&local_5c,&local_54,
               &stack0xfffff680);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
    local_1c = this_ptr->bone_update_mode;
    if (local_1c == BONE_UPDATE_SIMPLE_FLAT) {
      if (0 < this_ptr_00->bone_count) {
        local_3c = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_44 = this_ptr;
        do {
          current_bone_index = local_1c;
          iVar3 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630
                            (this_ptr_00,local_1c,bone_index);
          if (-1 < iVar3) {
            fVar4 = (*callback_func)(current_bone_index,bone_index,blend_weight,iVar3,this_ptr);
            local_18 = fVar4;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_005635a0
                      (this_ptr_00,current_bone_index,local_5c,local_54,local_980,&CStack_13c);
            pCVar5 = local_3c;
            pCVar6 = &CStack_15c;
            CStack_15c.w = CStack_13c.w;
            puVar8 = (uint *)((int)&CStack_15c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            puVar7 = (uint *)((int)&CStack_13c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *(uint *)((int)&CStack_15c + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)&CStack_13c + (uint)bVar10 * -8 + 4);
            *puVar8 = *puVar7;
            puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005b7940(pCVar5,pCVar6,fVar4,&CStack_1ac);
            puVar8 = (uint *)((int)local_44 + (uint)bVar10 * -8 + 0x6b4);
            (local_44->bone_transform).pose_data.bone_rotations[0].w = CStack_1ac.w;
            puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar7 = (uint *)((int)&CStack_1ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *puVar8 = *(uint *)((int)&CStack_1ac + (uint)bVar10 * -8 + 4);
            *puVar9 = *puVar7;
            puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
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
          iVar3 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630
                            (this_ptr_00,local_20,bone_index);
          *(int *)((int)aiStack_33c + local_28) = iVar3;
          if (-1 < iVar3) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_005635a0
                      (this_ptr_00,local_20,local_5c,local_54,local_980,&local_19c);
            puVar8 = (uint *)((int)local_97c + (uint)bVar10 * -8 + local_40 + 4);
            *(float *)((int)&local_97c[0].w + local_40) = local_19c.w;
            puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar7 = (uint *)((int)&local_19c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *puVar8 = *(uint *)((int)&local_19c + (uint)bVar10 * -8 + 4);
            *puVar9 = *puVar7;
            puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_40 = local_40 + 0x10;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar3 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar3) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_005635a0
                  (this_ptr_00,iVar3,local_5c,local_54,local_980,&local_16c);
        puVar8 = (uint *)((int)local_97c + (uint)bVar10 * -8 + iVar3 * 0x10 + 4);
        local_97c[iVar3].w = local_16c.w;
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = (uint *)((int)&local_16c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *puVar8 = *(uint *)((int)&local_16c + (uint)bVar10 * -8 + 4);
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
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
              core_xform_cpp_negateFirstComponent_FUN_005b7750(local_97c + iVar3,&local_10c);
              pCVar6 = &local_12c;
              pCVar5 = (CQuaternion4f *)((int)&local_97c[0].w + local_48);
              local_12c.w = local_10c.w;
              puVar8 = (uint *)((int)&local_12c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              puVar7 = (uint *)((int)&local_10c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              *(uint *)((int)&local_12c + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&local_10c + (uint)bVar10 * -8 + 4);
              *puVar8 = *puVar7;
              puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005b77b0(pCVar5,pCVar6,&local_18c);
              pCVar6 = (CQuaternion4f *)((int)&local_4c->w + (int)local_18);
              local_17c.w = local_18c.w;
              puVar8 = (uint *)((int)&local_17c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              puVar7 = (uint *)((int)&local_18c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              *(uint *)((int)&local_17c + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&local_18c + (uint)bVar10 * -8 + 4);
              *puVar8 = *puVar7;
              puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_17c,pCVar6,&local_11c);
              pCVar6 = &local_11c;
            }
            puVar7 = (uint *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
            local_14c.w = pCVar6->w;
            puVar9 = (uint *)((int)&local_14c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
            *(uint *)((int)&local_14c + (uint)bVar10 * -8 + 4) = *puVar7;
            *puVar9 = *puVar8;
            puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005b7940(local_34,&local_14c,blend_weight,&local_fc);
            puVar8 = (uint *)((int)local_38 + (uint)bVar10 * -8 + 0x6b4);
            (local_38->bone_transform).pose_data.bone_rotations[0].w = local_fc.w;
            puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar7 = (uint *)((int)&local_fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *puVar8 = *(uint *)((int)&local_fc + (uint)bVar10 * -8 + 4);
            *puVar9 = *puVar7;
            puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
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
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 2721;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Write me!");
    }
    if (bone_index < 0) {
      pCVar2 = this_ptr_00->frame_positions_1;
      local_bc = pCVar2[local_54].x * local_980;
      local_b8 = pCVar2[local_54].y * local_980;
      fStack_b4 = pCVar2[local_54].z * local_980;
      local_ec = local_bc;
      afStack_e8[(uint)bVar10 * -2] = afStack_e8[(uint)bVar10 * -2 + 0xc];
      afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      fStack_58 = 1.0 - local_980;
      fStack_a4 = pCVar2[local_5c].x * fStack_58;
      fStack_a0 = pCVar2[local_5c].y * fStack_58;
      fStack_9c = pCVar2[local_5c].z * fStack_58;
      fStack_c8 = fStack_a4;
      afStack_e8[(uint)bVar10 * -2 + 9] = afStack_e8[(uint)bVar10 * -2 + 0x12];
      afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
      fStack_80 = fStack_c8 + local_ec;
      fStack_7c = fStack_c4 + afStack_e8[0];
      fStack_78 = fStack_c0 + afStack_e8[1];
      fStack_8c = fStack_c8 + local_ec;
      afStack_e8[(uint)bVar10 * -2 + 0x18] = afStack_e8[(uint)bVar10 * -2 + 0x1b];
      afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
           afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
      fStack_8c = fStack_8c * (this_ptr->root_offset_scale).x;
      fStack_88 = fStack_88 * (this_ptr->root_offset_scale).y;
      fStack_84 = fStack_84 * (this_ptr->root_offset_scale).z;
      afStack_e8[2] = fStack_8c * blend_weight;
      fVar4 = 1.0 - blend_weight;
      pSVar1 = &this_ptr->bone_transform;
      afStack_e8[3] = fStack_88 * blend_weight;
      fStack_d8 = fStack_84 * blend_weight;
      fStack_68 = afStack_e8[2];
      afStack_e8[(uint)bVar10 * -2 + 0x21] = afStack_e8[(uint)bVar10 * -2 + 3];
      afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
           afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      fStack_50 = fVar4;
      fStack_d4 = (pSVar1->pose_data).root_position.x * fVar4;
      fStack_d0 = (this_ptr->bone_transform).pose_data.root_position.y * fVar4;
      fStack_cc = (this_ptr->bone_transform).pose_data.root_position.z * fVar4;
      fStack_b0 = fStack_d4;
      afStack_e8[(uint)bVar10 * -2 + 0xf] = afStack_e8[(uint)bVar10 * -2 + 6];
      afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
           afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      fStack_98 = fStack_b0 + fStack_68;
      fStack_94 = fStack_ac + fStack_64;
      fStack_90 = fStack_a8 + fStack_60;
      fStack_74 = fStack_b0 + fStack_68;
      afStack_e8[(uint)bVar10 * -2 + 0x1e] = afStack_e8[(uint)bVar10 * -2 + 0x15];
      afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
           afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      if (pSVar1 != (SPose *)(afStack_e8 + 0x1d)) {
        (pSVar1->pose_data).root_position.x = fStack_74;
        (this_ptr->bone_transform).pose_data.root_position.y = fStack_70;
        (this_ptr->bone_transform).pose_data.root_position.z = fStack_6c;
        return;
      }
    }
  }
  return;
}
