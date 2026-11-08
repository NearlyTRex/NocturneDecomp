// Name: FUN_0058e240
// Address: 0058e240
// Address Range: [[0058e240, 0058e387]]
// Convention: unknown
// Signature: void FUN_0058e240(int param_1)

#include "nocturne.h"

void FUN_0058e240(int param_1)

{
  FUN_004eab00(param_1);
  if ((1 < 0x00000009) && (0x00000009 < 5)) {
    FUN_0040b6f0(param_1 + 0x1ff78,"@objectToPickUp" + 1);
    FUN_0040b6f0(param_1 + 0x1ff74,"doorToOpen");
    FUN_0040b6f0(param_1 + 0x1ff80,"leverToPull");
    FUN_0040b6f0(param_1 + 0x1ff84,"ladderToClimb");
  }
  if (0x00000009 == 2) {
    FUN_0040b6f0(param_1 + 0x25b0,"lhCarryObject");
    FUN_0040b6f0(param_1 + 0x2628,"rhCarryObject");
  }
  if (3 < 0x00000009) {
    FUN_0040b6f0(param_1 + 0x20000,"ladderToDescend");
  }
  if (5 < 0x00000009) {
    FUN_0040b670(param_1 + 0x1ffac,"gunsDrawn");
  }
  if (6 < 0x00000009) {
    FUN_0040b6f0(param_1 + 0x20004,"weapon");
  }
  if (7 < 0x00000009) {
    FUN_0040b670(param_1 + 0x1ff5c,"actionPending");
  }
  if (0x00000009 < 9) {
    return;
  }
  FUN_0040b670(param_1 + 0x2c98,"layerActionIndex");
  FUN_0040b5f0(param_1 + 0x2c9c,"layerActionT");
  return;
}
