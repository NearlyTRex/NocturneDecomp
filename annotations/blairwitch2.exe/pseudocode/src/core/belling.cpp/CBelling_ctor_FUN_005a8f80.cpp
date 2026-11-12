// Name: core_belling.cpp_CBelling_ctor_FUN_005a8f80
// Address: 005a8f80
// Address Range: [[005a8f80, 005a9041]]
// Convention: unknown
// Signature: CBelling * core_belling_cpp_CBelling_ctor_FUN_005a8f80(CBelling *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBelling * core_belling_cpp_CBelling_ctor_FUN_005a8f80(CBelling *this_ptr)

{
  CBasicNPC *this_ptr_00;
  
  this_ptr_00 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CBellingVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,"Belling.dfm");
  (this_ptr_00->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_00->base).anim_speed_scale = 1.5;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  (this_ptr_00->base).walk_motion = 0;
  (this_ptr_00->base).run_motion = 0;
  (this_ptr_00->base).animation_state = 0;
  (this_ptr_00->base).attack_range = 0.0;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            (&(this_ptr_00->base).base.base.cloth_list,"Bellingcloth.cth");
  core_belling_cpp_CBelling_processStates_FUN_005a9060((CBelling *)this_ptr_00,0.0,0);
  core_muzzle_cpp_FUN_0059d990();
  core_muzzle_cpp_FUN_0059dc80();
  return (CBelling *)this_ptr_00;
}
