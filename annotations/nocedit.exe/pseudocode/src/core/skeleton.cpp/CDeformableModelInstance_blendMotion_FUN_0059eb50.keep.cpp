// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
// Address: 0059eb50
// MANUAL RECONSTRUCTION
// Address Range: [[0059eb50, 0059f221] [006055be, 00605655] [0060e45a, 0060e47b] [0060fc36, 0060fca8]]
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
  CQuaternion4f *pCVar3;
  CQuaternion4f *pCVar16;
  float local_938;
  CQuaternion4f local_934 [100];
  int aiStack_2f4 [100];
  CQuaternion4f fStack_164;
  CQuaternion4f CStack_154;
  CQuaternion4f local_134;
  CQuaternion4f local_124;
  CQuaternion4f local_104;
  CQuaternion4f local_f4;
  CQuaternion4f local_e4;
  CQuaternion4f local_d4;
  CQuaternion4f local_c4;
  float afStack_68 [3];
  int local_5c;
  int local_58 [3];
  CQuaternion4f *local_40;
  int local_3c;
  int local_24;
  int local_20;
  int local_1c;
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
  
  if ((float)0.001 < blend_weight) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
              (&this_ptr->motion_controller,target_motion_index,target_frame_number,local_58,
               &local_5c,&local_938);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    if (this_ptr->bone_update_mode == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_1c = 0;
        do {
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                         (this_ptr_00,local_1c,bone_index);
          if (-1 < hierarchy_distance) {
            fVar13 = (*callback_func)(local_1c,bone_index,blend_weight,hierarchy_distance,this_ptr);
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,local_1c,local_58[0],local_5c,local_938,
                       &fStack_164);
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (&(this_ptr->bone_transform).pose_data.bone_rotations[local_1c],
                       &fStack_164,fVar13,&CStack_154);
            (this_ptr->bone_transform).pose_data.bone_rotations[local_1c] = CStack_154;
          }
          local_1c = local_1c + 1;
        } while (local_1c < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->bone_update_mode == 1) {
      local_20 = 0;
      if (0 < this_ptr_00->bone_count) {
        do {
          iVar14 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                             (this_ptr_00,local_20,bone_index);
          aiStack_2f4[local_20] = iVar14;
          if (-1 < iVar14) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                      (this_ptr_00,local_20,local_58[0],local_5c,local_938,
                       &local_124);
            local_934[local_20] = local_124;
          }
          local_20 = local_20 + 1;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar2 = this_ptr_00->bone_list[bone_index].parent_index;
      if (-1 < iVar2) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,iVar2,local_58[0],local_5c,local_938,&local_f4);
        local_934[iVar2] = local_f4;
      }
      local_24 = 0;
      if (0 < this_ptr_00->bone_count) {
        pCVar3 = (this_ptr->bone_transform).pose_data.bone_rotations;
        local_3c = 0;
        local_40 = pCVar3;
        do {
          if (-1 < aiStack_2f4[local_3c / 4]) {
            iVar2 = this_ptr_00->bone_list[local_24].parent_index;
            if (iVar2 < 0) {
              pCVar16 = local_934 + local_24;
            }
            else {
              core_xform_cpp_negateFirstComponent_FUN_005f75e0(local_934 + iVar2,&local_e4);
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (local_934 + local_24,&local_e4,&local_c4);
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_c4,pCVar3 + iVar2,&local_104);
              pCVar16 = &local_104;
            }
            local_d4 = *pCVar16;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_40,&local_d4,blend_weight,&local_134);
            (this_ptr->bone_transform).pose_data.bone_rotations[local_24] = local_134;
          }
          local_3c = local_3c + 4;
          local_40 = local_40 + 1;
          local_24 = local_24 + 1;
        } while (local_24 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 2690;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (bone_index < 0) {
      if (this_ptr_00->frame_count - 1 < local_5c) {
        local_5c = this_ptr_00->frame_count - 1;
      }
      if (this_ptr_00->frame_count - 1 < local_58[0]) {
        local_58[0] = this_ptr_00->frame_count - 1;
      }
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
