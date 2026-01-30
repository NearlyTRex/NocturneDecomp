// Name: core_smiley.cpp_FUN_005a24d0
// Address: 005a24d0
// Address Range: [[005a24d0, 005a27cf]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_FUN_005a24d0(void)

#include "nocturne.h"

void __cdecl core_smiley_cpp_FUN_005a24d0(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  INT_03f48fa0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_03f48fac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_03f48fb0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_03f48fb4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_03f48fb8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_03f48fbc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_03f48fc0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_03f48fa4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_03f48fa8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_03f48fc4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_03f48fc8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1");
  INT_03f48fcc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_03f48fa0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_03f48fb4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_03f48fb8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_03f48fc4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_03f48fcc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4arm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rthigh01",1);
  in_stack_00000004[1].base.base.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rshin01",1);
  in_stack_00000004[1].base.base.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lthigh01",1);
  in_stack_00000004[1].base.base.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshin01",1);
  in_stack_00000004[1].base.base.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"ass01",1);
  in_stack_00000004[1].base.base.orient.pitch = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"torso01",1);
  in_stack_00000004[1].base.base.orient.bank = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"head01",1);
  in_stack_00000004[1].base.base.orient_matrix.m[0].x = 0.0;
  in_stack_00000004[1].base.base.orient.heading = fVar2;
  in_stack_00000004[1].base.base.orient_matrix.m[0].y = 0.0;
  in_stack_00000004[1].base.base.orient_matrix.m[1].x = 1.4013e-45;
  iVar1 = stricmp
                    ((in_stack_00000004->base).model.model_name,"smiley2.dfm");
  if (iVar1 == 0) {
    in_stack_00000004[1].base.base.orient_matrix.m[1].x = 2.8026e-45;
  }
  iVar1 = stricmp
                    ((in_stack_00000004->base).model.model_name,"smiley3.dfm");
  if (iVar1 != 0) {
    return;
  }
  in_stack_00000004[1].base.base.orient_matrix.m[1].x = 4.2039e-45;
  (in_stack_00000004->base).unk3[4] = '\0';
  (in_stack_00000004->base).unk3[5] = '\0';
  (in_stack_00000004->base).unk3[6] = '\0';
  (in_stack_00000004->base).unk3[7] = '\0';
  return;
}
