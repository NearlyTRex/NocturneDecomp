// Name: FUN_004b0fb0
// Address: 004b0fb0
// Address Range: [[004b0fb0, 004b1052]]
// Convention: unknown
// Signature: void FUN_004b0fb0(int param_1)

#include "nocturne.h"

void FUN_004b0fb0(int param_1)

{
  FUN_004ce590(param_1);
  if ((1 < 0x00000003) && (0x00000003 < 4)) {
    FUN_0040b9e0(param_1 + 0x25608,"?objectToPickUp" + 1);
    FUN_0040b9e0(param_1 + 0x25604,"doorToOpen");
    FUN_0040b9e0(param_1 + 0x25610,"leverToPull");
    FUN_0040b9e0(param_1 + 0x25614,"ladderToClimb");
  }
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040b9e0(param_1 + 0x2620,"lhCarryObject");
  FUN_0040b9e0(param_1 + 0x2698,"rhCarryObject");
  return;
}
