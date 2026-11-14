// Name: core_werewolf.cpp_CWerewolf_getDeathState_FUN_0058dc50
// Address: 0058dc50
// Address Range: [[0058dc50, 0058dc8a]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_0058dc50(CWerewolf *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_0058dc50(CWerewolf *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  uVar1 = *(uint *)(iVar2 + 0x24);
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
