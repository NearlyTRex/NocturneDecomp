// Name: FUN_00576040
// Address: 00576040
// Address Range: [[00576040, 005760af]]
// Convention: unknown
// Signature: void FUN_00576040(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576040(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_00575550();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x186e;
    FUN_005030e0("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (param_1 < (float)_DAT_005f44b8) {
    param_1 = 0.05;
  }
  if (param_1 <= (float)_DAT_005f44c0) {
    DAT_00623314 = param_1;
    return;
  }
  DAT_00623314 = 2.0;
  return;
}
