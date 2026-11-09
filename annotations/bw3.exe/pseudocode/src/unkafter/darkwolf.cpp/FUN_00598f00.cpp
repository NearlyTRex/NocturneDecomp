// Name: unkafter_darkwolf.cpp_FUN_00598f00
// Address: 00598f00
// Address Range: [[00598f00, 00598f20]]
// Convention: unknown
// Signature: bool unkafter_darkwolf_cpp_FUN_00598f00(int param_1)

#include "nocturne.h"

bool unkafter_darkwolf_cpp_FUN_00598f00(int param_1)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  return *(int *)(pSVar1 + 0x24) == 7;
}
