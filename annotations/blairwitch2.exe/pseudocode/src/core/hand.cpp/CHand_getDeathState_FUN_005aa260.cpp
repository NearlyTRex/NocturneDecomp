// Name: core_hand.cpp_CHand_getDeathState_FUN_005aa260
// Address: 005aa260
// Address Range: [[005aa260, 005aa2d0]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_hand_cpp_CHand_getDeathState_FUN_005aa260(CHand *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_hand_cpp_CHand_getDeathState_FUN_005aa260(CHand *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  SStateMachine *pSVar3;
  
  pSVar3 = &(this_ptr->base).state_machine;
  iVar1 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Death");
  if (((iVar1 == 0) &&
      (iVar1 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Animation"), iVar1 == 0)) &&
     (iVar1 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Sleeping"), iVar1 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if (pSVar2->state_index == 0) {
    return DEATH_STATE_DEAD;
  }
  if (pSVar2->state_index != 5) {
    return DEATH_STATE_ALIVE;
  }
  return DEATH_STATE_DYING;
}
