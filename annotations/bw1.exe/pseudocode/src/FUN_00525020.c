// Name: FUN_00525020
// Address: 00525020
// Address Range: [[00525020, 00525109]]
// Convention: unknown
// Signature: float FUN_00525020(int *param_1)

#include "nocturne.h"

float FUN_00525020(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_1c;
  
  iVar3 = param_1[1] * 0x120 + *param_1 + 0x1c28;
  if ((float)param_1[2] <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)*(int *)(iVar3 + 100) <= (float)param_1[2]) {
    local_1c = (float)(*(int *)(iVar3 + 0xf4) + 1);
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    iVar2 = iVar3;
    if (0 < *(int *)(iVar3 + 0xf4)) {
      do {
        if ((float)param_1[2] < (float)*(int *)(iVar2 + 0xf8)) {
          return (float)iVar1 +
                 ((float)param_1[2] - (float)iVar4) / (float)(*(int *)(iVar2 + 0xf8) - iVar4);
        }
        iVar1 = iVar1 + 1;
        iVar4 = *(int *)(iVar2 + 0xf8);
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(iVar3 + 0xf4));
    }
    local_1c = (float)*(int *)(iVar3 + 0xf4) +
               ((float)param_1[2] - (float)iVar4) / (float)(*(int *)(iVar3 + 100) - iVar4);
  }
  return local_1c;
}
