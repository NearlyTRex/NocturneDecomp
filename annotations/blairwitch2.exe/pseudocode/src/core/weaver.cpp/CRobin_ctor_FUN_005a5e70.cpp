// Name: core_weaver.cpp_CRobin_ctor_FUN_005a5e70
// Address: 005a5e70
// Address Range: [[005a5e70, 005a5f4e]]
// Convention: __cdecl
// Signature: CRobin * __cdecl core_weaver_cpp_CRobin_ctor_FUN_005a5e70(CRobin *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CRobin * __cdecl core_weaver_cpp_CRobin_ctor_FUN_005a5e70(CRobin *this_ptr)

{
  SStateMachine *this_ptr_00;
  CRobin *this_ptr_01;
  
  this_ptr_01 = (CRobin *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.base.vtable._ub = &g_CRobinVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.base.model,"Robin.dfm");
  (this_ptr_01->base).base.base.base.collision_cylinder_radius = 0.5;
  (this_ptr_01->base).base.anim_speed_scale = 1.2;
  (this_ptr_01->base).base.base.base.base.is_transparent = 1;
  (this_ptr_01->base).base.fade_val = 1.0;
  *(uint *)&(this_ptr_01->base).base.base.base.base.field_0x2a8 = 0x3dcccccd;
  (this_ptr_01->base).base.walk_state_3_motion = 0;
  (this_ptr_01->base).base.idle_motion = 0;
  (this_ptr_01->base).base.walk_motion = 1;
  (this_ptr_01->base).base.run_motion = 2;
  (this_ptr_01->base).base.animation_state = 0;
  core_weaver_cpp_CRobin_processStates_FUN_005a60d0(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).base.state_machine;
  core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
            (this_ptr_00,"ChaseComplete","MeleeAttack");
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Animation");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  (this_ptr_01->base).base.base.base.base.footstep_effects_enabled = 0;
  return this_ptr_01;
}
