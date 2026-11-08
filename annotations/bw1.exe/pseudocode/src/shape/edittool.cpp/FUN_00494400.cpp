// Name: FUN_00494400
// Address: 00494400
// Address Range: [[00494400, 004944fa]]
// Convention: unknown
// Signature: void FUN_00494400(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494400(uint param_1,uint param_2)

{
  byte local_414 [1024];
  byte *local_14;
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  local_14 = &stack0x0000000c;
  FUN_005bfb18(local_414,param_2,&local_14);
  local_14 = (byte *)0x0;
  FUN_0057dc40();
  FUN_00406bd0(0xffff);
  FUN_00512320(0x3f800000);
  FUN_004c2250(_DAT_01c3eb50,DAT_0061b498 / 2,DAT_0061b49c / 2,_DAT_01c3f574,0xffffffff,local_414);
  FUN_005acff0();
  return;
}
