// Name: FUN_0047be90
// Address: 0047be90
// Address Range: [[0047be90, 0047bf73]]
// Convention: unknown
// Signature: void FUN_0047be90(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047be90(uint param_1,uint param_2)

{
  byte *local_14;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  local_14 = &stack0x0000000c;
  FUN_005b7768(0x1c231f0,param_2,&local_14);
  local_14 = (byte *)0x0;
  FUN_0055b1f0();
  FUN_00406da0(0xffff);
  FUN_004f3570(0x3f800000);
  FUN_004a92a0(_DAT_01c25590,DAT_006141b8 / 2,DAT_006141bc / 2,_DAT_01c263b4,0xffffffff,0x1c231f0);
  FUN_00589560();
  return;
}
