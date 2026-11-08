// Name: FUN_0059b950
// Address: 0059b950
// Address Range: [[0059b950, 0059bc04]]
// Convention: unknown
// Signature: void FUN_0059b950(int param_1)

#include "nocturne.h"

void FUN_0059b950(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b670(param_1 + 0x16c,"?triggerState" + 1);
  FUN_0040b1c0(param_1 + 0x160,"triggerSize");
  FUN_0040b670(param_1 + 0x15c,"triggerType");
  FUN_0040b440(param_1 + 0x224,"onName");
  FUN_0040b440(param_1 + 0x288,"offName");
  if (0x0000000D < 7) {
    if (1 < 0x0000000D) {
      FUN_0040b670(param_1 + 0x174,"whoTriggers");
      FUN_0040b440(param_1 + 0x178,"actorTriggerName");
    }
    if (2 < 0x0000000D) {
      FUN_0040b5f0(param_1 + 0x21c,"lightMin");
      FUN_0040b5f0(param_1 + 0x220,"lightMax");
    }
    if ((3 < 0x0000000D) && (*(int *)(param_1 + 0x174) == 5)) {
      FUN_0040b670(param_1 + 0x2f4,"laserType");
    }
    if (4 < 0x0000000D) {
      if (*(int *)(param_1 + 0x174) == 1) {
        FUN_0040b440(param_1 + 0x1c8,"actorTriggerTypes");
      }
      if (*(int *)(param_1 + 0x174) == 7) {
        FUN_0040b5f0(param_1 + 0x2f8,"hitPoints");
      }
    }
    if (5 < 0x0000000D) {
      FUN_0040b670(param_1 + 0x218,"pressurePlate");
      return;
    }
  }
  else {
    FUN_0040b670(param_1 + 0x174,"whoTriggers");
    FUN_0040b440(param_1 + 0x178,"actorTriggerName");
    FUN_0040b440(param_1 + 0x1c8,"actorTriggerTypes");
    FUN_0040b5f0(param_1 + 0x21c,"lightMin");
    FUN_0040b5f0(param_1 + 0x220,"lightMax");
    FUN_0040b670(param_1 + 0x2f4,"laserType");
    FUN_0040b5f0(param_1 + 0x2f8,"hitPoints");
    FUN_0040b670(param_1 + 0x218,"pressurePlate");
    if (0x0000000D < 8) {
      FUN_0059bee0(param_1);
    }
    else {
      FUN_0040b5f0(param_1 + 0x158,"testRadius");
    }
    if (8 < 0x0000000D) {
      FUN_0040b670(param_1 + 0x304,"autoAimAtMe");
    }
    if (9 < 0x0000000D) {
      FUN_0040b670(param_1 + 0x170,"shape");
    }
    if (10 < 0x0000000D) {
      FUN_0040b440(param_1 + 0x308,"damageActorWildcard");
    }
    if (0xb < 0x0000000D) {
      FUN_0040b6f0(param_1 + 0x2fc,"hiliteActor");
      return;
    }
  }
  return;
}
