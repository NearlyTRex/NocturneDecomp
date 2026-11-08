// Name: FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc78b]]
// Convention: unknown
// Signature: int FUN_004cc760(undefined4 param_1)

#include "nocturne.h"

int FUN_004cc760(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce240(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f7f84;
  *(uint *)(iVar1 + 0x25640) = 0;
  *(uint *)(iVar1 + 0x25644) = 0;
  FUN_005478b0(iVar1 + 0x2b4,"haystack.dfm");
  *(uint *)(iVar1 + 0x25654) = 0x3f800000;
  *(uint *)(iVar1 + 0x25650) = 0;
  *(uint *)(iVar1 + 0x2564c) = *(uint *)(iVar1 + 0x25650);
  *(uint *)(iVar1 + 0x25648) = *(uint *)(iVar1 + 0x2564c);
  return iVar1;
}
