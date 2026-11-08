// Name: FUN_00435610
// Address: 00435610
// Address Range: [[00435610, 0043563b]]
// Convention: unknown
// Signature: int FUN_00435610(undefined4 param_1)

#include "nocturne.h"

int FUN_00435610(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce240(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f44b4;
  *(uint *)(iVar1 + 0x25640) = 0;
  *(uint *)(iVar1 + 0x25644) = 0;
  FUN_005478b0(iVar1 + 0x2b4,"colonel.dfm");
  *(uint *)(iVar1 + 0x25654) = 0x3f800000;
  *(uint *)(iVar1 + 0x25650) = 0;
  *(uint *)(iVar1 + 0x2564c) = *(uint *)(iVar1 + 0x25650);
  *(uint *)(iVar1 + 0x25648) = *(uint *)(iVar1 + 0x2564c);
  return iVar1;
}
