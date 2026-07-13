// Name: FUN_0050fc90
// Address: 0050fc90
// Address Range: [[0050fc90, 0050fdcc]]
// Convention: unknown
// Signature: undefined4 FUN_0050fc90(int param_1)

#include "nocturne.h"

uint FUN_0050fc90(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float afStack_30 [11];
  
  if (*(float *)(param_1 + 0x15f2dc) < *(float *)(param_1 + 0x15f2e0)) {
    if ((uint *)(param_1 + 0x14cd40) != (uint *)(param_1 + 0x15f2e4)) {
      *(uint *)(param_1 + 0x14cd40) = *(uint *)(param_1 + 0x15f2e4);
      *(uint *)(param_1 + 0x14cd44) = *(uint *)(param_1 + 0x15f2e8);
      *(uint *)(param_1 + 0x14cd48) = *(uint *)(param_1 + 0x15f2ec);
    }
    pfVar1 = (float *)(param_1 + 0x14cd28);
    *(uint *)(param_1 + 0x14cd4c) = *(uint *)(param_1 + 0x15f2f0);
    uVar3 = FUN_0050ffe0(param_1,*(uint *)(param_1 + 0x15f2dc),pfVar1,
                         (float *)(param_1 + 0x14cd34),*(uint *)(param_1 + 0x15f2e0));
    *(uint *)(param_1 + 0x15f2dc) = uVar3;
    if (*(float *)(param_1 + 0x15f2dc) <= 1.0) {
      pfVar2 = (float *)(param_1 + 0x15f2dc);
      if ((float *)(param_1 + 0x14cd50) != afStack_30) {
        *(float *)(param_1 + 0x14cd50) =
             *pfVar1 + (*(float *)(param_1 + 0x14cd34) - *pfVar1) * *pfVar2;
        *(float *)(param_1 + 0x14cd54) =
             *(float *)(param_1 + 0x14cd2c) +
             (*(float *)(param_1 + 0x14cd38) - *(float *)(param_1 + 0x14cd2c)) * *pfVar2;
        *(float *)(param_1 + 0x14cd58) =
             *(float *)(param_1 + 0x14cd30) +
             (*(float *)(param_1 + 0x14cd3c) - *(float *)(param_1 + 0x14cd30)) * *pfVar2;
      }
    }
    return *(uint *)(param_1 + 0x15f2dc);
  }
  return 0x40000000;
}
