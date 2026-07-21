// Name: FUN_004b3110
// Address: 004b3110
// Address Range: [[004b3110, 004b32a1]]
// Convention: unknown
// Signature: void FUN_004b3110(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3110(int param_1)

{
  uint uVar1;
  
  FUN_004b48d0(param_1);
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
  _DAT_01cae018 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 head",1);
  _DAT_01cae01c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Clavicle",1);
  _DAT_01cae020 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Clavicle",1);
  _DAT_01cae024 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L UpperArm",1);
  _DAT_01cae028 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R UpperArm",1);
  _DAT_01cae02c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L ForeArm",1);
  _DAT_01cae030 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R ForeArm",1);
  _DAT_01cae034 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Foot",1)
  ;
  _DAT_01cae038 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Foot",1)
  ;
  _DAT_01cae03c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Thigh",1);
  _DAT_01cae040 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Thigh",1);
  _DAT_01cae044 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Calf",1)
  ;
  _DAT_01cae048 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Calf",1)
  ;
  _DAT_01cae04c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 L Hand",1)
  ;
  _DAT_01cae050 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 R Hand",1)
  ;
  _DAT_01cae054 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine2",1)
  ;
  _DAT_01cae058 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x1fa3c) = 0;
  return;
}
