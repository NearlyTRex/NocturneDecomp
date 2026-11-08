// Name: FUN_0047cfc0
// Address: 0047cfc0
// Address Range: [[0047cfc0, 0047cfde]]
// Convention: unknown
// Signature: undefined4 FUN_0047cfc0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0047cfc0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc2f4) != 0) {
    return 0;
  }
  uVar1 = FUN_004310b0(param_1,param_2);
  return uVar1;
}
