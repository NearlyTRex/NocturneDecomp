// Name: FUN_005a24a0
// Address: 005a24a0
// Address Range: [[005a24a0, 005a24fd]]
// Convention: unknown
// Signature: undefined4 FUN_005a24a0(int param_1)

#include "nocturne.h"

uint FUN_005a24a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar1 == 0) && (iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if ((4 < *(uint *)(iVar1 + 0x24)) && (*(uint *)(iVar1 + 0x24) < 6)) {
    return 1;
  }
  return 2;
}
