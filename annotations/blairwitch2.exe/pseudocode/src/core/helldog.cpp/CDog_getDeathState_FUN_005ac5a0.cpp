// Name: core_helldog.cpp_CDog_getDeathState_FUN_005ac5a0
// Address: 005ac5a0
// Address Range: [[005ac5a0, 005ac601]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_helldog_cpp_CDog_getDeathState_FUN_005ac5a0(CDog *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_helldog_cpp_CDog_getDeathState_FUN_005ac5a0(CDog *this_ptr)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  SStateMachine *pSVar4;
  
  pSVar4 = &(this_ptr->base).state_machine;
  iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar4,"Death");
  if ((iVar2 == 0) &&
     (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar4,"Animation"), iVar2 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  uVar1 = pSVar3->state_index;
  if (4 < uVar1) {
    if (uVar1 < 6) {
      return DEATH_STATE_DYING;
    }
    if (uVar1 == 6) {
      return DEATH_STATE_DEAD;
    }
  }
  return DEATH_STATE_ALIVE;
}
