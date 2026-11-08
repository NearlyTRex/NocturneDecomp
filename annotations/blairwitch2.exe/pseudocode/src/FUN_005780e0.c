// Name: FUN_005780e0
// Address: 005780e0
// Address Range: [[005780e0, 00578394]]
// Convention: unknown
// Signature: void FUN_005780e0(int param_1)

#include "nocturne.h"

void FUN_005780e0(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b960(param_1 + 0x2c8,"?triggerState" + 1);
  FUN_0040b4b0(param_1 + 700,"triggerSize");
  FUN_0040b960(param_1 + 0x2b8,"triggerType");
  FUN_0040b730(param_1 + 0x380,"onName");
  FUN_0040b730(param_1 + 0x3e4,"offName");
  if (0x0000000C < 7) {
    if (1 < 0x0000000C) {
      FUN_0040b960(param_1 + 0x2d0,"whoTriggers");
      FUN_0040b730(param_1 + 0x2d4,"actorTriggerName");
    }
    if (2 < 0x0000000C) {
      FUN_0040b8e0(param_1 + 0x378,"lightMin");
      FUN_0040b8e0(param_1 + 0x37c,"lightMax");
    }
    if ((3 < 0x0000000C) && (*(int *)(param_1 + 0x2d0) == 5)) {
      FUN_0040b960(param_1 + 0x450,"laserType");
    }
    if (4 < 0x0000000C) {
      if (*(int *)(param_1 + 0x2d0) == 1) {
        FUN_0040b730(param_1 + 0x324,"actorTriggerTypes");
      }
      if (*(int *)(param_1 + 0x2d0) == 7) {
        FUN_0040b8e0(param_1 + 0x454,"hitPoints");
      }
    }
    if (5 < 0x0000000C) {
      FUN_0040b960(param_1 + 0x374,"pressurePlate");
      return;
    }
  }
  else {
    FUN_0040b960(param_1 + 0x2d0,"whoTriggers");
    FUN_0040b730(param_1 + 0x2d4,"actorTriggerName");
    FUN_0040b730(param_1 + 0x324,"actorTriggerTypes");
    FUN_0040b8e0(param_1 + 0x378,"lightMin");
    FUN_0040b8e0(param_1 + 0x37c,"lightMax");
    FUN_0040b960(param_1 + 0x450,"laserType");
    FUN_0040b8e0(param_1 + 0x454,"hitPoints");
    FUN_0040b960(param_1 + 0x374,"pressurePlate");
    if (0x0000000C < 8) {
      FUN_00578650(param_1);
    }
    else {
      FUN_0040b8e0(param_1 + 0x2b4,"testRadius");
    }
    if (8 < 0x0000000C) {
      FUN_0040b960(param_1 + 0x460,"autoAimAtMe");
    }
    if (9 < 0x0000000C) {
      FUN_0040b960(param_1 + 0x2cc,"shape");
    }
    if (10 < 0x0000000C) {
      FUN_0040b730(param_1 + 0x464,"damageActorWildcard");
    }
    if (0xb < 0x0000000C) {
      FUN_0040b9e0(param_1 + 0x458,"hiliteActor");
      return;
    }
  }
  return;
}
