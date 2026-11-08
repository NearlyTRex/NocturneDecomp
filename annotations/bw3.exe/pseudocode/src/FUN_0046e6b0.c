// Name: FUN_0046e6b0
// Address: 0046e6b0
// Address Range: [[0046e6b0, 0046e71d]]
// Convention: unknown
// Signature: undefined4 FUN_0046e6b0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0046e6b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_2 + 0x13) & 0x80) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00515a80(param_2,1);
  }
  iVar1 = (*(int *)(param_2 + 0x10) >> 0x10) * 4;
  iVar2 = (*(int *)(param_2 + 0x14) >> 0x10) * 4;
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_2 + 8) < *(int *)(*(int *)(&DAT_01c60dac + iVar2) + iVar1)) {
      return 0;
    }
  }
  else if (*(int *)(param_2 + 8) < *(int *)(*(int *)(&DAT_01c5faec + iVar2) + iVar1)) {
    return 0;
  }
  return 1;
}
