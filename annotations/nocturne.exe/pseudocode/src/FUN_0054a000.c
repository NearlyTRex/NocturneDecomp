// Name: FUN_0054a000
// Address: 0054a000
// Address Range: [[0054a000, 0054a10c]]
// Convention: unknown
// Signature: void FUN_0054a000(int param_1)

#include "nocturne.h"

void FUN_0054a000(int param_1)

{
  FUN_00554170(param_1);
  FUN_0040c4f0(param_1 + 0x570,"homeOrient");
  FUN_0040c900(param_1 + 0x6f8,"state");
  FUN_0040c6d0(param_1 + 0x6fc,"activateEvent");
  FUN_0040c880(param_1 + 0x760,"chargeTime");
  FUN_0040c880(param_1 + 0x764,"patrolTime");
  FUN_0040c880(param_1 + 0x768,"powerDownTime");
  FUN_0040c880(param_1 + 0x76c,"fireDelayTime");
  FUN_0040c880(param_1 + 0x774,"timer");
  FUN_0040c980(param_1 + 0x778,"guardZoneTriggerPtr");
  FUN_0040c6d0(param_1 + 0x77c,"allowedVictimTypes");
  FUN_0040c880(param_1 + 0x770,"rotateDegPerSec");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040c900(param_1 + 0x850,"canManualAim");
  return;
}
