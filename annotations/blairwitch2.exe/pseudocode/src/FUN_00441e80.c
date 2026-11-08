// Name: FUN_00441e80
// Address: 00441e80
// Address Range: [[00441e80, 00441e99]]
// Convention: unknown
// Signature: void FUN_00441e80(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441e80(uint param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2 * (float10)_DAT_005ce636;
  iVar1 = FUN_005b7ff0();
  *(int *)(iVar1 + 0x11e8) = (int)ROUND(fVar2);
  return;
}
