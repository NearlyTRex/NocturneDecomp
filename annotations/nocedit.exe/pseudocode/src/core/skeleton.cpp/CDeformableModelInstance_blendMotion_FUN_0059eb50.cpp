// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
// Address: 0059eb50
// Address Range: [[0059eb50, 0059f221]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

{
  float fVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  float fVar13;
  int iVar14;
  CQuaternion4f *pCVar15;
  CQuaternion4f *pCVar16;
  uint *puVar3;
  float *pfVar18;
  uint *puVar19;
  uint *puVar20;
  float *pfVar4;
  float *pfVar21;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar22;
  float afStackY_1940 [1020];
  CQuaternion4f *pCVar8;
  CQuaternion4f *pCVar11;
  float local_938;
  CQuaternion4f local_934 [100];
  int aiStack_2f4 [100];
  float fStack_164;
  float afStack_160 [3];
  CQuaternion4f CStack_154;
  CQuaternion4f CStack_144;
  CQuaternion4f local_134;
  uint local_124;
  float afStack_120 [3];
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  float local_f4;
  float afStack_f0 [3];
  CQuaternion4f local_e4;
  CQuaternion4f local_d4;
  CQuaternion4f local_c4;
  CQuaternion4f local_b4 [4];
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
  uint *puVar17;
  CVector3f *pCVar10;
  CVector3f *pCVar9;
  float fVar4;
  float fVar3;
  float fVar12;
  float fVar11;
  float fVar6;
  float fVar5;
  float fVar8;
  float fVar7;
  float fVar2;
  SPose *pSVar1;
  
  bVar22 = 0;
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,local_58,
               &local_5c,&local_938);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->bone_update_mode == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_2c = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_34 = this_ptr;
        local_1c = 0;
        do {
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                         (this_ptr_00,local_1c,bone_index);
          if (-1 < hierarchy_distance) {
            fVar13 = (*callback_func)(local_1c,bone_index,blend_weight,hierarchy_distance,this_ptr);
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,local_1c,local_58[0],local_5c,local_938);
            pCVar8 = &CStack_144;
            pfVar18 = (float *)((int)&CStack_144 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            *(float *)((int)&CStack_144 + (uint)bVar22 * -8 + 4) = afStack_160[(uint)bVar22 * -2];
            *pfVar18 = afStack_160[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            pfVar18[(uint)bVar22 * -2 + 1] =
                 (afStack_160 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_2c,pCVar8,fVar13,&CStack_154);
            puVar19 = (uint *)((int)local_34 + (uint)bVar22 * -8 + 0x6b4);
            (local_34->bone_transform).pose_data.bone_rotations[0].w = CStack_154.w;
            puVar20 = puVar19 + (uint)bVar22 * -2 + 1;
            puVar3 = (uint *)((int)&CStack_154 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            *puVar19 = *(uint *)((int)&CStack_154 + (uint)bVar22 * -8 + 4);
            *puVar20 = *puVar3;
            puVar20[(uint)bVar22 * -2 + 1] = puVar3[(uint)bVar22 * -2 + 1];
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
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,local_20,bone_index);
          *(int *)((int)aiStack_2f4 + local_28) = iVar14;
          if (-1 < iVar14) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,local_20,local_58[0],local_5c,local_938);
            pfVar4 = (float *)((int)local_934 + (uint)bVar22 * -8 + local_44 + 4);
            *(uint *)((int)&local_934[0].w + local_44) = local_124;
            pfVar7 = pfVar4 + (uint)bVar22 * -2 + 1;
            *pfVar4 = afStack_120[(uint)bVar22 * -2];
            *pfVar7 = afStack_120[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            pfVar7[(uint)bVar22 * -2 + 1] =
                 (afStack_120 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
          }
          local_28 = local_28 + 4;
          local_44 = local_44 + 0x10;
          local_20 = local_20 + 1;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar2 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar2) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar2,local_58[0],local_5c,local_938);
        pfVar4 = (float *)((int)local_934 + (uint)bVar22 * -8 + iVar2 * 0x10 + 4);
        local_934[iVar2].w = local_f4;
        pfVar21 = pfVar4 + (uint)bVar22 * -2 + 1;
        *pfVar4 = afStack_f0[(uint)bVar22 * -2];
        *pfVar21 = afStack_f0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
        pfVar21[(uint)bVar22 * -2 + 1] =
             (afStack_f0 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1];
      }
      local_24 = 0;
      if (0 < this_ptr_00->bone_count) {
        pCVar8 = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_3c = 0;
        local_38 = this_ptr;
        local_40 = pCVar8;
        local_30 = this_ptr_00;
        do {
          if (-1 < *(int *)((int)aiStack_2f4 + local_3c)) {
            iVar2 = local_30->bone_list[0].parent_index;
            if (iVar2 < 0) {
              pCVar16 = local_934 + local_24;
            }
            else {
              core_xform_cpp_negateFirstComponent_FUN_005f75e0(local_934 + iVar2,&local_e4);
              pCVar11 = local_b4;
              pCVar15 = local_934 + local_24;
              local_b4[0].w = local_e4.w;
              puVar5 = (uint *)((int)local_b4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
              puVar3 = (uint *)((int)&local_e4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
              *(uint *)((int)local_b4 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)&local_e4 + (uint)bVar22 * -8 + 4);
              *puVar5 = *puVar3;
              puVar5[(uint)bVar22 * -2 + 1] = puVar3[(uint)bVar22 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(pCVar15,pCVar11,&local_c4);
              pCVar11 = pCVar8 + iVar2;
              local_114.w = local_c4.w;
              puVar5 = (uint *)((int)&local_114 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
              puVar3 = (uint *)((int)local_b4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + -8);
              *(uint *)((int)&local_114 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)local_b4 + (uint)bVar22 * -8 + -0xc);
              *puVar5 = *puVar3;
              puVar5[(uint)bVar22 * -2 + 1] = puVar3[(uint)bVar22 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_114,pCVar11,&local_104);
              pCVar16 = &local_104;
            }
            pCVar16 = (CQuaternion4f *)((int)pCVar16 + (uint)bVar22 * -8 + 4);
            local_d4.w = pCVar16->w;
            puVar5 = (uint *)((int)&local_d4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            puVar3 = (uint *)((int)pCVar16 + (uint)bVar22 * -8 + 4);
            *(float *)((int)&local_d4 + (uint)bVar22 * -8 + 4) = pCVar16->w;
            *puVar5 = *puVar3;
            puVar5[(uint)bVar22 * -2 + 1] = puVar3[(uint)bVar22 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_40,&local_d4,blend_weight,&local_134);
            puVar5 = (uint *)((int)local_38 + (uint)bVar22 * -8 + 0x6b4);
            (local_38->bone_transform).pose_data.bone_rotations[0].w = local_134.w;
            puVar6 = puVar5 + (uint)bVar22 * -2 + 1;
            puVar3 = (uint *)((int)&local_134 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            *puVar5 = *(uint *)((int)&local_134 + (uint)bVar22 * -8 + 4);
            *puVar6 = *puVar3;
            puVar6[(uint)bVar22 * -2 + 1] = puVar3[(uint)bVar22 * -2 + 1];
          }
          local_3c = local_3c + 4;
          local_30 = (CSkeleton *)((local_30->motion_list).state_names[1] + 2);
          local_38 = (CDeformableModelInstance *)&(local_38->motion_controller).tween_speed;
          local_40 = local_40 + 1;
          local_24 = local_24 + 1;
        } while (local_24 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xa82;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (bone_index < 0) {
      pCVar9 = this_ptr_00->frame_positions_1;
      fVar1 = pCVar9[local_5c].y;
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
             fVar7 * fVar12 + (fVar3 * fVar11 + fVar1 * local_938) * fVar5 * blend_weight;
        (this_ptr->bone_transform).pose_data.root_position.z =
             fVar8 * fVar12 + (fVar4 * fVar11 + fVar2 * local_938) * fVar6 * blend_weight;
        return;
      }
    }
  }
  return;
}
