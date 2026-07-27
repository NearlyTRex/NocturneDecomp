// Name: core_stranger.cpp_FUN_00535450
// Address: 00535450
// Address Range: [[00535450, 00535778]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00535450(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_00535450(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte local_24 [12];
  byte local_18 [12];
  
  core_hero_cpp_FUN_004b48d0(param_1);
  iVar1 = param_1 + 0x150;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar1);
  _DAT_02dc9f50 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 head",1);
  _DAT_02dc9f54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Clavicle",1);
  _DAT_02dc9f58 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Clavicle",1);
  _DAT_02dc9f5c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_02dc9f60 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_02dc9f64 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_02dc9f68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_02dc9f6c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Foot",1)
  ;
  _DAT_02dc9f70 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Foot",1)
  ;
  _DAT_02dc9f74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Thigh",1);
  _DAT_02dc9f78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Thigh",1);
  _DAT_02dc9f7c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Calf",1)
  ;
  _DAT_02dc9f80 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Calf",1)
  ;
  _DAT_02dc9f84 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Hand",1)
  ;
  _DAT_02dc9f88 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Hand",1)
  ;
  _DAT_02dc9f8c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Neck",1);
  _DAT_02dc9f90 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine2",1)
  ;
  _DAT_02dc9f94 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine1",1)
  ;
  _DAT_02dc9f98 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_02dc9f9c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Pelvis",1)
  ;
  *(uint *)(param_1 + 0x24a4) = _DAT_02dc9f84;
  *(uint *)(param_1 + 0x24e8) = _DAT_02dc9f88;
  uVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                    (iVar1,"turnlstart",1);
  _DAT_02dc9fa0 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar2);
  uVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                    (iVar1,"turnrstart",1);
  _DAT_02dc9fa4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar2);
  uVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(iVar1,"pickup",1);
  uVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar2);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
            (iVar1,uVar2,0x41b00000);
  puVar3 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (iVar1,local_18,_DAT_02dc9f88);
  if ((uint *)(param_1 + 0x1fb24) != puVar3) {
    *(uint *)(param_1 + 0x1fb24) = *puVar3;
    *(uint *)(param_1 + 0x1fb28) = puVar3[1];
    *(uint *)(param_1 + 0x1fb2c) = puVar3[2];
  }
  puVar3 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (param_1 + 0x150,local_24,_DAT_02dc9f60);
  if ((uint *)(param_1 + 0x1fb30) != puVar3) {
    *(uint *)(param_1 + 0x1fb30) = *puVar3;
    *(uint *)(param_1 + 0x1fb34) = puVar3[1];
    *(uint *)(param_1 + 0x1fb38) = puVar3[2];
  }
  core_stranger_cpp_FUN_005384d0(param_1);
  *(uint *)(param_1 + 0x1fb3c) = 0;
  *(uint *)(param_1 + 0x1fccc) = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (param_1 + 0x1fb40,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x1fb40);
  *(uint *)(param_1 + 0x1fcd4) = 0;
  *(uint *)(param_1 + 0x1fab0) = 0;
  *(uint *)(param_1 + 0x1fab4) = 0;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1 + 0x150);
  _DAT_02dc9fa8 =
       core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(uVar2,"head01",1);
  return;
}
