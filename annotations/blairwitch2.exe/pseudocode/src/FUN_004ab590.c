// Name: FUN_004ab590
// Address: 004ab590
// Address Range: [[004ab590, 004ab5b1]]
// Convention: unknown
// Signature: undefined4 FUN_004ab590(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004ab590(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    return *(uint *)(param_2 * 4 + param_1 + 0x3de8);
  }
  return 0;
}
