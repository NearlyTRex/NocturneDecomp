// Name: FUN_00528980
// Address: 00528980
// Address Range: [[00528980, 005289ef]]
// Convention: unknown
// Signature: void FUN_00528980(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528980(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_00528490();
  if (iVar1 != 0) {
    _DAT_01cc4800 = "@..\\sound\\sndmain.cpp" + 1;
    _DAT_01cc4804 = 0x1329;
    FUN_004c8440("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (param_1 < (float)_DAT_00593a0e) {
    param_1 = 0.05;
  }
  if (param_1 <= (float)_DAT_00593a16) {
    DAT_005bea98 = param_1;
    return;
  }
  DAT_005bea98 = 2.0;
  return;
}
