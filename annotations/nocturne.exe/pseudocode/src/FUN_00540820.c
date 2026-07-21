// Name: FUN_00540820
// Address: 00540820
// Address Range: [[00540820, 00540884]]
// Convention: unknown
// Signature: void FUN_00540820(int param_1)

#include "nocturne.h"

void FUN_00540820(int param_1)

{
  FUN_004b5ec0(param_1);
  *(uint *)(param_1 + 0x1fa90) = 0;
  *(uint *)(param_1 + 0x1fa94) = 0;
  *(uint *)(param_1 + 0x1faa0) = 0;
  *(uint *)(param_1 + 0x2a84) = 0;
  *(uint *)(param_1 + 0x2a88) = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (param_1 + 0x150,"stand",0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
  return;
}
