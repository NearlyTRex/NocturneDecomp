// Name: core_confedrt.cpp_CConfederate_processMeleeAttackState_FUN_005a1180
// Address: 005a1180
// Address Range: [[005a1180, 005a12c3]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processMeleeAttackState_FUN_005a1180(CConfederate *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_confedrt_cpp_CConfederate_processMeleeAttackState_FUN_005a1180(CConfederate *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  CDemonActor *pCVar4;
  SMotion *pSVar5;
  float fVar6;
  int iVar7;
  SStateMachine *this_ptr_00;
  int unaff_EDI;
  
  pCVar4 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 != (CDemonActor *)0x0) {
    pCVar2 = (this_ptr->base).base.victim;
    fVar6 = (pCVar2->base).location.position.x - (this_ptr->base).base.base.base.location.position.x
    ;
    fVar3 = (pCVar2->base).location.position.z - (this_ptr->base).base.base.base.location.position.z
    ;
    if (7.0f < SQRT(fVar3 * fVar3 + fVar6 * fVar6)) {
      this_ptr_00 = &(this_ptr->base).state_machine;
      core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(this_ptr_00,1.0);
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
    }
    else {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(pCVar2->base).location.position);
      if (this_ptr->melee_variant == 0) {
        unaff_EDI = 5;
      }
      else if (this_ptr->melee_variant == 1) {
        unaff_EDI = 9;
      }
      pCVar1 = &(this_ptr->base).base.base.model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,unaff_EDI,1);
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
      if (pSVar5->state_index == 5) {
        fVar6 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar1->base);
        if ((float)0.90000000000000002 < fVar6) {
          iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          this_ptr->melee_variant = iVar7;
        }
      }
      pCVar1 = &(this_ptr->base).base.base.model;
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
      if (pSVar5->state_index == 9) {
        fVar6 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar1->base);
        if ((float)0.90000000000000002 < fVar6) {
          iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          this_ptr->melee_variant = iVar7;
          return;
        }
      }
    }
  }
  return;
}
