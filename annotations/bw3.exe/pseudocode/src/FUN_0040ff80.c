// Name: FUN_0040ff80
// Address: 0040ff80
// Address Range: [[0040ff80, 00410020]]
// Convention: unknown
// Signature: void FUN_0040ff80(int param_1)

#include "nocturne.h"

void FUN_0040ff80(int param_1)

{
  if (1 < 0x00000001) {
    FUN_0042b450(param_1);
    return;
  }
  FUN_0040c280(param_1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  FUN_0040b830(param_1 + 0x2538,"hitPoints");
  FUN_0040b8b0(param_1 + 0x206a8,"shootMe");
  FUN_0040b8b0(param_1 + 0x206ac,"poolMe");
  FUN_0040b830(param_1 + 0x206b0,"speed");
  FUN_0042b450(param_1);
  return;
}
