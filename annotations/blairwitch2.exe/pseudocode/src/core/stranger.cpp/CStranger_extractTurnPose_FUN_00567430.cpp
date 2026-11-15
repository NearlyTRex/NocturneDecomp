// Name: core_stranger.cpp_CStranger_extractTurnPose_FUN_00567430
// Address: 00567430
// Address Range: [[00567430, 00567522]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_extractTurnPose_FUN_00567430(CStranger *this_ptr,SPose *out_pose)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_extractTurnPose_FUN_00567430(CStranger *this_ptr,SPose *out_pose)

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
  uint local_28;
  float afStack_24 [5];
  float local_10;
  
  bVar3 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(this_ptr_00,&SStack_1ae4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
            (this_ptr_00,this_ptr->turn_motion_index,
             this_ptr->turn_blend_weight * (float)_DAT_005eb865,-1);
  core_xform_cpp_quaternionToEulerAngles_FUN_005940b0();
  afStack_24[2] = (float)local_28;
  afStack_24[(uint)bVar3 * -2 + 3] = afStack_24[(uint)bVar3 * -2];
  afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  bone_index = -1;
  local_10 = -afStack_24[3];
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_10,&local_38);
  local_48.w = local_38.w;
  puVar2 = (uint *)((int)&local_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_48 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_38 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (this_ptr_00,&local_48,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(this_ptr_00,out_pose);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0(this_ptr_00,&SStack_1ae4)
  ;
  return;
}
