// Name: FUN_004a8270
// Address: 004a8270
// Address Range: [[004a8270, 004a8315]]
// Convention: unknown
// Signature: void FUN_004a8270(int param_1)

#include "nocturne.h"

void FUN_004a8270(int param_1)

{
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"@@speed" + 2);
  FUN_0040ca80(param_1 + 0x150,"modelName");
  FUN_0040cb00(param_1 + 0x150,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040c900(param_1 + 0xbd54,"stoneRed");
  FUN_0040c900(param_1 + 0xbd58,"stoneGreen");
  FUN_0040c900(param_1 + 0xbd5c,"stoneBlue");
  FUN_0040c980(param_1 + 0xbd60,"homeBase");
  return;
}
