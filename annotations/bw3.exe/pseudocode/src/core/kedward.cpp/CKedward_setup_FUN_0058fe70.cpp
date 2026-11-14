// Name: core_kedward.cpp_CKedward_setup_FUN_0058fe70
// Address: 0058fe70
// Address Range: [[0058fe70, 0058ff63]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_setup_FUN_0058fe70(CKedward *this_ptr)

#include "nocturne.h"

void __cdecl core_kedward_cpp_CKedward_setup_FUN_0058fe70(CKedward *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  SMotion *pSVar2;
  char *model_name;
  
  if ((this_ptr->base).base.been_damaged == 0) {
    (this_ptr->base).attack_damage = 20.0;
    (this_ptr->base).pain_threshold = 20.0;
    (this_ptr->base).base.hit_points = 150.0;
  }
  if (this_ptr->cini_flag == 0) {
    model_name = "bwp3_keddem.dfm";
  }
  else {
    model_name = "bwp3_keddem_invis.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(this_ptr->base).base.model,model_name);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  (this_ptr->base).attack_damage = 0.0;
  this_ptr->bone_hand = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  if ((pSVar2->state_index == 8) || (this_ptr->cini_flag != 0)) {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
  }
  else {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_ALWAYS;
  }
  this_ptr->unknown_0xd05c = 0;
  (this_ptr->base).speed = 1.5;
  this_ptr->unknown_0xd058 = 0;
  return;
}
