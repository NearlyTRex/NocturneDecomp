// Name: FUN_004d6420
// Address: 004d6420
// Address Range: [[004d6420, 004d6548]]
// Convention: unknown
// Signature: void FUN_004d6420(float *param_1,float *param_2,uint param_3,int param_4,int *param_5)

#include "nocturne.h"

void FUN_004d6420(float *param_1,float *param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int local_14;
  
  *param_5 = 0;
  local_14 = 0;
  pfVar6 = param_2;
  if (0 < (int)param_3) {
    do {
      uVar3 = local_14 + 1;
      if (uVar3 == param_3) {
        uVar3 = uVar3 ^ param_3;
      }
      pfVar4 = param_2 + uVar3 * 3;
      bVar2 = 0.0 < param_1[2] * pfVar6[2] + *param_1 * *pfVar6 + param_1[1] * pfVar6[1] +
                    param_1[3];
      if (0.0 < param_1[2] * pfVar4[2] + *param_1 * *pfVar4 + param_1[1] * pfVar4[1] + param_1[3]) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        pfVar4 = (float *)(*param_5 * 0xc + param_4);
        if (pfVar4 != pfVar6) {
          *pfVar4 = *pfVar6;
          pfVar4[1] = pfVar6[1];
          pfVar4[2] = pfVar6[2];
        }
        *param_5 = *param_5 + 1;
        break;
      case 1:
        FUN_004d62f0(param_1,pfVar4,pfVar6,*param_5 * 0xc + param_4);
        *param_5 = *param_5 + 1;
        break;
      case 2:
        pfVar5 = (float *)(*param_5 * 0xc + param_4);
        if (pfVar5 != pfVar6) {
          *pfVar5 = *pfVar6;
          pfVar5[1] = pfVar6[1];
          pfVar5[2] = pfVar6[2];
        }
        iVar1 = *param_5;
        *param_5 = iVar1 + 1;
        FUN_004d62f0(param_1,pfVar6,pfVar4,(iVar1 + 1) * 0xc + param_4);
        *param_5 = *param_5 + 1;
      }
      local_14 = local_14 + 1;
      pfVar6 = pfVar6 + 3;
    } while (local_14 < (int)param_3);
  }
  return;
}
