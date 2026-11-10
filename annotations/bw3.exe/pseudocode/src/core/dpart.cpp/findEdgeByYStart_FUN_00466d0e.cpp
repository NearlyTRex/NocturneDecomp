// Name: core_dpart.cpp_findEdgeByYStart_FUN_00466d0e
// Address: 00466d0e
// Address Range: [[00466d0e, 00466d45]]
// Convention: unknown
// Signature: int * core_dpart_cpp_findEdgeByYStart_FUN_00466d0e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_dpart_cpp_findEdgeByYStart_FUN_00466d0e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01bdcfd8;
  iVar2 = 0;
  if (0 < _DAT_01bdcfd4) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01bdcfd4);
  }
  return (int *)0x0;
}
