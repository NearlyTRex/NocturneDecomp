// Name: core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0
// Address: 0042baa0
// Address Range: [[0042baa0, 0042bc95]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_68 [12];
  float local_38;
  float local_34;
  float local_30;
  
  if ((*(int *)(param_1 + 0x280) != 0) && (param_2[1] < *(float *)(param_1 + 0x564))) {
    param_2[5] = 0.0;
    param_2[4] = param_2[5];
    param_2[3] = param_2[4];
    param_2[1] = *(float *)(param_1 + 0x564);
  }
  if (&local_38 != local_68) {
    local_38 = *param_2 - *param_3;
    local_34 = param_2[1] - param_3[1];
    local_30 = param_2[2] - param_3[2];
  }
  fVar6 = (float)(((int)(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) >> 1) +
                 (int)CVector3f_01c70708.y);
  if (fVar6 <= *(float *)(param_1 + 0x158)) {
    return;
  }
  fVar2 = fVar6 - *(float *)(param_1 + 0x158);
  fVar6 = 1.0 / fVar6;
  fVar4 = local_38 * fVar2 * fVar6;
  fVar5 = local_34 * fVar2 * fVar6;
  fVar6 = local_30 * fVar2 * fVar6;
  *param_2 = *param_2 - fVar4;
  param_2[1] = param_2[1] - fVar5;
  pfVar1 = (float *)(param_1 + 0x568);
  param_2[2] = param_2[2] - fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  param_2[3] = param_2[3] - fVar4 * *pfVar1;
  param_2[4] = param_2[4] - fVar5 * fVar2;
  param_2[5] = param_2[5] - fVar6 * fVar3;
  *param_3 = *param_3 + fVar4;
  param_3[1] = param_3[1] + fVar5;
  param_3[2] = param_3[2] + fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  param_3[3] = param_3[3] + fVar4 * *pfVar1;
  param_3[4] = param_3[4] + fVar5 * fVar2;
  param_3[5] = param_3[5] + fVar6 * fVar3;
  return;
}
