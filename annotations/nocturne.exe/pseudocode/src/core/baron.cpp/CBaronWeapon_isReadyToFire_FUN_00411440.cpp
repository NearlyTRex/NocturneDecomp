// Name: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440
// Address: 00411440
// Address Range: [[00411440, 0041146f] [00411471, 00411499]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(CBaronWeapon *this_ptr)

{
  CBaron *pCVar1;
  SMotion *pSVar2;
  
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(this_ptr);
  pCVar1 = this_ptr->baron;
  if (pCVar1 != (CBaron *)0x0) {
    if ((pCVar1->base).player_input.action_state.fire != 0) {
      return 0;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(pCVar1->base).base.model.motion_controller);
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
