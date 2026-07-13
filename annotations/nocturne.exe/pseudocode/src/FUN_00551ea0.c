// Name: FUN_00551ea0
// Address: 00551ea0
// Address Range: [[00551ea0, 00552091]]
// Convention: unknown
// Signature: void FUN_00551ea0(int param_1)

#include "nocturne.h"

void FUN_00551ea0(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c450(param_1 + 0x150,&DAT_0059766f);
  FUN_0040c900(param_1 + 0x15c,"opacity");
  if (0x00000006 == 2) {
    FUN_0040c880(param_1 + 0x160,"heightDelta");
    FUN_0040c880(param_1 + 0x164,"timeToMove");
    FUN_0040c6d0(param_1 + 0x16c,"moveSound");
    FUN_0040c6d0(param_1 + 0x1ac,"moveEvent");
    FUN_0040c880(param_1 + 0x274,"param");
  }
  if (2 < 0x00000006) {
    FUN_0040c880(param_1 + 0x160,"heightDelta");
    FUN_0040c880(param_1 + 0x164,"timeToMoveUp");
    FUN_0040c880(param_1 + 0x168,"timeToMoveDown");
    FUN_0040c6d0(param_1 + 0x16c,"moveUpSound");
    FUN_0040c6d0(param_1 + 0x18c,"moveDownSound");
    FUN_0040c6d0(param_1 + 0x1ac,"moveUpEvent");
    FUN_0040c6d0(param_1 + 0x210,"moveDownEvent");
    FUN_0040c880(param_1 + 0x274,"param");
    FUN_0040c900(param_1 + 0x278,"state");
  }
  if (3 < 0x00000006) {
    FUN_0040c880(param_1 + 0x27c,"patchSize");
  }
  if (4 < 0x00000006) {
    FUN_0040c900(param_1 + 0x280,"roundFlag");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040c900(param_1 + 0x284,&DAT_00597729);
  FUN_0040c900(param_1 + 0x288,&DAT_0059772e);
  FUN_0040c900(param_1 + 0x28c,&DAT_00597733);
  return;
}
