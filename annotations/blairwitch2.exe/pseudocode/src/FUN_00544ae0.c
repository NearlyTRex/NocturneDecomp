// Name: FUN_00544ae0
// Address: 00544ae0
// Address Range: [[00544ae0, 00544baa]]
// Convention: unknown
// Signature: void FUN_00544ae0(int param_1)

#include "nocturne.h"

void FUN_00544ae0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_24;
  float local_1c;
  
  iVar2 = FUN_005415d0(param_1);
  iVar6 = 0;
  if (0 < *(int *)(iVar2 + 0x1d1f8)) {
    local_24 = param_1;
    do {
      iVar3 = 0;
      *(uint *)(local_24 + 0x288c) = 0xffffffff;
      local_1c = 0.0;
      pfVar4 = (float *)(param_1 + 0x1750);
      iVar5 = iVar2;
      if (0 < *(int *)(iVar2 + 0x1d1f8)) {
        do {
          if ((iVar6 == *(int *)(iVar5 + 0x1d21c)) &&
             (fVar1 = SQRT(pfVar4[2] * pfVar4[2] + *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]),
             local_1c < fVar1)) {
            *(int *)(local_24 + 0x288c) = iVar3;
            local_1c = fVar1;
          }
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 3;
          iVar5 = iVar5 + 0x24;
        } while (iVar3 < *(int *)(iVar2 + 0x1d1f8));
      }
      iVar6 = iVar6 + 1;
      local_24 = local_24 + 4;
    } while (iVar6 < *(int *)(iVar2 + 0x1d1f8));
  }
  return;
}
