// Name: core_cloth.cpp_FUN_0043e1a0
// Address: 0043e1a0
// Address Range: [[0043e1a0, 0043e297]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e1a0()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043e1a0(uint param_1, uint param_2) */

void core_cloth_cpp_FUN_0043e1a0(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CVector3f *input;
  int iVar3;
  int in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_00000010;
  byte auStack_54 [36];
  float local_30;
  float local_2c;
  CVector3f CStack_24;
  
  auStack_54._32_4_ = *in_stack_00000008 - *(float *)(in_stack_00000004 + 0x3fe54);
  local_30 = in_stack_00000008[1] - *(float *)(in_stack_00000004 + 0x3fe58);
  local_2c = in_stack_00000008[2] - *(float *)(in_stack_00000004 + 0x3fe5c);
  if ((float *)(in_stack_00000004 + 0x3fe54) != in_stack_00000008) {
    *(float *)(in_stack_00000004 + 0x3fe54) = *in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x3fe58) = in_stack_00000008[1];
    *(float *)(in_stack_00000004 + 0x3fe5c) = in_stack_00000008[2];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffa4,(CVector3f *)(auStack_54 + 0x20));
  iVar3 = 0;
  if (0 < (int)in_stack_00000008[0x41]) {
    pCVar2 = (CVector3f *)(in_stack_00000008 + 0x15bf);
    do {
      input = (CVector3f *)(in_stack_00000008 + iVar3 * 0x47 + 0x15b6);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)&stack0xffffffa8,&CStack_24,input);
      if (input != pCVar1) {
        input->x = pCVar1->x;
        input->y = pCVar1->y;
        input->z = pCVar1->z;
      }
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)auStack_54,(CVector3f *)&stack0xffffffec,
                          (CVector3f *)(in_stack_00000008 + iVar3 * 0x47 + 0x15b6));
      if (pCVar2 != pCVar1) {
        pCVar2->x = pCVar1->x;
        pCVar2->y = pCVar1->y;
        pCVar2->z = pCVar1->z;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CVector3f *)&pCVar2[0x17].z;
    } while (iVar3 < *(int *)(in_stack_00000010 + 0x104));
  }
  return;
}
