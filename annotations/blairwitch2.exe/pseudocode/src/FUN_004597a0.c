// Name: FUN_004597a0
// Address: 004597a0
// Address Range: [[004597a0, 0045995f]]
// Convention: unknown
// Signature: void FUN_004597a0(int param_1)

#include "nocturne.h"

void FUN_004597a0(int param_1)

{
  byte auStack_10 [4];
  byte auStack_c [4];
  uint uStack_8;
  
  FUN_004ce590(param_1);
  if ((1 < 0x0000000B) && (0x0000000B < 5)) {
    FUN_0040b9e0(param_1 + 0x25608,"@objectToPickUp" + 1);
    FUN_0040b9e0(param_1 + 0x25604,"doorToOpen");
    FUN_0040b9e0(param_1 + 0x25610,"leverToPull");
    FUN_0040b9e0(param_1 + 0x25614,"ladderToClimb");
  }
  if (0x0000000B == 2) {
    FUN_0040b9e0(param_1 + 0x2620,"lhCarryObject");
    FUN_0040b9e0(param_1 + 0x2698,"rhCarryObject");
  }
  if (3 < 0x0000000B) {
    FUN_0040b9e0(param_1 + 0x25694,"ladderToDescend");
  }
  if (5 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x25640,"gunDrawn");
  }
  if (6 < 0x0000000B) {
    FUN_0040b9e0(param_1 + 0x25698,"weapon");
  }
  if (7 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x256a4,"actionPending");
  }
  if (8 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x2d04,"layerActionIndex");
    FUN_0040b8e0(param_1 + 0x2d08,"layerActionT");
  }
  if (0x0000000B < 10) {
    return;
  }
  uStack_8 = 0;
  FUN_0040b960(auStack_10,"lanternMode");
  FUN_0040b8e0(auStack_c,"lanternTweenPct");
  FUN_0040b9e0(&uStack_8,"LanternPointer");
  FUN_0040b730(param_1 + 0x257b0,"modelName");
  FUN_0040b730(param_1 + 0x258b0,"clothName");
  return;
}
