// Name: core_zombprie.cpp_CZombiePriest_startFiringAttack_FUN_0058f4a0
// Address: 0058f4a0
// Address Range: [[0058f4a0, 0058f50f]]
// Convention: __cdecl
// Signature: void __cdecl core_zombprie_cpp_CZombiePriest_startFiringAttack_FUN_0058f4a0(CZombiePriest *this_ptr)

#include "nocturne.h"

void __cdecl core_zombprie_cpp_CZombiePriest_startFiringAttack_FUN_0058f4a0(CZombiePriest *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  float fVar2;
  
  if (0.0 < this_ptr->firing_cooldown) {
    return;
  }
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,1.0);
  pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr->firing_cooldown = fVar2;
  if (pCVar1 != (CDemonActor *)0x0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,2,1);
  return;
}
