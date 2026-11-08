// Name: FUN_00411110
// Address: 00411110
// Address Range: [[00411110, 004111fd]]
// Convention: unknown
// Signature: void FUN_00411110(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411110(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b730(param_1 + 0x2b4,"courseFilename");
  FUN_0040b8e0(param_1 + 0x460,"param");
  if (0x00000004 < 3) {
    FUN_0040b8e0(param_1 + 0x468,"speed");
    *(float *)(param_1 + 0x464) = *(float *)(param_1 + 0x468) * (float)_DAT_005cb6de;
  }
  else {
    FUN_0040b8e0(param_1 + 0x468,"flapSpeedMult");
    FUN_0040b8e0(param_1 + 0x464,"courseSpeed");
  }
  if (1 < 0x00000004) {
    FUN_0040ba60(param_1 + 0x2e4,"modelName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b730(param_1 + 0x470,0);
  FUN_0040b8e0(param_1 + 0x4d4,"periodicSoundTimerMin");
  FUN_0040b8e0(param_1 + 0x4d8,"periodicSoundTimerMax");
  return;
}
