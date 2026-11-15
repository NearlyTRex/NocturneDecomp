// Name: core_xform.cpp_lerpMatrix3x4_FUN_00593770
// Address: 00593770
// Address Range: [[00593770, 005938bd]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_00593770(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_00593770(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)

{
  float fVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_184c [1500];
  CMatrix3x4f local_d0;
  float local_a0 [12];
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  float local_40;
  float afStack_3c [3];
  CQuaternion4f local_30;
  float local_20;
  uint auStack_1c [4];
  
  bVar7 = 0;
  if (t <= 0.0) {
    iVar2 = 0xc;
    pfVar4 = local_a0;
    pCVar3 = matrix_a;
  }
  else if ((int)t < 0x3f800000) {
    core_xform_cpp_matrixToQuaternion_FUN_00593a50(matrix_a);
    local_60.w = local_40;
    pfVar4 = (float *)((int)&local_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&local_60 + (uint)bVar7 * -8 + 4) = afStack_3c[(uint)bVar7 * -2];
    *pfVar4 = afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar4[(uint)bVar7 * -2 + 1] =
         (afStack_3c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_00593a50(matrix_b);
    local_50.w = local_20;
    puVar5 = (uint *)((int)&local_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&local_50 + (uint)bVar7 * -8 + 4) = auStack_1c[(uint)bVar7 * -2];
    *puVar5 = auStack_1c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    puVar5[(uint)bVar7 * -2 + 1] =
         (auStack_1c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&local_60,&local_50,t,&local_30);
    local_70.w = local_30.w;
    puVar6 = (uint *)((int)&local_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    puVar5 = (uint *)((int)&local_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&local_70 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_30 + (uint)bVar7 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
    core_xform_cpp_quaternionToMatrix3x3_FUN_005938c0(&local_d0,&local_70);
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
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
  }
  pfVar4 = local_a0;
  pCVar3 = matrix_out;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
  }
  return matrix_out;
}
