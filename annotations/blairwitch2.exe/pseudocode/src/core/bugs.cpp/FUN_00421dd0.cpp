// Name: core_bugs.cpp_FUN_00421dd0
// Address: 00421dd0
// Address Range: [[00421dd0, 00421f1f]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00421dd0(int param_1,float *param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_00421dd0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x20);
  fVar2 = param_2[1] - *(float *)(param_1 + 0x24);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x20) = *param_2;
  *(float *)(param_1 + 0x24) = param_2[1];
  *(float *)(param_1 + 0x28) = param_2[2];
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10afc)) {
    pfVar4 = (float *)(param_1 + 0x10b08);
    do {
      iVar7 = iVar7 + 1;
      *pfVar4 = *pfVar4 - fVar1;
      pfVar4[1] = pfVar4[1] - fVar2;
      pfVar4[2] = pfVar4[2] - fVar3;
      pfVar4[6] = pfVar4[6] - fVar1;
      pfVar4[7] = pfVar4[7] - fVar2;
      pfVar4[8] = pfVar4[8] - fVar3;
      pfVar4 = pfVar4 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0x10afc));
  }
  *(float *)(param_1 + 0x1e608) = *(float *)(param_1 + 0x1e608) - fVar1;
  *(float *)(param_1 + 0x1e60c) = *(float *)(param_1 + 0x1e60c) - fVar2;
  *(float *)(param_1 + 0x1e610) = *(float *)(param_1 + 0x1e610) - fVar3;
  iVar8 = 0;
  *(float *)(param_1 + 0x1e614) = *(float *)(param_1 + 0x1e614) - fVar1;
  *(float *)(param_1 + 0x1e618) = *(float *)(param_1 + 0x1e618) - fVar2;
  *(float *)(param_1 + 0x1e61c) = *(float *)(param_1 + 0x1e61c) - fVar3;
  iVar7 = param_1;
  do {
    iVar7 = iVar7 + 0x30;
    iVar5 = iVar8 * 0x30 + param_1;
    do {
      iVar6 = iVar5 + 4;
      *(float *)(iVar5 + 0x174f4) = *(float *)(iVar5 + 0x174f4) - fVar2;
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xc);
  return;
}
