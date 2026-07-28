// Name: core_icepick.cpp_CIcePick_startThrowAttack_FUN_004baa00
// Address: 004baa00
// Address Range: [[004baa00, 004baa27]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(int param_1)

#include "nocturne.h"

uint __cdecl core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(int param_1)

{
  if (*(int *)(param_1 + 0x1fa5c) == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            ((CMotionController *)(param_1 + 0x150),0x16,1);
  return 1;
}
