// Name: core_hand.cpp_CHand_processSleepingState_FUN_005a9ff0
// Address: 005a9ff0
// Address Range: [[005a9ff0, 005aa190]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processSleepingState_FUN_005a9ff0(CHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hand_cpp_CHand_processSleepingState_FUN_005a9ff0(CHand *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  EDeathState EVar6;
  
  pCVar1 = &(this_ptr->base).base.base.model;
  iVar5 = core_motion_cpp_FUN_005035c0(pCVar1);
  iVar5 = *(int *)(iVar5 + 0x24);
  if (this_ptr->sleep_timer <= 0.0) {
    (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).updateVictim)
              ((CEnemy *)this_ptr,delta_time);
    if ((this_ptr->base).base.victim == (CCharacter *)0x0) {
      if (iVar5 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,2,1);
        fVar3 = this_ptr->giveup_timer - delta_time;
        this_ptr->giveup_timer = fVar3;
        if (fVar3 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
          return;
        }
      }
    }
    else {
      pCVar2 = (this_ptr->base).base.victim;
      this_ptr->giveup_timer = 5.0;
      EVar6 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
      if ((EVar6 != DEATH_STATE_ALIVE) && ((this_ptr->base).base.script_victim != (CCharacter *)0x0)
         ) {
        (this_ptr->base).base.script_victim = (CCharacter *)0x0;
        (this_ptr->base).base.victim = (CCharacter *)0x0;
        return;
      }
      pCVar1 = &(this_ptr->base).base.base.model;
      iVar5 = core_motion_cpp_FUN_005035c0(pCVar1);
      if (*(int *)(iVar5 + 0x24) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,2,1);
        return;
      }
      if (*(int *)(iVar5 + 0x24) != 2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.base.model.base,2,1);
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
      pCVar2 = (this_ptr->base).base.victim;
      fVar3 = (this_ptr->base).base.base.base.location.position.x -
              (pCVar2->base).location.position.x;
      fVar4 = (this_ptr->base).base.base.base.location.position.z -
              (pCVar2->base).location.position.z;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < _DAT_0060088c) {
        unkaddr_0059d350_cpp_FUN_0059d8e0
                  (&(this_ptr->base).state_machine,"?MeleeAttack" + 1);
        return;
      }
    }
  }
  else {
    fVar3 = this_ptr->sleep_timer - delta_time;
    this_ptr->sleep_timer = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->sleep_timer = 0.0;
    }
  }
  return;
}
