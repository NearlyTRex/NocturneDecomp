// Name: core_unionzom.cpp_CUnionZombie_processStates_FUN_005a3fc0
// Address: 005a3fc0
// Address Range: [[005a3fc0, 005a4071]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processStates_FUN_005a3fc0(CUnionZombie *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_unionzom_cpp_CUnionZombie_processStates_FUN_005a3fc0(CUnionZombie *this_ptr,float delta_time,int mode)

{
  SStateMachine *pSVar1;
  int iVar2;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&(this_ptr->base).state_machine,"VanishAttack");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0
                          (&(this_ptr->base).state_machine,"VanishAttack"), iVar2 != 0)) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].getInteractionInfo)
                ((CDemonActor *)this_ptr,(SInteractionInfo *)delta_time);
      return;
    }
  }
  pSVar1 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(pSVar1,"MeleeAttack");
    return;
  }
  if ((mode == 1) &&
     (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(pSVar1,"MeleeAttack"), iVar2 != 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].startInteraction)
              ((CDemonActor *)this_ptr,(CDemonActor *)delta_time);
    return;
  }
  return;
}
