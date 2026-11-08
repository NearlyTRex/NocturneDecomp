// Name: FUN_005694e0
// Address: 005694e0
// Address Range: [[005694e0, 00569511]]
// Convention: unknown
// Signature: void FUN_005694e0(int *param_1)

#include "nocturne.h"

void FUN_005694e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_0046e5e0(DAT_005f2afc,piVar2);
      piVar2 = piVar2 + 6;
    } while (iVar1 < *param_1);
  }
  return;
}
