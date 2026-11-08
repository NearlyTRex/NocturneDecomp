// Name: FUN_00524b70
// Address: 00524b70
// Address Range: [[00524b70, 00524b82]]
// Convention: unknown
// Signature: void FUN_00524b70(int param_1)

#include "nocturne.h"

void FUN_00524b70(int param_1)

{
  *(uint *)(param_1 + 0x14) = 0xbf800000;
  *(uint *)(param_1 + 0xc) = 0;
  return;
}
