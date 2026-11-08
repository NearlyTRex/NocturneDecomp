// Name: FUN_004108e0
// Address: 004108e0
// Address Range: [[004108e0, 00410933]]
// Convention: unknown
// Signature: void FUN_004108e0(undefined4 param_1)

#include "nocturne.h"

void FUN_004108e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005899d0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f2b14;
  *(uint *)(iVar1 + 0x43c) = 9;
  *(uint *)(iVar1 + 0x440) = 0;
  *(uint *)(iVar1 + 0x444) = 0x43480000;
  *(uint *)(iVar1 + 0x448) = 0;
  *(uint *)(iVar1 + 0x44c) = 0;
  *(uint *)(iVar1 + 0x6d4) = 0;
  return;
}
