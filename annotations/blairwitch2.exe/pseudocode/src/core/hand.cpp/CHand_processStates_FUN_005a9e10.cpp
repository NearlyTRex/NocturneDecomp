// Name: core_hand.cpp_CHand_processStates_FUN_005a9e10
// Address: 005a9e10
// Address Range: [[005a9e10, 005a9ec1]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processStates_FUN_005a9e10(CHand *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_processStates_FUN_005a9e10(CHand *this_ptr,float delta_time,int mode)

{
  SStateMachine *this_ptr_00;
  int iVar1;
  
  if (mode == 0) {
    core_muzzle_cpp_SStateMachine_addState_FUN_0059d650
              (&(this_ptr->base).state_machine,"Sleeping");
  }
  else {
    core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0(&this_ptr->base,delta_time,mode);
    if ((mode == 1) &&
       (iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0
                          (&(this_ptr->base).state_machine,"Sleeping"), iVar1 != 0)) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].startInteraction)
                ((CDemonActor *)this_ptr,(CDemonActor *)delta_time);
      return;
    }
  }
  this_ptr_00 = &(this_ptr->base).state_machine;
  if (mode == 0) {
    core_muzzle_cpp_SStateMachine_addState_FUN_0059d650(this_ptr_00,"MeleeAttack");
    return;
  }
  if ((mode == 1) &&
     (iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"MeleeAttack")
     , iVar1 != 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].getInteractionInfo)
              ((CDemonActor *)this_ptr,(SInteractionInfo *)delta_time);
    return;
  }
  return;
}
