// Name: engine_mini3d.cpp_FUN_004eef8e
// Address: 004eef8e
// Address Range: [[004eef8e, 004ef01e]]
// Convention: unknown
// Signature: float engine_mini3d_cpp_FUN_004eef8e(float param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float engine_mini3d_cpp_FUN_004eef8e(float param_1,float *param_2)

{
  float fVar1;
  
  if (param_2 == (float *)0x0) {
    fVar1 = (-*(float *)(_DAT_01d76cfc + 0x24) * *(float *)(_DAT_01d76cfc + 8) -
            *(float *)(_DAT_01d76cfc + 0x28) * *(float *)(_DAT_01d76cfc + 0x14)) -
            *(float *)(_DAT_01d76cfc + 0x2c) * *(float *)(_DAT_01d76cfc + 0x20);
  }
  else {
    fVar1 = (param_2[2] - *(float *)(_DAT_01d76cfc + 0x2c)) * *(float *)(_DAT_01d76cfc + 0x20) +
            (*param_2 - *(float *)(_DAT_01d76cfc + 0x24)) * *(float *)(_DAT_01d76cfc + 8) +
            (param_2[1] - *(float *)(_DAT_01d76cfc + 0x28)) * *(float *)(_DAT_01d76cfc + 0x14);
  }
  if ((int)fVar1 < 0x3f800000) {
    return _DAT_01d76c58 - _DAT_01d76c50;
  }
  return (param_1 / fVar1) * _DAT_005c8181 * _DAT_01d76ca8;
}
