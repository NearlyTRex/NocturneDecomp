// Name: FUN_004fa470
// Address: 004fa470
// Address Range: [[004fa470, 004fa4dc]]
// Convention: unknown
// Signature: float FUN_004fa470(int param_1,float param_2)

#include "nocturne.h"

float FUN_004fa470(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uStack_20;
  
  uStack_20 = 1.0 / param_2;
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = FUN_0040c600(*(uint *)(iVar3 + 0x14),DAT_007c385c);
      if (iVar1 != 0) {
        uStack_20 = 1.0 / *(float *)(iVar1 + 0x2d8) + uStack_20;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return 1.0 / uStack_20;
}
