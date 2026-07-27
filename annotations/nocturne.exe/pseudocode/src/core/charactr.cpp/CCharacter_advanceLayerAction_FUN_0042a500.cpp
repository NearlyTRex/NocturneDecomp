// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500
// Address: 0042a500
// Address Range: [[0042a500, 0042a6ff]]
// Convention: unknown
// Signature: int core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500(int param_1,float *param_2,int param_3)

#include "nocturne.h"

int core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float local_18;
  
  if ((*(int *)(param_1 + 0x2a84) < 0) || (*(int *)(param_1 + 0x2620) <= *(int *)(param_1 + 0x2a84))
     ) {
    PTR_01cc4800 = "..\\core\\charactr.cpp";
    INT_01cc4804 = 0xf00;
    core_main_c_FUN_004c8440("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  piVar6 = (int *)(param_1 + 0x2624 + *(int *)(param_1 + 0x2a84) * 0x38);
  if (*(float *)(param_1 + 0x2a88) < 0.0) {
    *(uint *)(param_1 + 0x2a88) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x2a88)) {
    *(uint *)(param_1 + 0x2a88) = 0x3f800000;
  }
  fVar3 = *(float *)(param_1 + 0x2a88) * (float)piVar6[0xd];
  local_18 = (float)piVar6[0xd] * (1.0 - *(float *)(param_1 + 0x2a88));
  iVar7 = piVar6[10];
  if (iVar7 != 0) goto LAB_0042a616;
  fVar1 = *(float *)(piVar6[1] * 0x50 + param_1 + 0xb64c + param_3 * 4);
  fVar2 = *(float *)(*piVar6 * 0x50 + param_1 + 0xb64c + param_3 * 4);
  fVar4 = fVar1 + local_18;
  fVar5 = fVar2 + fVar3;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar5) {
      iVar7 = 1;
      goto LAB_0042a616;
    }
    if (fVar1 <= fVar2) {
      iVar7 = 1;
      goto LAB_0042a616;
    }
  }
  iVar7 = -1;
LAB_0042a616:
  if (iVar7 < 0) {
    local_18 = fVar3;
  }
  if (*param_2 < local_18) {
    fVar3 = ((float)iVar7 * *param_2) / (float)piVar6[0xd] + *(float *)(param_1 + 0x2a88);
    *(float *)(param_1 + 0x2a88) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x2a88) = 0;
    }
    if (1.0 < *(float *)(param_1 + 0x2a88)) {
      *(uint *)(param_1 + 0x2a88) = 0x3f800000;
    }
    *param_2 = 0.0;
    return -1;
  }
  *param_2 = *param_2 - local_18;
  if (-1 < iVar7) {
    iVar7 = piVar6[1];
    *(uint *)(param_1 + 0x2a88) = 0x3f800000;
    return iVar7;
  }
  iVar7 = *piVar6;
  *(uint *)(param_1 + 0x2a88) = 0;
  return iVar7;
}
