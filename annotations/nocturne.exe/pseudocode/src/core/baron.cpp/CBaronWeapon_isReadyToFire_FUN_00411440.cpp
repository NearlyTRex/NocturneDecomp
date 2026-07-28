// Name: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440
// Address: 00411440
// Address Range: [[00411440, 0041146f] [00411471, 00411499]]
// Convention: unknown
// Signature: longlong core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(int param_1)

#include "nocturne.h"

longlong core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(int param_1)

{
  uint uVar1;
  SMotion *pSVar2;
  uint uVar3;
  uint extraout_EDX;
  
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(param_1);
  uVar1 = *(uint *)(param_1 + 0x570);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (*(int *)(uVar1 + 0xbca0) != 0) {
      return (ulonglong)uVar1 << 0x20;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       ((CMotionController *)(uVar1 + 0x150));
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
