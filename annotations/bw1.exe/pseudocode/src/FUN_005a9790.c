// Name: FUN_005a9790
// Address: 005a9790
// Address Range: [[005a9790, 005a989c]]
// Convention: unknown
// Signature: void FUN_005a9790(int param_1)

#include "nocturne.h"

void FUN_005a9790(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"modelName");
  FUN_0040b6f0(param_1 + 0x2d8,&DAT_005f918a);
  FUN_0040b6f0(param_1 + 0x2dc,"neutral");
  FUN_0040b440(param_1 + 0x2e0,"destroyedEvent");
  FUN_0040b6f0(param_1 + 0x3a8,"startLoc");
  FUN_0040b6f0(param_1 + 0x3ac,"endLoc");
  FUN_0040b670(param_1 + 0x3b8,"state");
  FUN_0040b5f0(param_1 + 0x3bc,"timer");
  if (1 < 0x00000004) {
    FUN_0040b440(param_1 + 0x344,"winEvent");
  }
  if (2 < 0x00000004) {
    FUN_0040b5f0(param_1 + 0x3b0,"eatDistance");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b670(param_1 + 0x3b4,"visualType");
  return;
}
