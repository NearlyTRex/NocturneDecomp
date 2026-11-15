// Name: core_doc.cpp_FUN_00455170
// Address: 00455170
// Address Range: [[00455170, 00455262]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00455170(int param_1,SPose *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00455170(int param_1,SPose *param_2)

{
  CDeformableModelInstance *this_ptr;
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
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x2b4);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(this_ptr,&SStack_1ae4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
            (this_ptr,*(int *)(param_1 + 0x256ec),
             *(float *)(param_1 + 0x256bc) * (float)_DAT_005d01d7,-1);
  core_xform_cpp_FUN_005940b0(_DAT_01b4d258 * 0x10 + param_1 + 0x964);
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
            (this_ptr,&local_48,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(this_ptr,param_2);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0(this_ptr,&SStack_1ae4);
  return;
}
