// Name: core_union.cpp_CUnion_processRangeAttackState_FUN_005a4e90
// Address: 005a4e90
// Address Range: [[005a4e90, 005a4fd1]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processRangeAttackState_FUN_005a4e90(CUnion *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_union_cpp_CUnion_processRangeAttackState_FUN_005a4e90(CUnion *this_ptr)

{
  SStateMachine *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  uint uVar1;
  float fVar2;
  CDemonActor *pCVar3;
  SMotion *pSVar4;
  
  pCVar3 = (*(this_ptr->base).base.base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr)
  ;
  if (pCVar3 != (CDemonActor *)0x0) {
    this_ptr_00 = &(this_ptr->base).base.state_machine;
    if (this_ptr->ammo_count == 0) {
      (this_ptr->base).base.attack_range = _DAT_005ff8f4;
      (this_ptr->base).base.run_distance = 0.0;
      core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                (this_ptr_00,"ChaseComplete","MeleeAttack");
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
      return;
    }
    this_ptr_01 = &(this_ptr->base).base.base.base.model;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_01->base);
    fVar2 = _DAT_005ff8f4;
    uVar1 = pSVar4->state_index;
    if (uVar1 < 2) {
LAB_005a4fbb:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.base.base.model.base,2,1);
      return;
    }
    if (uVar1 < 3) {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,
                 &(((this_ptr->base).base.base.victim)->base).location.position);
      if (_DAT_005f0556 < (this_ptr->base).base.base.base.model.base.current_frame_number) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_01->base,3,1);
        core_union_cpp_CUnion_fireShotgun_FUN_005a5460(this_ptr);
        this_ptr->fire_timer = 0.0;
        this_ptr->ammo_count = this_ptr->ammo_count + -1;
        return;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_005a4fbb;
      if (_DAT_005f0552 < (this_ptr->base).base.base.base.model.base.current_frame_number) {
        (this_ptr->base).base.run_distance = 0.0;
        (this_ptr->base).base.attack_range = fVar2;
        core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                  (this_ptr_00,"ChaseComplete","MeleeAttack");
        core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
        return;
      }
    }
  }
  return;
}
