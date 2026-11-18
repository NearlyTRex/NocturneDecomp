// Name: core_hellhag.cpp_CHag_getDeathState_FUN_005ab8d0
// Address: 005ab8d0
// Address Range: [[005ab8d0, 005ab931]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_hellhag_cpp_CHag_getDeathState_FUN_005ab8d0(CHag *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_hellhag_cpp_CHag_getDeathState_FUN_005ab8d0(CHag *this_ptr)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  SStateMachine *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).state_machine;
  iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Death");
  if ((iVar2 == 0) &&
     (iVar2 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Animation"),
     iVar2 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  uVar1 = pSVar3->state_index;
  if (5 < uVar1) {
    if (uVar1 < 7) {
      return DEATH_STATE_DYING;
    }
    if (uVar1 == 7) {
      return DEATH_STATE_DEAD;
    }
  }
  return DEATH_STATE_ALIVE;
}
