// Name: FUN_00510450
// Address: 00510450
// Address Range: [[00510450, 0051069a]]
// Convention: unknown
// Signature: undefined4 FUN_00510450(float *param_1,float param_2,float param_3,int param_4)

#include "nocturne.h"

uint FUN_00510450(float *param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(float *)(param_4 + 0x14) < param_1[9]) && (param_1[10] < *(float *)(param_4 + 0x18))) {
    fVar3 = param_2 - param_1[4];
    fVar4 = param_3 - param_1[5];
    fVar2 = *(float *)(param_4 + 0x1c) + param_1[8];
    fVar5 = fVar2 * fVar2;
    fVar1 = fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar5 <= fVar1) {
      fVar1 = param_1[0xd];
      fVar2 = param_1[0xe];
      fVar3 = fVar4 * fVar2 + fVar3 * fVar1;
      if (0.0 < fVar3) {
        fVar7 = fVar1 * fVar3 + param_1[4];
        fVar4 = param_2 - fVar7;
        fVar6 = fVar2 * fVar3 + param_1[5];
        fVar3 = param_3 - fVar6;
        fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
        if (fVar3 < fVar5) {
          fVar3 = SQRT(fVar5 - fVar3);
          fVar7 = fVar7 - fVar1 * fVar3;
          fVar6 = fVar6 - fVar2 * fVar3;
          if (ABS(param_1[6]) <= ABS(param_1[7])) {
            fVar3 = (fVar6 - param_1[5]) / param_1[7];
          }
          else {
            fVar3 = (fVar7 - param_1[4]) / param_1[6];
          }
          if ((0.0 <= fVar3) && (fVar3 < *param_1)) {
            if (1.0 < fVar3) {
              return 0;
            }
            param_1[2] = 0.0;
            *param_1 = fVar3;
            param_1[1] = fVar7 - param_2;
            param_1[3] = fVar6 - param_3;
            return 1;
          }
        }
      }
    }
    else {
      fVar2 = SQRT(fVar1) - fVar2;
      if ((float)-0.001 < fVar2) {
        fVar2 = -0.001;
      }
      if (fVar2 < *param_1) {
        param_1[2] = 0.0;
        *param_1 = fVar2;
        param_1[1] = -fVar3;
        param_1[3] = -fVar4;
        return 1;
      }
    }
  }
  return 0;
}
