// Name: FUN_00479320
// Address: 00479320
// Address Range: [[00479320, 0047933b]]
// Convention: unknown
// Signature: int FUN_00479320(int param_1)

#include "nocturne.h"

int FUN_00479320(int param_1)

{
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_004794a0(param_1);
  return param_1;
}
