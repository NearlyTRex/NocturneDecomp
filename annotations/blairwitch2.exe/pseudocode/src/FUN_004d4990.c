// Name: FUN_004d4990
// Address: 004d4990
// Address Range: [[004d4990, 004d49bb]]
// Convention: unknown
// Signature: int FUN_004d4990(undefined4 param_1)

#include "nocturne.h"

int FUN_004d4990(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce240(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f8ba4;
  *(uint *)(iVar1 + 0x25640) = 0;
  *(uint *)(iVar1 + 0x25644) = 0;
  FUN_005478b0(iVar1 + 0x2b4,"icepick.dfm");
  *(uint *)(iVar1 + 0x2565c) = 0x3f800000;
  *(uint *)(iVar1 + 0x25658) = 0;
  *(uint *)(iVar1 + 0x25654) = *(uint *)(iVar1 + 0x25658);
  *(uint *)(iVar1 + 0x25650) = *(uint *)(iVar1 + 0x25654);
  *(uint *)(iVar1 + 0x25660) = 0;
  *(uint *)(iVar1 + 0x25664) = 0;
  *(uint *)(iVar1 + 0x25a8) = 0x43960000;
  return iVar1;
}
