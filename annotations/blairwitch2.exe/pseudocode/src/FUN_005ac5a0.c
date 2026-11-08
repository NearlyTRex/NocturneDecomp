// Name: FUN_005ac5a0
// Address: 005ac5a0
// Address Range: [[005ac5a0, 005ac601]]
// Convention: unknown
// Signature: undefined4 FUN_005ac5a0(int param_1)

#include "nocturne.h"

uint FUN_005ac5a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar2 == 0) && (iVar2 = FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar2 == 0)) {
    return 0;
  }
  iVar2 = FUN_005035c0(param_1 + 0x2b4);
  uVar1 = *(uint *)(iVar2 + 0x24);
  if (4 < uVar1) {
    if (uVar1 < 6) {
      return 1;
    }
    if (uVar1 == 6) {
      return 2;
    }
  }
  return 0;
}
