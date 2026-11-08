// Name: FUN_00445bd0
// Address: 00445bd0
// Address Range: [[00445bd0, 00445c27]]
// Convention: unknown
// Signature: int FUN_00445bd0(undefined4 param_1)

#include "nocturne.h"

int FUN_00445bd0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5ddd54;
  FUN_004625f0(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x158;
}
