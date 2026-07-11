// Name: FUN_004e18a0
// Address: 004e18a0
// Address Range: [[004e18a0, 004e18c4]]
// Convention: unknown
// Signature: int FUN_004e18a0(int *param_1)

#include "nocturne.h"

int FUN_004e18a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e1660(param_1);
  return *(int *)(iVar1 + 0x24) * 0x1e + *param_1 + 4;
}
