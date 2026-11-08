// Name: FUN_004fc310
// Address: 004fc310
// Address Range: [[004fc310, 004fc36b]]
// Convention: unknown
// Signature: void FUN_004fc310(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc310(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      while ((iVar1 = FUN_0040c600(*(uint *)(iVar2 + 0x14),_DAT_01d1bc9c), iVar1 == 0 ||
             ((*(uint *)(iVar1 + 0x2d4) & param_2) == 0))) {
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
        if (*(int *)(param_1 + 0x10) <= iVar3) {
          return;
        }
      }
      FUN_004f8d00(param_1,*(uint *)(iVar2 + 0x14),1);
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}
