// Name: FUN_004fc320
// Address: 004fc320
// Address Range: [[004fc320, 004fc342]]
// Convention: unknown
// Signature: int FUN_004fc320(int param_1)

#include "nocturne.h"

int FUN_004fc320(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x1114); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
