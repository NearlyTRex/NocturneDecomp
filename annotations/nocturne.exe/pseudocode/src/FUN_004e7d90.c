// Name: FUN_004e7d90
// Address: 004e7d90
// Address Range: [[004e7d90, 004e7dc2]]
// Convention: unknown
// Signature: undefined1 * FUN_004e7d90(undefined1 *param_1)

#include "nocturne.h"

byte * FUN_004e7d90(byte *param_1)

{
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_00563cc0(param_1 + 0x5320,0,0x2c);
  *param_1 = 0;
  return param_1;
}
