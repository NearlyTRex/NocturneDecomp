// Name: core_svetlana.cpp_CSvetlana_setup_FUN_00541a40
// Address: 00541a40
// Address Range: [[00541a40, 00541ccb]]
// Convention: unknown
// Signature: void core_svetlana_cpp_CSvetlana_setup_FUN_00541a40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_CSvetlana_setup_FUN_00541a40(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    pcVar4 = "svetlanax.dfm";
  }
  else {
    pcVar4 = "svetlana.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(param_1 + 0x150,pcVar4);
  FUN_004b48d0(param_1);
  iVar1 = param_1 + 0x150;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar1);
  _DAT_02dca058 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 head",1);
  _DAT_02dca05c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Clavicle",1);
  _DAT_02dca060 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Clavicle",1);
  _DAT_02dca064 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_02dca068 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_02dca06c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_02dca070 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_02dca074 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Foot",1)
  ;
  _DAT_02dca078 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Foot",1)
  ;
  _DAT_02dca07c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Thigh",1);
  _DAT_02dca080 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Thigh",1);
  _DAT_02dca084 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Calf",1)
  ;
  _DAT_02dca088 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Calf",1)
  ;
  _DAT_02dca08c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 L Hand",1)
  ;
  _DAT_02dca090 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 R Hand",1)
  ;
  _DAT_02dca094 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine2",1)
  ;
  _DAT_02dca098 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_02dca09c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"Bipblade01",1);
  _DAT_02dca0a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar2,"BipR14",1);
  iVar5 = param_1 + 0x1fa44;
  *(uint *)(param_1 + 0x1fa3c) = 0;
  core_cloth_cpp_CCloth_load_FUN_00435240(iVar5,"svetcape.cth",iVar5);
  core_cloth_cpp_CCloth_setup_FUN_004359e0(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  iVar5 = param_1 + 0x5a574;
  core_cloth_cpp_CCloth_load_FUN_00435240(iVar5,"svethair.cth",iVar5);
  core_cloth_cpp_CCloth_setup_FUN_004359e0(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(iVar1);
  uVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"lblade01",1);
  *(uint *)(param_1 + 0x950b8) = uVar3;
  uVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (uVar2,"rblade02",1);
  *(uint *)(param_1 + 0x950a4) = 0;
  *(uint *)(param_1 + 0x950bc) = uVar2;
  return;
}
