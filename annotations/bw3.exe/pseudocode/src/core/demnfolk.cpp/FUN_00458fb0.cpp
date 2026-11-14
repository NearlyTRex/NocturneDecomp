// Name: core_demnfolk.cpp_FUN_00458fb0
// Address: 00458fb0
// Address Range: [[00458fb0, 00459026]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00458fb0(int param_1)

#include "nocturne.h"

void core_demnfolk_cpp_FUN_00458fb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xd0e0) != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)(param_1 + 0x158),4,1);
    return;
  }
  if (*(int *)(param_1 + 0xd0dc) == 0) {
    iVar2 = 5;
  }
  else {
    iVar2 = 1;
  }
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,iVar2);
  iVar2 = iVar2 + 4;
  if (((iVar2 == 8) || (iVar2 == 9)) &&
     (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,5), iVar1 != 1)) {
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),iVar2,1);
  return;
}
