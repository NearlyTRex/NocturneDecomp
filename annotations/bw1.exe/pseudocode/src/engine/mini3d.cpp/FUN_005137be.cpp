// Name: engine_mini3d.cpp_FUN_005137be
// Address: 005137be
// Address Range: [[005137be, 0051384e]]
// Convention: unknown
// Signature: float engine_mini3d_cpp_FUN_005137be(float param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float engine_mini3d_cpp_FUN_005137be(float param_1,float *param_2)

{
  float fVar1;
  
  if (param_2 == (float *)0x0) {
    fVar1 = (-*(float *)(_DAT_01d2257c + 0x24) * *(float *)(_DAT_01d2257c + 8) -
            *(float *)(_DAT_01d2257c + 0x28) * *(float *)(_DAT_01d2257c + 0x14)) -
            *(float *)(_DAT_01d2257c + 0x2c) * *(float *)(_DAT_01d2257c + 0x20);
  }
  else {
    fVar1 = (param_2[2] - *(float *)(_DAT_01d2257c + 0x2c)) * *(float *)(_DAT_01d2257c + 0x20) +
            (*param_2 - *(float *)(_DAT_01d2257c + 0x24)) * *(float *)(_DAT_01d2257c + 8) +
            (param_2[1] - *(float *)(_DAT_01d2257c + 0x28)) * *(float *)(_DAT_01d2257c + 0x14);
  }
  if ((int)fVar1 < 0x3f800000) {
    return _DAT_01d224d8 - _DAT_01d224d0;
  }
  return (param_1 / fVar1) * _DAT_005e8e7f * _DAT_01d22528;
}
