// Name: core_confedrt.cpp_CConfederate_processRangeAttackState_FUN_005a1030
// Address: 005a1030
// Address Range: [[005a1030, 005a117c]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processRangeAttackState_FUN_005a1030(CConfederate *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_confedrt_cpp_CConfederate_processRangeAttackState_FUN_005a1030(CConfederate *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  uint uVar1;
  float fVar2;
  CDemonActor *pCVar3;
  SMotion *pSVar4;
  
  pCVar3 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar3 != (CDemonActor *)0x0) {
    this_ptr_00 = &(this_ptr->base).state_machine;
    if (this_ptr->ammo_count == 0) {
      (this_ptr->base).attack_range = 7.0f;
      (this_ptr->base).run_distance = 0.0;
      core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                (this_ptr_00,"ChaseComplete","MeleeAttack");
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
      return;
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.base.model.base);
    fVar2 = 7.0f;
    uVar1 = pSVar4->state_index;
    if (uVar1 < 3) {
      if (uVar1 != 2) {
LAB_005a1166:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.base.model.base,2,1);
        return;
      }
    }
    else {
      if (uVar1 < 4) {
        if ((this_ptr->base).base.base.model.base.current_frame_number <= 24.0f) {
          return;
        }
        (this_ptr->base).run_distance = 5.0;
        (this_ptr->base).attack_range = fVar2;
        core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                  (this_ptr_00,"ChaseComplete","MeleeAttack");
        core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
        return;
      }
      if (uVar1 != 0xd) goto LAB_005a1166;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
    if (35.0f < (this_ptr->base).base.base.model.base.current_frame_number) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.base.model.base,3,1);
      core_confedrt_cpp_CConfederate_fireShotgun_FUN_005a14e0(this_ptr);
      this_ptr->fire_timer = 0.0;
      this_ptr->ammo_count = this_ptr->ammo_count + -1;
      return;
    }
  }
  return;
}
