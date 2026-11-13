// Name: core_hellhag.cpp_CHag_processStates_FUN_005aa970
// Address: 005aa970
// Address Range: [[005aa970, 005aaa7d]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processStates_FUN_005aa970(CHag *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_hellhag_cpp_CHag_processStates_FUN_005aa970(CHag *this_ptr,float delta_time,int mode)

{
  SStateMachine *pSVar1;
  int iVar2;
  SPlayerInput *unaff_ESI;
  
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(&(this_ptr->base).state_machine,"HagAlert");
  }
  else {
    core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0(&this_ptr->base,delta_time,mode);
    if ((mode == 1) &&
       (iVar2 = core_muzzle_cpp_FUN_0059daa0(&(this_ptr->base).state_machine,"HagAlert"),
       iVar2 != 0)) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].getInteractionInfo)
                ((CDemonActor *)this_ptr,(SInteractionInfo *)delta_time);
      return;
    }
  }
  pSVar1 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(pSVar1,"MeleeAttack");
  }
  else if ((mode == 1) &&
          (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar1,"MeleeAttack"), iVar2 != 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].startInteraction)
              ((CDemonActor *)this_ptr,(CDemonActor *)delta_time);
    return;
  }
  pSVar1 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(pSVar1,"Healing");
    return;
  }
  if ((mode == 1) && (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar1,"Healing"), iVar2 != 0))
  {
    (*(this_ptr->base).base.base.base.vtable._ub[1].updateInteraction)
              ((CDemonActor *)this_ptr,(UOrientationVector *)delta_time,unaff_ESI);
    return;
  }
  return;
}
