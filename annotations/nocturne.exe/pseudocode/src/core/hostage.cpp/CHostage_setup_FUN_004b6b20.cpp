// Name: core_hostage.cpp_CHostage_setup_FUN_004b6b20
// Address: 004b6b20
// Address Range: [[004b6b20, 004b6ce8]]
// Convention: unknown
// Signature: void core_hostage_cpp_CHostage_setup_FUN_004b6b20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hostage_cpp_CHostage_setup_FUN_004b6b20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
  iVar2 = param_1 + 0x23b0;
  *(uint *)(param_1 + 0x1f920) = 6;
  iVar1 = _stricmp(iVar2,"hickboy.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1f920) = 0;
  }
  iVar1 = _stricmp(iVar2,"depute.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1f920) = 1;
  }
  iVar1 = _stricmp(iVar2,"hickho.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1f920) = 2;
  }
  iVar1 = _stricmp(iVar2,"hickgirl.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1f920) = 4;
  }
  iVar1 = _stricmp(iVar2,"hickdad.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1f920) = 5;
  }
  iVar2 = _stricmp(iVar2,"preacher.dfm");
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x1f920) = 3;
  }
  uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
  uVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(param_1 + 0x150);
  uVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0x1f938) = uVar5;
  uVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Head",1);
  *(uint *)(param_1 + 0x1f934) = uVar5;
  uVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0x1f93c) = uVar5;
  uVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0x1f940) = uVar5;
  uVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x24e8) = uVar5;
  if (*(int *)(param_1 + 0x1f920) != 1) {
    uVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 L Hand",1);
    *(uint *)(param_1 + 0x24a4) = uVar5;
  }
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x25bc) = uVar3;
  if (*(int *)(param_1 + 0x1f920) == 1) {
    _DAT_01cae1a0 =
         core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar4,"gunup",1);
  }
  FUN_004ee9e0(param_1);
  *(uint *)(param_1 + 0x1f918) = 0;
  return;
}
