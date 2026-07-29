// Name: core_succubus.cpp_FUN_00540c20
// Address: 00540c20
// Address Range: [[00540c20, 00540f45]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00540c20(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_succubus_cpp_FUN_00540c20(CEnemy *param_1)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *pCVar1;
  CEnemy *this_ptr;
  CClothList *this_ptr_00;
  CMorph *this_ptr_01;
  CEnemy *pCVar2;
  CSkeleton *this_ptr_02;
  char *model_name;
  
  pCVar1 = &(param_1->base).model;
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(param_1 + 1),model_name);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  pCVar1 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(pCVar1);
  this_ptr = param_1 + 1;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = (CClothList *)(param_1[1].base.model.part_data.visibility_flags + 9);
  core_cloth_cpp_CClothList_load_FUN_00438270(this_ptr_00);
  euler = &(param_1->base).base.orient;
  position = &(param_1->base).base.location;
  core_cloth_cpp_CClothList_setup_FUN_00438510
            (this_ptr_00,&position->position,&euler->vec,(CDeformableModelInstance *)this_ptr);
  core_cloth_cpp_CClothList_process_FUN_00438550
            (&(param_1->base).cloth_list,&position->position,&euler->vec,0.05,
             (param_1->base).closest_distance_threshold,(CDeformableModelInstance *)this_ptr);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
  _DAT_02dc9fec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Head",1);
  _DAT_02dc9ff8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 L ForeArm",1);
  _DAT_02dc9ffc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 R ForeArm",1);
  _DAT_02dca000 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_02dca004 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_02dca008 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 L Foot",1);
  _DAT_02dca00c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 R Foot",1);
  _DAT_02dc9ff0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 L Hand",1);
  _DAT_02dc9ff4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 R Hand",1);
  _DAT_02dca010 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Spine",1);
  _DAT_02dca014 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Spine1",1);
  _DAT_02dca018 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Spine2",1);
  _DAT_02dc9fec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Head",1);
  _DAT_02dca000 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_02dca004 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_02dca010 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Spine",1);
  _DAT_02dca018 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_02,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(pCVar1);
  (param_1->base).model.bone_transform.pose_data.root_position.z =
       (param_1->base).model.bone_transform.pose_data.root_position.z + 0.4f;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_01 = (CMorph *)(param_1[1].base.descriptive_name + 0x40);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_01,0,pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            (this_ptr_01,1,(CDeformableModelInstance *)this_ptr);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_01,1,*(CKeyFramedModel **)(param_1[1].base.descriptive_name + 8),0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_01,1,*(CKeyFramedModel **)(param_1[1].base.descriptive_name + 8),0);
  _DAT_01cd4314 = 0;
  param_1[1].base.fires[0x10].size = 0.0;
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_01);
  pCVar2 = param_1 + 1;
  (pCVar2->base).descriptive_name[0x38] = '\0';
  (pCVar2->base).descriptive_name[0x39] = '\0';
  (pCVar2->base).descriptive_name[0x3a] = '\0';
  (pCVar2->base).descriptive_name[0x3b] = '\0';
  pCVar2 = param_1 + 1;
  (pCVar2->base).descriptive_name[0x3c] = '\0';
  (pCVar2->base).descriptive_name[0x3d] = '\0';
  (pCVar2->base).descriptive_name[0x3e] = '\0';
  (pCVar2->base).descriptive_name[0x3f] = '\0';
  pCVar2 = param_1 + 1;
  (pCVar2->base).descriptive_name[0x30] = '\0';
  (pCVar2->base).descriptive_name[0x31] = '\0';
  (pCVar2->base).descriptive_name[0x32] = '\0';
  (pCVar2->base).descriptive_name[0x33] = '\0';
  param_1 = param_1 + 1;
  (param_1->base).descriptive_name[0x34] = '\0';
  (param_1->base).descriptive_name[0x35] = '\0';
  (param_1->base).descriptive_name[0x36] = -0x60;
  (param_1->base).descriptive_name[0x37] = '@';
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar1);
  return;
}
