// Name: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_00498bd0
// Address: 00498bd0
// Address Range: [[00498bd0, 00498c02]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_00498bd0(int param_1)

#include "nocturne.h"

uint __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_00498bd0(int param_1)

{
  *(uint *)(param_1 + 0x1fa08) = 0;
  if (*(int *)(param_1 + 0x24ac) == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,5,1);
  return 1;
}
