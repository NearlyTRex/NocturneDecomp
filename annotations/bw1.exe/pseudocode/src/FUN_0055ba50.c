// Name: FUN_0055ba50
// Address: 0055ba50
// Address Range: [[0055ba50, 0055baae]]
// Convention: unknown
// Signature: undefined4 FUN_0055ba50(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0055ba50(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0055c020(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x15b428)) {
    do {
      iVar2 = FUN_0055c020(param_1,iVar3);
      if (iVar2 == iVar1) {
        iVar2 = FUN_0055b990(param_1,iVar3,param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x15b428));
  }
  return 0;
}
