// Name: FUN_004ce790
// Address: 004ce790
// Address Range: [[004ce790, 004ce7be]]
// Convention: unknown
// Signature: void FUN_004ce790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce790(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar2 = _DAT_01c039d8;
  uVar1 = _DAT_01c039d4;
  *unaff_ESI = _DAT_01c039d0;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
