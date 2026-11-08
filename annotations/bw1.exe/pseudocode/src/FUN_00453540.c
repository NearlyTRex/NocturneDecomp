// Name: FUN_00453540
// Address: 00453540
// Address Range: [[00453540, 00453559]]
// Convention: unknown
// Signature: void FUN_00453540(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453540(uint param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2 * (float10)_DAT_005d78ff;
  iVar1 = FUN_005c03a0();
  *(int *)(iVar1 + 0x11e8) = (int)ROUND(fVar2);
  return;
}
