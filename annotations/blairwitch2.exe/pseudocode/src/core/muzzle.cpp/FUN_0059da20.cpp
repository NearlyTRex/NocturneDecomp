// Name: core_muzzle.cpp_FUN_0059da20
// Address: 0059da20
// Address Range: [[0059da20, 0059da6c]]
// Convention: unknown
// Signature: void core_muzzle_cpp_FUN_0059da20(int param_1,float param_2)

#include "nocturne.h"

void core_muzzle_cpp_FUN_0059da20(int param_1,float param_2)

{
  if (0.0 < *(float *)(param_1 + 0x848)) {
    *(float *)(param_1 + 0x848) = *(float *)(param_1 + 0x848) - param_2;
    if (0.0 < *(float *)(param_1 + 0x848)) {
      return;
    }
  }
  else if (0.0 < *(float *)(param_1 + 0x848)) {
    return;
  }
  core_muzzle_cpp_FUN_0059da70(param_1);
  return;
}
