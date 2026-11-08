// Name: FUN_0045d770
// Address: 0045d770
// Address Range: [[0045d770, 0045d7b4]]
// Convention: unknown
// Signature: void FUN_0045d770(int *param_1)

#include "nocturne.h"

void FUN_0045d770(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar3[0x281] != 0) {
        uVar1 = FUN_0045d9a0(piVar3[0x281],0);
        FUN_005c0344(uVar1);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  return;
}
