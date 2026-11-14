// Name: core_helldog.cpp_CDog_processStates_FUN_005abe90
// Address: 005abe90
// Address Range: [[005abe90, 005abf9d]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_processStates_FUN_005abe90(CDog *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_helldog_cpp_CDog_processStates_FUN_005abe90(CDog *this_ptr,float delta_time,int mode)

{
  SStateMachine *pSVar1;
  int iVar2;
  SPlayerInput *unaff_ESI;
  
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(&(this_ptr->base).state_machine,"MeleeAttack");
  }
  else {
    core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0(&this_ptr->base,delta_time,mode);
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
    core_muzzle_cpp_FUN_0059d650(pSVar1,"ChaseFood");
  }
  else if ((mode == 1) &&
          (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar1,"ChaseFood"), iVar2 != 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].startInteraction)
              ((CDemonActor *)this_ptr,(CDemonActor *)delta_time);
    return;
  }
  pSVar1 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(pSVar1,"LeapAttack");
    return;
  }
  if ((mode == 1) &&
     (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar1,"LeapAttack"), iVar2 != 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].updateInteraction)
              ((CDemonActor *)this_ptr,(UOrientationVector *)delta_time,unaff_ESI);
    return;
  }
  return;
}
