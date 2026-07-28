// Name: core_hostage.cpp_CHostage_setup_FUN_004b6b20
// Address: 004b6b20
// Address Range: [[004b6b20, 004b6ce8]]
// Convention: unknown
// Signature: void core_hostage_cpp_CHostage_setup_FUN_004b6b20(CNPC *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hostage_cpp_CHostage_setup_FUN_004b6b20(CNPC *param_1)

{
  char *str1;
  CDeformableModelInstance *this_ptr;
  int iVar1;
  CSkeleton *this_ptr_00;
  CMotionList *this_ptr_01;
  float fVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(&(param_1->base).model);
  str1 = (param_1->base).model.model_name;
  param_1[1].base.model.transformed_vertices[0x2b].y = 8.40779e-45;
  iVar1 = _stricmp(str1,"hickboy.dfm");
  if (iVar1 == 0) {
    param_1[1].base.model.transformed_vertices[0x2b].y = 0.0;
  }
  iVar1 = _stricmp(str1,"depute.dfm");
  if (iVar1 == 0) {
    param_1[1].base.model.transformed_vertices[0x2b].y = 1.4013e-45;
  }
  iVar1 = _stricmp(str1,"hickho.dfm");
  if (iVar1 == 0) {
    param_1[1].base.model.transformed_vertices[0x2b].y = 2.8026e-45;
  }
  iVar1 = _stricmp(str1,"hickgirl.dfm");
  if (iVar1 == 0) {
    param_1[1].base.model.transformed_vertices[0x2b].y = 5.60519e-45;
  }
  iVar1 = _stricmp(str1,"hickdad.dfm");
  if (iVar1 == 0) {
    param_1[1].base.model.transformed_vertices[0x2b].y = 7.00649e-45;
  }
  iVar1 = _stricmp(str1,"preacher.dfm");
  if (iVar1 == 0) {
    param_1[1].base.model.transformed_vertices[0x2b].y = 4.2039e-45;
  }
  this_ptr = &(param_1->base).model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                          (&this_ptr->motion_controller);
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  param_1[1].base.model.transformed_vertices[0x2d].y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 Head",1);
  param_1[1].base.model.transformed_vertices[0x2d].x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 L Foot",1);
  param_1[1].base.model.transformed_vertices[0x2d].z = fVar2;
  fVar2 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_00,"Bip01 R Foot",1);
  param_1[1].base.model.transformed_vertices[0x2e].x = fVar2;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  fVar2 = param_1[1].base.model.transformed_vertices[0x2b].y;
  (param_1->base).carry_hands[1].bone_index = iVar1;
  if (fVar2 != 1.4013e-45) {
    iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1)
    ;
    (param_1->base).carry_hands[0].bone_index = iVar1;
  }
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine1",1);
  fVar2 = param_1[1].base.model.transformed_vertices[0x2b].y;
  (param_1->base).gesture_branch_root = iVar1;
  if (fVar2 == 1.4013e-45) {
    _DAT_01cae1a0 =
         core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr_01,"gunup",1);
  }
  core_npc_cpp_CNPC_setup_FUN_004ee9e0(param_1);
  param_1[1].base.model.transformed_vertices[0x2a].z = 0.0;
  return;
}
