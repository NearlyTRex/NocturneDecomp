// Name: core_unionzom.cpp_CUnionZombie_processMeleeAttackState_FUN_005a4220
// Address: 005a4220
// Address Range: [[005a4220, 005a432a]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processMeleeAttackState_FUN_005a4220(CUnionZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_unionzom_cpp_CUnionZombie_processMeleeAttackState_FUN_005a4220(CUnionZombie *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,3,1);
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  pCVar1 = (this_ptr->base).base.victim;
  fVar3 = (this_ptr->base).base.base.base.location.position.x - (pCVar1->base).location.position.x;
  fVar2 = (this_ptr->base).base.base.base.location.position.z - (pCVar1->base).location.position.z;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  this_ptr_00 = &(this_ptr->base).state_machine;
  if (_DAT_005ff540 < fVar2) {
    (this_ptr->base).attack_range = _DAT_005ff540;
    core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
              (this_ptr_00,"ChaseComplete"," BVanishAttack" + 2);
    core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(this_ptr_00,0.1);
    core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
  }
  else if (_DAT_005ff544 + _DAT_005f030e < fVar2) {
    (this_ptr->base).attack_range = _DAT_005ff544;
    core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(this_ptr_00,0.1);
    core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
    return;
  }
  return;
}
