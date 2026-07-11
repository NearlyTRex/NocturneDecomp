// Name: FUN_004e1e60
// Address: 004e1e60
// Address Range: [[004e1e60, 004e1f41]]
// Convention: unknown
// Signature: float FUN_004e1e60(int *param_1)

#include "nocturne.h"

float FUN_004e1e60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_1c;
  
  iVar3 = param_1[1] * 0x54c + *param_1 + 0x968;
  if ((float)param_1[2] <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)*(int *)(iVar3 + 100) <= (float)param_1[2]) {
    local_1c = (float)(*(int *)(iVar3 + 0x520) + 1);
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    iVar2 = iVar3;
    if (0 < *(int *)(iVar3 + 0x520)) {
      do {
        if ((float)param_1[2] < (float)*(int *)(iVar2 + 0x524)) {
          return (float)iVar1 +
                 ((float)param_1[2] - (float)iVar4) / (float)(*(int *)(iVar2 + 0x524) - iVar4);
        }
        iVar1 = iVar1 + 1;
        iVar4 = *(int *)(iVar2 + 0x524);
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(iVar3 + 0x520));
    }
    local_1c = (float)*(int *)(iVar3 + 0x520) +
               ((float)param_1[2] - (float)iVar4) / (float)(*(int *)(iVar3 + 100) - iVar4);
  }
  return local_1c;
}
