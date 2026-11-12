// Name: core_unionzom.cpp_CUnionZombie_getDeathState_FUN_005a4580
// Address: 005a4580
// Address Range: [[005a4580, 005a45dd]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_unionzom_cpp_CUnionZombie_getDeathState_FUN_005a4580(CUnionZombie *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_unionzom_cpp_CUnionZombie_getDeathState_FUN_005a4580(CUnionZombie *this_ptr)

{
  int iVar1;
  SStateMachine *pSVar2;
  
  pSVar2 = &(this_ptr->base).state_machine;
  iVar1 = core_muzzle_cpp_FUN_0059daa0(pSVar2,"Death");
  if ((iVar1 == 0) &&
     (iVar1 = core_muzzle_cpp_FUN_0059daa0(pSVar2,"Animation"), iVar1 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.base.model);
  if ((4 < *(uint *)(iVar1 + 0x24)) && (*(uint *)(iVar1 + 0x24) < 6)) {
    return DEATH_STATE_DYING;
  }
  return DEATH_STATE_DEAD;
}
