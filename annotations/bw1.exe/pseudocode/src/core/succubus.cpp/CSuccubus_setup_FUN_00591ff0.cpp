// Name: core_succubus.cpp_CSuccubus_setup_FUN_00591ff0
// Address: 00591ff0
// Address Range: [[00591ff0, 00592315]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_00591ff0(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_00591ff0(CSuccubus *this_ptr)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  byte *this_ptr_01;
  CSkeleton *this_ptr_02;
  char *model_name;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(pCVar1,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(pCVar1,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(&this_ptr->hotdemon_model,model_name)
  ;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(pCVar1);
  this_ptr_00 = &this_ptr->hotdemon_model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_00441cc0(&this_ptr->hotdemon_cloth_list);
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CClothList_setup_FUN_00441f60
            (&this_ptr->hotdemon_cloth_list,&position->position,&euler->vec,this_ptr_00);
  core_cloth_cpp_CClothList_process_FUN_00441fa0
            (&(this_ptr->base).base.cloth_list,&position->position,&euler->vec,0.05,
             (this_ptr->base).base.closest_distance_threshold,this_ptr_00);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar1);
  _DAT_02c8369c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Head",1);
  _DAT_02c836a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L ForeArm",1);
  _DAT_02c836ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R ForeArm",1);
  _DAT_02c836b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_02c836b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_02c836b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L Foot",1);
  _DAT_02c836bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R Foot",1);
  _DAT_02c836a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L Hand",1);
  _DAT_02c836a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R Hand",1);
  _DAT_02c836c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine",1);
  _DAT_02c836c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine1",1);
  _DAT_02c836c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine2",1);
  _DAT_02c8369c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Head",1);
  _DAT_02c836b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_02c836b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_02c836c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine",1);
  _DAT_02c836c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_02,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(pCVar1);
  *(float *)&(this_ptr->base).base.model.field_0x6ac =
       *(float *)&(this_ptr->base).base.model.field_0x6ac + _DAT_005f7352;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr_00);
  this_ptr_01 = &this_ptr->field_0xe7d8;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0((CMorph *)this_ptr_01,0,pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0((CMorph *)this_ptr_01,1,this_ptr_00);
  _DAT_01d39d30 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_01,1,(CKeyFramedModel *)(this_ptr->hotdemon_cloth_list).cloths[0],0)
  ;
  _DAT_01d39d30 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
            ((CMorph *)this_ptr_01,1,(CKeyFramedModel *)(this_ptr->hotdemon_cloth_list).cloths[0],0)
  ;
  _DAT_01d39d30 = 0;
  *(uint *)&this_ptr->field_0xf400 = 0;
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_01);
  this_ptr->morph_started = 0;
  this_ptr->morph_timer = 0.0;
  this_ptr->sfx_handle = 0;
  this_ptr->ambient_sfx_cooldown = 5.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(pCVar1);
  return;
}
