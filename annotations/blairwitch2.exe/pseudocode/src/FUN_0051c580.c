// Name: FUN_0051c580
// Address: 0051c580
// Address Range: [[0051c580, 0051c5b5]]
// Convention: unknown
// Signature: int * FUN_0051c580(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0051c580(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01e6164c;
  iVar2 = 0;
  if (0 < _DAT_01e61648) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01e61648);
  }
  return (int *)0x0;
}
