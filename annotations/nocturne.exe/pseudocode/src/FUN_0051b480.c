// Name: FUN_0051b480
// Address: 0051b480
// Address Range: [[0051b480, 0051b53f]]
// Convention: unknown
// Signature: void FUN_0051b480(int param_1)

#include "nocturne.h"

void FUN_0051b480(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  float local_18;
  
  iVar2 = FUN_00518130(param_1);
  iVar6 = 0;
  if (0 < *(int *)(iVar2 + 0x28558)) {
    local_1c = param_1;
    do {
      *(uint *)(local_1c + 0x288c) = 0xffffffff;
      iVar3 = 0;
      local_18 = 0.0;
      pfVar4 = (float *)(param_1 + 0x1750);
      iVar5 = iVar2;
      if (0 < *(int *)(iVar2 + 0x28558)) {
        do {
          if ((iVar6 == *(int *)(iVar5 + 0x2857c)) &&
             (fVar1 = SQRT(pfVar4[2] * pfVar4[2] + *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]),
             local_18 < fVar1)) {
            *(int *)(local_1c + 0x288c) = iVar3;
            local_18 = fVar1;
          }
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 3;
          iVar5 = iVar5 + 0x24;
        } while (iVar3 < *(int *)(iVar2 + 0x28558));
      }
      iVar6 = iVar6 + 1;
      local_1c = local_1c + 4;
    } while (iVar6 < *(int *)(iVar2 + 0x28558));
  }
  return;
}
