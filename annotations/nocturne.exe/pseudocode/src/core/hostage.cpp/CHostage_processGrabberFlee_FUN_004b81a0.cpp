// Name: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0
// Address: 004b81a0
// Address Range: [[004b81a0, 004b82c1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(int param_1,float param_2)

#include "nocturne.h"

uint __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(int param_1,float param_2)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  byte local_14 [12];
  uint local_8;
  
  if (*(int *)(param_1 + 0x1f950) == 0) {
    return 0;
  }
  param_2 = *(float *)(param_1 + 0x1f954) - param_2;
  *(float *)(param_1 + 0x1f954) = param_2;
  if ((0.0 < param_2) && (*(float *)(param_1 + 0x2dcc) <= (float)1.5)) {
    iVar1 = *(int *)(param_1 + 0x1f950);
    local_20 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
    local_1c = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
    local_18 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
    iVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_14,&local_20);
    local_8 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                        (*(float *)(iVar1 + 4) - *(float *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x2410) = local_8;
    if (*(float *)(param_1 + 0x2410) < -*(float *)(param_1 + 0x2430)) {
      *(uint *)(param_1 + 0x2410) = *(uint *)(param_1 + 0x2430);
    }
    if (*(float *)(param_1 + 0x2430) < *(float *)(param_1 + 0x2410)) {
      *(uint *)(param_1 + 0x2410) = *(uint *)(param_1 + 0x2430);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
    return 1;
  }
  *(uint *)(param_1 + 0x1f950) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
  return 0;
}
