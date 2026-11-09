// Name: core_asgaya.cpp_FUN_005a1e5e
// Address: 005a1e5e
// Address Range: [[005a1e5e, 005a1e95]]
// Convention: unknown
// Signature: int * core_asgaya_cpp_FUN_005a1e5e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_asgaya_cpp_FUN_005a1e5e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_02d24d84;
  iVar2 = 0;
  if (0 < _DAT_02d24d80) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_02d24d80);
  }
  return (int *)0x0;
}
