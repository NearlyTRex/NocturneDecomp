// Name: FUN_005738d0
// Address: 005738d0
// Address Range: [[005738d0, 00573901]]
// Convention: unknown
// Signature: void FUN_005738d0(int *param_1)

#include "nocturne.h"

void FUN_005738d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_0046ca00(DAT_0060b280,piVar2);
      piVar2 = piVar2 + 6;
    } while (iVar1 < *param_1);
  }
  return;
}
