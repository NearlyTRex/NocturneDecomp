// Name: FUN_004d3460
// Address: 004d3460
// Address Range: [[004d3460, 004d34fc]]
// Convention: unknown
// Signature: undefined4 FUN_004d3460(int param_1)

#include "nocturne.h"

uint FUN_004d3460(int param_1)

{
  uint uVar1;
  
  FUN_00441ff0(PTR_DAT_005f1690,"@CHero::toggleLeverNow\n" + 1);
  uVar1 = FUN_004fc070(param_1 + 0x158);
  FUN_00441ff0(PTR_DAT_005f1690,"  current motion is %s\n",uVar1);
  if (*(int *)(param_1 + 0x20ba0) != 0) {
    FUN_00441ff0(PTR_DAT_005f1690,"  toggling lever %s\n",*(int *)(param_1 + 0x20ba0));
    FUN_004e0630(*(uint *)(param_1 + 0x20ba0));
    *(uint *)(param_1 + 0x20ba0) = 0;
    return 1;
  }
  FUN_00441ff0(PTR_DAT_005f1690,"  but no lever set!\n");
  return 0;
}
