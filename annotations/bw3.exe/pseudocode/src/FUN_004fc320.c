// Name: FUN_004fc320
// Address: 004fc320
// Address Range: [[004fc320, 004fc344]]
// Convention: unknown
// Signature: int FUN_004fc320(int *param_1)

#include "nocturne.h"

int FUN_004fc320(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1);
  return *(int *)(iVar1 + 0x24) * 0x1e + *param_1 + 4;
}
