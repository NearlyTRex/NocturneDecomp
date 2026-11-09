// Name: core_ghostchi.cpp_FUN_005a9770
// Address: 005a9770
// Address Range: [[005a9770, 005a988c]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_FUN_005a9770(int param_1,float param_2)

#include "nocturne.h"

void core_ghostchi_cpp_FUN_005a9770(int param_1,float param_2)

{
  uint uVar1;
  
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),4,1);
  uVar1 = *(uint *)(param_1 + 0x11858);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x2814) = 1;
    unkafter_basicene_cpp_FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0,0x3f000000);
    unkafter_basicene_cpp_FUN_0059f570(param_1);
    *(uint *)(param_1 + 0x11858) = 1;
    *(uint *)(param_1 + 0x11864) = *(uint *)(param_1 + 0x11860);
    return;
  }
  if (uVar1 < 2) {
    param_2 = *(float *)(param_1 + 0x11864) - param_2;
    *(uint *)(param_1 + 0x2814) = 1;
    *(float *)(param_1 + 0x11864) = param_2;
    if (0.0 < param_2) {
      return;
    }
    *(uint *)(param_1 + 0x11864) = 0;
    unkafter_basicene_cpp_FUN_005a01a0
              (param_1,*(uint *)(param_1 + 0x113c4),0x3f800000,0x3f800000);
    unkafter_basicene_cpp_FUN_0059f570(param_1);
    *(uint *)(param_1 + 0x11858) = 2;
    return;
  }
  if (uVar1 == 2) {
    *(uint *)(param_1 + 0x2814) = 0;
    unkaddr_0059d350_cpp_FUN_0059dcb0(param_1 + 0x10af8,0);
    unkaddr_0059d350_cpp_FUN_0059d880(param_1 + 0x10af8,"SleepComplete");
    *(uint *)(param_1 + 0x11858) = 3;
    return;
  }
  return;
}
