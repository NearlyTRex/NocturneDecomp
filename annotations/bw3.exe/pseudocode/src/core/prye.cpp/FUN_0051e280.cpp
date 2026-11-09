// Name: core_prye.cpp_FUN_0051e280
// Address: 0051e280
// Address Range: [[0051e280, 0051e372]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051e280(int param_1,SPose *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051e280(int param_1,SPose *param_2)

{
  CDeformableModelInstance *this_ptr;
  byte bVar1;
  float blend_weight;
  int bone_index;
  code *blend_callback;
  SPose aSStack_1ae4 [704];
  float afStack_1824 [1527];
  uint local_48;
  float afStack_44 [7];
  uint local_28;
  uint local_1c;
  float local_18;
  float local_10;
  
  bVar1 = 0;
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(this_ptr,aSStack_1ae4);
  core_skeleton_cpp_FUN_0054c1b0
            (this_ptr,*(uint *)(param_1 + 0x20c78),
             *(float *)(param_1 + 0x20c48) * (float)_DAT_005cd3c7,0xffffffff);
  core_xform_cpp_FUN_00585de0(_DAT_01ed36dc * 0x10 + param_1 + 0x808);
  local_1c = local_28;
  afStack_44[(uint)bVar1 * -2 + 0xb] = afStack_44[(uint)bVar1 * -2 + 8];
  afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xc] =
       afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 9];
  blend_callback = core_skeleton_cpp_FUN_0054bef0;
  bone_index = -1;
  local_10 = -local_18;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_10);
  local_48 = afStack_44[3];
  afStack_44[(uint)bVar1 * -2] = afStack_44[(uint)bVar1 * -2 + 4];
  afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 5];
  (afStack_44 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       (afStack_44 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 5)[(uint)bVar1 * -2 + 1];
  core_skeleton_cpp_FUN_0054e170
            (this_ptr,(CQuaternion4f *)&local_48,blend_weight,bone_index,blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(this_ptr,param_2);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920(this_ptr,aSStack_1ae4);
  return;
}
