// Name: FUN_00585b60
// Address: 00585b60
// Address Range: [[00585b60, 00585c6c]]
// Convention: unknown
// Signature: void FUN_00585b60(int param_1)

#include "nocturne.h"

void FUN_00585b60(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"modelName");
  FUN_0040b9e0(param_1 + 0x434,&DAT_005ede2e);
  FUN_0040b9e0(param_1 + 0x438,"neutral");
  FUN_0040b730(param_1 + 0x43c,"destroyedEvent");
  FUN_0040b9e0(param_1 + 0x504,"startLoc");
  FUN_0040b9e0(param_1 + 0x508,"endLoc");
  FUN_0040b960(param_1 + 0x514,"state");
  FUN_0040b8e0(param_1 + 0x518,"timer");
  if (1 < 0x00000004) {
    FUN_0040b730(param_1 + 0x4a0,"winEvent");
  }
  if (2 < 0x00000004) {
    FUN_0040b8e0(param_1 + 0x50c,"eatDistance");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b960(param_1 + 0x510,"visualType");
  return;
}
