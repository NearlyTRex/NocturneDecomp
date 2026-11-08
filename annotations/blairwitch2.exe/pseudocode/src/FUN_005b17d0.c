// Name: FUN_005b17d0
// Address: 005b17d0
// Address Range: [[005b17d0, 005b1844]]
// Convention: unknown
// Signature: void FUN_005b17d0(int *param_1,int param_2)

#include "nocturne.h"

void FUN_005b17d0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = 0, piVar1 = param_1, 0 < *param_1)) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005b0ef0(piVar1[0x65],param_2);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005b0fe0(piVar1[0x65],param_2);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}
