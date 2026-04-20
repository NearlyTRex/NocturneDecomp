// Name: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
// MANUAL RECONSTRUCTION
// Address Range: [[005f7140, 005f727d] [00605319, 0060538c] [03fc4b91, 03fc4bee] [03fc5a44, 03fc5a96]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

{
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CMatrix3x4f local_d0;
  float local_a0 [12];
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  CQuaternion4f local_40;
  CQuaternion4f local_30;
  CQuaternion4f local_20;
  float fVar1;
  
  pCVar3 = matrix_a;
  if ((0.0 < t) && (pCVar3 = matrix_b, t < 1.0)) {
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)matrix_a,&local_20);
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)matrix_b,&local_60);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(&local_70,&local_40,t,&local_50);
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(&local_d0,&local_30);
    fVar1 = 1.0 - t;
    local_d0.m[0].z = matrix_b->m[0].z * t + matrix_a->m[0].z * fVar1;
    local_d0.m[1].z = matrix_b->m[1].z * t + matrix_a->m[1].z * fVar1;
    pCVar3 = &local_d0;
    local_d0.m[2].z = matrix_b->m[2].z * t + fVar1 * matrix_a->m[2].z;
  }
  fVar2 = pCVar3->m[0].x;
  fVar3 = pCVar3->m[0].y;
  fVar4 = pCVar3->m[0].z;
  fVar5 = pCVar3->m[1].w;
  fVar6 = pCVar3->m[1].x;
  fVar7 = pCVar3->m[1].y;
  fVar8 = pCVar3->m[1].z;
  fVar9 = pCVar3->m[2].w;
  fVar10 = pCVar3->m[2].x;
  fVar11 = pCVar3->m[2].y;
  fVar12 = pCVar3->m[2].z;
  matrix_out->m[0].w = pCVar3->m[0].w;
  matrix_out->m[0].x = fVar2;
  matrix_out->m[0].y = fVar3;
  matrix_out->m[0].z = fVar4;
  matrix_out->m[1].w = fVar5;
  matrix_out->m[1].x = fVar6;
  matrix_out->m[1].y = fVar7;
  matrix_out->m[1].z = fVar8;
  matrix_out->m[2].w = fVar9;
  matrix_out->m[2].x = fVar10;
  matrix_out->m[2].y = fVar11;
  matrix_out->m[2].z = fVar12;
  return matrix_out;
}
