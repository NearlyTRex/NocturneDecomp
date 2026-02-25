// Name: core_stranger.cpp_CStranger_ctor_FUN_005bb120
// Address: 005bb120
// Address Range: [[005bb120, 005bb4ad]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005bb120(CStranger *this_ptr)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005bb120(CStranger *this_ptr)

{
  CStranger *this_ptr_00;
  float fVar1;
  float fVar2;
  CStranger *pCVar5;
  CStranger_ptr_130264 pCVar6;
  
  pCVar5 = (CStranger *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar5->model);
  this_ptr_00 = ADJ(pCVar6);
  ADJ(pCVar6)->base.base.base.vtable._ub = &g_CStrangerVTable;
  ADJ(pCVar6)->guns_drawn = 0;
  ADJ(pCVar6)->guns_drawn_blend = 0.0;
  ADJ(pCVar6)->frame_cleared = 0.0;
  ADJ(pCVar6)->aim_pitch = -0.5235988;
  (ADJ(pCVar6)->right_arm_aim).aim_target = (CDemonActor *)0x0;
  (ADJ(pCVar6)->right_arm_aim).recoil_timer = 0.0;
  (ADJ(pCVar6)->right_arm_aim).target_pitch = 0.0;
  (ADJ(pCVar6)->right_arm_aim).aim_pitch = 0.0;
  (ADJ(pCVar6)->right_arm_aim).kickback_factor = 0.0;
  (ADJ(pCVar6)->right_arm_aim).aim_lock_state = 0;
  (ADJ(pCVar6)->left_arm_aim).aim_target = (CDemonActor *)0x0;
  (ADJ(pCVar6)->left_arm_aim).recoil_timer = 0.0;
  (ADJ(pCVar6)->left_arm_aim).target_pitch = 0.0;
  (ADJ(pCVar6)->left_arm_aim).aim_pitch = 0.0;
  (ADJ(pCVar6)->left_arm_aim).kickback_factor = 0.0;
  (ADJ(pCVar6)->left_arm_aim).aim_lock_state = 0;
  ADJ(pCVar6)->arm_recoil_blend = 0.0;
  ADJ(pCVar6)->ladder_to_descend = (CDemonActor *)0x0;
  ADJ(pCVar6)->dual_wield_side = 0;
  ADJ(pCVar6)->melee_attack_index = 0;
  ADJ(pCVar6)->action_timer = 0.0;
  fVar1 = 10.0f;
  ADJ(pCVar6)->interact_blend = 0.0;
  ADJ(pCVar6)->aim_speed_factor = fVar1;
  (ADJ(pCVar6)->carry_object_bbox).max.x = -1e+30;
  (ADJ(pCVar6)->carry_object_world_center).x = -1e+30;
  fVar1 = (ADJ(pCVar6)->left_arm_aim).target_pitch;
  fVar2 = (ADJ(pCVar6)->left_arm_aim).aim_pitch;
  (ADJ(pCVar6)->right_arm_aim).target_yaw = (ADJ(pCVar6)->right_arm_aim).target_pitch;
  (ADJ(pCVar6)->right_arm_aim).aim_yaw = (ADJ(pCVar6)->right_arm_aim).aim_pitch;
  (ADJ(pCVar6)->left_arm_aim).target_yaw = fVar1;
  (ADJ(pCVar6)->left_arm_aim).aim_yaw = fVar2;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar6)->base.base.model,"stranger.dfm");
  ADJ(pCVar6)->base.base.layer_action_index = 0;
  ADJ(pCVar6)->weapon = (CDemonActor *)0x0;
  ADJ(pCVar6)->turn_angle = 0.0;
  ADJ(pCVar6)->turn_blend_weight = 0.0;
  (ADJ(pCVar6)->pending_velocity).z = 0.0;
  (ADJ(pCVar6)->pending_velocity).y = (ADJ(pCVar6)->pending_velocity).z;
  (ADJ(pCVar6)->pending_velocity).x = (ADJ(pCVar6)->pending_velocity).y;
  ADJ(pCVar6)->turn_motion_index = -1;
  ADJ(pCVar6)->can_grab_weapon = 0;
  ADJ(pCVar6)->turn_blend_timer = 0.0;
  ADJ(pCVar6)->turn_elapsed = 0.0;
  ADJ(pCVar6)->action_pending = 0;
  ADJ(pCVar6)->pickup_facing_reversed = 0;
  ADJ(pCVar6)->airborne_timer = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(ADJ(pCVar6)->base.inventory.selected_weapon)->model,"gat.kfm");
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0xb,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0xc,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0xc,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  core_cloth_cpp_CClothList_add_FUN_0043c0f0
            (&ADJ(pCVar6)->base.base.cloth_list,"strcoat.cth");
  ADJ(pCVar6)->fall_velocity_snapshot = 0.0;
  return this_ptr_00;
}
