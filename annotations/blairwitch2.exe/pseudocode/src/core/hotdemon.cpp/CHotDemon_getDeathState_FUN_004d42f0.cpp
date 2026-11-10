// Name: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004d42f0
// Address: 004d42f0
// Address Range: [[004d42f0, 004d4322]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004d42f0(CHotDemon *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004d42f0(CHotDemon *this_ptr)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  switch(*(uint *)(iVar1 + 0x24)) {
  case 4:
  case 10:
    return DEATH_STATE_DYING;
  case 5:
  case 0xb:
    return DEATH_STATE_DEAD;
  default:
    return DEATH_STATE_ALIVE;
  }
}
