// Name: FUN_00599160
// Address: 00599160
// Address Range: [[00599160, 005992a8]]
// Convention: unknown
// Signature: void FUN_00599160(int param_1)

#include "nocturne.h"

void FUN_00599160(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"speed");
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if (1 < 0x0000000B) {
    if (0x0000000B < 0xb) {
      FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
    }
    FUN_0040bb60(param_1 + 0x2b4,"motion state");
  }
  if (2 < 0x0000000B) {
    FUN_0040bc50(param_1 + 0x2b4,"partStatus");
    if (0x0000000B < 7) {
      FUN_0040b9e0(param_1 + 0x2698,"carriedActor");
    }
  }
  if (3 < 0x0000000B) {
    FUN_0040b730(param_1 + 0x10b18,"riseFromGraveCondition");
  }
  if (4 < 0x0000000B) {
    FUN_0040b9e0(param_1 + 0x10b10,"graveActor");
  }
  if ((5 < 0x0000000B) && (0x0000000B < 9)) {
    FUN_0040bfd0(param_1 + 0x2d0c,"clothList");
  }
  if (7 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x10b7c,"isMinerZombie");
  }
  if (0x0000000B < 10) {
    return;
  }
  FUN_0040b960(param_1 + 0x10b80,"alwaysChaseFast");
  return;
}
