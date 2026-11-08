// Name: FUN_004dc000
// Address: 004dc000
// Address Range: [[004dc000, 004dc037]]
// Convention: unknown
// Signature: void FUN_004dc000(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc000(int param_1)

{
  _DAT_01cd0c94 = 1;
  FUN_00555830(0x01E82168,*(uint *)(param_1 + 0x240));
  _DAT_01cd0c24 = 0;
  _DAT_01cd0c64 = 0;
  return;
}
