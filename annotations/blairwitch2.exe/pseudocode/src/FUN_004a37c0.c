// Name: FUN_004a37c0
// Address: 004a37c0
// Address Range: [[004a37c0, 004a3811]]
// Convention: unknown
// Signature: int FUN_004a37c0(int param_1)

#include "nocturne.h"

int FUN_004a37c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d420(param_1 + 0x70);
  iVar1 = FUN_0040d420(iVar1 + 0x18);
  *(byte *)(iVar1 + -0x84) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x14) = 0;
  *(uint *)(iVar1 + 0x238) = 0;
  FUN_004a3860(iVar1 + -0x88);
  return iVar1 + -0x88;
}
