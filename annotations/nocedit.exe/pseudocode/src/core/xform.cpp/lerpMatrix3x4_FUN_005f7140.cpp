// Name: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
// Address Range: [[005f7140, 005f727d] [00605319, 0060538c]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

{
  int iVar2;
  int iVar1;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar2;
  CMatrix3x4f *pCVar4;
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
  
  bVar7 = 0;
  if (t <= 0.0) {
    iVar2 = 0xc;
    pfVar2 = local_a0;
    pCVar3 = matrix_a;
  }
  else if (t < 1.0) {
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)matrix_a,&local_20);
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)local_20.z,&local_60);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(&local_70,&local_40,t,&local_50);
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&local_d0,&local_30);
    fVar1 = 1.0 - t;
    local_d0.m[0].z = matrix_b->m[0].z * t + matrix_a->m[0].z * fVar1;
    local_d0.m[1].z = matrix_b->m[1].z * t + matrix_a->m[1].z * fVar1;
    pfVar2 = local_a0;
    iVar2 = 0xc;
    pCVar3 = &local_d0;
    local_d0.m[2].z = matrix_b->m[2].z * t + fVar1 * matrix_a->m[2].z;
  }
  else {
    iVar2 = 0xc;
    pCVar3 = matrix_b;
    pfVar2 = local_a0;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar7 * -8 + 4);
    *pfVar2 = pCVar3->m[0].w;
    pCVar3 = pCVar3;
    pfVar2 = pfVar2 + (uint)bVar7 * -2 + 1;
  }
  pfVar4 = local_a0;
  pCVar4 = matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar4->m[0].w = *pfVar4;
    pfVar4 = pfVar4;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  return matrix_out;
}
