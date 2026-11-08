// Name: FUN_00569890
// Address: 00569890
// Address Range: [[00569890, 005698cc]]
// Convention: unknown
// Signature: void FUN_00569890(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00569890(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00569eb0(param_1,param_2,param_1 + 0xe80,*(uint *)(param_1 + 0x2324),
                       param_1 + 0x2140);
  FUN_00563cb0(uVar1);
  *(uint *)(param_1 + 0x2320) = param_2;
  return;
}
