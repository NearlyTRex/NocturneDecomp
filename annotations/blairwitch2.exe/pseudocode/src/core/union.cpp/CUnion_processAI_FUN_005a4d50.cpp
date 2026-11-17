// Name: core_union.cpp_CUnion_processAI_FUN_005a4d50
// Address: 005a4d50
// Address Range: [[005a4d50, 005a4e56]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processAI_FUN_005a4d50(CUnion *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_union_cpp_CUnion_processAI_FUN_005a4d50(CUnion *this_ptr)

{
  SStateMachine *pSVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  pSVar1 = &(this_ptr->base).base.state_machine;
  iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"Death");
  if ((iVar5 == 0) &&
     (iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"Animation"),
     iVar5 == 0)) {
    (*(this_ptr->base).base.base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
    if ((this_ptr->base).base.base.victim == (CCharacter *)0x0) {
      return;
    }
  }
  else if ((this_ptr->base).base.base.victim == (CCharacter *)0x0) {
    return;
  }
  pSVar1 = &(this_ptr->base).base.state_machine;
  iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"Chasing");
  if ((((iVar5 != 0) &&
       (iVar5 = core_muzzle_cpp_SStateMachine_isRefStateTarget_FUN_0059dae0
                          (pSVar1,"ChaseComplete","RangeAttack"), iVar5 != 0)) &&
      (pCVar2 = (this_ptr->base).base.base.victim,
      fVar4 = (pCVar2->base).location.position.x -
              (this_ptr->base).base.base.base.base.location.position.x,
      fVar3 = (pCVar2->base).location.position.z -
              *(float *)((int)&(this_ptr->base).base.base.base.base.location.position + 8),
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3), fVar3 < 15.0f)) &&
     (7.0f < fVar3)) {
    (this_ptr->base).base.attack_range = fVar3;
    return;
  }
  return;
}
