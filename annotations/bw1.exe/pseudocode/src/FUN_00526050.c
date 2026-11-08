// Name: FUN_00526050
// Address: 00526050
// Address Range: [[00526050, 005260a6]]
// Convention: unknown
// Signature: void FUN_00526050(int param_1,int param_2)

#include "nocturne.h"

void FUN_00526050(int param_1,int param_2)

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
