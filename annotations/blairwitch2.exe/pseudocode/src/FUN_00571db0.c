// Name: FUN_00571db0
// Address: 00571db0
// Address Range: [[00571db0, 00571ddd]]
// Convention: unknown
// Signature: int FUN_00571db0(undefined4 param_1)

#include "nocturne.h"

int FUN_00571db0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510460(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fc894;
  FUN_005478b0(iVar1 + 0x2b4,"drummer.dfm");
  return iVar1;
}
