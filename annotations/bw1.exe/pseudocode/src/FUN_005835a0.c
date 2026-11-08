// Name: FUN_005835a0
// Address: 005835a0
// Address Range: [[005835a0, 005836ef]]
// Convention: unknown
// Signature: void FUN_005835a0(int param_1)

#include "nocturne.h"

void FUN_005835a0(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,">modelName" + 1);
  FUN_0040b670(param_1 + 0x2d4,"spikeType");
  FUN_0040b670(param_1 + 0x2d8,"spikeState");
  FUN_0040b670(param_1 + 0x2dc,"areWeActive");
  FUN_0040b5f0(param_1 + 0x2ec,"extendDistance");
  FUN_0040b440(param_1 + 0x2f0,"startEvent");
  FUN_0040b440(param_1 + 0x354,"stopEvent");
  FUN_0040b440(param_1 + 0x3b8,"extendEvent");
  FUN_0040b440(param_1 + 0x41c,"retractEvent");
  FUN_0040b5f0(param_1 + 0x480,"extendTime");
  FUN_0040b5f0(param_1 + 0x484,"retractTime");
  FUN_0040b440(param_1 + 0x48c,"extendSound");
  FUN_0040b440(param_1 + 0x4f0,"retractSound");
  FUN_0040b5f0(param_1 + 0x554,"period");
  FUN_0040b5f0(param_1 + 0x558,"damageStrength");
  FUN_0040b5f0(param_1 + 0x55c,"param");
  return;
}
