// Name: FUN_004f1d70
// Address: 004f1d70
// Address Range: [[004f1d70, 004f1e83]]
// Convention: unknown
// Signature: void FUN_004f1d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1d70(int param_1)

{
  int iVar1;
  byte *puVar2;
  
  if (*(int *)(param_1 + 0x4c350) == 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x499;
    FUN_004e4500("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(uint *)(*(int *)(param_1 + 0x4c350) + 0x108) = *(uint *)(param_1 + 0x108);
  *(uint *)(*(int *)(param_1 + 0x4c350) + 0x10c) = *(uint *)(param_1 + 0x10c);
  *(uint *)(*(int *)(param_1 + 0x4c350) + 0x110) = *(uint *)(param_1 + 0x110);
  *(uint *)(*(int *)(param_1 + 0x4c350) + 0x10ae8) = 1;
  iVar1 = *(int *)(param_1 + 0x4c350);
  *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x4c350);
  if ((uint *)(iVar1 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar1 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar1 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x4c34c) = 0;
  FUN_00503620(param_1 + 0x2b4,0,1);
  FUN_004f1e90(param_1,0);
  puVar2 = PTR_DAT_00609ed0;
  *(uint *)(param_1 + 0xfc) = 1;
  FUN_00436710(puVar2,"%s morphing into type %s\n",param_1,param_1 + 0x4b6f8);
  return;
}
