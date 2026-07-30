// Name: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_0048e760
// Address: 0048e760
// Address Range: [[0048e760, 0048e78c]]
// Convention: unknown
// Signature: undefined4 core_flamecan_cpp_CFlameCan_renderTransparent_FUN_0048e760(int param_1)

#include "nocturne.h"

uint core_flamecan_cpp_CFlameCan_renderTransparent_FUN_0048e760(int param_1)

{
  if (*(int *)(param_1 + 0x5d4) == 0) {
    return *(uint *)(param_1 + 0x5d4);
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0((CFlame *)(param_1 + 0x338));
  return *(uint *)(param_1 + 0x5d4);
}
