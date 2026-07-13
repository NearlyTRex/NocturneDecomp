// Name: FUN_00498c10
// Address: 00498c10
// Address Range: [[00498c10, 00498cb2]]
// Convention: unknown
// Signature: void FUN_00498c10(int param_1)

#include "nocturne.h"

void FUN_00498c10(int param_1)

{
  FUN_004b49a0(param_1);
  if ((1 < 0x00000003) && (0x00000003 < 4)) {
    FUN_0040c980(param_1 + 0x1fa08,"?objectToPickUp" + 1);
    FUN_0040c980(param_1 + 0x1fa04,"doorToOpen");
    FUN_0040c980(param_1 + 0x1fa10,"leverToPull");
    FUN_0040c980(param_1 + 0x1fa14,"ladderToClimb");
  }
  if (0x00000003 != 2) {
    return;
  }
  FUN_0040c980(param_1 + 0x24ac,"lhCarryObject");
  FUN_0040c980(param_1 + 0x24f0,"rhCarryObject");
  return;
}
