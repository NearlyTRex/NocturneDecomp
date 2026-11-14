// Name: core_hellhag.cpp_CHag_processMeleeAttackState_FUN_005aab50
// Address: 005aab50
// Address Range: [[005aab50, 005aac97]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processMeleeAttackState_FUN_005aab50(CHag *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hellhag_cpp_CHag_processMeleeAttackState_FUN_005aab50(CHag *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar1;
  int iVar2;
  float fVar3;
  CDemonActor *pCVar4;
  SMotion *pSVar5;
  float fVar6;
  SStateMachine *pSVar7;
  int desired_state_index;
  
  pCVar4 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = (this_ptr->base).base.victim;
  fVar6 = (this_ptr->base).base.base.base.location.position.x - (pCVar1->base).location.position.x;
  fVar3 = (this_ptr->base).base.base.base.location.position.z - (pCVar1->base).location.position.z;
  fVar6 = SQRT(fVar3 * fVar3 + fVar6 * fVar6);
  if (_DAT_00600a6c < fVar6) {
    pSVar7 = &(this_ptr->base).state_machine;
    (this_ptr->base).attack_range = _DAT_00600a6c;
    core_muzzle_cpp_FUN_0059dcb0(pSVar7,0x3f000000);
    core_muzzle_cpp_FUN_0059d8e0(pSVar7,"Chasing");
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(pCVar1->base).location.position);
  if (_DAT_00600a70 < fVar6) {
    if (_DAT_00600a6c < fVar6) {
      desired_state_index = 0;
    }
    else {
      desired_state_index = 4;
    }
  }
  else {
    desired_state_index = 5;
  }
  this_ptr_00 = &(this_ptr->base).base.base.model;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
  iVar2 = pSVar5->state_index;
  if (iVar2 != 0) {
    if ((iVar2 == 5) || (iVar2 == 4)) goto LAB_005aabe3;
    desired_state_index = 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&this_ptr_00->base,desired_state_index,1);
LAB_005aabe3:
  if ((iVar2 == 4) &&
     (fVar6 = core_motion_cpp_FUN_00503e60(&(this_ptr->base).base.base.model.base),
     (float)_DAT_005f0bde < fVar6)) {
    (this_ptr->base).attack_range = _DAT_00600a70;
    core_muzzle_cpp_FUN_0059d8e0(&(this_ptr->base).state_machine,"Chasing");
    return;
  }
  return;
}
