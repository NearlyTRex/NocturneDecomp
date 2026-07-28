// Name: core_xform.cpp_invertAndGetTranslation_FUN_0055bc30
// Address: 0055bc30
// Address Range: [[0055bc30, 0055bc70]]
// Convention: unknown
// Signature: CVector3f * core_xform_cpp_invertAndGetTranslation_FUN_0055bc30(undefined4 param_1,CVector3f *param_2)

#include "nocturne.h"

CVector3f * core_xform_cpp_invertAndGetTranslation_FUN_0055bc30(uint param_1,CVector3f *param_2)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float local_6c [12];
  CMatrix3x4f local_3c;
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_0055bd00(param_1);
  pfVar2 = local_6c;
  pCVar3 = &local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_0055bc00(&local_3c,param_2);
  return param_2;
}
