// Name: unkafter_tawiscar.cpp_FUN_005956d0
// Address: 005956d0
// Address Range: [[005956d0, 00595705]]
// Convention: unknown
// Signature: void unkafter_tawiscar_cpp_FUN_005956d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void unkafter_tawiscar_cpp_FUN_005956d0(int param_1,uint param_2,uint param_3,uint param_4)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  if (*(int *)(pSVar1 + 0x24) == 0x13) {
    return;
  }
  core_charactr_cpp_FUN_00431470(param_1,param_2,param_3,param_4);
  return;
}
