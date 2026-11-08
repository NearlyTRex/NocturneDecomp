// Name: FUN_00509800
// Address: 00509800
// Address Range: [[00509800, 005098ff]]
// Convention: unknown
// Signature: void FUN_00509800(int param_1)

#include "nocturne.h"

void FUN_00509800(int param_1)

{
  if (0x00000008 < 2) {
    FUN_0040c280(param_1);
    FUN_0040b830(param_1 + 0x2538,"hitPoints");
    return;
  }
  FUN_0042b450(param_1);
  if (2 < 0x00000008) {
    FUN_0040ba30(param_1 + 0x158,"modelName");
    FUN_0040bab0(param_1 + 0x158,"motion state");
  }
  if (3 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x206a8,"shootMe");
  }
  if (4 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x206ac,"poolMe");
  }
  if (5 < 0x00000008) {
    FUN_0040b830(param_1 + 0x206b0,"speed");
  }
  if (6 < 0x00000008) {
    FUN_0040b830(param_1 + 0x206c4,"fadeTime");
  }
  if (0x00000008 < 8) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x206bc,"startOpc");
  return;
}
