// Name: FUN_00443490
// Address: 00443490
// Address Range: [[00443490, 004434d2]]
// Convention: unknown
// Signature: void FUN_00443490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00443490(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00442ba0(param_1);
  iVar1 = FUN_00442f70(iVar1 + 4);
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = param_3;
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005fd984;
  uVar2 = -1 << (*(byte *)(iVar1 + 0x20) & 0x1f);
  *(uint *)(iVar1 + 0x24) = uVar2;
  *(uint *)(iVar1 + 0x24) = ~uVar2;
  return;
}
