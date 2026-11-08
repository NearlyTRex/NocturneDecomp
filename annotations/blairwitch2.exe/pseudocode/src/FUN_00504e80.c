// Name: FUN_00504e80
// Address: 00504e80
// Address Range: [[00504e80, 00504ed6]]
// Convention: unknown
// Signature: void FUN_00504e80(int param_1,int param_2)

#include "nocturne.h"

void FUN_00504e80(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x531c) + param_2;
  *(uint *)(param_1 + 0x531c) = uVar1;
  *(int *)(param_1 + 0x1314) = *(int *)(param_1 + 0x1314) - param_2;
  while (7 < uVar1) {
    *(int *)(param_1 + 0x531c) = *(int *)(param_1 + 0x531c) + -8;
    uVar1 = *(uint *)(param_1 + 0x531c);
    *(int *)(param_1 + 0x1318) = *(int *)(param_1 + 0x1318) + -1;
  }
  return;
}
