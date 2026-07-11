// Name: FUN_00438210
// Address: 00438210
// Address Range: [[00438210, 00438244]]
// Convention: unknown
// Signature: undefined4 * FUN_00438210(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_00438210(uint *param_1)

{
  *param_1 = 0;
  FUN_00563cc0(param_1 + 1,0,400);
  FUN_00563cc0(param_1 + 0x65,0,0x28);
  return param_1;
}
