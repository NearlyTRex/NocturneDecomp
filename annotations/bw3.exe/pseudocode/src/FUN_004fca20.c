// Name: FUN_004fca20
// Address: 004fca20
// Address Range: [[004fca20, 004fcb42]]
// Convention: unknown
// Signature: float FUN_004fca20(int *param_1,int param_2,float param_3)

#include "nocturne.h"

float FUN_004fca20(int *param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  uint local_1c;
  
  iVar3 = *param_1 + 0x1c28 + param_2 * 0x120;
  if (param_3 <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)(*(int *)(iVar3 + 0xf4) + 1) <= param_3) {
    local_1c = (float)(*(int *)(iVar3 + 100) + -1);
  }
  else {
    fVar5 = (float10)param_3;
    fVar6 = fVar5;
    FUN_005a3120();
    iVar3 = (int)ROUND(fVar5);
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = *(int *)(extraout_EDX + 0xf4 + iVar3 * 4);
    }
    iVar2 = *(int *)(extraout_EDX + 100);
    if (iVar3 < *(int *)(extraout_EDX + 0xf4)) {
      iVar2 = *(int *)(extraout_EDX + 0xf8 + iVar3 * 4);
    }
    fVar1 = (float)iVar4 * (1.0 - (float)(fVar6 - (float10)iVar3)) +
            (float)iVar2 * (float)(fVar6 - (float10)iVar3);
    if (fVar1 < 0.0) {
      local_1c = 0.0;
    }
    else {
      local_1c = (float)(*(int *)(extraout_EDX + 100) + -1);
      if (fVar1 <= local_1c) {
        return fVar1;
      }
    }
  }
  return local_1c;
}
