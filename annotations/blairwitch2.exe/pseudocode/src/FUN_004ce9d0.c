// Name: FUN_004ce9d0
// Address: 004ce9d0
// Address Range: [[004ce9d0, 004ce9ff]]
// Convention: unknown
// Signature: undefined4 FUN_004ce9d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ce9d0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c8f0(param_2,_DAT_02668498);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x11344) != 0)) && (*(int *)(iVar1 + 0x11344) == 2)) {
    return 0;
  }
  return 1;
}
