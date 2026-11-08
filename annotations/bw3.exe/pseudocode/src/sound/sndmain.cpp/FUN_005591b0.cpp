// Name: FUN_005591b0
// Address: 005591b0
// Address Range: [[005591b0, 0055921f]]
// Convention: unknown
// Signature: void FUN_005591b0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005591b0(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_005586c0();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1881;
    FUN_004e4330("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (param_1 < (float)_DAT_005d3db2) {
    param_1 = 0.05;
  }
  if (param_1 <= (float)_DAT_005d3dba) {
    DAT_00604250 = param_1;
    return;
  }
  DAT_00604250 = 2.0;
  return;
}
