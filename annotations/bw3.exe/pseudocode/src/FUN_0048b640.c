// Name: FUN_0048b640
// Address: 0048b640
// Address Range: [[0048b640, 0048b68d]]
// Convention: unknown
// Signature: void FUN_0048b640(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b640(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x2d4) == 2) && (param_2 == 1)) {
    FUN_00556be0(_DAT_01c6e35c);
    *(uint *)(param_1 + 0x598) = 0;
    _DAT_01c6e35c = 0;
    *(uint *)(param_1 + 0x594) = 0;
  }
  FUN_0057b7f0(param_1,param_2);
  return;
}
