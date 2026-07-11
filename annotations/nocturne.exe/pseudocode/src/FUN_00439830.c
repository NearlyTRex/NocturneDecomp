// Name: FUN_00439830
// Address: 00439830
// Address Range: [[00439830, 00439872]]
// Convention: unknown
// Signature: void FUN_00439830(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00439830(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00438f20(param_1);
  iVar1 = FUN_00439350(iVar1 + 4);
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = param_3;
  *(byte ***)(iVar1 + -4) = &PTR_LAB_0059b414;
  uVar2 = -1 << (*(byte *)(iVar1 + 0x20) & 0x1f);
  *(uint *)(iVar1 + 0x24) = uVar2;
  *(uint *)(iVar1 + 0x24) = ~uVar2;
  return;
}
