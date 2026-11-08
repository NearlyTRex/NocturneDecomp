// Name: FUN_00566e70
// Address: 00566e70
// Address Range: [[00566e70, 00566fbf]]
// Convention: unknown
// Signature: void FUN_00566e70(int param_1)

#include "nocturne.h"

void FUN_00566e70(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,">modelName" + 1);
  FUN_0040b8b0(param_1 + 0x2d4,"spikeType");
  FUN_0040b8b0(param_1 + 0x2d8,"spikeState");
  FUN_0040b8b0(param_1 + 0x2dc,"areWeActive");
  FUN_0040b830(param_1 + 0x2ec,"extendDistance");
  FUN_0040b680(param_1 + 0x2f0,"startEvent");
  FUN_0040b680(param_1 + 0x354,"stopEvent");
  FUN_0040b680(param_1 + 0x3b8,"extendEvent");
  FUN_0040b680(param_1 + 0x41c,"retractEvent");
  FUN_0040b830(param_1 + 0x480,"extendTime");
  FUN_0040b830(param_1 + 0x484,"retractTime");
  FUN_0040b680(param_1 + 0x48c,"extendSound");
  FUN_0040b680(param_1 + 0x4f0,"retractSound");
  FUN_0040b830(param_1 + 0x554,"period");
  FUN_0040b830(param_1 + 0x558,"damageStrength");
  FUN_0040b830(param_1 + 0x55c,"param");
  return;
}
