// Name: unkafter_djien.cpp_FUN_00460960
// Address: 00460960
// Address Range: [[00460960, 004609b0]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_00460960(int param_1)

#include "nocturne.h"

void unkafter_djien_cpp_FUN_00460960(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xc2f0) = 0;
  *(uint *)(param_1 + 0xc1e8) = 0;
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc9c4) = 0;
  }
  else {
    *(uint *)(param_1 + 0xc9c4) = 0x40400000;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)(param_1 + 0x158),0,1);
  return;
}
