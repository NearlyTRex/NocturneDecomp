// Name: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
// Address: 0059df80
// Address Range: [[0059df80, 0059dffd]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
          (CDeformableModelInstance *this_ptr)

{
  CSkeleton *pCVar1;
  int iVar2;
  CQuaternion4f *quaternion;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  if (0 < pCVar1->bone_count) {
    quaternion = (CQuaternion4f *)(in_stack_00000008 + 0x6b0);
    do {
      core_xform_cpp_setIdentityQuaternion_FUN_005f7620(quaternion);
      iVar2 = iVar2 + 1;
      *(uint *)(in_stack_00000008 + 0xcf0) = *(uint *)(in_stack_00000008 + 0x514);
      quaternion = quaternion + 1;
      in_stack_00000008 = in_stack_00000008 + 4;
    } while (iVar2 < pCVar1->bone_count);
  }
  *(uint *)(in_stack_0000000c + 0x6ac) = 0;
  *(uint *)(in_stack_0000000c + 0x6a8) = *(uint *)(in_stack_0000000c + 0x6ac);
  *(uint *)(in_stack_0000000c + 0x6a4) = *(uint *)(in_stack_0000000c + 0x6a8);
  return;
}
