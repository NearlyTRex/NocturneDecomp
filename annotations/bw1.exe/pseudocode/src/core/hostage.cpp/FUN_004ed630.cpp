// Name: core_hostage.cpp_FUN_004ed630
// Address: 004ed630
// Address Range: [[004ed630, 004ed7f8]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004ed630(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hostage_cpp_FUN_004ed630(int param_1)

{
  char *str1;
  int iVar1;
  CSkeleton *this_ptr;
  CMotionList *this_ptr_00;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)(param_1 + 0x158));
  str1 = (char *)(param_1 + 0x24a8);
  *(uint *)(param_1 + 0x1fe68) = 6;
  iVar1 = _stricmp(str1,"hickboy.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 0;
  }
  iVar1 = _stricmp(str1,"depute.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 1;
  }
  iVar1 = _stricmp(str1,"hickho.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 2;
  }
  iVar1 = _stricmp(str1,"hickgirl.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 4;
  }
  iVar1 = _stricmp(str1,"hickdad.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 5;
  }
  iVar1 = _stricmp(str1,"preacher.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1fe68) = 3;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  this_ptr_00 = core_motion_cpp_FUN_00524a00((CMotionController *)(param_1 + 0x158));
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  *(int *)(param_1 + 0x1fe80) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)(param_1 + 0x1fe7c) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  *(int *)(param_1 + 0x1fe84) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  *(int *)(param_1 + 0x1fe88) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  *(int *)(param_1 + 0x2620) = iVar1;
  if (*(int *)(param_1 + 0x1fe68) != 1) {
    iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
    *(int *)(param_1 + 0x25a8) = iVar1;
  }
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 0x2750) = iVar1;
  if (*(int *)(param_1 + 0x1fe68) == 1) {
    _DAT_01d06b8c = core_motion_cpp_FUN_005240c0(this_ptr_00,"gunup",1);
  }
  core_npc_cpp_FUN_00531720(param_1);
  *(uint *)(param_1 + 0x1fe60) = 0;
  return;
}
