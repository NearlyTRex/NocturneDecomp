// Name: FUN_0050a9c0
// Address: 0050a9c0
// Address Range: [[0050a9c0, 0050aa6c]]
// Convention: unknown
// Signature: void FUN_0050a9c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050a9c0(void)

{
  uint uVar1;
  
  FUN_0040d220(0x1d1eea0,"brightness",0x280,0x1e0);
  FUN_004c4510(_DAT_0152d248,0x58);
  uVar1 = FUN_00531090("1. Turn off all the lights in your room.");
  FUN_0050a870(uVar1);
  uVar1 = FUN_00531090("2. Turn your brightness up, so that you see 3 bars on the left side of the screen.");
  FUN_0050a870(uVar1);
  uVar1 = FUN_00531090("3. Turn down the brightness, so that the left 2 bars become the same color.");
  FUN_0050a870(uVar1);
  uVar1 = FUN_00531090("4. Turn your contrast all the way up.");
  FUN_0050a870(uVar1);
  uVar1 = FUN_00531090("You're done with calibration.");
  FUN_0050a870(uVar1);
  FUN_0040d1c0(0x1d1eea0);
  FUN_004032b0();
  return;
}
