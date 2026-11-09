// Name: core_baron.cpp_FUN_00410550
// Address: 00410550
// Address Range: [[00410550, 0041057f] [00410581, 004105a9]]
// Convention: unknown
// Signature: longlong core_baron_cpp_FUN_00410550(CBaronWeapon *param_1)

#include "nocturne.h"

longlong core_baron_cpp_FUN_00410550(CBaronWeapon *param_1)

{
  uint uVar1;
  SMotion *pSVar2;
  uint uVar3;
  uint extraout_EDX;
  
  core_baron_cpp_FUN_00410640(param_1);
  uVar1 = *(uint *)&param_1->field_0x578;
  uVar3 = 0;
  if (uVar1 != 0) {
    if (*(int *)(uVar1 + 0xc1e4) != 0) {
      return (ulonglong)uVar1 << 0x20;
    }
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(uVar1 + 0x158));
    uVar3 = extraout_EDX;
    switch(*(uint *)(pSVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      return CONCAT44(extraout_EDX,1);
    }
  }
  return (ulonglong)uVar3 << 0x20;
}
