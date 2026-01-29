// Name: core_skeledit.cpp_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058af34]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_0058aeb0(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058aeb0(void)

{
  int iVar1;
  float *matrix_in;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  int *in_stack_00000004;
  CMatrix3x4f *in_stack_00000008;
  CMatrix3x4f local_38;
  int local_8;
  
  bVar4 = 0;
  local_8 = 0x58aeba;
  __STK(0x40);
  local_8 = 0;
  if (0 < *in_stack_00000004) {
    matrix_in = (float *)(in_stack_00000004 + 0x16);
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)matrix_in,&local_38);
      pCVar2 = &local_38;
      pCVar3 = in_stack_00000008;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3->m[0].w = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      }
      core_xform_cpp_clearTranslation_FUN_005f5370(in_stack_00000008);
      core_xform_cpp_setRotationScaleIdentity_FUN_005f5190((CMatrix3x4f *)matrix_in);
      in_stack_00000008 = in_stack_00000008 + 1;
      matrix_in = matrix_in + 0x21;
      local_8 = local_8 + 1;
    } while (local_8 < *in_stack_00000004);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
