// Name: core_stranger.cpp_CStranger_FUN_005bf720
// Address: 005bf720
// Address Range: [[005bf720, 005bf7fe]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bf720(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_FUN_005bf720(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  SBoneTransformData *in_stack_00000008;
  float blend_weight;
  int bone_index;
  code *blend_callback;
  SBoneTransformData SStack_1ad8;
  CQuaternion4f local_3c;
  CQuaternion4f local_2c;
  CQuaternion4f local_1c;
  
  bVar4 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(this_ptr_00,&SStack_1ad8)
  ;
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr_00,*(int *)(this_ptr->unk9 + 0x40),
             *(float *)(this_ptr->unk9 + 0x10) * (float)40,-1);
  pCVar1 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                     (&local_1c,
                      (CVector3f *)
                      ((this_ptr->base).base.model.bone_transform.bone_rotations + INT_03f6bacc));
  blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  bone_index = -1;
  local_1c.z = -pCVar1->y;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_1c.z,&local_2c);
  local_3c.w = local_2c.w;
  puVar3 = (uint *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_3c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,&local_3c,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            (this_ptr_00,in_stack_00000008);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(this_ptr_00,&SStack_1ad8)
  ;
  return;
}
