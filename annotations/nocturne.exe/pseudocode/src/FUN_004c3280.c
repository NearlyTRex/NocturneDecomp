// Name: FUN_004c3280
// Address: 004c3280
// Address Range: [[004c3280, 004c32db]]
// Convention: unknown
// Signature: void FUN_004c3280(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3280(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      while ((iVar1 = FUN_0040d890(*(uint *)(iVar2 + 0xc),_DAT_01cc30e0), iVar1 == 0 ||
             ((*(uint *)(iVar1 + 0x2cc) & param_2) == 0))) {
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
        if (*(int *)(param_1 + 8) <= iVar3) {
          return;
        }
      }
      FUN_004c07b0(param_1,*(uint *)(iVar2 + 0xc),1);
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return;
}
