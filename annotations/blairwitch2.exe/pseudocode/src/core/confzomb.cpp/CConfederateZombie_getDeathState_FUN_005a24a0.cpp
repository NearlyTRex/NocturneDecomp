// Name: core_confzomb.cpp_CConfederateZombie_getDeathState_FUN_005a24a0
// Address: 005a24a0
// Address Range: [[005a24a0, 005a24fd]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_confzomb_cpp_CConfederateZombie_getDeathState_FUN_005a24a0(CConfederateZombie *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_confzomb_cpp_CConfederateZombie_getDeathState_FUN_005a24a0(CConfederateZombie *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  SStateMachine *pSVar3;
  
  pSVar3 = &(this_ptr->base).state_machine;
  iVar1 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Death");
  if ((iVar1 == 0) &&
     (iVar1 = core_muzzle_cpp_FUN_0059daa0(pSVar3,"Animation"), iVar1 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if ((4 < (uint)pSVar2->state_index) && ((uint)pSVar2->state_index < 6)) {
    return DEATH_STATE_DYING;
  }
  return DEATH_STATE_DEAD;
}
