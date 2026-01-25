// Name: core_ghoul.cpp_FUN_004e6160
// Address: 004e6160
// Address Range: [[004e6160, 004e63c1]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e6160()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e6160(uint param_1) */

void core_ghoul_cpp_FUN_004e6160(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  DAT_02d832fc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  DAT_02d83308 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  DAT_02d8330c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  DAT_02d83310 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_02d83314 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  _DAT_02d83318 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_02d8331c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  DAT_02d83300 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_02d83304 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_02d83320 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_02d83324 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r high arm01",1);
  in_stack_00000004[1].base_character.base_actor.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"r lo arm01",1);
  in_stack_00000004[1].base_character.base_actor.orient.pitch = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"l high arm01",1);
  in_stack_00000004[1].base_character.base_actor.orient.bank = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"l lo arm01",1);
  in_stack_00000004[1].base_character.base_actor.orient.heading = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"r thigh01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"r shin01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"l thigh01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].z = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"l shin01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lo torso01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"high torso01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"head01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x = fVar2;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  in_stack_00000004[1].base_character.base_actor.health = 0;
  in_stack_00000004[1].base_character.base_actor.validation_magic = 0;
  in_stack_00000004[1].base_character.base_actor.field7_0x6c = 0;
  in_stack_00000004[1].base_character.base_actor.was_created = 0;
  in_stack_00000004[1].base_character.base_actor.create_prob = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].z = 0.0;
  in_stack_00000004[1].base_character.base_actor.runtime_state = 0;
  return;
}
