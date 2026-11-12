// Name: core_union.cpp_CUnion_getDeathState_FUN_005a5280
// Address: 005a5280
// Address Range: [[005a5280, 005a52e1]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_union_cpp_CUnion_getDeathState_FUN_005a5280(CUnion *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_union_cpp_CUnion_getDeathState_FUN_005a5280(CUnion *this_ptr)

{
  uint uVar1;
  int iVar2;
  SStateMachine *pSVar3;
  
  pSVar3 = &(this_ptr->base).base.state_machine;
  iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"BDeath" + 1);
  if ((iVar2 == 0) &&
     (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Animation"), iVar2 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.base.base.model);
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
