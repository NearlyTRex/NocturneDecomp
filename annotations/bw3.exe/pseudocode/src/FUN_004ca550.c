// Name: FUN_004ca550
// Address: 004ca550
// Address Range: [[004ca550, 004ca592]]
// Convention: unknown
// Signature: void FUN_004ca550(int param_1)

#include "nocturne.h"

void FUN_004ca550(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1b0) == 0) {
    iVar1 = FUN_00491aa0(0x01C6E360,param_1 + 0x1b4);
    if (iVar1 != 0) {
      FUN_004cc040(param_1,param_1 + 0x20);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}
