// Name: FUN_00415160
// Address: 00415160
// Address Range: [[00415160, 004151a7]]
// Convention: unknown
// Signature: void FUN_00415160(int param_1)

#include "nocturne.h"

void FUN_00415160(int param_1)

{
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"speed");
  FUN_0040ca80(param_1 + 0x150,"modelName");
  FUN_0040cb00(param_1 + 0x150,"motion state");
  return;
}
