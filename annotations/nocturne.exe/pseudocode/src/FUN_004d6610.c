// Name: FUN_004d6610
// Address: 004d6610
// Address Range: [[004d6610, 004d664e]]
// Convention: unknown
// Signature: void FUN_004d6610(int param_1)

#include "nocturne.h"

void FUN_004d6610(int param_1)

{
  FUN_00460700(DAT_005ae704,param_1 + 0x60);
  FUN_00460c00(DAT_005ae704,*(uint *)(param_1 + 0x6c));
  FUN_004607b0(DAT_005ae704,param_1 + 0x70);
  return;
}
