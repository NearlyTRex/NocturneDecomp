// Name: FUN_0040ef20
// Address: 0040ef20
// Address Range: [[0040ef20, 0040f00d]]
// Convention: unknown
// Signature: void FUN_0040ef20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ef20(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b680(param_1 + 0x158,"courseFilename");
  FUN_0040b830(param_1 + 0x304,"param");
  if (0x00000004 < 3) {
    FUN_0040b830(param_1 + 0x30c,"speed");
    *(float *)(param_1 + 0x308) = *(float *)(param_1 + 0x30c) * (float)_DAT_005b62a6;
  }
  else {
    FUN_0040b830(param_1 + 0x30c,"flapSpeedMult");
    FUN_0040b830(param_1 + 0x308,"courseSpeed");
  }
  if (1 < 0x00000004) {
    FUN_0040b9b0(param_1 + 0x188,"modelName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b680(param_1 + 0x314,0);
  FUN_0040b830(param_1 + 0x378,"periodicSoundTimerMin");
  FUN_0040b830(param_1 + 0x37c,"periodicSoundTimerMax");
  return;
}
