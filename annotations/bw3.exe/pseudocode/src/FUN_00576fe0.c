// Name: FUN_00576fe0
// Address: 00576fe0
// Address Range: [[00576fe0, 005770ec]]
// Convention: unknown
// Signature: void FUN_00576fe0(int param_1)

#include "nocturne.h"

void FUN_00576fe0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"modelName");
  FUN_0040b930(param_1 + 0x2d8,&DAT_005d70f3);
  FUN_0040b930(param_1 + 0x2dc,"neutral");
  FUN_0040b680(param_1 + 0x2e0,"destroyedEvent");
  FUN_0040b930(param_1 + 0x3a8,"startLoc");
  FUN_0040b930(param_1 + 0x3ac,"endLoc");
  FUN_0040b8b0(param_1 + 0x3b8,"state");
  FUN_0040b830(param_1 + 0x3bc,"timer");
  if (1 < 0x00000004) {
    FUN_0040b680(param_1 + 0x344,"winEvent");
  }
  if (2 < 0x00000004) {
    FUN_0040b830(param_1 + 0x3b0,"eatDistance");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x3b4,"visualType");
  return;
}
