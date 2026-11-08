// Name: FUN_0047cfa0
// Address: 0047cfa0
// Address Range: [[0047cfa0, 0047d09a]]
// Convention: unknown
// Signature: void FUN_0047cfa0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047cfa0(uint param_1,uint param_2)

{
  byte local_414 [1024];
  byte *local_14;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  local_14 = &stack0x0000000c;
  FUN_005a2898(local_414,param_2,&local_14);
  local_14 = (byte *)0x0;
  FUN_00560d70();
  FUN_00406bf0(0xffff);
  FUN_004edaf0(0x3f800000);
  FUN_004b0ea0(_DAT_01c5b0e0,DAT_005fba18 / 2,DAT_005fba1c / 2,_DAT_01c5bb1c,0xffffffff,local_414);
  FUN_0057a8a0();
  return;
}
