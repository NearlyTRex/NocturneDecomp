// Name: FUN_005701c0
// Address: 005701c0
// Address Range: [[005701c0, 00570247]]
// Convention: unknown
// Signature: int FUN_005701c0(undefined4 param_1)

#include "nocturne.h"

int FUN_005701c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce240(param_1);
  iVar1 = FUN_005adda0(iVar1 + 0x25648);
  iVar1 = FUN_005adda0(iVar1 + 0x3ab30);
  *(uint *)(iVar1 + -0x5fec8) = 0x5fc584;
  *(uint *)(iVar1 + -0x3ab38) = 0;
  *(uint *)(iVar1 + -0x3ab34) = 0;
  FUN_005478b0(iVar1 + -0x5fec4,"svetlana.dfm");
  *(uint *)(iVar1 + 0x3ab40) = 0x3f800000;
  *(uint *)(iVar1 + 0x3ab3c) = 0;
  *(uint *)(iVar1 + 0x3ab38) = *(uint *)(iVar1 + 0x3ab3c);
  *(uint *)(iVar1 + 0x3ab34) = *(uint *)(iVar1 + 0x3ab38);
  return iVar1 + -0x60178;
}
