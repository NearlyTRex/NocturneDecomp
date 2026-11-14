// Name: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00410550
// Address: 00410550
// Address Range: [[00410550, 0041057f] [00410581, 004105a9]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00410550(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00410550(CBaronWeapon *this_ptr)

{
  CBaron *pCVar1;
  SMotion *pSVar2;
  
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640(this_ptr);
  pCVar1 = this_ptr->baron;
  if (pCVar1 != (CBaron *)0x0) {
    if ((pCVar1->base).player_input.action_state.fire != 0) {
      return 0;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(pCVar1->base).base.model.base);
    switch(pSVar2->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      return 1;
    }
  }
  return 0;
}
