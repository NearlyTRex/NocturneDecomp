// Name: core_hand.cpp_CHand_processSleepingState_FUN_005a9ff0
// Address: 005a9ff0
// Address Range: [[005a9ff0, 005aa190]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processSleepingState_FUN_005a9ff0(CHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hand_cpp_CHand_processSleepingState_FUN_005a9ff0(CHand *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CCharacter *pCVar3;
  float fVar4;
  float fVar5;
  SMotion *pSVar6;
  EDeathState EVar7;
  
  pCVar1 = &(this_ptr->base).base.base.model;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  iVar2 = pSVar6->state_index;
  if (this_ptr->sleep_timer <= 0.0) {
    (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).updateVictim)
              ((CEnemy *)this_ptr,delta_time);
    if ((this_ptr->base).base.victim == (CCharacter *)0x0) {
      if (iVar2 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,2,1);
        fVar4 = this_ptr->giveup_timer - delta_time;
        this_ptr->giveup_timer = fVar4;
        if (fVar4 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
          return;
        }
      }
    }
    else {
      pCVar3 = (this_ptr->base).base.victim;
      this_ptr->giveup_timer = 5.0;
      EVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
      if ((EVar7 != DEATH_STATE_ALIVE) && ((this_ptr->base).base.script_victim != (CCharacter *)0x0)
         ) {
        (this_ptr->base).base.script_victim = (CCharacter *)0x0;
        (this_ptr->base).base.victim = (CCharacter *)0x0;
        return;
      }
      pCVar1 = &(this_ptr->base).base.base.model;
      pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
      if (pSVar6->state_index == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,2,1);
        return;
      }
      if (pSVar6->state_index != 2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.base.model.base,2,1);
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
      pCVar3 = (this_ptr->base).base.victim;
      fVar4 = (this_ptr->base).base.base.base.location.position.x -
              (pCVar3->base).location.position.x;
      fVar5 = (this_ptr->base).base.base.base.location.position.z -
              (pCVar3->base).location.position.z;
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 5.0f) {
        core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0
                  (&(this_ptr->base).state_machine,"MeleeAttack");
        return;
      }
    }
  }
  else {
    fVar4 = this_ptr->sleep_timer - delta_time;
    this_ptr->sleep_timer = fVar4;
    if (fVar4 < 0.0) {
      this_ptr->sleep_timer = 0.0;
    }
  }
  return;
}
