// Name: FUN_00521840
// Address: 00521840
// Address Range: [[00521840, 00521897]]
// Convention: unknown
// Signature: int FUN_00521840(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00521840(void)

{
  float10 fVar1;
  
  fVar1 = (float10)((DAT_006141bc - (DAT_006141b8 * 100) / 0xb9) / 2) * (float10)_DAT_01e65900;
  FUN_005b7ff0();
  return (int)ROUND(fVar1);
}
