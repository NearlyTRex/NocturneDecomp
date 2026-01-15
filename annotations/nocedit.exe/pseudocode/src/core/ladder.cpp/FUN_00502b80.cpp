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
  float *pfVar3;
  byte bVar4;
  int in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff1c;
  CMatrix3x4f local_b4;
  CVector3f local_84;
  uint local_78;
  uint local_68;
  uint local_58;
  float local_54 [12];
  uint local_24;
  uint local_20;
  uint local_1c;
  
  bVar4 = 0;
  if (*(int *)(in_stack_00000004 + 0x2e0) != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xffffff1c,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_b4,(CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)&stack0xffffff1c,&local_b4,in_stack_ffffff1c);
    pfVar3 = local_54;
    pCVar1 = &local_84;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar1->x = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
      pCVar1 = (CVector3f *)((int)pCVar1 + ((uint)bVar4 * -2 + 1) * 4);
    }
    local_24 = local_78;
    local_20 = local_68;
    local_1c = local_58;
    if ((uint *)(in_stack_00000004 + 0x2e4) != &local_24) {
      *(uint *)(in_stack_00000004 + 0x2e4) = local_78;
      *(uint *)(in_stack_00000004 + 0x2e8) = local_68;
      *(uint *)(in_stack_00000004 + 0x2ec) = local_58;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       (&local_84,(CMatrix3x3f *)&stack0xffffffe8);
    if ((CVector3f *)(in_stack_00000004 + 0x2f0) != pCVar1) {
      ((CVector3f *)(in_stack_00000004 + 0x2f0))->x = pCVar1->x;
      *(float *)(in_stack_00000004 + 0x2f4) = pCVar1->y;
      *(float *)(in_stack_00000004 + 0x2f8) = pCVar1->z;
      return;
    }
  }
  return;
}
