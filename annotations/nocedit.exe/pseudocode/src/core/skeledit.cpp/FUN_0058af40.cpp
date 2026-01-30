// Name: core_skeledit.cpp_FUN_0058af40
// Address: 0058af40
// Address Range: [[0058af40, 0058afd0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058af40(void)

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_FUN_0058af40(int* param_1, int param_2, uint param_3) */

void __cdecl core_skeledit_cpp_FUN_0058af40(void)

{
  int iVar1;
  float *matrix_b;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  int *in_stack_00000004;
  CMatrix3x4f *in_stack_00000008;
  CMatrix3x4f local_40;
  int local_10;
  int *local_c;
  
  bVar4 = 0;
  __STK(0x4c);
  local_10 = 0;
  if (0 < *in_stack_00000004) {
    local_c = in_stack_00000004;
    matrix_b = (float *)(in_stack_00000004 + 0x16);
    do {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (in_stack_00000008,(CMatrix3x4f *)matrix_b,&local_40);
      pCVar2 = &local_40;
      pfVar3 = (float *)(local_c + 0x16);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar3 = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
      }
      local_c = local_c + 0x21;
      local_10 = local_10 + 1;
      matrix_b = matrix_b + 0x21;
      in_stack_00000008 = in_stack_00000008 + 1;
    } while (local_10 < *in_stack_00000004);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
