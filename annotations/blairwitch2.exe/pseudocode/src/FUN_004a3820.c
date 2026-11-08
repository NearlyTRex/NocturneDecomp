// Name: FUN_004a3820
// Address: 004a3820
// Address Range: [[004a3820, 004a3851]]
// Convention: unknown
// Signature: int FUN_004a3820(int param_1)

#include "nocturne.h"

int FUN_004a3820(int param_1)

{
  int iVar1;
  
  FUN_004a3860(param_1);
  iVar1 = FUN_0040d440(param_1 + 0x88,0);
  iVar1 = FUN_0040d440(iVar1 + -0x18,0);
  return iVar1 + -0x70;
}
