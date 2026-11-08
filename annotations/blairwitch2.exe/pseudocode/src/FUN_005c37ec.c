// Name: FUN_005c37ec
// Address: 005c37ec
// Address Range: [[005c37ec, 005c381d]]
// Convention: unknown
// Signature: void FUN_005c37ec(int param_1)

#include "nocturne.h"

void FUN_005c37ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = FUN_005c378c(param_1);
  if (iVar3 == 0) {
    iVar3 = iVar2;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
      iVar3 = DAT_0061eea0;
    }
    DAT_0061eea0 = iVar3;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar1;
    }
  }
  return;
}
