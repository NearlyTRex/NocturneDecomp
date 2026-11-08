// Name: FUN_00543950
// Address: 00543950
// Address Range: [[00543950, 005439a7]]
// Convention: unknown
// Signature: int FUN_00543950(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00543950(void)

{
  float10 fVar1;
  
  fVar1 = (float10)((DAT_0061b49c - (DAT_0061b498 * 100) / 0xb9) / 2) * (float10)_DAT_01e818b0;
  FUN_005c03a0();
  return (int)ROUND(fVar1);
}
