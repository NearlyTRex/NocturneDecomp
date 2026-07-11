// Name: FUN_00460d90
// Address: 00460d90
// Address Range: [[00460d90, 00460dac]]
// Convention: unknown
// Signature: void FUN_00460d90(void)

#include "nocturne.h"

void FUN_00460d90(void)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStack_ffc [1021];
  
  bVar1 = 0;
  FUN_004ce790();
  *unaff_ESI = auStack_ffc[0x3fa];
  unaff_ESI[(uint)bVar1 * -2 + 1] = auStack_ffc[(uint)bVar1 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       auStack_ffc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return;
}
