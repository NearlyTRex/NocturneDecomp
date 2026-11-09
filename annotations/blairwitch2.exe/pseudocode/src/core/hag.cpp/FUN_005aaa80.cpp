// Name: core_hag.cpp_FUN_005aaa80
// Address: 005aaa80
// Address Range: [[005aaa80, 005aab4e]]
// Convention: unknown
// Signature: void core_hag_cpp_FUN_005aaa80(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hag_cpp_FUN_005aaa80(int param_1,uint param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x342c) = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x10a78);
  if (iVar1 == 0) {
    iVar1 = core_motion_cpp_FUN_005035c0((CMotionController *)(param_1 + 0x2b4));
    if (*(int *)(iVar1 + 0x24) != 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),0,1);
      return;
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x10af0) == 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),0,1);
      *(uint *)(param_1 + 0x11394) = _DAT_00600a6c;
      unkaddr_0059d350_cpp_FUN_0059dcb0(param_1 + 0x10af8,0x3f000000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
      return;
    }
    *(uint *)(param_1 + 0x10af0) = 0;
    *(uint *)(param_1 + 0x10a78) = 0;
  }
  return;
}
