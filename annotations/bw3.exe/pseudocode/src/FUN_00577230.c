// Name: FUN_00577230
// Address: 00577230
// Address Range: [[00577230, 00577248]]
// Convention: unknown
// Signature: void FUN_00577230(undefined4 *param_1)

#include "nocturne.h"

void FUN_00577230(uint *param_1)

{
  param_1[2] = 0x42000000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
