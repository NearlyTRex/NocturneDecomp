// Name: core_hand.cpp_CHand_ctor_FUN_005a9c00
// Address: 005a9c00
// Address Range: [[005a9c00, 005a9d2e]]
// Convention: unknown
// Signature: CHand * core_hand_cpp_CHand_ctor_FUN_005a9c00(CHand *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHand * core_hand_cpp_CHand_ctor_FUN_005a9c00(CHand *this_ptr)

{
  CHand *this_ptr_00;
  
  this_ptr_00 = (CHand *)unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CHandVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,(char *)0x5f09e9);
  (this_ptr_00->base).base.base.collision_cylinder_radius = 0.5;
  (this_ptr_00->base).anim_speed_scale = 1.7;
  (this_ptr_00->base).base.base.base.is_transparent = 1;
  (this_ptr_00->base).fade_val = 1.0;
  *(uint *)&(this_ptr_00->base).base.base.base.field_0x2a8 = 0x3dcccccd;
  (this_ptr_00->base).walk_state_3_motion = 2;
  (this_ptr_00->base).idle_motion = 2;
  (this_ptr_00->base).walk_motion = 2;
  (this_ptr_00->base).run_motion = 2;
  (this_ptr_00->base).animation_state = 2;
  this_ptr_00->unused_11858 = 0;
  this_ptr_00->attack_variant = 0;
  this_ptr_00->sleep_time = 5.0;
  this_ptr_00->sleep_timer = 0.0;
  this_ptr_00->unused_11854 = 0;
  core_hand_cpp_CHand_processStates_FUN_005a9e10(this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d6f0(&(this_ptr_00->base).state_machine);
  unkaddr_0059d350_cpp_FUN_0059d990();
  unkaddr_0059d350_cpp_FUN_0059dc80();
  (this_ptr_00->base).head_bone = -1;
  (this_ptr_00->base).flinch_bone = -1;
  (this_ptr_00->base).base.base.gravity_enabled = 0;
  this_ptr_00->giveup_timer = 5.0;
  return this_ptr_00;
}
