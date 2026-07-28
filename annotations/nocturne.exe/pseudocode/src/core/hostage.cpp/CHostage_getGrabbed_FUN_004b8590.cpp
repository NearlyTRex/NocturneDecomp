// Name: core_hostage.cpp_CHostage_getGrabbed_FUN_004b8590
// Address: 004b8590
// Address Range: [[004b8590, 004b85f2]]
// Convention: unknown
// Signature: undefined4 core_hostage_cpp_CHostage_getGrabbed_FUN_004b8590(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_hostage_cpp_CHostage_getGrabbed_FUN_004b8590(int param_1,uint param_2,int param_3)

{
  *(int *)(param_1 + 0x2594) = param_3;
  *(uint *)(param_1 + 0x2590) = param_2;
  if (param_3 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)(param_1 + 0x150),4,1);
    core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,(char *)(param_1 + 0x1f724))
    ;
  }
  *(uint *)(param_1 + 0x1f954) = 0x40400000;
  *(uint *)(param_1 + 0x1f950) = param_2;
  return 1;
}
