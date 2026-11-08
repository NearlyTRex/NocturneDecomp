// Name: FUN_0053db80
// Address: 0053db80
// Address Range: [[0053db80, 0053dbb5]]
// Convention: unknown
// Signature: int * FUN_0053db80(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0053db80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01e7d5bc;
  iVar2 = 0;
  if (0 < _DAT_01e7d5b8) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01e7d5b8);
  }
  return (int *)0x0;
}
