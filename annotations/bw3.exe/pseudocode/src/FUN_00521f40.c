// Name: FUN_00521f40
// Address: 00521f40
// Address Range: [[00521f40, 00522087]]
// Convention: unknown
// Signature: void FUN_00521f40(int param_1)

#include "nocturne.h"

void FUN_00521f40(int param_1)

{
  FUN_004d27b0(param_1);
  if ((1 < 0x00000001) && (0x00000001 < 5)) {
    FUN_0040b930(param_1 + 0x20b98,"@objectToPickUp" + 1);
    FUN_0040b930(param_1 + 0x20b94,"doorToOpen");
    FUN_0040b930(param_1 + 0x20ba0,"leverToPull");
    FUN_0040b930(param_1 + 0x20ba4,"ladderToClimb");
  }
  if (0x00000001 == 2) {
    FUN_0040b930(param_1 + 0x25b0,"lhCarryObject");
    FUN_0040b930(param_1 + 0x2628,"rhCarryObject");
  }
  if (3 < 0x00000001) {
    FUN_0040b930(param_1 + 0x20c20,"ladderToDescend");
  }
  if (5 < 0x00000001) {
    FUN_0040b8b0(param_1 + 0x20bcc,"gunsDrawn");
  }
  if (6 < 0x00000001) {
    FUN_0040b930(param_1 + 0x20c24,"weapon");
  }
  if (7 < 0x00000001) {
    FUN_0040b8b0(param_1 + 0x20b64,"actionPending");
  }
  if (0x00000001 < 9) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x2f00,"layerActionIndex");
  FUN_0040b830(param_1 + 0x2f04,"layerActionT");
  return;
}
