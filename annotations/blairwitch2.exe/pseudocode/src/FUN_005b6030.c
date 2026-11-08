// Name: FUN_005b6030
// Address: 005b6030
// Address Range: [[005b6030, 005b6085]]
// Convention: unknown
// Signature: void FUN_005b6030(undefined4 *param_1)

#include "nocturne.h"

void FUN_005b6030(uint *param_1)

{
  if (param_1[0x16] != 0) {
    FUN_005b86a0(param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_005b86a0(param_1[0x18]);
    param_1[0x18] = 0;
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = 0;
  param_1[0x15] = 0;
  return;
}
