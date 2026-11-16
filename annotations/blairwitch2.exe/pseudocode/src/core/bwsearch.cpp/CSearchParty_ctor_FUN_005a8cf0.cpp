// Name: core_bwsearch.cpp_CSearchParty_ctor_FUN_005a8cf0
// Address: 005a8cf0
// Address Range: [[005a8cf0, 005a8d9d]]
// Convention: __cdecl
// Signature: CSearchParty * __cdecl core_bwsearch_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

#include "nocturne.h"

CSearchParty * __cdecl core_bwsearch_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

{
  SStateMachine *this_ptr_00;
  CBasicNPC *this_ptr_01;
  
  this_ptr_01 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CSearchPartyVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,(char *)0x5f0844);
  (this_ptr_01->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_01->base).anim_speed_scale = 1.5;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  (this_ptr_01->base).walk_motion = 1;
  (this_ptr_01->base).run_motion = 1;
  (this_ptr_01->base).animation_state = 0;
  (this_ptr_01->base).attack_range = 0.0;
  core_bwsearch_cpp_CSearchParty_processStates_FUN_005a8db0((CSearchParty *)this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Animation");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  return (CSearchParty *)this_ptr_01;
}
