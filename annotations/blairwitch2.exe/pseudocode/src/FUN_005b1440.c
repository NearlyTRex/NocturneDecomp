// Name: FUN_005b1440
// Address: 005b1440
// Address Range: [[005b1440, 005b1474]]
// Convention: unknown
// Signature: undefined4 * FUN_005b1440(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_005b1440(uint *param_1)

{
  *param_1 = 0;
  FUN_005b77c0(param_1 + 1,0,400);
  FUN_005b77c0(param_1 + 0x65,0,0x28);
  return param_1;
}
