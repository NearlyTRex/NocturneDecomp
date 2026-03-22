// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// Address: 0059ff20
// Address Range: [[0059ff20, 005a00ed] [00604f9e, 00605014]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  int iVar1;
  int iVar2;
  uint *puVar3;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  float afStackY_1860 [1497];
  float fStack_e8;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CQuaternion4f CStack_84;
  CQuaternion4f local_74;
  CQuaternion4f CStack_64;
  CQuaternion4f local_54;
  CQuaternion4f CStack_44;
  CVector3f local_34;
  float local_28;
  CSkeleton *local_24;
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  float fStack_18;
  
  bVar8 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar2 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730(rotation_quat,&local_28,&local_34);
  if (0 < pCVar1->bone_count) {
    local_1c = (this_ptr->bone_transform).pose_data.bone_rotations;
    local_20 = this_ptr;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(local_24,iVar2,bone_index);
      if (-1 < hierarchy_distance) {
        fStack_18 = (*blend_callback)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
        if ((float)1.0000000000000001e-05 < ABS(fStack_18 * local_28)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (fStack_18 * local_28,&local_34,&CStack_44);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(local_1c,&CStack_64,&CStack_84);
          (local_20->bone_transform).pose_data.bone_rotations[0].w = CStack_84.w;
          (local_20->bone_transform).pose_data.bone_rotations[0].x = CStack_84.x;
          (local_20->bone_transform).pose_data.bone_rotations[0].y = CStack_84.y;
          (local_20->bone_transform).pose_data.bone_rotations[0].z = CStack_84.z;
        }
      }
      local_20 = (CDeformableModelInstance *)&(local_20->motion_controller).tween_speed;
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 1;
    } while (iVar2 < local_24->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70(local_28 * blend_weight,&local_34,&local_74);
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(&local_54,&local_b4);
  pCVar4 = &local_b4;
  pCVar7 = &local_e4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + (uint)bVar8 * -8 + 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pCVar7->m[0].w = pCVar4->m[0].w;
    pCVar4 = pCVar4;
    pCVar7 = pCVar7;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            ((CVector3f *)&this_ptr->bone_transform,&local_e4);
  return;
}
