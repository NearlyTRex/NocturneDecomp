// Name: core_searpart.cpp_CSearchParty_ctor_FUN_005a8cf0
// Address: 005a8cf0
// Address Range: [[005a8cf0, 005a8d9d]]
// Convention: unknown
// Signature: CSearchParty * core_searpart_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSearchParty * core_searpart_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

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
  core_searpart_cpp_CSearchParty_processStates_FUN_005a8db0((CSearchParty *)this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d990();
  unkaddr_0059d350_cpp_FUN_0059dc80();
  return (CSearchParty *)this_ptr_00;
}
