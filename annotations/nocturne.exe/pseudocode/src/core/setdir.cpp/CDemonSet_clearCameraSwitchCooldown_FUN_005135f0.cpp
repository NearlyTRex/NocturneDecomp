// Name: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
// Address: 005135f0
// Address Range: [[005135f0, 0051360e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(int param_1)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(int param_1)

{
  if (*(float *)(param_1 + 0x15aacc) <= 0.0) {
    return;
  }
  *(uint *)(param_1 + 0x15aacc) = 0x1e3ce508;
  return;
}
