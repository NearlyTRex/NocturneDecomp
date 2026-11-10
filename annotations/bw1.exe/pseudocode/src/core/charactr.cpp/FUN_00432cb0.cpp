// Name: core_charactr.cpp_FUN_00432cb0
// Address: 00432cb0
// Address Range: [[00432cb0, 00432df2]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00432cb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00432cb0(int param_1)

{
  float fVar1;
  float fVar2;
  CSkeleton *this_ptr;
  int iVar3;
  CMotionList *pCVar4;
  char *bone_name;
  int iVar5;
  float local_c;
  
  if (-1 < *(int *)(param_1 + 0x2754)) {
    if (*(int *)(param_1 + 0x2750) < -1) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0xec5;
      core_main_c_FUN_005030e0("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",param_1);
    }
    iVar5 = 0;
    bone_name = "Bip01 spine1";
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         ((CDeformableModelInstance *)(param_1 + 0x158));
    iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,bone_name,iVar5);
    iVar5 = *(int *)(param_1 + 0x2754);
    *(int *)(param_1 + 0x2750) = iVar3;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                       ((CMotionController *)(param_1 + 0x158));
    iVar5 = iVar5 * 0x120;
    local_c = 0.85;
    if (*(int *)(param_1 + 0x275c) == 1) {
      local_c = 1.0;
    }
    else {
      fVar1 = 1.0 / (*(float *)(pCVar4 + iVar5 + 0x1c48) * _DAT_005d5cf7);
      fVar2 = *(float *)(param_1 + 0x2758) * fVar1;
      fVar1 = ((float)*(int *)(pCVar4 + iVar5 + 0x1c8c) - *(float *)(param_1 + 0x2758)) * fVar1;
      if (fVar2 < _DAT_005d5cfb) {
        local_c = fVar2;
      }
      if (fVar1 < local_c) {
        local_c = fVar1;
      }
    }
    core_skeleton_cpp_FUN_00568100
              (param_1 + 0x158,*(uint *)(param_1 + 0x2754),*(uint *)(param_1 + 0x2758),
               local_c,*(uint *)(param_1 + 0x2750),core_skeleton_cpp_FUN_00567360);
  }
  return;
}
