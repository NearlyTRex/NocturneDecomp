// Name: engine_3d.c_findHardwareEdgeByYMin_FUN_00494220
// Address: 00494220
// Address Range: [[00494220, 00494255]]
// Convention: unknown
// Signature: int * engine_3d_c_findHardwareEdgeByYMin_FUN_00494220(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_3d_c_findHardwareEdgeByYMin_FUN_00494220(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01c70f7c;
  iVar2 = 0;
  if (0 < _DAT_01c70f78) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xe;
    } while (iVar2 < _DAT_01c70f78);
  }
  return (int *)0x0;
}
