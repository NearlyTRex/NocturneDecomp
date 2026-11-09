// Name: core_werewolf.cpp_CWerewolf_getDeathState_FUN_005b17a0
// Address: 005b17a0
// Address Range: [[005b17a0, 005b17da]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_005b17a0(CWerewolf *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_005b17a0(CWerewolf *this_ptr)

{
  uint uVar1;
  SMotion *pSVar2;
  
  if (*(int *)&this_ptr->field_0x70 == 2) {
    return DEATH_STATE_DEAD;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  uVar1 = *(uint *)(pSVar2 + 0x24);
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return DEATH_STATE_DYING;
    }
    if (uVar1 == 0xd) {
      return DEATH_STATE_DEAD;
    }
  }
  return DEATH_STATE_ALIVE;
}
