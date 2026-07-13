// Name: FUN_00415870
// Address: 00415870
// Address Range: [[00415870, 004158f3]]
// Convention: unknown
// Signature: void FUN_00415870(int param_1)

#include "nocturne.h"

void FUN_00415870(int param_1)

{
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"@@speed" + 2);
  FUN_0040ca80(param_1 + 0x150,"modelName");
  FUN_0040cb00(param_1 + 0x150,"motion state");
  FUN_0040c900(param_1 + 0xbea0,"morphing");
  FUN_0040c880(param_1 + 0xbea4,"morphTimer");
  FUN_0040c6d0(param_1 + 0xcad4,"morphEvent");
  return;
}
