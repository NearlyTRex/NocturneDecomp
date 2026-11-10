// Name: core_succubus.cpp_CSuccubus_setup_FUN_0056f3a0
// Address: 0056f3a0
// Address Range: [[0056f3a0, 0056f6c5]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_0056f3a0(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_0056f3a0(CSuccubus *this_ptr)

{
  UOrientationVector *euler;
  byte *position;
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CMorph *this_ptr_01;
  CSkeleton *this_ptr_02;
  char *model_name;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(pCVar1,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(pCVar1,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(&this_ptr->hotdemon_model,model_name)
  ;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(pCVar1);
  this_ptr_00 = &this_ptr->hotdemon_model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_005b14a0(&this_ptr->hotdemon_cloth_list);
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.field_0x20;
  core_cloth_cpp_CClothList_setup_FUN_005b1740
            (&this_ptr->hotdemon_cloth_list,(CVector3f *)position,&euler->vec,this_ptr_00);
  core_cloth_cpp_CClothList_process_FUN_005b1780
            (&(this_ptr->base).base.cloth_list,(CVector3f *)position,&euler->vec,0.05,
             (this_ptr->base).base.closest_distance_threshold,this_ptr_00);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar1);
  _DAT_0264becc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Head",1);
  _DAT_0264bed8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L ForeArm",1);
  _DAT_0264bedc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R ForeArm",1);
  _DAT_0264bee0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_0264bee4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_0264bee8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L Foot",1);
  _DAT_0264beec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R Foot",1);
  _DAT_0264bed0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L Hand",1);
  _DAT_0264bed4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R Hand",1);
  _DAT_0264bef0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine",1);
  _DAT_0264bef4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine1",1);
  _DAT_0264bef8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine2",1);
  _DAT_0264becc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Head",1);
  _DAT_0264bee0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_0264bee4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_0264bef0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine",1);
  _DAT_0264bef8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(pCVar1);
  *(float *)&(this_ptr->base).base.model.field_0x6ac =
       *(float *)&(this_ptr->base).base.model.field_0x6ac + _DAT_005ec0de;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_01,0,pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_01,1,this_ptr_00);
  _DAT_0268014c = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_01,1,(CKeyFramedModel *)(this_ptr->hotdemon_cloth_list).cloths[0],0);
  _DAT_0268014c = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
            (this_ptr_01,1,(CKeyFramedModel *)(this_ptr->hotdemon_cloth_list).cloths[0],0);
  _DAT_0268014c = 0;
  (this_ptr->morph).rescale_enabled = 0;
  core_morph_cpp_CMorph_getReady_FUN_005b71d0(this_ptr_01);
  this_ptr->morph_started = 0;
  this_ptr->morph_timer = 0.0;
  this_ptr->sfx_handle = 0;
  this_ptr->ambient_sfx_cooldown = 5.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(pCVar1);
  return;
}
