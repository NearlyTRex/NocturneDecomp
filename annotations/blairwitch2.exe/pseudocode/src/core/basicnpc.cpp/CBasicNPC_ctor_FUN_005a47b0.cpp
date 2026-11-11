// Name: core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
// Address: 005a47b0
// Address Range: [[005a47b0, 005a4869]]
// Convention: unknown
// Signature: CBasicNPC * core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBasicNPC * core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

{
  float fVar1;
  CBasicNPC *this_ptr_00;
  
  this_ptr_00 = (CBasicNPC *)unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(&this_ptr->base);
  (this_ptr_00->base).base.base.base.vtable._ub = &g_CBasicNPCVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_00->base).base.base.model,(char *)0x5f03f4);
  (this_ptr_00->base).base.base.collision_cylinder_radius = 1.0;
  (this_ptr_00->base).anim_speed_scale = 1.0;
  (this_ptr_00->base).walk_state_3_motion = 0;
  (this_ptr_00->base).idle_motion = 0;
  (this_ptr_00->base).walk_motion = 1;
  (this_ptr_00->base).run_motion = 1;
  fVar1 = _DAT_005ff71c;
  (this_ptr_00->base).attack_range = 0.0;
  (this_ptr_00->base).is_grabbable = 2;
  (this_ptr_00->base).alert_distance = fVar1;
  core_basicnpc_cpp_CBasicNPC_processStates_FUN_005a4880(this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d990();
  unkaddr_0059d350_cpp_FUN_0059dc80();
  return this_ptr_00;
}
