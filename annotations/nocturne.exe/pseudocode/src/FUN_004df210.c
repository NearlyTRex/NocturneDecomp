// Name: FUN_004df210
// Address: 004df210
// Address Range: [[004df210, 004df237]]
// Convention: unknown
// Signature: int FUN_004df210(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004df210(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; 0 < param_1; param_1 = param_1 + -1) {
    piVar1 = (int *)(param_2 + 4);
    param_2 = param_2 + param_3;
    iVar2 = iVar2 + *piVar1 + -2;
  }
  return iVar2;
}
