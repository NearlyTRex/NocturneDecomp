// Name: core_werewolf.cpp_CWerewolf_getDeathState_FUN_0057fa20
// Address: 0057fa20
// Address Range: [[0057fa20, 0057fa5a]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_0057fa20(CWerewolf *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_0057fa20(CWerewolf *this_ptr)

{
  uint uVar1;
  SMotion *pSVar2;
  
  if (*(int *)&this_ptr->field_0x70 == 2) {
    return DEATH_STATE_DEAD;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
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
