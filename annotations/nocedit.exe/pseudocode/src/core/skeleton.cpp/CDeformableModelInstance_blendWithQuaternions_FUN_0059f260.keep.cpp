// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
// Address: 0059f260
// MANUAL RECONSTRUCTION
// Address Range: [[0059f260, 0059f6dc] [005b3e15, 005b3e61] [0060e438, 0060e459] [0060fbe8, 0060fc35]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  float t;
  int iVar1;
  int iVar8;
  CQuaternion4f *quat1_in;
  float *puVar9;
  CQuaternion4f CStack_e8;
  CQuaternion4f local_d8;
  CQuaternion4f local_c8;
  CQuaternion4f local_98;
  CQuaternion4f local_88;
  CQuaternion4f local_78;
  float afStack_44 [4];
  CQuaternion4f *local_30;
  CQuaternion4f *local_2c;
  CQuaternion4f *local_1c;
  int local_18;
  float fVar2;
  float fVar1;
  float fVar3;
  float fVar7;
  float fVar6;
  float fVar5;
  float fVar4;
  
  if ((float)0.001 < blend_weight) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    local_2c = (this_ptr->bone_transform).pose_data.bone_rotations;
    if (this_ptr->bone_update_mode == 0) {
      iVar8 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_1c = source_quaternions;
        do {
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                         (this_ptr_00,iVar8,bone_index);
          if (-1 < hierarchy_distance) {
            t = (*blend_callback)(iVar8,bone_index,blend_weight,hierarchy_distance,this_ptr);
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_2c,local_1c,t,&CStack_e8);
            (this_ptr->bone_transform).pose_data.bone_rotations[iVar8] = CStack_e8;
          }
          iVar8 = iVar8 + 1;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (iVar8 < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->bone_update_mode == 1) {
      local_18 = 0;
      if (0 < this_ptr_00->bone_count) {
        quat1_in = source_quaternions;
        local_30 = local_2c;
        do {
          iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                            (this_ptr_00,local_18,bone_index);
          if (-1 < iVar1) {
            iVar1 = this_ptr_00->bone_list[local_18].parent_index;
            puVar9 = &quat1_in->w;
            if (-1 < iVar1) {
              core_xform_cpp_negateFirstComponent_FUN_005f75e0(source_quaternions + iVar1,&local_c8)
              ;
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_in,&local_c8,&local_78);
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_78,local_2c + iVar1,&local_98);
              puVar9 = &local_98.w;
            }
            local_d8.w = (float)*puVar9;
            local_d8.x = (float)puVar9[1];
            local_d8.y = (float)puVar9[2];
            local_d8.z = (float)puVar9[3];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_30,&local_d8,blend_weight,&local_88);
            (this_ptr->bone_transform).pose_data.bone_rotations[local_18] = local_88;
          }
          quat1_in = quat1_in + 1;
          local_30 = local_30 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 2773;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (bone_index < 0) {
      fVar5 = (this_ptr->scaled_model_dimensions).y;
      fVar6 = (this_ptr->scaled_model_dimensions).z;
      fVar1 = source_position->y;
      fVar2 = source_position->z;
      fVar7 = 1.0 - blend_weight;
      fVar3 = (this_ptr->bone_transform).pose_data.root_position.y;
      fVar4 = (this_ptr->bone_transform).pose_data.root_position.z;
      if (&this_ptr->bone_transform != (SPose *)afStack_44) {
        (this_ptr->bone_transform).pose_data.root_position.x =
             (this_ptr->bone_transform).pose_data.root_position.x * fVar7 +
             (this_ptr->scaled_model_dimensions).x * source_position->x * blend_weight;
        (this_ptr->bone_transform).pose_data.root_position.y =
             fVar3 * fVar7 + fVar5 * fVar1 * blend_weight;
        (this_ptr->bone_transform).pose_data.root_position.z =
             fVar4 * fVar7 + fVar6 * fVar2 * blend_weight;
        return;
      }
    }
  }
  return;
}
