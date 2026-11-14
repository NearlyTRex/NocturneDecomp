// Name: core_hand.cpp_CHand_processMeleeAttackState_FUN_005a9ed0
// Address: 005a9ed0
// Address Range: [[005a9ed0, 005a9fe5]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processMeleeAttackState_FUN_005a9ed0(CHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hand_cpp_CHand_processMeleeAttackState_FUN_005a9ed0(CHand *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  float fVar4;
  int iVar5;
  
  pCVar3 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar3 == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  pCVar1 = (this_ptr->base).base.victim;
  if ((pCVar1 != (CCharacter *)0x0) &&
     (fVar4 = (this_ptr->base).base.base.base.location.position.x -
              (pCVar1->base).location.position.x,
     fVar2 = (this_ptr->base).base.base.base.location.position.z -
             (pCVar1->base).location.position.z, _DAT_0060088c < SQRT(fVar2 * fVar2 + fVar4 * fVar4)
     )) {
    core_muzzle_cpp_FUN_0059d8e0(&(this_ptr->base).state_machine,"Sleeping");
    return;
  }
  if (this_ptr->attack_variant == 0) {
    iVar5 = 3;
  }
  else {
    if (this_ptr->attack_variant != 1) goto LAB_005a9f63;
    iVar5 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,iVar5,1);
LAB_005a9f63:
  this_ptr_00 = &(this_ptr->base).base.base.model;
  iVar5 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar5 = *(int *)(iVar5 + 0x24);
  fVar4 = core_motion_cpp_FUN_00503e60(&this_ptr_00->base);
  if ((iVar5 != 3) && (iVar5 != 4)) {
    return;
  }
  if (fVar4 <= (float)_DAT_005f0a53) {
    return;
  }
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
  this_ptr->attack_variant = iVar5;
  return;
}
