// Name: FUN_00528f60
// Address: 00528f60
// Address Range: [[00528f60, 00528fb7]]
// Convention: unknown
// Signature: int FUN_00528f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00528f60(void)

{
  float10 fVar1;
  
  fVar1 = (float10)((DAT_005fba1c - (DAT_005fba18 * 100) / 0xb9) / 2) * (float10)_DAT_01ed7010;
  FUN_005a3120();
  return (int)ROUND(fVar1);
}
