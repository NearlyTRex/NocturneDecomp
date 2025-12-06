// Name: core_ladder.cpp_FUN_00502b80
// Address: 00502b80
// Address Range: [[00502b80, 00502c89]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502b80()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_00502b80(uint param_1) */

void core_ladder_cpp_FUN_00502b80(void)

{
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff24;
  byte auStack_b0 [52];
  uint uStack_7c;
  CVector3f local_78;
  uint uStack_6c;
  uint uStack_5c;
  uint uStack_4c;
  uint auStack_48 [12];
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  if (*(int *)(in_stack_00000004 + 0x2e0) != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xffffff1c,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)auStack_b0,(CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)&stack0xffffff24,(CMatrix3x4f *)(auStack_b0 + 4),in_stack_ffffff24);
    puVar3 = auStack_48;
    puVar4 = &uStack_7c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_18 = uStack_6c;
    uStack_14 = uStack_5c;
    uStack_10 = uStack_4c;
    if ((uint *)(in_stack_00000004 + 0x2e4) != &local_18) {
      *(uint *)(in_stack_00000004 + 0x2e4) = uStack_6c;
      *(uint *)(in_stack_00000004 + 0x2e8) = uStack_5c;
      *(uint *)(in_stack_00000004 + 0x2ec) = uStack_4c;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       (&local_78,(CMatrix3x3f *)&stack0xfffffff4);
    if ((CVector3f *)(in_stack_00000004 + 0x2f0) != pCVar1) {
      ((CVector3f *)(in_stack_00000004 + 0x2f0))->x = pCVar1->x;
      *(float *)(in_stack_00000004 + 0x2f4) = pCVar1->y;
      *(float *)(in_stack_00000004 + 0x2f8) = pCVar1->z;
      return;
    }
  }
  return;
}
