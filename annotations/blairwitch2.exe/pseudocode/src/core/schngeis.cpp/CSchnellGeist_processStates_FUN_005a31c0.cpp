// Name: core_schngeis.cpp_CSchnellGeist_processStates_FUN_005a31c0
// Address: 005a31c0
// Address Range: [[005a31c0, 005a3271]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processStates_FUN_005a31c0(CSchnellGeist *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_schngeis_cpp_CSchnellGeist_processStates_FUN_005a31c0(CSchnellGeist *this_ptr,float delta_time,int mode)

{
  SStateMachine *pSVar1;
  int iVar2;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&(this_ptr->base).state_machine,"MeleeAttack");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0
                          (&(this_ptr->base).state_machine,"MeleeAttack"), iVar2 != 0)) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].startInteraction)
                ((CDemonActor *)this_ptr,(CDemonActor *)delta_time);
      return;
    }
  }
  pSVar1 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(pSVar1,"LeapAttack");
    return;
  }
  if ((mode == 1) &&
     (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(pSVar1,"LeapAttack"), iVar2 != 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].getInteractionInfo)
              ((CDemonActor *)this_ptr,(SInteractionInfo *)delta_time);
    return;
  }
  return;
}
