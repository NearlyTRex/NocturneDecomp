// Name: FUN_004579c0
// Address: 004579c0
// Address Range: [[004579c0, 004579f5]]
// Convention: unknown
// Signature: int * FUN_004579c0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004579c0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01b4cd34;
  iVar2 = 0;
  if (0 < _DAT_01b4cd30) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < _DAT_01b4cd30);
  }
  return (int *)0x0;
}
