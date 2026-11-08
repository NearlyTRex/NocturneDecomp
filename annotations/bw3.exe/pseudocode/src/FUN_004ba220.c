// Name: FUN_004ba220
// Address: 004ba220
// Address Range: [[004ba220, 004ba272]]
// Convention: unknown
// Signature: void FUN_004ba220(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba220(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x264)) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x264) = 0;
    FUN_00534890(0x01ED78C8,_DAT_01d22c6c);
    return;
  }
  _DAT_01d22c6c = *(uint *)(0x01ED78C8 + 0x15aeb8);
  *(int *)(param_1 + 0x264) = param_2;
  return;
}
