// Name: core_doc.cpp_CDoc_ctor_FUN_00468c80
// Address: 00468c80
// Address Range: [[00468c80, 00469052]]
// Convention: __cdecl
// Signature: CDoc * __cdecl core_doc_cpp_CDoc_ctor_FUN_00468c80(CDoc *this_ptr)

#include "nocturne.h"

CDoc * __cdecl core_doc_cpp_CDoc_ctor_FUN_00468c80(CDoc *this_ptr)

{
  float fVar1;
  float fVar2;
  CDoc *this_ptr_00;
  uint uStack000001a8;
  
  this_ptr_00 = (CDoc *)core_hero_cpp_CHero_ctor_FUN_004ea830(&this_ptr->base);
  (this_ptr_00->base).base.base.vtable._ub = &g_CDocVTable._ub;
  this_ptr_00->guns_drawn = 0;
  this_ptr_00->guns_drawn_blend = 0.0;
  this_ptr_00->frame_cleared = 0.0;
  this_ptr_00->aim_pitch = -0.5235988;
  (this_ptr_00->right_arm_aim).aim_target = (CDemonActor *)0x0;
  (this_ptr_00->right_arm_aim).recoil_timer = 0.0;
  (this_ptr_00->right_arm_aim).target_pitch = 0.0;
  (this_ptr_00->right_arm_aim).target_yaw = (this_ptr_00->right_arm_aim).target_pitch;
  (this_ptr_00->right_arm_aim).aim_pitch = 0.0;
  fVar1 = (this_ptr_00->right_arm_aim).aim_pitch;
  (this_ptr_00->right_arm_aim).kickback_factor = 0.0;
  (this_ptr_00->right_arm_aim).aim_lock_state = 0;
  (this_ptr_00->left_arm_aim).aim_target = (CDemonActor *)0x0;
  (this_ptr_00->left_arm_aim).recoil_timer = 0.0;
  (this_ptr_00->left_arm_aim).target_pitch = 0.0;
  (this_ptr_00->right_arm_aim).aim_yaw = fVar1;
  (this_ptr_00->left_arm_aim).aim_pitch = 0.0;
  (this_ptr_00->left_arm_aim).target_yaw = (this_ptr_00->left_arm_aim).target_pitch;
  fVar1 = (this_ptr_00->left_arm_aim).aim_pitch;
  (this_ptr_00->left_arm_aim).kickback_factor = 0.0;
  (this_ptr_00->left_arm_aim).aim_lock_state = 0;
  this_ptr_00->arm_recoil_blend = 0.0;
  this_ptr_00->ladder_to_descend = (CLadder *)0x0;
  this_ptr_00->dual_wield_side = 0;
  this_ptr_00->melee_attack_index = 0;
  this_ptr_00->interact_blend = 0.0;
  fVar2 = 0x41200000;
  (this_ptr_00->carry_object_bbox).max.x = -1e+30;
  (this_ptr_00->left_arm_aim).aim_yaw = fVar1;
  this_ptr_00->aim_speed_factor = fVar2;
  (this_ptr_00->carry_object_world_center).x = -1e+30;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(this_ptr_00->base).base.model,(char *)0x5d98a4);
  (this_ptr_00->base).base.layer_action_index = 0;
  this_ptr_00->weapon = (CWeapon *)0x0;
  this_ptr_00->turn_angle = 0.0;
  this_ptr_00->turn_blend_weight = 0.0;
  (this_ptr_00->pending_velocity).z = 0.0;
  (this_ptr_00->pending_velocity).y = (this_ptr_00->pending_velocity).z;
  (this_ptr_00->pending_velocity).x = (this_ptr_00->pending_velocity).y;
  this_ptr_00->turn_motion_index = -1;
  this_ptr_00->can_grab_weapon = 0;
  this_ptr_00->turn_blend_timer = 0.0;
  this_ptr_00->turn_elapsed = 0.0;
  (this_ptr_00->base).action_pending = 0;
  this_ptr_00->pickup_facing_reversed = 0;
  this_ptr_00->airborne_timer = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&((this_ptr_00->base).inventory.selected_weapon)->model,"liteluger.kfm");
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xc,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xd,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xd,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,0xe,"draw_coatPocket2aimRifle",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xf,0xe,"draw_cockRifle",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,1,0x10,"draw_holsters2aimFlashlight",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,0xb,"draw_coatPocket2Goggles",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xb,0,"draw_goggles2Stand",0);
  uStack000001a8 = 0x469041;
  core_cloth_cpp_CClothList_add_FUN_00441de0
            (&(this_ptr_00->base).base.cloth_list,"doc-coat_bw.cth");
  this_ptr_00->fall_velocity_snapshot = 0.0;
  return this_ptr_00;
}
