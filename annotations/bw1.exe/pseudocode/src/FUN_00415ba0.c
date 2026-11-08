// Name: FUN_00415ba0
// Address: 00415ba0
// Address Range: [[00415ba0, 00415bbe]]
// Convention: unknown
// Signature: void FUN_00415ba0(undefined4 *param_1)

#include "nocturne.h"

void FUN_00415ba0(uint *param_1)

{
  DAT_007c394c = DAT_007c394c + 1;
  *param_1 = &PTR_FUN_005fc944;
  (&DAT_007c394c)[DAT_007c394c] = (int)param_1;
  return;
}
