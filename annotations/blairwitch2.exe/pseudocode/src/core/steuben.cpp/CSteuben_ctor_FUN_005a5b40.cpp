// Name: core_steuben.cpp_CSteuben_ctor_FUN_005a5b40
// Address: 005a5b40
// Address Range: [[005a5b40, 005a5c01]]
// Convention: unknown
// Signature: CSteuben * core_steuben_cpp_CSteuben_ctor_FUN_005a5b40(CSteuben *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSteuben * core_steuben_cpp_CSteuben_ctor_FUN_005a5b40(CSteuben *this_ptr)

{
  CBasicNPC *this_ptr_00;
  
  this_ptr_00 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CSteubenVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,(char *)0x5f05eb);
  (this_ptr_00->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_00->base).anim_speed_scale = 1.5;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  (this_ptr_00->base).walk_motion = 1;
  (this_ptr_00->base).run_motion = 1;
  (this_ptr_00->base).animation_state = 0;
  (this_ptr_00->base).attack_range = 0.0;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            (&(this_ptr_00->base).base.base.cloth_list,"steubencloth.cth");
  core_steuben_cpp_CSteuben_processStates_FUN_005a5c20((CSteuben *)this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d990();
  unkaddr_0059d350_cpp_FUN_0059dc80();
  return (CSteuben *)this_ptr_00;
}
