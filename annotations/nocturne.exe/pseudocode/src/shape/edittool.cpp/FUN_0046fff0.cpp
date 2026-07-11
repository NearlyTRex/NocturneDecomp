// Name: FUN_0046fff0
// Address: 0046fff0
// Address Range: [[0046fff0, 004700c6]]
// Convention: unknown
// Signature: void FUN_0046fff0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046fff0(uint param_1,uint param_2)

{
  byte *local_14;
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "?..\\shape\\edittool.cpp" + 1;
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = FUN_004930e0(_DAT_01bcd070,0x6a);
  local_14 = &stack0x0000000c;
  FUN_00563a08(0x1bcacd0,param_2,&local_14);
  local_14 = (byte *)0x0;
  FUN_0052ee70();
  FUN_00408370(0xffff);
  FUN_00490ce0(_DAT_01bcd070,DAT_005b761c / 2,DAT_005b7620 / 2,_DAT_01bcdde8,0xffffffff,0x1bcacd0);
  FUN_00553910();
  return;
}
