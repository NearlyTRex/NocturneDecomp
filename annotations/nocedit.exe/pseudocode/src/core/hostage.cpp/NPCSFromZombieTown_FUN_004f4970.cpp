// Name: core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970
// Address: 004f4970
// Address Range: [[004f4970, 004f4b38]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970()

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_NPCSFromZombieTown(uint param_1) */

void core_hostage_cpp_NPCSFromZombieTown_FUN_004f4970(void)

{
  char *str1;
  CDeformableModelInstance *this_ptr;
  int iVar1;
  CSkeleton *this_ptr_00;
  CMotionList *this_ptr_01;
  float fVar2;
  CNPC *in_stack_00000004;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(in_stack_00000004->base).model)
  ;
  str1 = (in_stack_00000004->base).model.model_name;
  in_stack_00000004[1].base.model.transformed_vertices[0x2a].z = 8.40779e-45;
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickboy.dfm");
  if (iVar1 == 0) {
    in_stack_00000004[1].base.model.transformed_vertices[0x2a].z = 0.0;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,"depute.dfm");
  if (iVar1 == 0) {
    in_stack_00000004[1].base.model.transformed_vertices[0x2a].z = 1.4013e-45;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickho.dfm");
  if (iVar1 == 0) {
    in_stack_00000004[1].base.model.transformed_vertices[0x2a].z = 2.8026e-45;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickgirl.dfm");
  if (iVar1 == 0) {
    in_stack_00000004[1].base.model.transformed_vertices[0x2a].z = 5.60519e-45;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,"hickdad.dfm");
  if (iVar1 == 0) {
    in_stack_00000004[1].base.model.transformed_vertices[0x2a].z = 7.00649e-45;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,"preacher.dfm");
  if (iVar1 == 0) {
    in_stack_00000004[1].base.model.transformed_vertices[0x2a].z = 4.2039e-45;
  }
  this_ptr = &(in_stack_00000004->base).model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&this_ptr->motion_controller);
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  in_stack_00000004[1].base.model.transformed_vertices[0x2c].z = fVar2;
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  in_stack_00000004[1].base.model.transformed_vertices[0x2c].y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  in_stack_00000004[1].base.model.transformed_vertices[0x2d].x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  in_stack_00000004[1].base.model.transformed_vertices[0x2d].y = fVar2;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Hand");
  fVar2 = in_stack_00000004[1].base.model.transformed_vertices[0x2a].z;
  *(int *)(in_stack_00000004->base).carry_hands[1].unk1 = iVar1;
  if (fVar2 != 1.4013e-45) {
    iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
    *(int *)(in_stack_00000004->base).carry_hands[0].unk1 = iVar1;
  }
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  fVar2 = in_stack_00000004[1].base.model.transformed_vertices[0x2a].z;
  *(int *)((in_stack_00000004->base).unk2 + 0x24) = iVar1;
  if (fVar2 == 1.4013e-45) {
    DAT_02db8888 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_01);
  }
  core_npc_cpp_CNPC_FUN_00544870(in_stack_00000004);
  in_stack_00000004[1].base.model.transformed_vertices[0x2a].x = 0.0;
  return;
}
