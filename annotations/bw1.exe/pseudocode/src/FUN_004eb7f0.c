// Name: FUN_004eb7f0
// Address: 004eb7f0
// Address Range: [[004eb7f0, 004eb88c]]
// Convention: unknown
// Signature: undefined4 FUN_004eb7f0(int param_1)

#include "nocturne.h"

uint FUN_004eb7f0(int param_1)

{
  uint uVar1;
  
  FUN_00445430(PTR_DAT_00611100,"CHero::toggleLeverNow\n");
  uVar1 = FUN_00524770(param_1 + 0x158);
  FUN_00445430(PTR_DAT_00611100,"  current motion is %s\n",uVar1);
  if (*(int *)(param_1 + 0x1ff80) != 0) {
    FUN_00445430(PTR_DAT_00611100,"  toggling lever %s\n",*(int *)(param_1 + 0x1ff80));
    FUN_004ff570(*(uint *)(param_1 + 0x1ff80));
    *(uint *)(param_1 + 0x1ff80) = 0;
    return 1;
  }
  FUN_00445430(PTR_DAT_00611100,"  but no lever set!\n");
  return 0;
}
