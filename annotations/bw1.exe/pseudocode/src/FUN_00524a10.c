// Name: FUN_00524a10
// Address: 00524a10
// Address Range: [[00524a10, 00524a34]]
// Convention: unknown
// Signature: int FUN_00524a10(int *param_1)

#include "nocturne.h"

int FUN_00524a10(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00524770(param_1);
  return *(int *)(iVar1 + 0x24) * 0x1e + *param_1 + 4;
}
