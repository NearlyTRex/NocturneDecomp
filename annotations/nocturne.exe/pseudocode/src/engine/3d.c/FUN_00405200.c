// Name: engine_3d.c_FUN_00405200
// Address: 00405200
// Address Range: [[00405200, 0040523e]]
// Convention: unknown
// Signature: int engine_3d_c_FUN_00405200(int param_1)

#include "nocturne.h"

int engine_3d_c_FUN_00405200(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 4);
  if (iVar1 != 0) {
    engine_3d_c_FUN_00408e80(*(int *)(param_1 + 0x18) + param_1);
    return *(int *)(param_1 + 0x14) + param_1;
  }
  engine_3d_c_FUN_00408e80(*(int *)(param_1 + 0x14) + param_1);
  return *(int *)(param_1 + 0x18) + param_1;
}
