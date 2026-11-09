// Name: unkafter_zombie.cpp_FUN_0059a06e
// Address: 0059a06e
// Address Range: [[0059a06e, 0059a0a5]]
// Convention: unknown
// Signature: int * unkafter_zombie_cpp_FUN_0059a06e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * unkafter_zombie_cpp_FUN_0059a06e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_026672ac;
  iVar2 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_026672a8);
  }
  return (int *)0x0;
}
