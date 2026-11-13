// Name: core_doc.cpp_FUN_0046e630
// Address: 0046e630
// Address Range: [[0046e630, 0046e722]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046e630(int param_1,SPose *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046e630(int param_1,SPose *param_2)

{
  CDeformableModelInstance *this_ptr;
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
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(this_ptr,&SStack_1ae4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00567620
            (this_ptr,*(int *)(param_1 + 0x20058),
             *(float *)(param_1 + 0x20028) * (float)_DAT_005d9ff4,-1);
  core_xform_cpp_FUN_005b7c00(_DAT_01b68814 * 0x10 + param_1 + 0x808);
  local_1c = afStack_34[3];
  afStack_34[(uint)bVar2 * -2 + 7] = afStack_34[(uint)bVar2 * -2 + 4];
  afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 8] =
       afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  bone_index = -1;
  local_10 = -local_18;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_10);
  local_48.w = local_38;
  pfVar1 = (float *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  *(float *)((int)&local_48 + (uint)bVar2 * -8 + 4) = afStack_34[(uint)bVar2 * -2];
  *pfVar1 = afStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  pfVar1[(uint)bVar2 * -2 + 1] =
       (afStack_34 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (this_ptr,&local_48,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(this_ptr,param_2);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(this_ptr,&SStack_1ae4);
  return;
}
