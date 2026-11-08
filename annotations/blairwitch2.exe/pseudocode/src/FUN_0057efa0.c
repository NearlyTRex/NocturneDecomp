// Name: FUN_0057efa0
// Address: 0057efa0
// Address Range: [[0057efa0, 0057f0ac]]
// Convention: unknown
// Signature: void FUN_0057efa0(int param_1)

#include "nocturne.h"

void FUN_0057efa0(int param_1)

{
  FUN_00589d60(param_1);
  FUN_0040b550(param_1 + 0x6d4,"homeOrient");
  FUN_0040b960(param_1 + 0x85c,"state");
  FUN_0040b730(param_1 + 0x860,"activateEvent");
  FUN_0040b8e0(param_1 + 0x8c4,"chargeTime");
  FUN_0040b8e0(param_1 + 0x8c8,"patrolTime");
  FUN_0040b8e0(param_1 + 0x8cc,"powerDownTime");
  FUN_0040b8e0(param_1 + 0x8d0,"fireDelayTime");
  FUN_0040b8e0(param_1 + 0x8d8,"timer");
  FUN_0040b9e0(param_1 + 0x8dc,"guardZoneTriggerPtr");
  FUN_0040b730(param_1 + 0x8e0,"allowedVictimTypes");
  FUN_0040b8e0(param_1 + 0x8d4,"rotateDegPerSec");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b960(param_1 + 0x9b4,"canManualAim");
  return;
}
