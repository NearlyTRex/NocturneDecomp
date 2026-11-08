// Name: FUN_005158e0
// Address: 005158e0
// Address Range: [[005158e0, 00515915]]
// Convention: unknown
// Signature: int * FUN_005158e0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005158e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01ed2c8c;
  iVar2 = 0;
  if (0 < _DAT_01ed2c88) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01ed2c88);
  }
  return (int *)0x0;
}
