// Name: FUN_00459b80
// Address: 00459b80
// Address Range: [[00459b80, 00459c9a]]
// Convention: unknown
// Signature: void FUN_00459b80(int *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459b80(int *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  float10 fVar5;
  float local_28;
  byte local_1c;
  
  if (param_3 == 0) {
    FUN_00459910(param_1);
  }
  iVar4 = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = 0;
      if (0 < *param_1) {
        do {
          fVar1 = (float)(*param_1 / 2 - iVar3);
          fVar2 = (float)(param_1[1] / 2 - iVar4);
          local_28 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) / (float)(*param_1 / 2);
          if (1.0 < local_28) {
            local_28 = 1.0;
          }
          fVar1 = (1.0 - local_28) * param_2;
          if (param_3 == 0) {
            fVar5 = (float10)fVar1 * (float10)_DAT_005babfa * (float10)_DAT_005bac02;
          }
          else {
            fVar5 = (float10)*(byte *)(param_1[0x12] + *param_1 * iVar4 + iVar3) * (float10)fVar1;
          }
          FUN_005a3120();
          local_1c = (byte)(int)ROUND(fVar5);
          if (0x3f < local_1c) {
            local_1c = 0x3f;
          }
          *(byte *)(*param_1 * iVar4 + extraout_ECX + param_1[0x12]) = local_1c;
          iVar3 = extraout_ECX + 1;
        } while (iVar3 < *param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  return;
}
