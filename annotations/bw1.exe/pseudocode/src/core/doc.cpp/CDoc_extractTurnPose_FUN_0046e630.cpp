// Name: core_doc.cpp_CDoc_extractTurnPose_FUN_0046e630
// Address: 0046e630
// Address Range: [[0046e630, 0046e722]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_extractTurnPose_FUN_0046e630(CDoc *this_ptr,SPose *out_pose)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_doc_cpp_CDoc_extractTurnPose_FUN_0046e630(CDoc *this_ptr,SPose *out_pose)

{
  CDeformableModelInstance *this_ptr_00;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float blend_weight;
  int bone_index;
  code *blend_callback;
  SPose SStack_1ae4;
  CQuaternion4f local_48;
  CQuaternion4f local_38;
  CVector3f local_28;
  float local_1c;
  float local_18 [3];
  
  bVar3 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(this_ptr_00,&SStack_1ae4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00567620
            (this_ptr_00,this_ptr->turn_motion_index,
             this_ptr->turn_blend_weight * (float)40,-1);
  core_xform_cpp_quaternionToEulerAngles_FUN_005b7c00
            ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + g_INT_01b68814,
             &local_28);
  local_1c = local_28.x;
  local_18[(uint)bVar3 * -2] = *(float *)((int)&local_28 + (uint)bVar3 * -8 + 4);
  local_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  bone_index = -1;
  local_18[2] = -local_18[0];
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_18[2],&local_38);
  local_48.w = local_38.w;
  puVar2 = (uint *)((int)&local_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_48 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_38 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (this_ptr_00,&local_48,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(this_ptr_00,out_pose);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(this_ptr_00,&SStack_1ae4)
  ;
  return;
}
