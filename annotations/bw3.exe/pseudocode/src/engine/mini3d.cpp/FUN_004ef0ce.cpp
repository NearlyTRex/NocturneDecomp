// Name: engine_mini3d.cpp_FUN_004ef0ce
// Address: 004ef0ce
// Address Range: [[004ef0ce, 004ef103]]
// Convention: unknown
// Signature: float engine_mini3d_cpp_FUN_004ef0ce(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float engine_mini3d_cpp_FUN_004ef0ce(float *param_1)

{
  return (param_1[2] - *(float *)(_DAT_01d76cfc + 0x2c)) * *(float *)(_DAT_01d76cfc + 0x20) +
         (*param_1 - *(float *)(_DAT_01d76cfc + 0x24)) * *(float *)(_DAT_01d76cfc + 8) +
         (param_1[1] - *(float *)(_DAT_01d76cfc + 0x28)) * *(float *)(_DAT_01d76cfc + 0x14);
}
