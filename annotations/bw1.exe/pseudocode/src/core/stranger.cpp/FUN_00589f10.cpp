// Name: core_stranger.cpp_FUN_00589f10
// Address: 00589f10
// Address Range: [[00589f10, 0058a002]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00589f10(CStranger *this_ptr,SPose *out_pose)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00589f10(CStranger *this_ptr,SPose *out_pose)

{
  byte *this_ptr_00;
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
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_FUN_0056acc0((CDeformableModelInstance *)this_ptr_00,aSStack_1ae4);
  core_skeleton_cpp_FUN_00567620
            (this_ptr_00,*(uint *)&this_ptr->field_0x20058,
             *(float *)&this_ptr->field_0x20028 * (float)_DAT_005f6ad9,0xffffffff);
  core_xform_cpp_FUN_005b7c00(&this_ptr->field_0x808 + _DAT_02c83600 * 0x10);
  local_1c = local_28;
  afStack_44[(uint)bVar1 * -2 + 0xb] = afStack_44[(uint)bVar1 * -2 + 8];
  afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xc] =
       afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 9];
  blend_callback = core_skeleton_cpp_FUN_00567360;
  bone_index = -1;
  local_10 = -local_18;
  blend_weight = 1.0;
  core_xform_cpp_FUN_005b7b30(local_10);
  local_48 = afStack_44[3];
  afStack_44[(uint)bVar1 * -2] = afStack_44[(uint)bVar1 * -2 + 4];
  afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 5];
  (afStack_44 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       (afStack_44 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 5)[(uint)bVar1 * -2 + 1];
  core_skeleton_cpp_FUN_005695e0
            ((CDeformableModelInstance *)this_ptr_00,(CQuaternion4f *)&local_48,blend_weight,
             bone_index,blend_callback);
  core_skeleton_cpp_FUN_0056acc0((CDeformableModelInstance *)this_ptr_00,out_pose);
  core_skeleton_cpp_FUN_0056ad90((CDeformableModelInstance *)this_ptr_00,aSStack_1ae4);
  return;
}
