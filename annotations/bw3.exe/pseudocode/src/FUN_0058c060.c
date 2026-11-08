// Name: FUN_0058c060
// Address: 0058c060
// Address Range: [[0058c060, 0058c1d9]]
// Convention: unknown
// Signature: void FUN_0058c060(int param_1)

#include "nocturne.h"

void FUN_0058c060(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"speed");
  FUN_0040ba30(param_1 + 0x158,"modelName");
  if (1 < 0x0000000C) {
    if (0x0000000C < 0xb) {
      FUN_0040b830(param_1 + 0xcddc,"guardDistance");
    }
    FUN_0040bab0(param_1 + 0x158,"motion state");
  }
  if (2 < 0x0000000C) {
    FUN_0040bba0(param_1 + 0x158,"partStatus");
    if (0x0000000C < 7) {
      FUN_0040b930(param_1 + 0x2628,"carriedActor");
    }
  }
  if (3 < 0x0000000C) {
    FUN_0040b680(param_1 + 0xd074,"riseFromGraveCondition");
  }
  if (4 < 0x0000000C) {
    FUN_0040b930(param_1 + 0xd06c,"graveActor");
  }
  if ((5 < 0x0000000C) && (0x0000000C < 9)) {
    FUN_0040bf20(param_1 + 0x2f08,"clothList");
  }
  if (7 < 0x0000000C) {
    FUN_0040b8b0(param_1 + 0xd0d8,"isMinerZombie");
  }
  if (9 < 0x0000000C) {
    FUN_0040b8b0(param_1 + 0xd0dc,"alwaysChaseFast");
  }
  if (0x0000000C < 0xc) {
    return;
  }
  FUN_0040b830(param_1 + 0xd0e4,"startGuardDist");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  return;
}
