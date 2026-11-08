// Name: FUN_0053a720
// Address: 0053a720
// Address Range: [[0053a720, 0053a75a]]
// Convention: unknown
// Signature: void FUN_0053a720(int param_1,int param_2)

#include "nocturne.h"

void FUN_0053a720(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar1 * 0x44 + param_1 + 0x15b468);
  } while (-1 < iVar2);
  while (param_2 != iVar1) {
    iVar2 = param_2 * 0x44;
    param_2 = *(int *)(iVar2 + 0x15b468 + param_1);
    *(int *)(iVar2 + 0x15b468 + param_1) = iVar1;
  }
  return;
}
