// Name: FUN_004a3d00
// Address: 004a3d00
// Address Range: [[004a3d00, 004a3e38]]
// Convention: unknown
// Signature: int FUN_004a3d00(int param_1,float *param_2)

#include "nocturne.h"

int FUN_004a3d00(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  if (((-1 < (int)param_2[3]) && ((int)param_2[3] < *(int *)(0x01D182F0 + 4))) &&
     (iVar8 = 0, 0 < *(int *)(param_1 + 0x9c))) {
    iVar7 = param_1 + 0xa0;
    do {
      iVar5 = FUN_005b8130(0x01D182F0 + 8 + (int)param_2[3] * 0x100,iVar7);
      if (iVar5 == 0) {
        fVar1 = *(float *)(iVar7 + 0x7c) - *(float *)(iVar7 + 0x74);
        fVar2 = (*param_2 - *(float *)(iVar7 + 0x74)) / fVar1;
        fVar4 = *(float *)(iVar7 + 0x80) - *(float *)(iVar7 + 0x78);
        fVar3 = (param_2[2] - *(float *)(iVar7 + 0x78)) / fVar4;
        if (fVar1 * fVar4 <= 0.0) {
          fVar9 = (float10)*(int *)(iVar7 + 100) +
                  (float10)(*(int *)(iVar7 + 0x6c) - *(int *)(iVar7 + 100)) * (float10)fVar2;
          piVar6 = (int *)FUN_005b7ff0();
          *piVar6 = (int)ROUND(fVar9);
          fVar9 = (float10)(*(int *)(iVar7 + 0x70) - *(int *)(iVar7 + 0x68)) * (float10)fVar3;
        }
        else {
          fVar9 = (float10)*(int *)(iVar7 + 100) +
                  (float10)(*(int *)(iVar7 + 0x6c) - *(int *)(iVar7 + 100)) * (float10)fVar3;
          piVar6 = (int *)FUN_005b7ff0();
          *piVar6 = (int)ROUND(fVar9);
          fVar9 = (float10)(*(int *)(iVar7 + 0x70) - *(int *)(iVar7 + 0x68)) * (float10)fVar2;
        }
        fVar9 = (float10)*(int *)(iVar7 + 0x68) + fVar9;
        piVar6 = (int *)FUN_005b7ff0();
        *piVar6 = (int)ROUND(fVar9);
        return iVar8;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x88;
    } while (iVar8 < *(int *)(param_1 + 0x9c));
  }
  return -1;
}
