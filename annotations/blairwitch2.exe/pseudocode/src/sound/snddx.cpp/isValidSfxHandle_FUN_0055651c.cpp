// Name: sound_snddx.cpp_isValidSfxHandle_FUN_0055651c
// Address: 0055651c
// Address Range: [[0055651c, 00556546]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_isValidSfxHandle_FUN_0055651c(int param_1)

#include "nocturne.h"

uint sound_snddx_cpp_isValidSfxHandle_FUN_0055651c(int param_1)

{
  if (((0 < param_1) && (param_1 < 0x1f)) && (*(int *)(param_1 * 0x24 + 0x264ac10) != 0)) {
    return 1;
  }
  return 0;
}
