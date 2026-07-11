// Name: FUN_005262d0
// Address: 005262d0
// Address Range: [[005262d0, 00526307]]
// Convention: unknown
// Signature: void FUN_005262d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005262d0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1bd8) = param_1;
  *(uint *)(iVar1 + 0x2dc1bdc) = param_2;
  *(uint *)(iVar1 + 0x2dc1be0) = param_3;
  return;
}
