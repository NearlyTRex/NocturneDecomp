// Name: FUN_0051b370
// Address: 0051b370
// Address Range: [[0051b370, 0051b3b8]]
// Convention: unknown
// Signature: void FUN_0051b370(int *param_1)

#include "nocturne.h"

void FUN_0051b370(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar2[1] != 0) {
        uVar1 = FUN_00519ec0(piVar2[1],0);
        FUN_005b7fdc(uVar1);
      }
      piVar2[1] = 0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  *param_1 = 0;
  return;
}
