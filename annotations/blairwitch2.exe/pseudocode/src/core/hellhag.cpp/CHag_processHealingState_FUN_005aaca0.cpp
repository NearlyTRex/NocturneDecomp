// Name: core_hellhag.cpp_CHag_processHealingState_FUN_005aaca0
// Address: 005aaca0
// Address Range: [[005aaca0, 005aad69]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processHealingState_FUN_005aaca0(CHag *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hellhag_cpp_CHag_processHealingState_FUN_005aaca0(CHag *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  
  pCVar4 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 != (CDemonActor *)0x0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.base.model.base,0,1);
    pCVar1 = (this_ptr->base).base.victim;
    (this_ptr->base).base.base.hit_points =
         delta_time * (float)25 + (this_ptr->base).base.base.hit_points;
    if ((pCVar1 != (CCharacter *)0x0) &&
       (fVar2 = (this_ptr->base).base.base.base.location.position.x -
                (pCVar1->base).location.position.x,
       fVar3 = (this_ptr->base).base.base.base.location.position.z -
               (pCVar1->base).location.position.z,
       SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 6.0f)) {
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0
                (&(this_ptr->base).state_machine,"MeleeAttack");
      return;
    }
    if ((float)100 <= (this_ptr->base).base.base.hit_points) {
      (this_ptr->base).attack_range = 6.0f;
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0
                (&(this_ptr->base).state_machine,"Chasing");
      return;
    }
  }
  return;
}
