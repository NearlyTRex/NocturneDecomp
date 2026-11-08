// Name: FUN_00435380
// Address: 00435380
// Address Range: [[00435380, 00435494]]
// Convention: unknown
// Signature: int FUN_00435380(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00435380(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1f64 [2002];
  int local_1c;
  int local_18;
  
  iVar8 = 0;
  local_1c = 0;
  iVar7 = 0;
  for (local_18 = 0; local_18 < *(int *)(0x01E82168 + 0x154e74); local_18 = local_18 + 1) {
    iVar4 = *(int *)(iVar8 + 0x154e78 + 0x01E82168);
    iVar5 = FUN_0049dea0(param_2,iVar4,0);
    iVar6 = iVar7;
    if ((iVar5 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20),
       fVar3 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24),
       fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28),
       SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) <= _DAT_005d5feb)) {
      iVar6 = iVar7 + 4;
      local_1c = local_1c + 1;
      *(int *)((int)local_1f64 + iVar7) = iVar4;
    }
    iVar8 = iVar8 + 4;
    iVar7 = iVar6;
  }
  if (0 < local_1c) {
    iVar7 = local_1c + -1;
    iVar8 = 0;
    do {
      iVar4 = FUN_0040cc60(0,iVar7);
      if (local_1f64[iVar4] != 0) {
        iVar6 = FUN_004354a0(param_1,local_1f64[iVar4]);
        if (iVar6 != 0) {
          return iVar6;
        }
        local_1f64[iVar4] = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 10);
  }
  return 0;
}
