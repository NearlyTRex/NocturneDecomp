// Name: core_skeledit.cpp_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058af34]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058aeb0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058aeb0(uint param_1,uint param_2,CMatrix3x4f *unaff_EBX)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *output_matrix;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_00000010;
  int *in_stack_00000018;
  float fStack_2c;
  int *piStack_28;
  uint local_8;
  
  bVar4 = 0;
  local_8 = 0x58aeba;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x40);
  if (0 < *in_stack_0000000c) {
    output_matrix = (float *)(in_stack_0000000c + 0x16);
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)output_matrix,unaff_EBX);
      pfVar2 = &fStack_2c;
      pCVar3 = in_stack_00000010;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3->m[0].w = *pfVar2;
        pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      }
      core_xform_cpp_clearTranslation_FUN_005f5370(in_stack_00000010);
      unaff_EBX = (CMatrix3x4f *)0x58af01;
      core_xform_cpp_setRotationScaleIdentity_FUN_005f5190((CMatrix3x4f *)output_matrix);
      in_stack_00000010 = in_stack_00000010 + 1;
      output_matrix = output_matrix + 0x21;
      in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
    } while ((int)in_stack_0000000c < *in_stack_00000018);
  }
  piStack_28 = in_stack_00000018;
  fStack_2c = 8.144365e-39;
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
