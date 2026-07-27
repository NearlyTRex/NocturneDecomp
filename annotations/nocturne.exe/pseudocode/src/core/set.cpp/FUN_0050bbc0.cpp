// Name: core_set.cpp_FUN_0050bbc0
// Address: 0050bbc0
// Address Range: [[0050bbc0, 0050bce3]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0050bbc0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0050bbc0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = (int *)(*(int *)(param_2 + 0x24) * 0xc + param_1);
  piVar1 = (int *)(*(int *)(param_2 + 0x18) * 0xc + param_1);
  piVar7 = (int *)(param_1 + *(int *)(param_2 + 0x30) * 0xc);
  fVar2 = (float)(piVar6[1] - piVar1[1]) * (float)(piVar7[2] - piVar6[2]) -
          (float)(piVar7[1] - piVar6[1]) * (float)(piVar6[2] - piVar1[2]);
  fVar5 = (float)(*piVar7 - *piVar6) * (float)(piVar6[2] - piVar1[2]) -
          (float)(*piVar6 - *piVar1) * (float)(piVar7[2] - piVar6[2]);
  fVar4 = (float)(*piVar6 - *piVar1) * (float)(piVar7[1] - piVar6[1]) -
          (float)(*piVar7 - *piVar6) * (float)(piVar6[1] - piVar1[1]);
  fVar3 = (float)((int)CVector3f_01c70708.z -
                 ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) >> 1)) * (float)_DAT_0059063a
  ;
  *(float *)(param_2 + 8) = fVar2 * fVar3;
  *(float *)(param_2 + 0xc) = fVar5 * fVar3;
  *(float *)(param_2 + 0x10) = fVar4 * fVar3;
  return;
}
