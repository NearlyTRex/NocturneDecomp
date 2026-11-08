// Name: FUN_004ab530
// Address: 004ab530
// Address Range: [[004ab530, 004ab551]]
// Convention: unknown
// Signature: undefined4 FUN_004ab530(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004ab530(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    return *(uint *)(param_2 * 4 + param_1 + 0x35e8);
  }
  return 0;
}
