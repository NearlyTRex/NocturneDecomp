// Name: FUN_0046d1a0
// Address: 0046d1a0
// Address Range: [[0046d1a0, 0046d1bc]]
// Convention: unknown
// Signature: void FUN_0046d1a0(void)

#include "nocturne.h"

void FUN_0046d1a0(void)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStack_ffc [1021];
  
  bVar1 = 0;
  FUN_004e6a90();
  *unaff_ESI = auStack_ffc[0x3fa];
  unaff_ESI[(uint)bVar1 * -2 + 1] = auStack_ffc[(uint)bVar1 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       auStack_ffc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return;
}
