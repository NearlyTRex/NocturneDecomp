// Name: FUN_00522170
// Address: 00522170
// Address Range: [[00522170, 005221c5]]
// Convention: unknown
// Signature: void FUN_00522170(undefined4 *param_1)

#include "nocturne.h"

void FUN_00522170(uint *param_1)

{
  if (param_1[0x16] != 0) {
    FUN_005c09f0(param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_005c09f0(param_1[0x18]);
    param_1[0x18] = 0;
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = 0;
  param_1[0x15] = 0;
  return;
}
