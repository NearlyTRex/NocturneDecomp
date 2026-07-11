// Name: FUN_00498790
// Address: 00498790
// Address Range: [[00498790, 004987d0]]
// Convention: unknown
// Signature: void FUN_00498790(int param_1)

#include "nocturne.h"

void FUN_00498790(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1fa08) == 0) {
    return;
  }
  iVar1 = FUN_0040d890(*(int *)(param_1 + 0x1fa08),DAT_00764230);
  if (iVar1 != 0) {
    FUN_0040f1a0(iVar1,param_1 + 0x1f5a0);
  }
  *(uint *)(param_1 + 0x1fa08) = 0;
  return;
}
