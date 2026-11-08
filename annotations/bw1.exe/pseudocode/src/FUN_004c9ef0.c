// Name: FUN_004c9ef0
// Address: 004c9ef0
// Address Range: [[004c9ef0, 004c9f92]]
// Convention: unknown
// Signature: void FUN_004c9ef0(int param_1)

#include "nocturne.h"

void FUN_004c9ef0(int param_1)

{
  FUN_004eab00(param_1);
  if ((1 < 0x00000003) && (0x00000003 < 4)) {
    FUN_0040b6f0(param_1 + 0x1ff78,"?objectToPickUp" + 1);
    FUN_0040b6f0(param_1 + 0x1ff74,"doorToOpen");
    FUN_0040b6f0(param_1 + 0x1ff80,"leverToPull");
    FUN_0040b6f0(param_1 + 0x1ff84,"ladderToClimb");
  }
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040b6f0(param_1 + 0x25b0,"lhCarryObject");
  FUN_0040b6f0(param_1 + 0x2628,"rhCarryObject");
  return;
}
