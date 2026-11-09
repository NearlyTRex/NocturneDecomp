// Name: core_hostage.cpp_FUN_004ef290
// Address: 004ef290
// Address Range: [[004ef290, 004ef2f2]]
// Convention: unknown
// Signature: undefined4 core_hostage_cpp_FUN_004ef290(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_hostage_cpp_FUN_004ef290(int param_1,uint param_2,int param_3)

{
  *(int *)(param_1 + 0x2700) = param_3;
  *(uint *)(param_1 + 0x26fc) = param_2;
  if (param_3 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),4,1);
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,(char *)(param_1 + 0x1fc6c))
    ;
  }
  *(uint *)(param_1 + 0x1fe9c) = 0x40400000;
  *(uint *)(param_1 + 0x1fe98) = param_2;
  return 1;
}
