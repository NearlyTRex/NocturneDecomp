// Name: FUN_00458140
// Address: 00458140
// Address Range: [[00458140, 00458178]]
// Convention: unknown
// Signature: undefined4 FUN_00458140(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00458140(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004580a0(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = *(int *)(param_1 + 0x25ac + iVar1 * 0x78), -1 < iVar1)) {
    return *(uint *)(param_1 + 0x2298 + iVar1 * 4);
  }
  return 0;
}
