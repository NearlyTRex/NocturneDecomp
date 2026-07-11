// Name: FUN_004b5f90
// Address: 004b5f90
// Address Range: [[004b5f90, 004b5fbb]]
// Convention: unknown
// Signature: void FUN_004b5f90(undefined4 param_1)

#include "nocturne.h"

void FUN_004b5f90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_0059ec84;
  *(uint *)(iVar1 + 0xfc) = 1;
  *(uint *)(iVar1 + 0x150) = 0;
  return;
}
