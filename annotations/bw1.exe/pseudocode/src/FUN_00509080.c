// Name: FUN_00509080
// Address: 00509080
// Address Range: [[00509080, 005090ae]]
// Convention: unknown
// Signature: void FUN_00509080(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509080(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar2 = _DAT_01c51d4c;
  uVar1 = _DAT_01c51d48;
  *unaff_ESI = _DAT_01c51d44;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
