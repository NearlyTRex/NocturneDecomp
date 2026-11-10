// Name: core_dracbrid.cpp_CDraculaBride_getDeathState_FUN_00465230
// Address: 00465230
// Address Range: [[00465230, 0046526e]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_00465230(CDraculaBride *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_00465230(CDraculaBride *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    return DEATH_STATE_DEAD;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  switch(*(uint *)(iVar1 + 0x24)) {
  case 7:
  case 10:
    return DEATH_STATE_DYING;
  default:
    return DEATH_STATE_ALIVE;
  case 0x10:
  case 0x11:
    return DEATH_STATE_DEAD;
  }
}
