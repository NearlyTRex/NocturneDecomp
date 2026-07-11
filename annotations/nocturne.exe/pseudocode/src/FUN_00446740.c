// Name: FUN_00446740
// Address: 00446740
// Address Range: [[00446740, 00446759]]
// Convention: unknown
// Signature: void FUN_00446740(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446740(uint param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2 * (float10)_DAT_0057b9eb;
  iVar1 = FUN_00563a30();
  *(int *)(iVar1 + 0x11e8) = (int)ROUND(fVar2);
  return;
}
