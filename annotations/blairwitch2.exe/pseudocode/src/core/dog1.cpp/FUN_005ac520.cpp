// Name: core_dog1.cpp_FUN_005ac520
// Address: 005ac520
// Address Range: [[005ac520, 005ac596]]
// Convention: unknown
// Signature: void core_dog1_cpp_FUN_005ac520(int param_1)

#include "nocturne.h"

void core_dog1_cpp_FUN_005ac520(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x342c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),5,1);
  if ((*(int *)(param_1 + 0x10a28) != 0) && (*(int *)(param_1 + 0x1186c) == 0)) {
    iVar1 = core_motion_cpp_FUN_005035c0((CMotionController *)(param_1 + 0x2b4));
    if (*(int *)(iVar1 + 0x24) == 6) {
      *(uint *)(param_1 + 0x1186c) = 1;
      core_charactr_cpp_FUN_0042b550(param_1,1,0x3f800000,0,0x40a00000,0x3f800000,0,0);
      return;
    }
  }
  return;
}
