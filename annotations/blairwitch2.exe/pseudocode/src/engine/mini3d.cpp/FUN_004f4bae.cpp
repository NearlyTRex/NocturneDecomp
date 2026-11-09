// Name: engine_mini3d.cpp_FUN_004f4bae
// Address: 004f4bae
// Address Range: [[004f4bae, 004f4be3]]
// Convention: unknown
// Signature: float engine_mini3d_cpp_FUN_004f4bae(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float engine_mini3d_cpp_FUN_004f4bae(float *param_1)

{
  return (param_1[2] - *(float *)(_DAT_01d09918 + 0x2c)) * *(float *)(_DAT_01d09918 + 0x20) +
         (*param_1 - *(float *)(_DAT_01d09918 + 0x24)) * *(float *)(_DAT_01d09918 + 8) +
         (param_1[1] - *(float *)(_DAT_01d09918 + 0x28)) * *(float *)(_DAT_01d09918 + 0x14);
}
