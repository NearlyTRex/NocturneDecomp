// Name: core_werewolf.cpp_CWerewolf_getDeathState_FUN_005f1db0
// Address: 005f1db0
// Address Range: [[005f1db0, 005f1dea]]
// Convention: __cdecl
// Signature: int __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_005f1db0(CWerewolf *this_ptr)

#include "nocturne.h"

int __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_005f1db0(CWerewolf *this_ptr)

{
  uint uVar1;
  SMotion *pSVar2;
  
  if ((this_ptr->base).base.base.was_created == 2) {
    return 2;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  uVar1 = pSVar2->state_index;
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return 1;
    }
    if (uVar1 == 0xd) {
      return 2;
    }
  }
  return 0;
}
