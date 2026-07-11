// Name: FUN_004fe710
// Address: 004fe710
// Address Range: [[004fe710, 004fe767]]
// Convention: unknown
// Signature: int FUN_004fe710(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fe710(void)

{
  float10 fVar1;
  
  fVar1 = (float10)((DAT_005b7620 - (DAT_005b761c * 100) / 0xb9) / 2) * (float10)_DAT_01e56c20;
  FUN_00563a30();
  return (int)ROUND(fVar1);
}
