// Name: FUN_004e1f50
// Address: 004e1f50
// Address Range: [[004e1f50, 004e2067]]
// Convention: unknown
// Signature: float FUN_004e1f50(int *param_1,int param_2,float param_3)

#include "nocturne.h"

float FUN_004e1f50(int *param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  uint local_18;
  
  iVar3 = param_2 * 0x54c + *param_1 + 0x968;
  if (param_3 <= 0.0) {
    local_18 = 0.0;
  }
  else if ((float)(*(int *)(iVar3 + 0x520) + 1) <= param_3) {
    local_18 = (float)(*(int *)(iVar3 + 100) + -1);
  }
  else {
    fVar5 = (float10)param_3;
    fVar6 = fVar5;
    FUN_00563a30();
    iVar3 = (int)ROUND(fVar5);
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = *(int *)(extraout_EDX + 0x520 + iVar3 * 4);
    }
    iVar2 = *(int *)(extraout_EDX + 100);
    if (iVar3 < *(int *)(extraout_EDX + 0x520)) {
      iVar2 = *(int *)(extraout_EDX + 0x524 + iVar3 * 4);
    }
    fVar1 = (float)iVar4 * (1.0 - (float)(fVar6 - (float10)iVar3)) +
            (float)iVar2 * (float)(fVar6 - (float10)iVar3);
    if (fVar1 < 0.0) {
      local_18 = 0.0;
    }
    else {
      local_18 = (float)(*(int *)(extraout_EDX + 100) + -1);
      if (fVar1 <= local_18) {
        return fVar1;
      }
    }
  }
  return local_18;
}
