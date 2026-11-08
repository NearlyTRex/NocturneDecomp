// Name: FUN_00580450
// Address: 00580450
// Address Range: [[00580450, 005804b4]]
// Convention: unknown
// Signature: void FUN_00580450(int param_1)

#include "nocturne.h"

void FUN_00580450(int param_1)

{
  uint uVar1;
  
  FUN_0044fd00(param_1 + 0x10afc);
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0x25a8) = 0x41200000;
  *(uint *)(param_1 + 0x10d2c) = 0;
  *(uint *)(param_1 + 0x10d24) = 0;
  uVar1 = FUN_0040cf60(*(uint *)(param_1 + 0x10d1c),*(uint *)(param_1 + 0x10d20));
  *(uint *)(param_1 + 0x10d28) = uVar1;
  return;
}
