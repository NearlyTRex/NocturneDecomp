// Name: FUN_00572a10
// Address: 00572a10
// Address Range: [[00572a10, 00572a2c]]
// Convention: unknown
// Signature: void FUN_00572a10(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572a10(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02c78cec * 0x60 + 0x2c78d3c);
  *puVar1 = *puVar1 | param_1;
  return;
}
