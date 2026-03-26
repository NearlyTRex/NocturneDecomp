// Name: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
// Address: 005f50c0
// Address Range: [[005f50c0, 005f50f1] [03fc3a05, 03fc3a65]]
// Convention: __cdecl
// Signature: CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

#include "nocturne.h"

CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_3c;
  
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(matrix_a,matrix_b,&local_3c);
  matrix_a->m[0].w = local_3c.m[0].w;
  matrix_a->m[0].x = local_3c.m[0].x;
  matrix_a->m[0].y = local_3c.m[0].y;
  matrix_a->m[0].z = local_3c.m[0].z;
  matrix_a->m[1].w = local_3c.m[1].w;
  matrix_a->m[1].x = local_3c.m[1].x;
  matrix_a->m[1].y = local_3c.m[1].y;
  matrix_a->m[1].z = local_3c.m[1].z;
  matrix_a->m[2].w = local_3c.m[2].w;
  matrix_a->m[2].x = local_3c.m[2].x;
  matrix_a->m[2].y = local_3c.m[2].y;
  matrix_a->m[2].z = local_3c.m[2].z;
  return matrix_a;
}
