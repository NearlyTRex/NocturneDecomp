// Name: FUN_004dc180
// Address: 004dc180
// Address Range: [[004dc180, 004dc2a7]]
// Convention: unknown
// Signature: void FUN_004dc180(int param_1)

#include "nocturne.h"

void FUN_004dc180(int param_1)

{
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"?speed" + 1);
  FUN_0040ca80(param_1 + 0x150,"modelName");
  if (0x00000007 < 4) {
    FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  FUN_0040cb00(param_1 + 0x150,"motion state");
  if (0x00000007 == 2) {
    FUN_0040cf70(param_1 + 0x2a8c,"clothList");
  }
  if (4 < 0x00000007) {
    FUN_0040c900(param_1 + 0xbd40,"postMode");
    FUN_0040c980(param_1 + 0xbd44,"ourPost");
  }
  if (5 < 0x00000007) {
    FUN_0040c980(param_1 + 0xbd48,"vehicle");
    FUN_0040c900(param_1 + 0xbd4c,"sideOfCar");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040c900(param_1 + 0xbd50,"holdPosFlag");
  FUN_0040c6d0(param_1 + 0xbd54,"holdPosCond");
  return;
}
