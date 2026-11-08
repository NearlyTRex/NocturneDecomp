// Name: FUN_00553610
// Address: 00553610
// Address Range: [[00553610, 0055367f]]
// Convention: unknown
// Signature: void FUN_00553610(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553610(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_00552b20();
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x1877;
    FUN_004e4500("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (param_1 < (float)_DAT_005e92be) {
    param_1 = 0.05;
  }
  if (param_1 <= (float)_DAT_005e92c6) {
    DAT_0061bcc4 = param_1;
    return;
  }
  DAT_0061bcc4 = 2.0;
  return;
}
