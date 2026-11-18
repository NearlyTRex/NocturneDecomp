// Name: core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230
// Address: 005a9230
// Address Range: [[005a9230, 005a9367]]
// Convention: __cdecl
// Signature: CGhostChild * __cdecl core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230(CGhostChild *this_ptr)

#include "nocturne.h"

CGhostChild * __cdecl core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230(CGhostChild *this_ptr)

{
  SStateMachine *this_ptr_00;
  CGhostChild *this_ptr_01;
  
  this_ptr_01 = (CGhostChild *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CGhostChildVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"SHChild1.dfm");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 0.5;
  (this_ptr_01->base).anim_speed_scale = 2.5;
  (this_ptr_01->base).base.base.base.is_transparent = 1;
  (this_ptr_01->base).fade_val = 1.0;
  *(uint *)&(this_ptr_01->base).base.base.base.field_0x2a8 = 0x3dcccccd;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  (this_ptr_01->base).walk_motion = 1;
  (this_ptr_01->base).run_motion = 2;
  (this_ptr_01->base).animation_state = 0;
  this_ptr_01->hit_count = 0;
  this_ptr_01->sleep_time = 5.0;
  this_ptr_01->sleep_timer = 0.0;
  this_ptr_01->sleep_phase = 0;
  core_ghostchi_cpp_CGhostChild_processStates_FUN_005a94c0(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_SStateMachine_addRefState_FUN_0059d6f0
            (this_ptr_00,"SleepComplete","Alert");
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","MeleeAttack");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Animation");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  (this_ptr_01->base).base.base.eye_glow_enabled = 1;
  (this_ptr_01->base).base.base.blood_type = BLOOD_TYPE_ICHOR;
  (this_ptr_01->base).can_burn = 1;
  (this_ptr_01->base).base.base.base.footstep_effects_enabled = 0;
  return this_ptr_01;
}
