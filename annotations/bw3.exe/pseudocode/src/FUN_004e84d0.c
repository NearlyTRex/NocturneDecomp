// Name: FUN_004e84d0
// Address: 004e84d0
// Address Range: [[004e84d0, 004e857c]]
// Convention: unknown
// Signature: void FUN_004e84d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e84d0(void)

{
  uint uVar1;
  
  FUN_0040d460(0x1d737e8,"brightness",0x280,0x1e0);
  FUN_004b30f0(_DAT_01549ab4,0x58);
  uVar1 = FUN_00508960("1. Turn off all the lights in your room.");
  FUN_004e8380(uVar1);
  uVar1 = FUN_00508960("2. Turn your brightness up, so that you see 3 bars on the left side of the screen.");
  FUN_004e8380(uVar1);
  uVar1 = FUN_00508960("3. Turn down the brightness, so that the left 2 bars become the same color.");
  FUN_004e8380(uVar1);
  uVar1 = FUN_00508960("4. Turn your contrast all the way up.");
  FUN_004e8380(uVar1);
  uVar1 = FUN_00508960("You're done with calibration.");
  FUN_004e8380(uVar1);
  FUN_0040d400(0x1d737e8);
  FUN_004032b0();
  return;
}
