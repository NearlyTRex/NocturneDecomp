// Name: core_bwgrndma.cpp_CGrandma_ctor_FUN_005a7b10
// Address: 005a7b10
// Address Range: [[005a7b10, 005a7bd1]]
// Convention: unknown
// Signature: CGrandma * core_bwgrndma_cpp_CGrandma_ctor_FUN_005a7b10(CGrandma *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGrandma * core_bwgrndma_cpp_CGrandma_ctor_FUN_005a7b10(CGrandma *this_ptr)

{
  CGrandma *this_ptr_00;
  
  this_ptr_00 = (CGrandma *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.base.vtable._ub = &g_CGrandmaVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.base.model,"Grandma.dfm");
  (this_ptr_00->base).base.base.base.collision_cylinder_radius = 1.0;
  (this_ptr_00->base).base.anim_speed_scale = 1.5;
  (this_ptr_00->base).base.walk_state_3_motion = 0;
  (this_ptr_00->base).base.idle_motion = 0;
  (this_ptr_00->base).base.walk_motion = 1;
  (this_ptr_00->base).base.run_motion = 1;
  (this_ptr_00->base).base.animation_state = 0;
  (this_ptr_00->base).base.attack_range = 0.0;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            (&(this_ptr_00->base).base.base.base.cloth_list,"Grandmadress.cth");
  core_bwgrndma_cpp_CGrandma_processStates_FUN_005a7c20(this_ptr_00,0.0,0);
  core_muzzle_cpp_FUN_0059d990();
  core_muzzle_cpp_FUN_0059dc80();
  return this_ptr_00;
}
