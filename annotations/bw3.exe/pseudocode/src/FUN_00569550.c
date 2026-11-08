// Name: FUN_00569550
// Address: 00569550
// Address Range: [[00569550, 00569585]]
// Convention: unknown
// Signature: undefined4 * FUN_00569550(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_00569550(uint *param_1)

{
  param_1[0x6001] = 0;
  *param_1 = 0;
  param_1[0x6002] = 0;
  FUN_005a28f0(param_1 + 1,0,0x18000);
  return param_1;
}
