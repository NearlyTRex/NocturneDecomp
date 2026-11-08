// Name: FUN_0053c8f0
// Address: 0053c8f0
// Address Range: [[0053c8f0, 0053c938]]
// Convention: unknown
// Signature: void FUN_0053c8f0(int *param_1)

#include "nocturne.h"

void FUN_0053c8f0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar2[1] != 0) {
        uVar1 = FUN_0053b210(piVar2[1],0);
        FUN_005c0344(uVar1);
      }
      piVar2[1] = 0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  *param_1 = 0;
  return;
}
