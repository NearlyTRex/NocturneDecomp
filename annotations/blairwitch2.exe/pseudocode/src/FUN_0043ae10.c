// Name: FUN_0043ae10
// Address: 0043ae10
// Address Range: [[0043ae10, 0043ae38]]
// Convention: unknown
// Signature: float FUN_0043ae10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0043ae10(int param_1)

{
  return ((float)_DAT_005ce23e - *(float *)(param_1 + 0x45c)) * (float)_DAT_005ce246 *
         (float)_DAT_005ce24e;
}
