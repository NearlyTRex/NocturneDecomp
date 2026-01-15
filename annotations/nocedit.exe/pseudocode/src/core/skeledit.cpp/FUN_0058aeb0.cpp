// Name: core_skeledit.cpp_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058af34]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058aeb0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058aeb0
               (uint param_1,uint param_2,CMatrix3x4f *unaff_EBX,uint param_4,
               int *param_5,CMatrix3x4f *param_6)

{
  int iVar1;
  float *output_matrix;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float local_38 [12];
  int local_8;
  
  bVar4 = 0;
  local_8 = 0x58aeba;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x40);
  local_8 = 0;
  if (0 < *param_5) {
    output_matrix = (float *)(param_5 + 0x16);
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)output_matrix,unaff_EBX);
      pfVar2 = local_38;
      pCVar3 = param_6;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3->m[0].w = *pfVar2;
        pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      }
      core_xform_cpp_clearTranslation_FUN_005f5370(param_6);
      core_xform_cpp_setRotationScaleIdentity_FUN_005f5190((CMatrix3x4f *)output_matrix);
      param_6 = param_6 + 1;
      output_matrix = output_matrix + 0x21;
      local_8 = local_8 + 1;
    } while (local_8 < *param_5);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
