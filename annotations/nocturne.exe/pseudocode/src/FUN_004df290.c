// Name: FUN_004df290
// Address: 004df290
// Address Range: [[004df290, 004df2e5]]
// Convention: unknown
// Signature: void FUN_004df290(undefined4 *param_1)

#include "nocturne.h"

void FUN_004df290(uint *param_1)

{
  if (param_1[0x16] != 0) {
    FUN_005638d0(param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_005638d0(param_1[0x18]);
    param_1[0x18] = 0;
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = 0;
  param_1[0x15] = 0;
  return;
}
