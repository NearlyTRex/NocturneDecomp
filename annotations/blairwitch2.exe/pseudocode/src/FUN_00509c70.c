// Name: FUN_00509c70
// Address: 00509c70
// Address Range: [[00509c70, 00509ca2]]
// Convention: unknown
// Signature: undefined1 * FUN_00509c70(undefined1 *param_1)

#include "nocturne.h"

byte * FUN_00509c70(byte *param_1)

{
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_005b77c0(param_1 + 0x5320,0,0x2c);
  *param_1 = 0;
  return param_1;
}
