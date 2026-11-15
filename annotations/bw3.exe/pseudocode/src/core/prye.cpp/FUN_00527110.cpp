// Name: core_prye.cpp_FUN_00527110
// Address: 00527110
// Address Range: [[00527110, 00527197]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_00527110(int param_1)

#include "nocturne.h"

uint core_prye_cpp_FUN_00527110(int param_1)

{
  CMotionController *this_ptr;
  float fVar1;
  int iVar2;
  
  this_ptr = (CMotionController *)(param_1 + 0x158);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(this_ptr,0x2a);
  if (fVar1 <= 0.0) {
    fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(this_ptr,0x2b);
    if (fVar1 <= 0.0) {
      iVar2 = core_motion_cpp_FUN_004fc0c0(this_ptr);
      if (iVar2 != 0x2a) {
        iVar2 = core_motion_cpp_FUN_004fc0c0(this_ptr);
        if (((iVar2 != 0x2b) && (*(int *)(param_1 + 0x20b64) != 5)) &&
           (*(int *)(param_1 + 0x20b94) == 0)) {
          return 0;
        }
      }
    }
  }
  return 1;
}
