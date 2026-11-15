// Name: core_prye.cpp_CPrye_extractTurnPose_FUN_0051e280
// Address: 0051e280
// Address Range: [[0051e280, 0051e372]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_extractTurnPose_FUN_0051e280(CPrye *this_ptr,SPose *out_pose)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_extractTurnPose_FUN_0051e280(CPrye *this_ptr,SPose *out_pose)

{
  CDeformableModelInstance *this_ptr_00;
  float *pfVar1;
  byte bVar2;
  float blend_weight;
  int bone_index;
  code *blend_callback;
  SPose SStack_1ae4;
  CQuaternion4f local_48;
  float local_38;
  float afStack_34 [6];
  uint local_1c;
  float local_18;
  float local_10;
  
  bVar2 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(this_ptr_00,&SStack_1ae4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0
            (this_ptr_00,this_ptr->turn_motion_index,
             this_ptr->turn_blend_weight * (float)_DAT_005cd3c7,-1);
  core_xform_cpp_quaternionToEulerAngles_FUN_00585de0
            ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01ed36dc);
  local_1c = afStack_34[3];
  afStack_34[(uint)bVar2 * -2 + 7] = afStack_34[(uint)bVar2 * -2 + 4];
  afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 8] =
       afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
  bone_index = -1;
  local_10 = -local_18;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_10);
  local_48.w = local_38;
  pfVar1 = (float *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  *(float *)((int)&local_48 + (uint)bVar2 * -8 + 4) = afStack_34[(uint)bVar2 * -2];
  *pfVar1 = afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  pfVar1[(uint)bVar2 * -2 + 1] =
       (afStack_34 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
            (this_ptr_00,&local_48,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(this_ptr_00,out_pose);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920(this_ptr_00,&SStack_1ae4)
  ;
  return;
}
