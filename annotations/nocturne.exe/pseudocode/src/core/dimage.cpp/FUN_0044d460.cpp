// Name: FUN_0044d460
// Address: 0044d460
// Address Range: [[0044d460, 0044d4b6]]
// Convention: unknown
// Signature: void FUN_0044d460(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d460(int param_1)

{
  int iVar1;
  
  FUN_0044d4c0(param_1);
  iVar1 = malloc(*(int *)(param_1 + 0x304) * *(int *)(param_1 + 0x308));
  *(int *)(param_1 + 0x300) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dimage.cpp";
  _DAT_01cc4804 = 0x31;
  FUN_004c8440("CDemonImage::allocMemory - Out of memory!");
  return;
}
