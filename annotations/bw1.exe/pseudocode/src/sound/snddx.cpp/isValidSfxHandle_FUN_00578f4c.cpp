// Name: sound_snddx.cpp_isValidSfxHandle_FUN_00578f4c
// Address: 00578f4c
// Address Range: [[00578f4c, 00578f76]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_isValidSfxHandle_FUN_00578f4c(int param_1)

#include "nocturne.h"

uint sound_snddx_cpp_isValidSfxHandle_FUN_00578f4c(int param_1)

{
  if (((0 < param_1) && (param_1 < 0x1f)) && (*(int *)(param_1 * 0x24 + 0x2c823e0) != 0)) {
    return 1;
  }
  return 0;
}
