// Name: FUN_004a9e70
// Address: 004a9e70
// Address Range: [[004a9e70, 004a9ea1]]
// Convention: unknown
// Signature: int FUN_004a9e70(int param_1)

#include "nocturne.h"

int FUN_004a9e70(int param_1)

{
  int iVar1;
  
  FUN_004a9eb0(param_1);
  iVar1 = FUN_0040d300(param_1 + 0x88,0);
  iVar1 = FUN_0040d300(iVar1 + -0x18,0);
  return iVar1 + -0x70;
}
