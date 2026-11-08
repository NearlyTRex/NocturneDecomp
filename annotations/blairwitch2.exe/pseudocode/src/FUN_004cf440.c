// Name: FUN_004cf440
// Address: 004cf440
// Address Range: [[004cf440, 004cf4dc]]
// Convention: unknown
// Signature: undefined4 FUN_004cf440(int param_1)

#include "nocturne.h"

uint FUN_004cf440(int param_1)

{
  uint uVar1;
  
  FUN_00436710(PTR_DAT_00609ed0,"@CHero::toggleLeverNow\n" + 1);
  uVar1 = FUN_005035c0(param_1 + 0x2b4);
  FUN_00436710(PTR_DAT_00609ed0,"  current motion is %s\n",uVar1);
  if (*(int *)(param_1 + 0x25610) != 0) {
    FUN_00436710(PTR_DAT_00609ed0,"  toggling lever %s\n",*(int *)(param_1 + 0x25610));
    FUN_004e20e0(*(uint *)(param_1 + 0x25610));
    *(uint *)(param_1 + 0x25610) = 0;
    return 1;
  }
  FUN_00436710(PTR_DAT_00609ed0,"  but no lever set!\n");
  return 0;
}
