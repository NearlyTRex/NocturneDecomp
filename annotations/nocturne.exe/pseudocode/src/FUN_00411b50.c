// Name: FUN_00411b50
// Address: 00411b50
// Address Range: [[00411b50, 00411c3d]]
// Convention: unknown
// Signature: void FUN_00411b50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411b50(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c6d0(param_1 + 0x150,"courseFilename");
  FUN_0040c880(param_1 + 0x2fc,"param");
  if (0x00000004 < 3) {
    FUN_0040c880(param_1 + 0x304,"speed");
    *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x304) * (float)_DAT_005787ff;
  }
  else {
    FUN_0040c880(param_1 + 0x304,"flapSpeedMult");
    FUN_0040c880(param_1 + 0x300,"courseSpeed");
  }
  if (1 < 0x00000004) {
    FUN_0040ca00(param_1 + 0x180,"modelName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040c6d0(param_1 + 0x30c,0);
  FUN_0040c880(param_1 + 0x370,"periodicSoundTimerMin");
  FUN_0040c880(param_1 + 0x374,"periodicSoundTimerMax");
  return;
}
