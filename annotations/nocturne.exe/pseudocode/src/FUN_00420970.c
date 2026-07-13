// Name: FUN_00420970
// Address: 00420970
// Address Range: [[00420970, 004209f7]]
// Convention: unknown
// Signature: void FUN_00420970(int param_1)

#include "nocturne.h"

void FUN_00420970(int param_1)

{
  FUN_004796c0(param_1);
  if (0x00000004 < 2) {
    FUN_0040c880(param_1 + 0xbc8c,"@@speed" + 2);
  }
  FUN_0040ca80(param_1 + 0x150,"modelName");
  if ((1 < 0x00000004) && (0x00000004 < 4)) {
    FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  if (0x00000004 < 3) {
    return;
  }
  FUN_0040cb00(param_1 + 0x150,"state");
  return;
}
