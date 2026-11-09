// Name: engine_mini3d.cpp_FUN_005138fe
// Address: 005138fe
// Address Range: [[005138fe, 00513933]]
// Convention: unknown
// Signature: float engine_mini3d_cpp_FUN_005138fe(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float engine_mini3d_cpp_FUN_005138fe(float *param_1)

{
  return (param_1[2] - *(float *)(_DAT_01d2257c + 0x2c)) * *(float *)(_DAT_01d2257c + 0x20) +
         (*param_1 - *(float *)(_DAT_01d2257c + 0x24)) * *(float *)(_DAT_01d2257c + 8) +
         (param_1[1] - *(float *)(_DAT_01d2257c + 0x28)) * *(float *)(_DAT_01d2257c + 0x14);
}
