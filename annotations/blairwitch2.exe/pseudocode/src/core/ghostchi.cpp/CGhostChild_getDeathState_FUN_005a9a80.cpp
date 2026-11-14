// Name: core_ghostchi.cpp_CGhostChild_getDeathState_FUN_005a9a80
// Address: 005a9a80
// Address Range: [[005a9a80, 005a9ae1]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_ghostchi_cpp_CGhostChild_getDeathState_FUN_005a9a80(CGhostChild *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_ghostchi_cpp_CGhostChild_getDeathState_FUN_005a9a80(CGhostChild *this_ptr)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  SStateMachine *pSVar4;
  
  pSVar4 = &(this_ptr->base).state_machine;
  iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar4,"Death");
  if ((iVar2 == 0) &&
     (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar4,"Animation"), iVar2 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  uVar1 = pSVar3->state_index;
  if (9 < uVar1) {
    if (uVar1 < 0xb) {
      return DEATH_STATE_DYING;
    }
    if (uVar1 == 0xb) {
      return DEATH_STATE_DEAD;
    }
  }
  return DEATH_STATE_ALIVE;
}
