// Name: FUN_005a2bf0
// Address: 005a2bf0
// Address Range: [[005a2bf0, 005a2cfc]]
// Convention: unknown
// Signature: void FUN_005a2bf0(int param_1)

#include "nocturne.h"

void FUN_005a2bf0(int param_1)

{
  FUN_005ad8b0(param_1);
  FUN_0040b260(param_1 + 0x578,"homeOrient");
  FUN_0040b670(param_1 + 0x700,"state");
  FUN_0040b440(param_1 + 0x704,"activateEvent");
  FUN_0040b5f0(param_1 + 0x768,"chargeTime");
  FUN_0040b5f0(param_1 + 0x76c,"patrolTime");
  FUN_0040b5f0(param_1 + 0x770,"powerDownTime");
  FUN_0040b5f0(param_1 + 0x774,"fireDelayTime");
  FUN_0040b5f0(param_1 + 0x77c,"timer");
  FUN_0040b6f0(param_1 + 0x780,"guardZoneTriggerPtr");
  FUN_0040b440(param_1 + 0x784,"allowedVictimTypes");
  FUN_0040b5f0(param_1 + 0x778,"rotateDegPerSec");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b670(param_1 + 0x858,"canManualAim");
  return;
}
