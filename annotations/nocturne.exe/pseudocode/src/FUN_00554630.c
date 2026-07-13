// Name: FUN_00554630
// Address: 00554630
// Address Range: [[00554630, 00554646]]
// Convention: unknown
// Signature: bool FUN_00554630(int param_1)

#include "nocturne.h"

bool FUN_00554630(int param_1)

{
  return (*(uint *)(param_1 + 0x2f8) & 0x7fffffff) == 0;
}
