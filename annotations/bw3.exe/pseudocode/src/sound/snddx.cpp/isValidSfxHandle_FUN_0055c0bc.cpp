// Name: sound_snddx.cpp_isValidSfxHandle_FUN_0055c0bc
// Address: 0055c0bc
// Address Range: [[0055c0bc, 0055c0e6]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_isValidSfxHandle_FUN_0055c0bc(int param_1)

#include "nocturne.h"

uint sound_snddx_cpp_isValidSfxHandle_FUN_0055c0bc(int param_1)

{
  if (((0 < param_1) && (param_1 < 0x1f)) && (*(int *)(param_1 * 0x24 + 0x2cf500c) != 0)) {
    return 1;
  }
  return 0;
}
