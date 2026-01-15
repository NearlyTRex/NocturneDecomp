// Name: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
// Address Range: [[005f7140, 005f727d]]
// Convention: __cdecl
// Signature: void core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t)

#include "nocturne.h"

void __cdecl
core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t)

{
  float fVar1;
  int iVar2;
  float *unaff_ESI;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_184c [1498];
  double dVar7;
  CMatrix3x4f local_d0;
  float local_a0 [12];
  CQuaternion4f local_70;
  float local_60;
  float afStack_5c [7];
  CQuaternion4f local_40;
  CQuaternion4f local_30;
  float local_20;
  uint auStack_1c [4];
  
  bVar6 = 0;
  dVar7 = (double)t;
  if (dVar7 <= 0.0) {
    iVar2 = 0xc;
    pfVar4 = local_a0;
    pCVar3 = matrix_a;
  }
  else if (dVar7 < 1.0) {
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(matrix_a->m,SUB84 /* extract 2-byte value */(dVar7,0));
    local_70.w = local_20;
    puVar5 = (uint *)((int)&local_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_70 + (uint)bVar6 * -8 + 4) = auStack_1c[(uint)bVar6 * -2];
    *puVar5 = auStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    puVar5[(uint)bVar6 * -2 + 1] =
         (auStack_1c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(matrix_b->m,SUB84 /* extract 2-byte value */(dVar7,0));
    local_40.w = local_60;
    pfVar4 = (float *)((int)&local_40 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_40 + (uint)bVar6 * -8 + 4) = afStack_5c[(uint)bVar6 * -2];
    *pfVar4 = afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_5c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&local_70,&local_40,(CQuaternion4f *)t,SUB84 /* extract 2-byte value */(dVar7,0));
    local_30.w = afStack_5c[3];
    pfVar4 = (float *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_30 + (uint)bVar6 * -8 + 4) = afStack_5c[(uint)bVar6 * -2 + 4];
    *pfVar4 = afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_5c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&local_d0,&local_30);
    fVar1 = 1.0 - (float)dVar7;
    local_d0.m[0].z = matrix_b->m[0].z * t + matrix_a->m[0].z * fVar1;
    local_d0.m[1].z = matrix_b->m[1].z * t + matrix_a->m[1].z * fVar1;
    pfVar4 = local_a0;
    iVar2 = 0xc;
    pCVar3 = &local_d0;
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
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
