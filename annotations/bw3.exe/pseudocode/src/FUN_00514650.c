// Name: FUN_00514650
// Address: 00514650
// Address Range: [[00514650, 00514698]]
// Convention: unknown
// Signature: void FUN_00514650(int *param_1)

#include "nocturne.h"

void FUN_00514650(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar2[1] != 0) {
        uVar1 = FUN_00512f70(piVar2[1],0);
        FUN_005a30c4(uVar1);
      }
      piVar2[1] = 0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  *param_1 = 0;
  return;
}
