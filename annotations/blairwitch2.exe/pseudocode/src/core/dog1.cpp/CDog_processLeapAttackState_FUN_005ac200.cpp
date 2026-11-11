// Name: core_dog1.cpp_CDog_processLeapAttackState_FUN_005ac200
// Address: 005ac200
// Address Range: [[005ac200, 005ac2e3]]
// Convention: __cdecl
// Signature: void __cdecl core_dog1_cpp_CDog_processLeapAttackState_FUN_005ac200(CDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dog1_cpp_CDog_processLeapAttackState_FUN_005ac200(CDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  float fVar4;
  SStateMachine *pSVar5;
  
  pCVar2 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar2 == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.base.model;
  iVar3 = core_motion_cpp_FUN_005035c0(pCVar1);
  iVar3 = *(int *)(iVar3 + 0x24);
  fVar4 = core_motion_cpp_FUN_00503e60(&pCVar1->base);
  if ((iVar3 == 3) && (fVar4 < (float)_DAT_005f0df6)) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  }
  pCVar1 = &(this_ptr->base).base.base.model;
  if (iVar3 != 7) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,3,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
  pSVar5 = &(this_ptr->base).state_machine;
  (this_ptr->base).attack_range = _DAT_00600c50;
  unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar5,"ChaseComplete","MeleeAttack");
  unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar5,"Chasing");
  return;
}
