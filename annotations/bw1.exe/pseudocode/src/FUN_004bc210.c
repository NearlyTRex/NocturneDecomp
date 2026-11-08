// Name: FUN_004bc210
// Address: 004bc210
// Address Range: [[004bc210, 004bc241]]
// Convention: unknown
// Signature: int FUN_004bc210(int param_1)

#include "nocturne.h"

int FUN_004bc210(int param_1)

{
  int iVar1;
  
  FUN_004bc250(param_1);
  iVar1 = FUN_0040d0c0(param_1 + 0x88,0);
  iVar1 = FUN_0040d0c0(iVar1 + -0x18,0);
  return iVar1 + -0x70;
}
