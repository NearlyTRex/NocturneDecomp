// Name: FUN_1000bda0
// Address: 1000bda0
// Address Range: [[1000bda0, 1000bdd0]]
// Convention: unknown
// Signature: uint FUN_1000bda0(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_1000bda0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == param_1) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_2 + 0x0000000A * 0xc);
  return -(uint)(*(int *)(uVar1 + 4) == param_1) & uVar1;
}
