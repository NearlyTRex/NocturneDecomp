// Name: FUN_0046fe60
// Address: 0046fe60
// Address Range: [[0046fe60, 0046ffe8]]
// Convention: unknown
// Signature: void FUN_0046fe60(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046fe60(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *local_18;
  char *local_14;
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "?..\\shape\\edittool.cpp" + 1;
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(int *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = FUN_004930e0(_DAT_01bcd070,0x6a);
  local_18 = &stack0x0000000c;
  FUN_00563a08(0x1bca8d0,param_2,&local_18);
  local_18 = (byte *)0x0;
  local_14 = "Message";
  iVar1 = FUN_00492da0(_DAT_01bcd070,"Message");
  iVar2 = FUN_00492da0(_DAT_01bcd070,0x1bca8d0);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar3 = FUN_00492e60(_DAT_01bcd070,0x1bca8d0);
  FUN_00471a80(param_1,_DAT_01bcd9b8 * 4 + iVar1,_DAT_01bcd9bc * 2 + iVar3,local_14,0);
  FUN_004722b0(param_1);
  FUN_00408370(0xffff);
  FUN_00490980(_DAT_01bcd070,0x1bca8d0,((_DAT_01c00c58 + _DAT_01c00c60) - iVar2) / 2,
               ((_DAT_01c00c5c + _DAT_01c00c64) - iVar3) / 2,_DAT_01bcddd8,0xffffffff);
  FUN_00553910();
  FUN_00403f50();
  FUN_004c41c0(0x01CC30E4);
  FUN_004720c0(param_1);
  FUN_00553910();
  FUN_00403f50();
  return;
}
