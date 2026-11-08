// Name: FUN_004d23f0
// Address: 004d23f0
// Address Range: [[004d23f0, 004d24a1]]
// Convention: unknown
// Signature: undefined4 FUN_004d23f0(float *param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d23f0(float *param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (0 < _DAT_01d5ba00) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + 0x1d5ba04);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *param_1;
        fVar3 = *(float *)(iVar1 + 0x28) - param_1[2];
        if (ABS(*(float *)(iVar1 + 0x24) - param_1[1]) <= param_3) {
          if (fVar2 * fVar2 + fVar3 * fVar3 < param_2 * param_2) {
            return 1;
          }
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < _DAT_01d5ba00 * 4);
  }
  return 0;
}
