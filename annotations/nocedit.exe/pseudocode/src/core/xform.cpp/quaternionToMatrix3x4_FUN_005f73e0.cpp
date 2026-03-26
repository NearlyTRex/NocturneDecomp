// Name: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
// Address: 005f73e0
// Address Range: [[005f73e0, 005f7418] [03fc39aa, 03fc3a04]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_38;
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&local_38,quat_in);
  core_xform_cpp_clearTranslation_FUN_005f5370(&local_38);
  matrix_out->m[0].w = local_38.m[0].w;
  matrix_out->m[0].x = local_38.m[0].x;
  matrix_out->m[0].y = local_38.m[0].y;
  matrix_out->m[0].z = local_38.m[0].z;
  matrix_out->m[1].w = local_38.m[1].w;
  matrix_out->m[1].x = local_38.m[1].x;
  matrix_out->m[1].y = local_38.m[1].y;
  matrix_out->m[1].z = local_38.m[1].z;
  matrix_out->m[2].w = local_38.m[2].w;
  matrix_out->m[2].x = local_38.m[2].x;
  matrix_out->m[2].y = local_38.m[2].y;
  matrix_out->m[2].z = local_38.m[2].z;
  return matrix_out;
}
