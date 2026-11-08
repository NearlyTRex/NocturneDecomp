// Name: FUN_004ebe30
// Address: 004ebe30
// Address Range: [[004ebe30, 004ebedc]]
// Convention: unknown
// Signature: void FUN_004ebe30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ebe30(void)

{
  uint uVar1;
  
  FUN_0040d5a0(0x1d0613c,"brightness",0x280,0x1e0);
  FUN_004ab560(_DAT_01511cc4,0x58);
  uVar1 = FUN_0050fe80("1. Turn off all the lights in your room.");
  FUN_004ebce0(uVar1);
  uVar1 = FUN_0050fe80("2. Turn your brightness up, so that you see 3 bars on the left side of the screen.");
  FUN_004ebce0(uVar1);
  uVar1 = FUN_0050fe80("3. Turn down the brightness, so that the left 2 bars become the same color.");
  FUN_004ebce0(uVar1);
  uVar1 = FUN_0050fe80("4. Turn your contrast all the way up.");
  FUN_004ebce0(uVar1);
  uVar1 = FUN_0050fe80("You're done with calibration.");
  FUN_004ebce0(uVar1);
  FUN_0040d540(0x1d0613c);
  FUN_004032b0();
  return;
}
