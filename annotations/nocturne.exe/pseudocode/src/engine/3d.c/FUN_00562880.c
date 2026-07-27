// Name: engine_3d.c_FUN_00562880
// Address: 00562880
// Address Range: [[00562880, 005628b5]]
// Convention: unknown
// Signature: int * engine_3d_c_FUN_00562880(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_3d_c_FUN_00562880(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_02de4980;
  iVar2 = 0;
  if (0 < _DAT_02de497c) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < _DAT_02de497c);
  }
  return (int *)0x0;
}
