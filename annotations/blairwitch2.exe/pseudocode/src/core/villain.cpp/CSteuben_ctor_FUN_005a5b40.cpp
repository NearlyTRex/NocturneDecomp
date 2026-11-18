// Name: core_villain.cpp_CSteuben_ctor_FUN_005a5b40
// Address: 005a5b40
// Address Range: [[005a5b40, 005a5c01]]
// Convention: __cdecl
// Signature: CSteuben * __cdecl core_villain_cpp_CSteuben_ctor_FUN_005a5b40(CSteuben *this_ptr)

#include "nocturne.h"

CSteuben * __cdecl core_villain_cpp_CSteuben_ctor_FUN_005a5b40(CSteuben *this_ptr)

{
  SStateMachine *this_ptr_00;
  CBasicNPC *this_ptr_01;
  
  this_ptr_01 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CSteubenVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"steuben.dfm");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_01->base).anim_speed_scale = 1.5;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  (this_ptr_01->base).walk_motion = 1;
  (this_ptr_01->base).run_motion = 1;
  (this_ptr_01->base).animation_state = 0;
  (this_ptr_01->base).attack_range = 0.0;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            (&(this_ptr_01->base).base.base.cloth_list,"steubencloth.cth");
  core_villain_cpp_CSteuben_processStates_FUN_005a5c20((CSteuben *)this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Animation");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  return (CSteuben *)this_ptr_01;
}
