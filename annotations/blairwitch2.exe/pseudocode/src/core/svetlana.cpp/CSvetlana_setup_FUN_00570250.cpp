// Name: core_svetlana.cpp_CSvetlana_setup_FUN_00570250
// Address: 00570250
// Address Range: [[00570250, 005704db]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_setup_FUN_00570250(CSvetlana *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_setup_FUN_00570250(CSvetlana *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  char *model_name;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    model_name = "svetlanax.dfm";
  }
  else {
    model_name = "svetlana.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4,model_name);
  core_hero_cpp_CHero_setup_FUN_004ce4a0((CHero *)this_ptr);
  this_ptr_00 = &this_ptr->field_0x2b4;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr_00);
  _DAT_0264bf38 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 head",1);
  _DAT_0264bf3c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_0264bf40 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_0264bf44 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_0264bf48 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_0264bf4c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_0264bf50 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_0264bf54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_0264bf58 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_0264bf5c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_0264bf60 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_0264bf64 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Calf",1);
  _DAT_0264bf68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Calf",1);
  _DAT_0264bf6c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  _DAT_0264bf70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  _DAT_0264bf74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  _DAT_0264bf78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_0264bf7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bipblade01",1);
  _DAT_0264bf80 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"BipR14",1)
  ;
  this_ptr->blades_drawn = 0;
  core_cloth_cpp_CCloth_load_FUN_005adeb0
            ((CCloth *)&this_ptr->field_0x25648,"svetcape.cth");
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)&this_ptr->field_0x25648,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,(CDeformableModelInstance *)this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_005adeb0
            ((CCloth *)&this_ptr->field_0x60178,"svethair.cth");
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)&this_ptr->field_0x60178,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,(CDeformableModelInstance *)this_ptr_00);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lblade01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rblade02",1);
  this_ptr->sfx_handle = 0;
  this_ptr->part_indices[1] = iVar1;
  return;
}
