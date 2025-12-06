// Name: core_svetlana.cpp_CSvetlana_FUN_005d88e0
// Address: 005d88e0
// Address Range: [[005d88e0, 005d8b6b]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_FUN_005d88e0(CSvetlana * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d88e0(CSvetlana *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  char *model_name;
  
  if (g_CGamePtr->nudity_flag == 0) {
    model_name = "svetlanax.dfm";
  }
  else {
    model_name = "svetlana.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr->base_hero).base_character.model,model_name);
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->base_hero);
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  DAT_03f6cb90 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 head");
  _DAT_03f6cb94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Clavicle");
  _DAT_03f6cb98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Clavicle");
  _DAT_03f6cb9c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_03f6cba0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_03f6cba4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_03f6cba8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  _DAT_03f6cbac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_03f6cbb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  _DAT_03f6cbb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Thigh");
  _DAT_03f6cbb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Thigh");
  _DAT_03f6cbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Calf");
  _DAT_03f6cbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Calf");
  _DAT_03f6cbc4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  _DAT_03f6cbc8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand");
  _DAT_03f6cbcc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  _DAT_03f6cbd0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  DAT_03f6cbd4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bipblade01");
  DAT_03f6cbd8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"BipR14");
  this_ptr->field1_0x1fbd4[0] = '\0';
  this_ptr->field1_0x1fbd4[1] = '\0';
  this_ptr->field1_0x1fbd4[2] = '\0';
  this_ptr->field1_0x1fbd4[3] = '\0';
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->field1_0x1fbd4 + 8),"svetcape.cth");
  core_cloth_cpp_FUN_00439710();
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->field1_0x1fbd4 + 0x3fe78),"svethair.cth");
  core_cloth_cpp_FUN_00439710();
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lblade01",1);
  *(int *)(this_ptr->field1_0x1fbd4 + 0x7fcfc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rblade02",1);
  this_ptr->field1_0x1fbd4[0x7fce8] = '\0';
  this_ptr->field1_0x1fbd4[0x7fce9] = '\0';
  this_ptr->field1_0x1fbd4[0x7fcea] = '\0';
  this_ptr->field1_0x1fbd4[0x7fceb] = '\0';
  *(int *)(this_ptr->field1_0x1fbd4 + 0x7fd00) = iVar1;
  return;
}
