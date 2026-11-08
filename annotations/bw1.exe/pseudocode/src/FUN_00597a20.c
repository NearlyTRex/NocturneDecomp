// Name: FUN_00597a20
// Address: 00597a20
// Address Range: [[00597a20, 00597a96]]
// Convention: unknown
// Signature: int FUN_00597a20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00597a20(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_00713a74 == 0) && (*(char *)(param_1 + 8) != '\0')) {
    iVar1 = FUN_005970b0(_DAT_02c8a680,*(uint *)(param_1 + 4) & 0xffff,param_1 + 8);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = FUN_005967a0(_DAT_02c8a680,param_1 + 8);
    }
    *(int *)(param_1 + 4) = iVar1;
    _DAT_02c8a67c = iVar1;
    FUN_00597140(_DAT_02c8a680,param_1,bVar2);
    return param_1 + 0x18;
  }
  return param_1 + 0x18;
}
