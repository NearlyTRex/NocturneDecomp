// Name: core_ladder.cpp_FUN_004c46b0
// Address: 004c46b0
// Address Range: [[004c46b0, 004c47b9]]
// Convention: unknown
// Signature: void core_ladder_cpp_FUN_004c46b0(int param_1)

#include "nocturne.h"

void core_ladder_cpp_FUN_004c46b0(int param_1)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  byte local_e4 [48];
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  float local_54 [12];
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x2d8) != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_e4,param_1 + 0x20,param_1 + 0x30);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&local_b4,(CVector3f *)(*(int *)(param_1 + 0x2d8) + 0x20),
               (CVector3f *)(*(int *)(param_1 + 0x2d8) + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_e4,&local_b4);
    pfVar3 = local_54;
    pCVar4 = &local_84;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    local_24 = local_84.m[0].z;
    local_20 = local_84.m[1].z;
    local_1c = local_84.m[2].z;
    if ((float *)(param_1 + 0x2dc) != &local_24) {
      *(float *)(param_1 + 0x2dc) = local_84.m[0].z;
      *(float *)(param_1 + 0x2e0) = local_84.m[1].z;
      *(float *)(param_1 + 0x2e4) = local_84.m[2].z;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_84,&local_18);
    if ((CVector3f *)(param_1 + 0x2e8) != pCVar1) {
      ((CVector3f *)(param_1 + 0x2e8))->x = pCVar1->x;
      *(float *)(param_1 + 0x2ec) = pCVar1->y;
      *(float *)(param_1 + 0x2f0) = pCVar1->z;
      return;
    }
  }
  return;
}
