// Name: core_svetlana.cpp_CSvetlana_setup_FUN_005d88e0
// Address: 005d88e0
// Address Range: [[005d88e0, 005d8b6b]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_setup_FUN_005d88e0(CSvetlana *this_ptr)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_setup_FUN_005d88e0(CSvetlana *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
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
            (&(this_ptr->base).base.model,model_name);
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_03f6cb90 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 head",1);
  INT_03f6cb94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Clavicle",1);
  INT_03f6cb98 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Clavicle",1);
  INT_03f6cb9c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  INT_03f6cba0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  INT_03f6cba4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm",1);
  INT_03f6cba8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm",1);
  INT_03f6cbac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot",1);
  INT_03f6cbb0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot",1);
  INT_03f6cbb4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Thigh",1);
  INT_03f6cbb8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Thigh",1);
  INT_03f6cbbc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Calf",1);
  INT_03f6cbc0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Calf",1);
  INT_03f6cbc4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand",1);
  INT_03f6cbc8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand",1);
  INT_03f6cbcc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2",1);
  INT_03f6cbd0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine",1);
  INT_03f6cbd4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bipblade01",1);
  INT_03f6cbd8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"BipR14",1);
  this_ptr->blades_drawn = 0;
  core_cloth_cpp_CCloth_load_FUN_00438cf0(&this_ptr->cape_cloth,"svetcape.cth");
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (&this_ptr->cape_cloth,&position->position,&euler->vec,this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_00438cf0(&this_ptr->hair_cloth,"svethair.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (&this_ptr->hair_cloth,&position->position,&euler->vec,this_ptr_00);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lblade01",1);
  this_ptr->part_l_blade = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rblade02",1);
  this_ptr->sfx_handle = 0;
  this_ptr->part_r_blade = iVar1;
  return;
}
