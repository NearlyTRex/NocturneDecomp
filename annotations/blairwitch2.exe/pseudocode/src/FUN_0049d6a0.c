// Name: FUN_0049d6a0
// Address: 0049d6a0
// Address Range: [[0049d6a0, 0049d766]]
// Convention: unknown
// Signature: void FUN_0049d6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d6a0(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c848f4 + 1;
  iVar1 = _DAT_01c848f4 * 0x5c;
  _DAT_01c848f4 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01c848f4 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c84934 + iVar1))(iVar1 + 0x1c848f8,param_2,param_3);
  iVar2 = FUN_0040cfc0(0xc000,0xffff);
  *(uint *)(iVar1 + 0x1c84938) =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  *(uint *)(iVar1 + 0x1c8493c) = param_4;
  *(uint *)(iVar1 + 0x1c8494c) = param_6;
  *(uint *)(iVar1 + 0x1c84950) = param_7;
  *(uint *)(iVar1 + 0x1c84940) = param_8;
  *(uint *)(iVar1 + 0x1c84948) = param_9;
  *(uint *)(iVar1 + 0x1c84944) = 0;
  *(uint *)(iVar1 + 0x1c8490c) = 0;
  *(uint *)(iVar1 + 0x1c84908) = *(uint *)(iVar1 + 0x1c8490c);
  *(uint *)(iVar1 + 0x1c84904) = *(uint *)(iVar1 + 0x1c84908);
  *(uint *)(iVar1 + 0x1c84918) = 0;
  *(uint *)(iVar1 + 0x1c84914) = *(uint *)(iVar1 + 0x1c84918);
  *(uint *)(iVar1 + 0x1c84910) = *(uint *)(iVar1 + 0x1c84914);
  return;
}
