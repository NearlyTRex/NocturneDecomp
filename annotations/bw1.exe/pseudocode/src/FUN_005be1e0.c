// Name: FUN_005be1e0
// Address: 005be1e0
// Address Range: [[005be1e0, 005be328]]
// Convention: unknown
// Signature: void FUN_005be1e0(int param_1)

#include "nocturne.h"

void FUN_005be1e0(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if (1 < 0x0000000B) {
    if (0x0000000B < 0xb) {
      FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
    }
    FUN_0040b870(param_1 + 0x158,"motion state");
  }
  if (2 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x158,"partStatus");
    if (0x0000000B < 7) {
      FUN_0040b6f0(param_1 + 0x2628,"carriedActor");
    }
  }
  if (3 < 0x0000000B) {
    FUN_0040b440(param_1 + 0xc288,"riseFromGraveCondition");
  }
  if (4 < 0x0000000B) {
    FUN_0040b6f0(param_1 + 0xc280,"graveActor");
  }
  if ((5 < 0x0000000B) && (0x0000000B < 9)) {
    FUN_0040bce0(param_1 + 0x2ca0,"clothList");
  }
  if (7 < 0x0000000B) {
    FUN_0040b670(param_1 + 0xc2ec,"isMinerZombie");
  }
  if (0x0000000B < 10) {
    return;
  }
  FUN_0040b670(param_1 + 0xc2f0,"alwaysChaseFast");
  return;
}
