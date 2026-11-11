// Name: core_confzomb.cpp_CConfederateZombie_getDeathState_FUN_005a24a0
// Address: 005a24a0
// Address Range: [[005a24a0, 005a24fd]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_confzomb_cpp_CConfederateZombie_getDeathState_FUN_005a24a0(CConfederateZombie *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_confzomb_cpp_CConfederateZombie_getDeathState_FUN_005a24a0(CConfederateZombie *this_ptr)

{
  int iVar1;
  SStateMachine *pSVar2;
  
  pSVar2 = &(this_ptr->base).state_machine;
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(pSVar2,"Death");
  if ((iVar1 == 0) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(pSVar2,"Animation"), iVar1 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.base.model);
  if ((4 < *(uint *)(iVar1 + 0x24)) && (*(uint *)(iVar1 + 0x24) < 6)) {
    return DEATH_STATE_DYING;
  }
  return DEATH_STATE_DEAD;
}
