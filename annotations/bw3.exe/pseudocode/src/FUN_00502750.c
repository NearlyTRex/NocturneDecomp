// Name: FUN_00502750
// Address: 00502750
// Address Range: [[00502750, 00502782]]
// Convention: unknown
// Signature: undefined1 * FUN_00502750(undefined1 *param_1)

#include "nocturne.h"

byte * FUN_00502750(byte *param_1)

{
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_005a28f0(param_1 + 0x5320,0,0x2c);
  *param_1 = 0;
  return param_1;
}
