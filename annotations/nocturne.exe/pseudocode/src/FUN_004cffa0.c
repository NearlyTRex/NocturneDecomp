// Name: FUN_004cffa0
// Address: 004cffa0
// Address Range: [[004cffa0, 004d004c]]
// Convention: unknown
// Signature: void FUN_004cffa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cffa0(void)

{
  uint uVar1;
  
  FUN_0040e3c0(0x1cc5b6c,"brightness",0x280,0x1e0);
  FUN_004930e0(_DAT_014b9904,0x58);
  uVar1 = FUN_004ee370("1. Turn off all the lights in your room.");
  FUN_004cfe50(uVar1);
  uVar1 = FUN_004ee370("2. Turn your brightness up, so that you see 3 bars on the left side of the screen.");
  FUN_004cfe50(uVar1);
  uVar1 = FUN_004ee370("3. Turn down the brightness, so that the left 2 bars become the same color.");
  FUN_004cfe50(uVar1);
  uVar1 = FUN_004ee370("4. Turn your contrast all the way up.");
  FUN_004cfe50(uVar1);
  uVar1 = FUN_004ee370("You're done with calibration.");
  FUN_004cfe50(uVar1);
  FUN_0040e360(0x1cc5b6c);
  FUN_00403f50();
  return;
}
