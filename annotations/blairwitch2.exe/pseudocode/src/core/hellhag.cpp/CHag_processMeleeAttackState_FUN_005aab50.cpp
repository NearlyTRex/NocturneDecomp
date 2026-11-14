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
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  float fVar5;
  SStateMachine *pSVar6;
  int desired_state_index;
  
  pCVar3 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar3 == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = (this_ptr->base).base.victim;
  fVar5 = (this_ptr->base).base.base.base.location.position.x - (pCVar1->base).location.position.x;
  fVar2 = (this_ptr->base).base.base.base.location.position.z - (pCVar1->base).location.position.z;
  fVar5 = SQRT(fVar2 * fVar2 + fVar5 * fVar5);
  if (_DAT_00600a6c < fVar5) {
    pSVar6 = &(this_ptr->base).state_machine;
    (this_ptr->base).attack_range = _DAT_00600a6c;
    core_muzzle_cpp_FUN_0059dcb0(pSVar6,0x3f000000);
    core_muzzle_cpp_FUN_0059d8e0(pSVar6,"Chasing");
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(pCVar1->base).location.position);
  if (_DAT_00600a70 < fVar5) {
    if (_DAT_00600a6c < fVar5) {
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
  iVar4 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar4 = *(int *)(iVar4 + 0x24);
  if (iVar4 != 0) {
    if ((iVar4 == 5) || (iVar4 == 4)) goto LAB_005aabe3;
    desired_state_index = 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&this_ptr_00->base,desired_state_index,1);
LAB_005aabe3:
  if ((iVar4 == 4) &&
     (fVar5 = core_motion_cpp_FUN_00503e60(&(this_ptr->base).base.base.model.base),
     (float)_DAT_005f0bde < fVar5)) {
    (this_ptr->base).attack_range = _DAT_00600a70;
    core_muzzle_cpp_FUN_0059d8e0(&(this_ptr->base).state_machine,"Chasing");
    return;
  }
  return;
}
