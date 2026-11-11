// Name: core_robin.cpp_CRobin_processMeleeAttackState_FUN_005a6140
// Address: 005a6140
// Address Range: [[005a6140, 005a61ed]]
// Convention: __cdecl
// Signature: void __cdecl core_robin_cpp_CRobin_processMeleeAttackState_FUN_005a6140(CRobin *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_robin_cpp_CRobin_processMeleeAttackState_FUN_005a6140(CRobin *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CDeformableModelInstance *this_ptr_00;
  SStateMachine *pSVar6;
  
  pCVar4 = (*(this_ptr->base).base.base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr)
  ;
  if (pCVar4 != (CDemonActor *)0x0) {
    pCVar1 = (this_ptr->base).base.base.victim;
    fVar2 = (pCVar1->base).location.position.x -
            (this_ptr->base).base.base.base.base.location.position.x;
    fVar3 = (pCVar1->base).location.position.z -
            *(float *)((int)&(this_ptr->base).base.base.base.base.location.position + 8);
    if (_DAT_005ffc9c < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
      pSVar6 = &(this_ptr->base).base.state_machine;
      unkaddr_0059d350_cpp_FUN_0059dcb0(pSVar6,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar6,"Chasing");
      return;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(pCVar1->base).location.position);
    this_ptr_00 = &(this_ptr->base).base.base.base.model;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,5,1);
    iVar5 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar5 + 0x24) == 5) {
      core_motion_cpp_FUN_00503e60(&this_ptr_00->base);
      return;
    }
  }
  return;
}
