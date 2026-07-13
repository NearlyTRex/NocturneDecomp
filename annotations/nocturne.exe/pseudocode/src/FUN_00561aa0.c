// Name: FUN_00561aa0
// Address: 00561aa0
// Address Range: [[00561aa0, 00561be8]]
// Convention: unknown
// Signature: void FUN_00561aa0(int param_1)

#include "nocturne.h"

void FUN_00561aa0(int param_1)

{
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"speed");
  FUN_0040ca80(param_1 + 0x150,"modelName");
  if (1 < 0x0000000B) {
    if (0x0000000B < 0xb) {
      FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
    }
    FUN_0040cb00(param_1 + 0x150,"motion state");
  }
  if (2 < 0x0000000B) {
    FUN_0040cbf0(param_1 + 0x150,"partStatus");
    if (0x0000000B < 7) {
      FUN_0040c980(param_1 + 0x24f0,"carriedActor");
    }
  }
  if (3 < 0x0000000B) {
    FUN_0040c6d0(param_1 + 0xbd44,"riseFromGraveCondition");
  }
  if (4 < 0x0000000B) {
    FUN_0040c980(param_1 + 0xbd3c,"graveActor");
  }
  if ((5 < 0x0000000B) && (0x0000000B < 9)) {
    FUN_0040cf70(param_1 + 0x2a8c,"clothList");
  }
  if (7 < 0x0000000B) {
    FUN_0040c900(param_1 + 0xbda8,"isMinerZombie");
  }
  if (0x0000000B < 10) {
    return;
  }
  FUN_0040c900(param_1 + 0xbdac,"alwaysChaseFast");
  return;
}
