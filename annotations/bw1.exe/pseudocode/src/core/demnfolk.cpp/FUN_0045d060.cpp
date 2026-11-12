// Name: core_demnfolk.cpp_FUN_0045d060
// Address: 0045d060
// Address Range: [[0045d060, 0045d0d6]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_0045d060(int param_1)

#include "nocturne.h"

void core_demnfolk_cpp_FUN_0045d060(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc2f4) != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),4,1);
    return;
  }
  if (*(int *)(param_1 + 0xc2f0) == 0) {
    iVar2 = 5;
  }
  else {
    iVar2 = 1;
  }
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,iVar2);
  iVar2 = iVar2 + 4;
  if (((iVar2 == 9) || (iVar2 == 10)) &&
     (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,5), iVar1 != 1)) {
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)(param_1 + 0x158),iVar2,1);
  return;
}
