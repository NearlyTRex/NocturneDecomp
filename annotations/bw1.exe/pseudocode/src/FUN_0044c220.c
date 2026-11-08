// Name: FUN_0044c220
// Address: 0044c220
// Address Range: [[0044c220, 0044c23c]]
// Convention: unknown
// Signature: undefined4 FUN_0044c220(int param_1)

#include "nocturne.h"

uint FUN_0044c220(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x17c) < 0xfde9) {
    return 0;
  }
  uVar1 = FUN_0044bf20(param_1);
  return uVar1;
}
