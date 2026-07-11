// Name: FUN_004351b0
// Address: 004351b0
// Address Range: [[004351b0, 00435200]]
// Convention: unknown
// Signature: void FUN_004351b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004351b0(int param_1)

{
  int iVar1;
  
  FUN_00435210(param_1);
  iVar1 = FUN_00564c18(*(int *)(param_1 + 0x104) << 2);
  *(int *)(param_1 + 0x3aafc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\cloth.cpp";
  _DAT_01cc4804 = 0x77;
  FUN_004c8440("CCloth::allocMemory - Out of memory");
  return;
}
