// Name: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440
// Address: 00411440
// Address Range: [[00411440, 0041146f] [00411471, 00411499]]
// Convention: unknown
// Signature: longlong core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(CBaronWeapon *param_1)

#include "nocturne.h"

longlong core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(CBaronWeapon *param_1)

{
  CBaron *pCVar1;
  SMotion *pSVar2;
  uint uVar3;
  uint extraout_EDX;
  
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(param_1);
  pCVar1 = param_1->baron;
  uVar3 = 0;
  if (pCVar1 != (CBaron *)0x0) {
    if ((pCVar1->base).player_input.action_state.fire != 0) {
      return ZEXT48(pCVar1) << 0x20;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(pCVar1->base).base.model.motion_controller);
    uVar3 = extraout_EDX;
    switch(pSVar2->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      return CONCAT44(extraout_EDX,1);
    }
  }
  return (ulonglong)uVar3 << 0x20;
}
