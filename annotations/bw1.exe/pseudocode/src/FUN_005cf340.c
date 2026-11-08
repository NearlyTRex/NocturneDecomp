// Name: FUN_005cf340
// Address: 005cf340
// Address Range: [[005cf340, 005cf382]]
// Convention: unknown
// Signature: undefined4 FUN_005cf340(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005cf340(uint param_1)

{
  int iVar1;
  
  if ((_DAT_02c9f6e0 != 0) && ((*(byte *)((param_1 >> 8 & 0xff) + 0x2c9f6f1) & 1) != 0)) {
    iVar1 = FUN_005cf390(param_1 & 0xff);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
