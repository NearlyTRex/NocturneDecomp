// Name: FUN_004e85d0
// Address: 004e85d0
// Address Range: [[004e85d0, 004e862f]]
// Convention: unknown
// Signature: int FUN_004e85d0(undefined4 param_1)

#include "nocturne.h"

int FUN_004e85d0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ad4c0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x601924;
  FUN_00468950(iVar1 + 0x158,"gat.kfm");
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 1;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  return iVar1;
}
