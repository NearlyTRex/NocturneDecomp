// Name: FUN_0048ae90
// Address: 0048ae90
// Address Range: [[0048ae90, 0048af1d]]
// Convention: unknown
// Signature: void FUN_0048ae90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ae90(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c49d50 + 1;
  iVar1 = _DAT_01c49d50 * 0x4c;
  _DAT_01c49d50 = iVar2;
  if (0xff < iVar2) {
    _DAT_01c49d50 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c49d88 + iVar1))(iVar1 + 0x1c49d54,param_2,param_3);
  iVar2 = FUN_0040de00(0xc000,0xffff);
  *(uint *)(iVar1 + 0x1c49d94) = 0;
  *(uint *)(iVar1 + 0x1c49d8c) =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  *(uint *)(iVar1 + 0x1c49d90) = param_4;
  *(uint *)(iVar1 + 0x1c49d98) = param_6;
  *(uint *)(iVar1 + 0x1c49d9c) = param_7;
  return;
}
