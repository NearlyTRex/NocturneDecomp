// Name: unkafter_zombie.cpp_FUN_005bf0de
// Address: 005bf0de
// Address Range: [[005bf0de, 005bf115]]
// Convention: unknown
// Signature: int * unkafter_zombie_cpp_FUN_005bf0de(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * unkafter_zombie_cpp_FUN_005bf0de(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_02c9eb38;
  iVar2 = 0;
  if (0 < _DAT_02c9eb34) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_02c9eb34);
  }
  return (int *)0x0;
}
