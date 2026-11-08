// Name: FUN_004de6e0
// Address: 004de6e0
// Address Range: [[004de6e0, 004de73b]]
// Convention: unknown
// Signature: void FUN_004de6e0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de6e0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      while ((iVar1 = FUN_0040c840(*(uint *)(iVar2 + 0x14),_DAT_01d70a74), iVar1 == 0 ||
             ((*(uint *)(iVar1 + 0x2d4) & param_2) == 0))) {
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
        if (*(int *)(param_1 + 0x10) <= iVar3) {
          return;
        }
      }
      FUN_004dbaa0(param_1,*(uint *)(iVar2 + 0x14),1);
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}
