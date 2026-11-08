// Name: FUN_004a23c0
// Address: 004a23c0
// Address Range: [[004a23c0, 004a244d]]
// Convention: unknown
// Signature: void FUN_004a23c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a23c0(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cb4eb0 + 1;
  iVar1 = _DAT_01cb4eb0 * 0x54;
  _DAT_01cb4eb0 = iVar2;
  if (0xff < iVar2) {
    _DAT_01cb4eb0 = 0;
  }
  (*(code *)**(uint **)(&DAT_01cb4ef0 + iVar1))(iVar1 + 0x1cb4eb4,param_2,param_3);
  iVar2 = FUN_0040cea0(0xc000,0xffff);
  *(uint *)(iVar1 + 0x1cb4efc) = 0;
  *(uint *)(iVar1 + 0x1cb4ef4) =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  *(uint *)(iVar1 + 0x1cb4ef8) = param_4;
  *(uint *)(iVar1 + 0x1cb4f00) = param_6;
  *(uint *)(iVar1 + 0x1cb4f04) = param_7;
  return;
}
