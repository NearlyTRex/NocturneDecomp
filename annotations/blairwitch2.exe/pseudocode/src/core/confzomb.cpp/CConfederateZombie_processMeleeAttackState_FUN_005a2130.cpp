// Name: core_confzomb.cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130
// Address: 005a2130
// Address Range: [[005a2130, 005a223a]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130(CConfederateZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_confzomb_cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130(CConfederateZombie *this_ptr,float delta_time)

{
  SStateMachine *pSVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,3,1);
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  pCVar2 = (this_ptr->base).base.victim;
  fVar4 = (this_ptr->base).base.base.base.location.position.x - (pCVar2->base).location.position.x;
  fVar3 = (this_ptr->base).base.base.base.location.position.z - (pCVar2->base).location.position.z;
  fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  pSVar1 = &(this_ptr->base).state_machine;
  if (_DAT_005fef90 < fVar3) {
    (this_ptr->base).attack_range = _DAT_005fef90;
    unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete","BRangeAttack" + 1);
    unkaddr_0059d350_cpp_FUN_0059dcb0(pSVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar1,"Chasing");
  }
  else if (_DAT_005fef94 + _DAT_005efe93 < fVar3) {
    (this_ptr->base).attack_range = _DAT_005fef94;
    unkaddr_0059d350_cpp_FUN_0059dcb0(pSVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar1,"Chasing");
    return;
  }
  return;
}
