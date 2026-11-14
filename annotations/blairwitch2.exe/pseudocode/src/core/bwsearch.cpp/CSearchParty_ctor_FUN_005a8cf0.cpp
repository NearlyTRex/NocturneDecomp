// Name: core_bwsearch.cpp_CSearchParty_ctor_FUN_005a8cf0
// Address: 005a8cf0
// Address Range: [[005a8cf0, 005a8d9d]]
// Convention: __cdecl
// Signature: CSearchParty * __cdecl core_bwsearch_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

#include "nocturne.h"

CSearchParty * __cdecl core_bwsearch_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

{
  CBasicNPC *this_ptr_00;
  
  this_ptr_00 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CSearchPartyVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,(char *)0x5f0844);
  (this_ptr_00->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_00->base).anim_speed_scale = 1.5;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  (this_ptr_00->base).walk_motion = 1;
  (this_ptr_00->base).run_motion = 1;
  (this_ptr_00->base).animation_state = 0;
  (this_ptr_00->base).attack_range = 0.0;
  core_bwsearch_cpp_CSearchParty_processStates_FUN_005a8db0((CSearchParty *)this_ptr_00,0.0,0);
  core_muzzle_cpp_FUN_0059d990();
  core_muzzle_cpp_FUN_0059dc80();
  return (CSearchParty *)this_ptr_00;
}
