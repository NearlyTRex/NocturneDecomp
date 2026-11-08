// Name: FUN_0057cf20
// Address: 0057cf20
// Address Range: [[0057cf20, 0057cf3a]]
// Convention: unknown
// Signature: int FUN_0057cf20(int *param_1)

#include "nocturne.h"

int FUN_0057cf20(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (-1 < iVar1) {
    param_1[4] = param_1[4] + 1;
  }
  return iVar1;
}
