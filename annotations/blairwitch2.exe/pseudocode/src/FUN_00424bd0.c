// Name: FUN_00424bd0
// Address: 00424bd0
// Address Range: [[00424bd0, 00424c77]]
// Convention: unknown
// Signature: void FUN_00424bd0(int param_1)

#include "nocturne.h"

void FUN_00424bd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10224) == 0) {
    FUN_004247f0(param_1);
    FUN_00547170(param_1 + 0x2b4,0xffffffff,0xffffffff,1,0);
    FUN_005b17d0(param_1 + 0x2d0c,param_1 + 0x2b4);
  }
  iVar1 = FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2810) == 0) {
      FUN_004264d0(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0x1022c)) {
      FUN_00426730(param_1);
    }
  }
  FUN_00425aa0(param_1);
  if (*(int *)(0x01CB6900 + 0x238) == 0) {
    return;
  }
  FUN_00424c80(param_1);
  return;
}
