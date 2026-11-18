// Name: core_xform.cpp_invertAndGetTranslation_FUN_00592760
// Address: 00592760
// Address Range: [[00592760, 005927a6]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_xform_cpp_invertAndGetTranslation_FUN_00592760(CMatrix3x4f *matrix_in,CVector3f *vector_out)

#include "nocturne.h"

CVector3f * __stack_esi core_xform_cpp_invertAndGetTranslation_FUN_00592760(CMatrix3x4f *matrix_in,CVector3f *vector_out)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_ffc [993];
  CMatrix3x4f CStack_74;
  CMatrix3x4f CStack_44;
  CVector3f CStack_14;
  
  bVar5 = 0;
  core_xform_cpp_inverse_FUN_00592830(matrix_in,&CStack_44);
  pCVar2 = &CStack_44;
  pCVar3 = &CStack_74;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(float *)pCVar3 = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_00592720(&CStack_74,&CStack_14);
  puVar4 = (uint *)((int)vector_out + (uint)bVar5 * -8 + 4);
  vector_out->x = CStack_14.x;
  *puVar4 = *(uint *)((int)&CStack_14 + (uint)bVar5 * -8 + 4);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  return vector_out;
}
