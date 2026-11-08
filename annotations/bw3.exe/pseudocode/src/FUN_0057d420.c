// Name: FUN_0057d420
// Address: 0057d420
// Address Range: [[0057d420, 0057d4b3]]
// Convention: unknown
// Signature: void FUN_0057d420(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0057d420(uint param_1,int param_2)

{
  if (param_2 != 5) {
    return;
  }
  FUN_0046e5e0(DAT_005f2afc,&DAT_006071f4);
  FUN_0046e5e0(DAT_005f2afc,&DAT_0060720c);
  FUN_00556230("rain.wav");
  FUN_00556230("light1.wav");
  FUN_00556230("light2.wav");
  FUN_00556230(0x5d79ca);
  FUN_00556230(0x5d79d5);
  FUN_00556230(0x5d79e0);
  FUN_004a4130(0x01C73654,1);
  return;
}
