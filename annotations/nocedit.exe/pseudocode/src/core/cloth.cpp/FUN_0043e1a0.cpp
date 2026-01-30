// Name: core_cloth.cpp_FUN_0043e1a0
// Address: 0043e1a0
// Address Range: [[0043e1a0, 0043e297]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043e1a0(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043e1a0(uint param_1, uint param_2) */

void __cdecl core_cloth_cpp_FUN_0043e1a0(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *input;
  int iVar3;
  int in_stack_00000004;
  float *in_stack_00000008;
  CMatrix3x3f local_5c;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  local_34.x = *in_stack_00000008 - *(float *)(in_stack_00000004 + 0x3fe54);
  local_34.y = in_stack_00000008[1] - *(float *)(in_stack_00000004 + 0x3fe58);
  local_34.z = in_stack_00000008[2] - *(float *)(in_stack_00000004 + 0x3fe5c);
  if ((float *)(in_stack_00000004 + 0x3fe54) != in_stack_00000008) {
    *(float *)(in_stack_00000004 + 0x3fe54) = *in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x3fe58) = in_stack_00000008[1];
    *(float *)(in_stack_00000004 + 0x3fe5c) = in_stack_00000008[2];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_5c,&local_34);
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    pCVar2 = (CVector3f *)(in_stack_00000004 + 0x56fc);
    do {
      input = (CVector3f *)(iVar3 * 0x11c + in_stack_00000004 + 0x56d8);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_5c,&local_28,input);
      if (input != pCVar1) {
        input->x = pCVar1->x;
        input->y = pCVar1->y;
        input->z = pCVar1->z;
      }
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_5c,&local_1c,
                          (CVector3f *)(iVar3 * 0x11c + in_stack_00000004 + 0x56d8));
      if (pCVar2 != pCVar1) {
        pCVar2->x = pCVar1->x;
        pCVar2->y = pCVar1->y;
        pCVar2->z = pCVar1->z;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CVector3f *)&pCVar2[0x17].z;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x104));
  }
  return;
}
