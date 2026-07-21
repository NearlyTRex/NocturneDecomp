// Name: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440
// Address: 00411440
// Address Range: [[00411440, 0041146f] [00411471, 00411499]]
// Convention: unknown
// Signature: undefined8 core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(int param_1)

#include "nocturne.h"

ulonglong core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(int param_1)

{
  int iVar1;
  
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(param_1);
  iVar1 = *(int *)(param_1 + 0x570);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xbca0) != 0) {
      return 0;
    }
    iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar1 + 0x150);
    switch(*(uint *)(iVar1 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      return 1;
    }
  }
  return 0;
}
