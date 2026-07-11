// Name: FUN_0044bcd0
// Address: 0044bcd0
// Address Range: [[0044bcd0, 0044bd14]]
// Convention: unknown
// Signature: void FUN_0044bcd0(int *param_1)

#include "nocturne.h"

void FUN_0044bcd0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar3[0x281] != 0) {
        uVar1 = FUN_0044bf00(piVar3[0x281],0);
        FUN_00564494(uVar1);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  return;
}
