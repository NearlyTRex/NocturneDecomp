// Name: FUN_004d5d00
// Address: 004d5d00
// Address Range: [[004d5d00, 004d5e13]]
// Convention: unknown
// Signature: void FUN_004d5d00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5d00(int param_1)

{
  int iVar1;
  byte *puVar2;
  
  if (*(int *)(param_1 + 0x4757c) == 0) {
    _DAT_01cc4800 = "?..\\core\\mimic.cpp" + 1;
    _DAT_01cc4804 = 0x499;
    FUN_004c8440("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(uint *)(*(int *)(param_1 + 0x4757c) + 0x108) = *(uint *)(param_1 + 0x108);
  *(uint *)(*(int *)(param_1 + 0x4757c) + 0x10c) = *(uint *)(param_1 + 0x10c);
  *(uint *)(*(int *)(param_1 + 0x4757c) + 0x110) = *(uint *)(param_1 + 0x110);
  *(uint *)(*(int *)(param_1 + 0x4757c) + 0xbd14) = 1;
  iVar1 = *(int *)(param_1 + 0x4757c);
  *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x4757c);
  if ((uint *)(iVar1 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar1 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar1 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x47578) = 0;
  FUN_004e16b0(param_1 + 0x150,0,1);
  FUN_004d5e20(param_1,0);
  puVar2 = PTR_DAT_005ad350;
  *(uint *)(param_1 + 0xfc) = 1;
  FUN_0043ac60(puVar2,"%s morphing into type %s\n",param_1,param_1 + 0x46924);
  return;
}
