// Name: core_succubus.cpp_CSuccubus_setup_FUN_005c6b60
// Address: 005c6b60
// Address Range: [[005c6b60, 005c6e85]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_005c6b60(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_005c6b60(CSuccubus *this_ptr)

{
  UOrientationVector *euler_00;
  CLocation *position_00;
  CDeformableModelInstance *this_ptr_03;
  CSkeleton *this_ptr_02;
  char *model_name;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *pCVar1;
  CMorph *this_ptr_01;
  CLocation *position;
  UOrientationVector *euler;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (g_CGamePtr->nudity_flag == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubusx.dfm");
    model_name = "hotdemonx.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"succubus.dfm");
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(&this_ptr->hotdemon_model,model_name)
  ;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_03 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_03);
  this_ptr_00 = &this_ptr->hotdemon_model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_0043bfa0(&this_ptr->hotdemon_cloth_list);
  euler_00 = &(this_ptr->base).base.base.orient;
  position_00 = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CClothList_setup_FUN_0043c290
            (&this_ptr->hotdemon_cloth_list,&position_00->position,&euler_00->vec,this_ptr_00);
  core_cloth_cpp_CClothList_process_FUN_0043c2d0
            (&(this_ptr->base).base.cloth_list,&position_00->position,&euler_00->vec,0.05,
             (this_ptr->base).base.closest_distance_threshold,this_ptr_00);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_03);
  INT_03f6bb68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 Head",1);
  INT_03f6bb74 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 L ForeArm",1);
  INT_03f6bb78 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 R ForeArm",1);
  INT_03f6bb7c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 L UpperArm",1);
  INT_03f6bb80 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 R UpperArm",1);
  INT_03f6bb84 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 L Foot",1);
  INT_03f6bb88 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 R Foot",1);
  INT_03f6bb6c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 L Hand",1);
  INT_03f6bb70 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 R Hand",1);
  INT_03f6bb8c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 Spine",1);
  INT_03f6bb90 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 Spine1",1);
  INT_03f6bb94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 Spine2",1);
  INT_03f6bb68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 Head",1);
  INT_03f6bb7c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 L UpperArm",1);
  INT_03f6bb80 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 R UpperArm",1);
  INT_03f6bb8c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 Spine",1);
  INT_03f6bb94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_02,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_03);
  (this_ptr->base).base.model.bone_transform.root_position.z =
       (this_ptr->base).base.model.bone_transform.root_position.z + 0.4f;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_03);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  this_ptr_01 = &this_ptr->morph;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_01,0,this_ptr_03);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_01,1,this_ptr_00);
  INT_02f43974 = 0;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580
            (this_ptr_01,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0);
  INT_02f43974 = 1;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580
            (this_ptr_01,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0);
  INT_02f43974 = 0;
  (this_ptr->morph).rescale_enabled = 0;
  core_morph_cpp_CMorph_getReady_FUN_0052b680(this_ptr_01);
  this_ptr->morph_started = 0;
  this_ptr->morph_timer = 0.0;
  this_ptr->sfx_handle = 0;
  this_ptr->ambient_sfx_cooldown = 5.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr_03);
  return;
}
