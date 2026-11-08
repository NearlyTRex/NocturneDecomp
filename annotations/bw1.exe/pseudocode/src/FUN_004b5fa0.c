// Name: FUN_004b5fa0
// Address: 004b5fa0
// Address Range: [[004b5fa0, 004b6066]]
// Convention: unknown
// Signature: void FUN_004b5fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5fa0(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c9dab4 + 1;
  iVar1 = _DAT_01c9dab4 * 0x5c;
  _DAT_01c9dab4 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01c9dab4 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c9daf4 + iVar1))(iVar1 + 0x1c9dab8,param_2,param_3);
  iVar2 = FUN_0040cc60(0xc000,0xffff);
  *(uint *)(iVar1 + 0x1c9daf8) =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  *(uint *)(iVar1 + 0x1c9dafc) = param_4;
  *(uint *)(iVar1 + 0x1c9db0c) = param_6;
  *(uint *)(iVar1 + 0x1c9db10) = param_7;
  *(uint *)(iVar1 + 0x1c9db00) = param_8;
  *(uint *)(iVar1 + 0x1c9db08) = param_9;
  *(uint *)(iVar1 + 0x1c9db04) = 0;
  *(uint *)(iVar1 + 0x1c9dacc) = 0;
  *(uint *)(iVar1 + 0x1c9dac8) = *(uint *)(iVar1 + 0x1c9dacc);
  *(uint *)(iVar1 + 0x1c9dac4) = *(uint *)(iVar1 + 0x1c9dac8);
  *(uint *)(iVar1 + 0x1c9dad8) = 0;
  *(uint *)(iVar1 + 0x1c9dad4) = *(uint *)(iVar1 + 0x1c9dad8);
  *(uint *)(iVar1 + 0x1c9dad0) = *(uint *)(iVar1 + 0x1c9dad4);
  return;
}
