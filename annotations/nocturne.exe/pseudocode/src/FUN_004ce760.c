// Name: FUN_004ce760
// Address: 004ce760
// Address Range: [[004ce760, 004ce78e]]
// Convention: unknown
// Signature: void FUN_004ce760(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce760(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar2 = _DAT_01c039cc;
  uVar1 = _DAT_01c039c8;
  *unaff_ESI = _DAT_01c039c4;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
