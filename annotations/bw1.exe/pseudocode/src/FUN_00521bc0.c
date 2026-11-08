// Name: FUN_00521bc0
// Address: 00521bc0
// Address Range: [[00521bc0, 00521bf7]]
// Convention: unknown
// Signature: void FUN_00521bc0(int param_1)

#include "nocturne.h"

void FUN_00521bc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004667e0(param_1 + 8);
  iVar1 = FUN_004667e0(iVar1 + 0x398);
  iVar1 = FUN_004667e0(iVar1 + 0x398);
  *(uint *)(iVar1 + -0x738) = 0;
  return;
}
