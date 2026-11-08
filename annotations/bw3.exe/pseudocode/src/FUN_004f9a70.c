// Name: FUN_004f9a70
// Address: 004f9a70
// Address Range: [[004f9a70, 004f9ac5]]
// Convention: unknown
// Signature: void FUN_004f9a70(undefined4 *param_1)

#include "nocturne.h"

void FUN_004f9a70(uint *param_1)

{
  if (param_1[0x16] != 0) {
    FUN_005a3770(param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_005a3770(param_1[0x18]);
    param_1[0x18] = 0;
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = 0;
  param_1[0x15] = 0;
  return;
}
