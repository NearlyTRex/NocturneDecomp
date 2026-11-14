// Name: core_confedrt.cpp_CConfederate_getDeathState_FUN_005a12d0
// Address: 005a12d0
// Address Range: [[005a12d0, 005a1331]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_confedrt_cpp_CConfederate_getDeathState_FUN_005a12d0(CConfederate *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_confedrt_cpp_CConfederate_getDeathState_FUN_005a12d0(CConfederate *this_ptr)

{
  uint uVar1;
  int iVar2;
  SStateMachine *pSVar3;
  
  pSVar3 = &(this_ptr->base).state_machine;
  iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Death");
  if ((iVar2 == 0) &&
     (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Animation"), iVar2 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.base.model);
  uVar1 = *(uint *)(iVar2 + 0x24);
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
