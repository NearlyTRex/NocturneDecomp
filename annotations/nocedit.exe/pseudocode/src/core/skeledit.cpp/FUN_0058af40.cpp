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
  float *matrix_a;
  CMatrix3x4f *unaff_ESI;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int *in_stack_00000004;
  CMatrix3x4f *in_stack_00000008;
  int local_40 [12];
  int local_10;
  int *local_c;
  
  bVar4 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4c);
  local_10 = 0;
  if (0 < *in_stack_00000004) {
    local_c = in_stack_00000004;
    matrix_a = (float *)(in_stack_00000004 + 0x16);
    do {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (in_stack_00000008,(CMatrix3x4f *)matrix_a,unaff_ESI);
      piVar2 = local_40;
      piVar3 = local_c + 0x16;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
        piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
      }
      local_c = local_c + 0x21;
      local_10 = local_10 + 1;
      matrix_a = matrix_a + 0x21;
      in_stack_00000008 = in_stack_00000008 + 1;
    } while (local_10 < *in_stack_00000004);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
