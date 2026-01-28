// Name: core_ladder.cpp_FUN_00502b80
// Address: 00502b80
// Address Range: [[00502b80, 00502c89]]
// Convention: unknown
// Signature: void core_ladder_cpp_FUN_00502b80(void)

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_00502b80(uint param_1) */

void core_ladder_cpp_FUN_00502b80(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x3f *pCVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x3f local_84;
  uint local_58;
  CMatrix3x4f local_54;
  float local_24;
  float local_20;
  uint local_1c;
  CVector3f local_18;
  
  bVar5 = 0;
  if (*(int *)(in_stack_00000004 + 0x2e0) != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_e4,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_b4,(CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_e4,&local_b4,&local_54);
    pCVar3 = &local_54;
    pCVar4 = &local_84;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].x = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    local_24 = local_84.m[1].x;
    local_20 = local_84.m[2].y;
    local_1c = local_58;
    if ((float *)(in_stack_00000004 + 0x2e4) != &local_24) {
      *(float *)(in_stack_00000004 + 0x2e4) = local_84.m[1].x;
      *(float *)(in_stack_00000004 + 0x2e8) = local_84.m[2].y;
      *(uint *)(in_stack_00000004 + 0x2ec) = local_58;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_84,&local_18);
    if ((CVector3f *)(in_stack_00000004 + 0x2f0) != pCVar1) {
      ((CVector3f *)(in_stack_00000004 + 0x2f0))->x = pCVar1->x;
      *(float *)(in_stack_00000004 + 0x2f4) = pCVar1->y;
      *(float *)(in_stack_00000004 + 0x2f8) = pCVar1->z;
      return;
    }
  }
  return;
}
