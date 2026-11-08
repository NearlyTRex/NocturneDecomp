// Name: FUN_0049d090
// Address: 0049d090
// Address Range: [[0049d090, 0049d11d]]
// Convention: unknown
// Signature: void FUN_0049d090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d090(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c7f4f0 + 1;
  iVar1 = _DAT_01c7f4f0 * 0x54;
  _DAT_01c7f4f0 = iVar2;
  if (0xff < iVar2) {
    _DAT_01c7f4f0 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c7f530 + iVar1))(iVar1 + 0x1c7f4f4,param_2,param_3);
  iVar2 = FUN_0040cfc0(0xc000,0xffff);
  *(uint *)(iVar1 + 0x1c7f53c) = 0;
  *(uint *)(iVar1 + 0x1c7f534) =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  *(uint *)(iVar1 + 0x1c7f538) = param_4;
  *(uint *)(iVar1 + 0x1c7f540) = param_6;
  *(uint *)(iVar1 + 0x1c7f544) = param_7;
  return;
}
