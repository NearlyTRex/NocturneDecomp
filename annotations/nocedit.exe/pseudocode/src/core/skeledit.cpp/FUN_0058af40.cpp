// Name: core_skeledit.cpp_FUN_0058af40
// Address: 0058af40
// Address Range: [[0058af40, 0058afd0]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058af40()

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_FUN_0058af40(int* param_1, int param_2, uint param_3) */

void core_skeledit_cpp_FUN_0058af40(void)

{
  int iVar1;
  CMatrix3x4f *output_matrix;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *matrix_a;
  CMatrix3x4f *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_00000010;
  uint auStack_34 [11];
  uint uStack_8;
  
  bVar4 = 0;
  uStack_8 = 0x58af4a;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4c);
  uStack_8 = 0;
  if (0 < *in_stack_0000000c) {
    matrix_a = (float *)(in_stack_0000000c + 0x16);
    output_matrix = in_stack_00000010;
    do {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(output_matrix,(CMatrix3x4f *)matrix_a,unaff_ESI)
      ;
      puVar2 = auStack_34;
      puVar3 = (uint *)(unaff_EBP + 0x58);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      unaff_EBP = unaff_EBP + 0x84;
      in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
      matrix_a = matrix_a + 0x21;
      output_matrix = output_matrix + 1;
    } while ((int)in_stack_0000000c < (int)in_stack_00000010->m[0].w);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
