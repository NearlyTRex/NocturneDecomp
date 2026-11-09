// Name: core_dpart.cpp_FUN_00461f2e
// Address: 00461f2e
// Address Range: [[00461f2e, 00461f65]]
// Convention: unknown
// Signature: int * core_dpart_cpp_FUN_00461f2e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_dpart_cpp_FUN_00461f2e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01ba51cc;
  iVar2 = 0;
  if (0 < _DAT_01ba51c8) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01ba51c8);
  }
  return (int *)0x0;
}
