// Name: core_dpart.cpp_FUN_0047a43e
// Address: 0047a43e
// Address Range: [[0047a43e, 0047a475]]
// Convention: unknown
// Signature: int * core_dpart_cpp_FUN_0047a43e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_dpart_cpp_FUN_0047a43e(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01bc0788;
  iVar2 = 0;
  if (0 < _DAT_01bc0784) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_01bc0784);
  }
  return (int *)0x0;
}
