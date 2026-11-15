// Name: core_xform.cpp_lerpMatrix3x4_FUN_005b72c0
// Address: 005b72c0
// Address Range: [[005b72c0, 005b740d]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

{
  float fVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_184c [1500];
  CMatrix3x4f local_d0;
  float local_a0 [12];
  CQuaternion4f local_70;
  uint local_60;
  uint auStack_5c [7];
  uint local_40;
  float local_30;
  uint local_20;
  
  bVar6 = 0;
  if (t <= 0.0) {
    iVar2 = 0xc;
    pfVar4 = local_a0;
    pCVar3 = matrix_a;
  }
  else if ((int)t < 0x3f800000) {
    core_xform_cpp_matrixToQuaternion_FUN_005b75a0(matrix_a);
    local_60 = local_40;
    auStack_5c[(uint)bVar6 * -2] = auStack_5c[(uint)bVar6 * -2 + 8];
    auStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         auStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
    (auStack_5c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (auStack_5c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_005b75a0(matrix_b);
    auStack_5c[3] = local_20;
    auStack_5c[(uint)bVar6 * -2 + 4] = auStack_5c[(uint)bVar6 * -2 + 0x10];
    auStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
         auStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    (auStack_5c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
         (auStack_5c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940(&local_60,auStack_5c + 3,t);
    local_70.w = local_30;
    puVar5 = (uint *)((int)&local_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_70 + (uint)bVar6 * -8 + 4) = auStack_5c[(uint)bVar6 * -2 + 0xc];
    *puVar5 = auStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    puVar5[(uint)bVar6 * -2 + 1] =
         (auStack_5c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionToMatrix3x3_FUN_005b7410(&local_d0,&local_70);
    pCVar3 = &local_d0;
    fVar1 = 1.0 - t;
    local_d0.m[0].z = matrix_b->m[0].z * t + matrix_a->m[0].z * fVar1;
    local_d0.m[1].z = matrix_b->m[1].z * t + matrix_a->m[1].z * fVar1;
    pfVar4 = local_a0;
    iVar2 = 0xc;
    local_d0.m[2].z = matrix_b->m[2].z * t + fVar1 * matrix_a->m[2].z;
  }
  else {
    iVar2 = 0xc;
    pCVar3 = matrix_b;
    pfVar4 = local_a0;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  pfVar4 = local_a0;
  pCVar3 = matrix_out;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return matrix_out;
}
