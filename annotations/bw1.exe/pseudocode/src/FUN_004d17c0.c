// Name: FUN_004d17c0
// Address: 004d17c0
// Address Range: [[004d17c0, 004d1812]]
// Convention: unknown
// Signature: void FUN_004d17c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d17c0(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x260)) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x260) = 0;
    FUN_0054f0d0(0x01E82168,_DAT_01cd0c64);
    return;
  }
  _DAT_01cd0c64 = *(uint *)(0x01E82168 + 0x15aeb8);
  *(int *)(param_1 + 0x260) = param_2;
  return;
}
