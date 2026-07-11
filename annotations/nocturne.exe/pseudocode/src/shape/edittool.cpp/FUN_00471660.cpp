// Name: FUN_00471660
// Address: 00471660
// Address Range: [[00471660, 0047175c]]
// Convention: unknown
// Signature: void FUN_00471660(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471660(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "?..\\shape\\edittool.cpp" + 1;
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = FUN_004930e0(_DAT_01bcd070,0x6a);
  iVar1 = DAT_005b761c / 2;
  if (param_2 != 0) {
    iVar3 = FUN_00492da0(_DAT_01bcd070,param_2);
    if (iVar1 < iVar3) {
      iVar1 = FUN_00492da0(_DAT_01bcd070,param_2);
    }
  }
  FUN_00471a80(param_1,iVar1,_DAT_01bcd9bc * 6,param_2,0);
  uVar2 = FUN_00558a30();
  iVar1 = _DAT_01bcd07c + -1;
  *(uint *)(iVar1 * 0x1d8 + 0x1bcd24c) = uVar2;
  *(uint *)(iVar1 * 0x1d8 + 0x1bcd250) = 0xffffffff;
  FUN_00471760(param_1,0,0x3f800000);
  return;
}
