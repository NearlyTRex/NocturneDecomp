// Name: FUN_0058bdf0
// Address: 0058bdf0
// Address Range: [[0058bdf0, 0058be28]]
// Convention: unknown
// Signature: undefined4 FUN_0058bdf0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0058bdf0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058bd50(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = *(int *)(param_1 + 0x25ac + iVar1 * 0x78), -1 < iVar1)) {
    return *(uint *)(param_1 + 0x2298 + iVar1 * 4);
  }
  return 0;
}
