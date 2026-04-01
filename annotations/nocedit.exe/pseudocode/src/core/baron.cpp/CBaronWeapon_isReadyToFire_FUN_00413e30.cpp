// Name: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00413e30
// Address: 00413e30
// Address Range: [[00413e30, 00413e5f] [00413e61, 00413e89]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00413e30(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00413e30(CBaronWeapon *this_ptr)

{
  CBaron *pCVar1;
  SMotion *pSVar2;
  
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00413f20(this_ptr);
  pCVar1 = this_ptr->baron;
  if (pCVar1 != (CBaron *)0x0) {
    if ((pCVar1->base).player_control.action_bindings.fire_key != 0) {
      return 0;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
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
