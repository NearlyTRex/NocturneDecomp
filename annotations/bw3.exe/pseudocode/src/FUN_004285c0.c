// Name: FUN_004285c0
// Address: 004285c0
// Address Range: [[004285c0, 004285f8]]
// Convention: unknown
// Signature: undefined4 FUN_004285c0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004285c0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00428520(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = *(int *)(param_1 + 0x25ac + iVar1 * 0x78), -1 < iVar1)) {
    return *(uint *)(param_1 + 0x2298 + iVar1 * 4);
  }
  return 0;
}
