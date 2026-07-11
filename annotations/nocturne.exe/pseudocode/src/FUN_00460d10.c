// Name: FUN_00460d10
// Address: 00460d10
// Address Range: [[00460d10, 00460d2c]]
// Convention: unknown
// Signature: void FUN_00460d10(void)

#include "nocturne.h"

void FUN_00460d10(void)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStack_ffc [1021];
  
  bVar1 = 0;
  FUN_004ce760();
  *unaff_ESI = auStack_ffc[0x3fa];
  unaff_ESI[(uint)bVar1 * -2 + 1] = auStack_ffc[(uint)bVar1 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       auStack_ffc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return;
}
