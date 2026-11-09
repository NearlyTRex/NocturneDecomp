// Name: core_fldnotes.cpp_FUN_004aa350
// Address: 004aa350
// Address Range: [[004aa350, 004aa488]]
// Convention: unknown
// Signature: int core_fldnotes_cpp_FUN_004aa350(int param_1,float *param_2)

#include "nocturne.h"

int core_fldnotes_cpp_FUN_004aa350(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  char *str2;
  int iVar5;
  float10 fVar6;
  
  if (((-1 < (int)param_2[3]) && ((int)param_2[3] < *(int *)(0x01D81080 + 4))) &&
     (iVar5 = 0, 0 < *(int *)(param_1 + 0x9c))) {
    str2 = (char *)(param_1 + 0xa0);
    do {
      iVar3 = _stricmp
                        ((char *)(0x01D81080 + 8 + (int)param_2[3] * 0x100),str2);
      if (iVar3 == 0) {
        fVar1 = (*param_2 - *(float *)(str2 + 0x74)) /
                (*(float *)(str2 + 0x7c) - *(float *)(str2 + 0x74));
        fVar2 = (param_2[2] - *(float *)(str2 + 0x78)) /
                (*(float *)(str2 + 0x80) - *(float *)(str2 + 0x78));
        if ((*(float *)(str2 + 0x7c) - *(float *)(str2 + 0x74)) *
            (*(float *)(str2 + 0x80) - *(float *)(str2 + 0x78)) <= 0.0) {
          fVar6 = (float10)*(int *)(str2 + 100) +
                  (float10)(*(int *)(str2 + 0x6c) - *(int *)(str2 + 100)) * (float10)fVar1;
          piVar4 = (int *)round();
          *piVar4 = (int)ROUND(fVar6);
          fVar6 = (float10)(*(int *)(str2 + 0x70) - *(int *)(str2 + 0x68)) * (float10)fVar2;
        }
        else {
          fVar6 = (float10)*(int *)(str2 + 100) +
                  (float10)(*(int *)(str2 + 0x6c) - *(int *)(str2 + 100)) * (float10)fVar2;
          piVar4 = (int *)round();
          *piVar4 = (int)ROUND(fVar6);
          fVar6 = (float10)(*(int *)(str2 + 0x70) - *(int *)(str2 + 0x68)) * (float10)fVar1;
        }
        fVar6 = (float10)*(int *)(str2 + 0x68) + fVar6;
        piVar4 = (int *)round();
        *piVar4 = (int)ROUND(fVar6);
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      str2 = str2 + 0x88;
    } while (iVar5 < *(int *)(param_1 + 0x9c));
  }
  return -1;
}
