// Name: core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
// Address: 0042add0
// Address Range: [[0042add0, 0042af65]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(int param_1,uint param_2)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [12];
  byte local_18 [12];
  
  iVar1 = param_1 + 0x150;
  if (param_2 < 7) {
    if ((param_2 == 1) && (*(int *)(param_1 + 0x2408) != 0)) {
      uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                        (iVar1,"?Bip01 L Foot" + 1,0);
      iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3);
      if (-1 < iVar4) {
        iVar2 = *(int *)(param_1 + 0x14c);
        uVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar1,local_3c,iVar4,0x3f800000);
        (**(code **)(iVar2 + 0x1c))(param_1,uVar3);
        return;
      }
    }
  }
  else if (param_2 < 8) {
    if (*(int *)(param_1 + 0x2408) != 0) {
      uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                        (iVar1,"Bip01 R Foot",0);
      iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3);
      if (-1 < iVar4) {
        iVar2 = *(int *)(param_1 + 0x14c);
        uVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar1,local_18,iVar4,0x3f800000);
        (**(code **)(iVar2 + 0x1c))(param_1,uVar3);
        return;
      }
    }
  }
  else if (0x1e < param_2) {
    if (param_2 < 0x20) {
      if (*(int *)(param_1 + 0x2408) != 0) {
        uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                          (iVar1,"Bip01 L Foot",0);
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3);
        if (-1 < iVar4) {
          iVar2 = *(int *)(param_1 + 0x14c);
          uVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (iVar1,local_24,iVar4,0x3fd9999a);
          (**(code **)(iVar2 + 0x1c))(param_1,uVar3);
          return;
        }
      }
    }
    else {
      if (param_2 != 0x25) {
        return;
      }
      if (*(int *)(param_1 + 0x2408) != 0) {
        uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                          (iVar1,"Bip01 R Foot",0);
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3);
        if (-1 < iVar4) {
          iVar2 = *(int *)(param_1 + 0x14c);
          uVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (iVar1,local_30,iVar4,0x3fd9999a);
          (**(code **)(iVar2 + 0x1c))(param_1,uVar3);
          return;
        }
      }
    }
  }
  return;
}
