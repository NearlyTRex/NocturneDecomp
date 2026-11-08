// Name: FUN_0040cc00
// Address: 0040cc00
// Address Range: [[0040cc00, 0040cc5f]]
// Convention: unknown
// Signature: float FUN_0040cc00(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0040cc00(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01CCF390 + 600) == 0) {
    iVar2 = FUN_005c084c();
    fVar1 = (float)iVar2 * _DAT_005d2e95;
  }
  else {
    iVar2 = FUN_0040cb90();
    fVar1 = (float)iVar2 * _DAT_005d2e99;
  }
  return fVar1 * (param_2 - param_1) + param_1;
}
