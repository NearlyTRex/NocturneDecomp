// Name: FUN_0043fc50
// Address: 0043fc50
// Address Range: [[0043fc50, 0043fcc4]]
// Convention: unknown
// Signature: void FUN_0043fc50(int *param_1,int param_2)

#include "nocturne.h"

void FUN_0043fc50(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = 0, piVar1 = param_1, 0 < *param_1)) {
    do {
      iVar2 = iVar2 + 1;
      FUN_0043f370(piVar1[0x65],param_2);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      FUN_0043f460(piVar1[0x65],param_2);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}
