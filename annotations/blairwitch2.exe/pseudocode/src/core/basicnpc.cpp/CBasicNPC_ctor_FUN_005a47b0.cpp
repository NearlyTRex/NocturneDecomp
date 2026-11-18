// Name: core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
// Address: 005a47b0
// Address Range: [[005a47b0, 005a4869]]
// Convention: __cdecl
// Signature: CBasicNPC * __cdecl core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

#include "nocturne.h"

CBasicNPC * __cdecl core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

{
  SStateMachine *this_ptr_00;
  float fVar1;
  CBasicNPC *this_ptr_01;
  
  this_ptr_01 = (CBasicNPC *)core_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_01->base).base.base.base.vtable._ub = &g_CBasicNPCVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.base.model,"steuben.dfm");
  (this_ptr_01->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_01->base).anim_speed_scale = 1.0;
  (this_ptr_01->base).walk_state_3_motion = 0;
  (this_ptr_01->base).idle_motion = 0;
  (this_ptr_01->base).walk_motion = 1;
  (this_ptr_01->base).run_motion = 1;
  fVar1 = 5.0f;
  (this_ptr_01->base).attack_range = 0.0;
  (this_ptr_01->base).is_grabbable = 2;
  (this_ptr_01->base).alert_distance = fVar1;
  core_basicnpc_cpp_CBasicNPC_processStates_FUN_005a4880(this_ptr_01,0.0,0);
  this_ptr_00 = &(this_ptr_01->base).state_machine;
  core_muzzle_cpp_SStateMachine_setInitialState_FUN_0059d990(this_ptr_00,"Animation");
  core_muzzle_cpp_SStateMachine_reset_FUN_0059dc80(this_ptr_00);
  return this_ptr_01;
}
