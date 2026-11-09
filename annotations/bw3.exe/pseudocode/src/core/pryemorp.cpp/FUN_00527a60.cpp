// Name: core_pryemorp.cpp_FUN_00527a60
// Address: 00527a60
// Address Range: [[00527a60, 00527a82]]
// Convention: unknown
// Signature: bool core_pryemorp_cpp_FUN_00527a60(int param_1)

#include "nocturne.h"

bool core_pryemorp_cpp_FUN_00527a60(int param_1)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  return *(int *)(pSVar1 + 0x24) == 0x92;
}
