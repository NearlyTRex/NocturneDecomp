// Name: core_helldog.cpp_CDog_processLeapAttackState_FUN_005ac200
// Address: 005ac200
// Address Range: [[005ac200, 005ac2e3]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_processLeapAttackState_FUN_005ac200(CDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_helldog_cpp_CDog_processLeapAttackState_FUN_005ac200(CDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  SMotion *pSVar4;
  float fVar5;
  SStateMachine *pSVar6;
  
  pCVar3 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar3 == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  iVar2 = pSVar4->state_index;
  fVar5 = core_motion_cpp_FUN_00503e60(&pCVar1->base);
  if ((iVar2 == 3) && (fVar5 < (float)_DAT_005f0df6)) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  }
  pCVar1 = &(this_ptr->base).base.base.model;
  if (iVar2 != 7) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,3,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
  pSVar6 = &(this_ptr->base).state_machine;
  (this_ptr->base).attack_range = _DAT_00600c50;
  core_muzzle_cpp_FUN_0059d7f0(pSVar6,"ChaseComplete","MeleeAttack");
  core_muzzle_cpp_FUN_0059d8e0(pSVar6,"Chasing");
  return;
}
