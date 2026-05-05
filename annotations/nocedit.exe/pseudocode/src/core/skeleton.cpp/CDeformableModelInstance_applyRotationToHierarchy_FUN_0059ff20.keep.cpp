// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// Address: 0059ff20
// MANUAL RECONSTRUCTION
// Address Range: [[0059ff20, 005a00ed] [00604f9e, 00605014] [03fc3e26, 03fc3e87]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  int iVar2;
  CMatrix3x4f local_e4;
  CQuaternion4f CStack_84;
  CQuaternion4f CStack_64;
  CQuaternion4f local_54;
  CVector3f local_34;
  float local_28;
  CSkeleton *local_24;
  CQuaternion4f *local_1c;
  float fStack_18;

  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar2 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730(rotation_quat,&local_28,&local_34);
  if (0 < pCVar1->bone_count) {
    local_1c = (this_ptr->bone_transform).pose_data.bone_rotations;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(local_24,iVar2,bone_index);
      if (-1 < hierarchy_distance) {
        fStack_18 = (*blend_callback)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
        if ((float)1.0000000000000001e-05 < ABS(fStack_18 * local_28)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (fStack_18 * local_28,&local_34,&CStack_64);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(local_1c,&CStack_64,&CStack_84);
          *local_1c = CStack_84;
        }
      }
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 1;
    } while (iVar2 < local_24->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70(local_28 * blend_weight,&local_34,&local_54);
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(&local_54,&local_e4);
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            ((CVector3f *)&this_ptr->bone_transform,&local_e4);
  return;
}
