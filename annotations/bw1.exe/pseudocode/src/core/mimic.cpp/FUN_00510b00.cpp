// Name: FUN_00510b00
// Address: 00510b00
// Address Range: [[00510b00, 00510c13]]
// Convention: unknown
// Signature: void FUN_00510b00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510b00(int param_1)

{
  int iVar1;
  byte *puVar2;
  
  if (*(int *)(param_1 + 0x47ac0) == 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x499;
    FUN_005030e0("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(uint *)(*(int *)(param_1 + 0x47ac0) + 0x108) = *(uint *)(param_1 + 0x108);
  *(uint *)(*(int *)(param_1 + 0x47ac0) + 0x10c) = *(uint *)(param_1 + 0x10c);
  *(uint *)(*(int *)(param_1 + 0x47ac0) + 0x110) = *(uint *)(param_1 + 0x110);
  *(uint *)(*(int *)(param_1 + 0x47ac0) + 0xc258) = 1;
  iVar1 = *(int *)(param_1 + 0x47ac0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar1 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar1 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x47ac0);
  if ((uint *)(iVar1 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar1 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar1 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x47abc) = 0;
  FUN_005247c0(param_1 + 0x158,0,1);
  FUN_00510c20(param_1,0);
  puVar2 = PTR_DAT_00611100;
  *(uint *)(param_1 + 0xfc) = 1;
  FUN_00445430(puVar2,"%s morphing into type %s\n",param_1,param_1 + 0x46e68);
  return;
}
