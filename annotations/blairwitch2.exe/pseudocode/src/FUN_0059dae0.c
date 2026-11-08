// Name: FUN_0059dae0
// Address: 0059dae0
// Address Range: [[0059dae0, 0059db4c]]
// Convention: unknown
// Signature: undefined4 FUN_0059dae0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0059dae0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x838) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x838))) {
    iVar3 = param_1 + 500;
    do {
      iVar1 = FUN_005b8c30(param_2,iVar3);
      if (iVar1 == 0) {
        iVar1 = FUN_005b8c30(*(uint *)(param_1 + 0x210 + iVar2 * 0x20),param_3);
        if (iVar1 == 0) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x838));
  }
  return 0;
}
