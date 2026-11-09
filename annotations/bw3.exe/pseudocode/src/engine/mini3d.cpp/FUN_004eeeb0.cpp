// Name: engine_mini3d.cpp_FUN_004eeeb0
// Address: 004eeeb0
// Address Range: [[004eeeb0, 004eeef0]]
// Convention: unknown
// Signature: int engine_mini3d_cpp_FUN_004eeeb0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_mini3d_cpp_FUN_004eeeb0(float *param_1)

{
  float fVar1;
  uint3 uVar2;
  
  fVar1 = (param_1[2] - *(float *)(_DAT_01d76cfc + 0x2c)) * *(float *)(_DAT_01d76cfc + 0x20) +
          (param_1[1] - *(float *)(_DAT_01d76cfc + 0x28)) * *(float *)(_DAT_01d76cfc + 0x14) +
          (*param_1 - *(float *)(_DAT_01d76cfc + 0x24)) * *(float *)(_DAT_01d76cfc + 8);
  uVar2 = (uint3)(CONCAT22((short)((uint)_DAT_01d76cfc >> 0x10),
                           (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (0.0 >= fVar1) {
    return CONCAT31(uVar2,0x10);
  }
  return (uint)uVar2 << 8;
}
