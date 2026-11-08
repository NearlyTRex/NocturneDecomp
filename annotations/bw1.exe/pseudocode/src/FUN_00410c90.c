// Name: FUN_00410c90
// Address: 00410c90
// Address Range: [[00410c90, 00410d7d]]
// Convention: unknown
// Signature: void FUN_00410c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410c90(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b440(param_1 + 0x158,"courseFilename");
  FUN_0040b5f0(param_1 + 0x304,"param");
  if (0x00000004 < 3) {
    FUN_0040b5f0(param_1 + 0x30c,"speed");
    *(float *)(param_1 + 0x308) = *(float *)(param_1 + 0x30c) * (float)_DAT_005d3649;
  }
  else {
    FUN_0040b5f0(param_1 + 0x30c,"flapSpeedMult");
    FUN_0040b5f0(param_1 + 0x308,"courseSpeed");
  }
  if (1 < 0x00000004) {
    FUN_0040b770(param_1 + 0x188,"modelName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b440(param_1 + 0x314,0);
  FUN_0040b5f0(param_1 + 0x378,"periodicSoundTimerMin");
  FUN_0040b5f0(param_1 + 0x37c,"periodicSoundTimerMax");
  return;
}
