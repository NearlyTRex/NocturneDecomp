// Name: FUN_00413200
// Address: 00413200
// Address Range: [[00413200, 00413235]]
// Convention: unknown
// Signature: void FUN_00413200(undefined4 param_1)

#include "nocturne.h"

void FUN_00413200(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00411960(param_1);
  iVar1 = FUN_0040d2e0(iVar1 + 4);
  iVar1 = FUN_005a30d7(iVar1 + 0x6c,0x32,&DAT_005dbfa0);
  *(byte ***)(iVar1 + -0x70) = &PTR_FUN_005dbee4;
  return;
}
