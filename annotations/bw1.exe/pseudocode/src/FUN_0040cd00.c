// Name: FUN_0040cd00
// Address: 0040cd00
// Address Range: [[0040cd00, 0040cd51]]
// Convention: unknown
// Signature: bool FUN_0040cd00(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040cd00(float param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01CCF390 + 600) == 0) {
    iVar2 = FUN_005c084c();
    fVar1 = (float)iVar2 * _DAT_005d2eb1;
  }
  else {
    iVar2 = FUN_0040cb90();
    fVar1 = (float)iVar2 * _DAT_005d2eb5;
  }
  return fVar1 < param_1;
}
