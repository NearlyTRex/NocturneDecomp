// Name: FUN_0056b600
// Address: 0056b600
// Address Range: [[0056b600, 0056b747]]
// Convention: unknown
// Signature: void FUN_0056b600(int param_1)

#include "nocturne.h"

void FUN_0056b600(int param_1)

{
  FUN_004ce590(param_1);
  if ((1 < 0x00000009) && (0x00000009 < 5)) {
    FUN_0040b9e0(param_1 + 0x25608,"@objectToPickUp" + 1);
    FUN_0040b9e0(param_1 + 0x25604,"doorToOpen");
    FUN_0040b9e0(param_1 + 0x25610,"leverToPull");
    FUN_0040b9e0(param_1 + 0x25614,"ladderToClimb");
  }
  if (0x00000009 == 2) {
    FUN_0040b9e0(param_1 + 0x2620,"lhCarryObject");
    FUN_0040b9e0(param_1 + 0x2698,"rhCarryObject");
  }
  if (3 < 0x00000009) {
    FUN_0040b9e0(param_1 + 0x25694,"ladderToDescend");
  }
  if (5 < 0x00000009) {
    FUN_0040b960(param_1 + 0x25640,"gunsDrawn");
  }
  if (6 < 0x00000009) {
    FUN_0040b9e0(param_1 + 0x25698,"weapon");
  }
  if (7 < 0x00000009) {
    FUN_0040b960(param_1 + 0x256a4,"actionPending");
  }
  if (0x00000009 < 9) {
    return;
  }
  FUN_0040b960(param_1 + 0x2d04,"layerActionIndex");
  FUN_0040b8e0(param_1 + 0x2d08,"layerActionT");
  return;
}
