// Name: FUN_004a9e10
// Address: 004a9e10
// Address Range: [[004a9e10, 004a9e61]]
// Convention: unknown
// Signature: int FUN_004a9e10(int param_1)

#include "nocturne.h"

int FUN_004a9e10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d2e0(param_1 + 0x70);
  iVar1 = FUN_0040d2e0(iVar1 + 0x18);
  *(byte *)(iVar1 + -0x84) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x14) = 0;
  *(uint *)(iVar1 + 0x568) = 0;
  FUN_004a9eb0(iVar1 + -0x88);
  return iVar1 + -0x88;
}
