// Name: FUN_0044f680
// Address: 0044f680
// Address Range: [[0044f680, 0044f699]]
// Convention: unknown
// Signature: void FUN_0044f680(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f680(uint param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2 * (float10)_DAT_005b9f66;
  iVar1 = FUN_005a3120();
  *(int *)(iVar1 + 0x11e8) = (int)ROUND(fVar2);
  return;
}
