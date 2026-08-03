// Name: core_succubus.cpp_CSuccubus_setup_FUN_00540c20
// Address: 00540c20
// Address Range: [[00540c20, 00540f45]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_00540c20(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_00540c20(CSuccubus *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  CSkeleton *this_ptr_02;
  char *model_name;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (g_CGame_PTR_005b9354->nudity_flag == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(&this_ptr->hotdemon_model,model_name)
  ;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(pCVar1);
  this_ptr_00 = &this_ptr->hotdemon_model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_00438270(&this_ptr->hotdemon_cloth_list);
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CClothList_setup_FUN_00438510
            (&this_ptr->hotdemon_cloth_list,&position->position,&euler->vec,this_ptr_00);
  core_cloth_cpp_CClothList_process_FUN_00438550
            (&(this_ptr->base).base.cloth_list,&position->position,&euler->vec,0.05,
             (this_ptr->base).base.closest_distance_threshold,this_ptr_00);
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
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(pCVar1);
  (this_ptr->base).base.model.bone_transform.pose_data.root_position.z =
       (this_ptr->base).base.model.bone_transform.pose_data.root_position.z + 0.4f;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_01,0,pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_01,1,this_ptr_00);
  _DAT_01cd4314 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_01,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0);
  _DAT_01cd4314 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
            (this_ptr_01,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0);
  _DAT_01cd4314 = 0;
  (this_ptr->morph).rescale_enabled = 0;
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_01);
  this_ptr->morph_started = 0;
  this_ptr->morph_timer = 0.0;
  this_ptr->sfx_handle = 0;
  this_ptr->ambient_sfx_cooldown = 5.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar1);
  return;
}
