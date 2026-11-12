// Name: core_ghostchi.cpp_CGhostChild_processStates_FUN_005a94c0
// Address: 005a94c0
// Address Range: [[005a94c0, 005a9571]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processStates_FUN_005a94c0(CGhostChild *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_processStates_FUN_005a94c0(CGhostChild *this_ptr,float delta_time,int mode)

{
  SStateMachine *pSVar1;
  int iVar2;
  
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(&(this_ptr->base).state_machine,"MeleeAttack");
  }
  else {
    core_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar2 = core_muzzle_cpp_FUN_0059daa0(&(this_ptr->base).state_machine,"MeleeAttack")
       , iVar2 != 0)) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].getInteractionInfo)
                ((CDemonActor *)this_ptr,(SInteractionInfo *)delta_time);
      return;
    }
  }
  pSVar1 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(pSVar1,"Sleep");
    return;
  }
  if ((mode == 1) && (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar1,"Sleep"), iVar2 != 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].startInteraction)
              ((CDemonActor *)this_ptr,(CDemonActor *)delta_time);
    return;
  }
  return;
}
