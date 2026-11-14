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
  SMotion *pSVar4;
  float fVar5;
  int iVar6;
  
  pCVar3 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar3 == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  pCVar1 = (this_ptr->base).base.victim;
  if ((pCVar1 != (CCharacter *)0x0) &&
     (fVar5 = (this_ptr->base).base.base.base.location.position.x -
              (pCVar1->base).location.position.x,
     fVar2 = (this_ptr->base).base.base.base.location.position.z -
             (pCVar1->base).location.position.z, _DAT_0060088c < SQRT(fVar2 * fVar2 + fVar5 * fVar5)
     )) {
    core_muzzle_cpp_FUN_0059d8e0(&(this_ptr->base).state_machine,"Sleeping");
    return;
  }
  if (this_ptr->attack_variant == 0) {
    iVar6 = 3;
  }
  else {
    if (this_ptr->attack_variant != 1) goto LAB_005a9f63;
    iVar6 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,iVar6,1);
LAB_005a9f63:
  this_ptr_00 = &(this_ptr->base).base.base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
  iVar6 = pSVar4->state_index;
  fVar5 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&this_ptr_00->base);
  if ((iVar6 != 3) && (iVar6 != 4)) {
    return;
  }
  if (fVar5 <= (float)_DAT_005f0a53) {
    return;
  }
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
  this_ptr->attack_variant = iVar6;
  return;
}
