// Name: engine_3d.c_transformAndBufferVertices_FUN_00404530
// Address: 00404530
// Address Range: [[00404530, 00404601]]
// Convention: unknown
// Signature: int engine_3d_c_transformAndBufferVertices_FUN_00404530(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_transformAndBufferVertices_FUN_00404530(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int local_14;
  
  iVar1 = 0;
  DAT_005b7644 = 1;
  puVar2 = &DAT_005c5014 + (*(int *)(param_1 + 4) + DAT_006b0264) * 0xc;
  iVar3 = param_1 + 0xc;
  local_14 = 0;
  _DAT_006b0298 = iVar3;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c(puVar2,iVar3);
      puVar2[0xb] = _DAT_01c038f4;
      if ((*(byte *)((int)puVar2 + 0x13) & 0x80) == 0) {
        local_14 = local_14 + 1;
      }
      puVar2 = puVar2 + 0xc;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if (DAT_006b0264 == 0) {
    DAT_006b0268 = DAT_006b0264;
  }
  if (local_14 == *(int *)(param_1 + 8)) {
    DAT_005b7644 = 0;
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 0xc;
}
