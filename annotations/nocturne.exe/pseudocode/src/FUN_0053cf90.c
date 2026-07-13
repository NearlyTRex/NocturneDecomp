// Name: FUN_0053cf90
// Address: 0053cf90
// Address Range: [[0053cf90, 0053d0d7]]
// Convention: unknown
// Signature: void FUN_0053cf90(int param_1)

#include "nocturne.h"

void FUN_0053cf90(int param_1)

{
  FUN_004b49a0(param_1);
  if ((1 < 0x00000009) && (0x00000009 < 5)) {
    FUN_0040c980(param_1 + 0x1fa08,"@objectToPickUp" + 1);
    FUN_0040c980(param_1 + 0x1fa04,"doorToOpen");
    FUN_0040c980(param_1 + 0x1fa10,"leverToPull");
    FUN_0040c980(param_1 + 0x1fa14,"ladderToClimb");
  }
  if (0x00000009 == 2) {
    FUN_0040c980(param_1 + 0x24ac,"lhCarryObject");
    FUN_0040c980(param_1 + 0x24f0,"rhCarryObject");
  }
  if (3 < 0x00000009) {
    FUN_0040c980(param_1 + 0x1fa90,"ladderToDescend");
  }
  if (5 < 0x00000009) {
    FUN_0040c900(param_1 + 0x1fa3c,"gunsDrawn");
  }
  if (6 < 0x00000009) {
    FUN_0040c980(param_1 + 0x1fa94,"weapon");
  }
  if (7 < 0x00000009) {
    FUN_0040c900(param_1 + 0x1faa0,"actionPending");
  }
  if (0x00000009 < 9) {
    return;
  }
  FUN_0040c900(param_1 + 0x2a84,"layerActionIndex");
  FUN_0040c880(param_1 + 0x2a88,"layerActionT");
  return;
}
