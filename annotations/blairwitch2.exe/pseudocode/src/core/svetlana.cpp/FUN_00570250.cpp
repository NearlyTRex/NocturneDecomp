// Name: core_svetlana.cpp_FUN_00570250
// Address: 00570250
// Address Range: [[00570250, 005704db]]
// Convention: unknown
// Signature: void core_svetlana_cpp_FUN_00570250(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_FUN_00570250(CHero *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  char *model_name;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    model_name = "svetlanax.dfm";
  }
  else {
    model_name = "svetlana.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(param_1 + 0x2b4),model_name);
  core_hero_cpp_FUN_004ce4a0(param_1);
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x2b4);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  _DAT_0264bf38 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 head",1);
  _DAT_0264bf3c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_0264bf40 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_0264bf44 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_0264bf48 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_0264bf4c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_0264bf50 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_0264bf54 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_0264bf58 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_0264bf5c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_0264bf60 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_0264bf64 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Calf",1);
  _DAT_0264bf68 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Calf",1);
  _DAT_0264bf6c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_0264bf70 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_0264bf74 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_0264bf78 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_0264bf7c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bipblade01",1);
  _DAT_0264bf80 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"BipR14",1);
  *(uint *)(param_1 + 0x25640) = 0;
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)(param_1 + 0x25648),"svetcape.cth");
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)(param_1 + 0x25648),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),this_ptr);
  core_cloth_cpp_CCloth_load_FUN_005adeb0((CCloth *)(param_1 + 0x60178),"svethair.cth");
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)(param_1 + 0x60178),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),this_ptr);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lblade01",1);
  *(int *)(param_1 + 0x9acbc) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rblade02",1);
  *(uint *)(param_1 + 0x9aca8) = 0;
  *(int *)(param_1 + 0x9acc0) = iVar1;
  return;
}
