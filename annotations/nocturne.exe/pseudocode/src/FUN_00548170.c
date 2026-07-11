// Name: FUN_00548170
// Address: 00548170
// Address Range: [[00548170, 00548400]]
// Convention: unknown
// Signature: void FUN_00548170(int param_1)

#include "nocturne.h"

void FUN_00548170(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c900(param_1 + 0x164,"?triggerState" + 1);
  FUN_0040c450(param_1 + 0x158,"triggerSize");
  FUN_0040c900(param_1 + 0x154,"triggerType");
  FUN_0040c6d0(param_1 + 0x21c,"onName");
  FUN_0040c6d0(param_1 + 0x280,"offName");
  if (0x0000000B < 7) {
    if (1 < 0x0000000B) {
      FUN_0040c900(param_1 + 0x16c,"whoTriggers");
      FUN_0040c6d0(param_1 + 0x170,"actorTriggerName");
    }
    if (2 < 0x0000000B) {
      FUN_0040c880(param_1 + 0x214,"lightMin");
      FUN_0040c880(param_1 + 0x218,"lightMax");
    }
    if ((3 < 0x0000000B) && (*(int *)(param_1 + 0x16c) == 5)) {
      FUN_0040c900(param_1 + 0x2ec,"laserType");
    }
    if (4 < 0x0000000B) {
      if (*(int *)(param_1 + 0x16c) == 1) {
        FUN_0040c6d0(param_1 + 0x1c0,"actorTriggerTypes");
      }
      if (*(int *)(param_1 + 0x16c) == 7) {
        FUN_0040c880(param_1 + 0x2f0,"hitPoints");
      }
    }
    if (5 < 0x0000000B) {
      FUN_0040c900(param_1 + 0x210,"pressurePlate");
      return;
    }
  }
  else {
    FUN_0040c900(param_1 + 0x16c,"whoTriggers");
    FUN_0040c6d0(param_1 + 0x170,"actorTriggerName");
    FUN_0040c6d0(param_1 + 0x1c0,"actorTriggerTypes");
    FUN_0040c880(param_1 + 0x214,"lightMin");
    FUN_0040c880(param_1 + 0x218,"lightMax");
    FUN_0040c900(param_1 + 0x2ec,"laserType");
    FUN_0040c880(param_1 + 0x2f0,"hitPoints");
    FUN_0040c900(param_1 + 0x210,"pressurePlate");
    if (0x0000000B < 8) {
      FUN_00548680(param_1);
    }
    else {
      FUN_0040c880(param_1 + 0x150,"testRadius");
    }
    if (8 < 0x0000000B) {
      FUN_0040c900(param_1 + 0x2f8,"autoAimAtMe");
    }
    if (9 < 0x0000000B) {
      FUN_0040c900(param_1 + 0x168,"shape");
    }
    if (10 < 0x0000000B) {
      FUN_0040c6d0(param_1 + 0x2fc,"damageActorWildcard");
      return;
    }
  }
  return;
}
