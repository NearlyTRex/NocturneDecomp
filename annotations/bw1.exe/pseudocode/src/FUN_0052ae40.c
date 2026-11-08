// Name: FUN_0052ae40
// Address: 0052ae40
// Address Range: [[0052ae40, 0052ae72]]
// Convention: unknown
// Signature: undefined1 * FUN_0052ae40(undefined1 *param_1)

#include "nocturne.h"

byte * FUN_0052ae40(byte *param_1)

{
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_005bfb70(param_1 + 0x5320,0,0x2c);
  *param_1 = 0;
  return param_1;
}
