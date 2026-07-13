// Name: FUN_004b96c0
// Address: 004b96c0
// Address Range: [[004b96c0, 004b9710]]
// Convention: unknown
// Signature: undefined4 FUN_004b96c0(int param_1)

#include "nocturne.h"

uint FUN_004b96c0(int param_1)

{
  uint uVar1;
  
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"@@speed" + 2);
  FUN_0040ca80(param_1 + 0x150,"modelName");
  uVar1 = FUN_0040cb00(param_1 + 0x150,"motion state");
  return uVar1;
}
