// Name: core_schngeis.cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280
// Address: 005a3280
// Address Range: [[005a3280, 005a33a7]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280(CSchnellGeist *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_schngeis_cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280(CSchnellGeist *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  SStateMachine *pSVar7;
  
  pCVar4 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 != (CDemonActor *)0x0) {
    pCVar1 = (this_ptr->base).base.victim;
    fVar2 = (this_ptr->base).base.base.base.location.position.x - (pCVar1->base).location.position.x
    ;
    fVar3 = (this_ptr->base).base.base.base.location.position.z - (pCVar1->base).location.position.z
    ;
    this_ptr_00 = &(this_ptr->base).base.base.model;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    iVar6 = pSVar5->state_index;
    if (_DAT_005ff350 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
      pSVar7 = &(this_ptr->base).state_machine;
      (this_ptr->base).attack_range = _DAT_005ff350;
      core_muzzle_cpp_FUN_0059dcb0(pSVar7,0x3f000000);
      core_muzzle_cpp_FUN_0059d8e0(pSVar7,"Chasing");
      if (iVar6 == 10) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
        return;
      }
    }
    else {
      if (iVar6 == 10) {
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
        this_ptr->attack_variant = iVar6;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
      if (this_ptr->attack_variant == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,3,1);
        return;
      }
      if (this_ptr->attack_variant == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
        return;
      }
    }
  }
  return;
}
