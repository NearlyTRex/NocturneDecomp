// Name: FUN_00449010
// Address: 00449010
// Address Range: [[00449010, 00449067]]
// Convention: unknown
// Signature: int FUN_00449010(undefined4 param_1)

#include "nocturne.h"

int FUN_00449010(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5fe254;
  FUN_00468950(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x158;
}
