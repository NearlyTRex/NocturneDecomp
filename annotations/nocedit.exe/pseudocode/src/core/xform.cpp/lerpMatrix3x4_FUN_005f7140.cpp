// Name: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
// Address Range: [[005f7140, 005f727d]]
// Convention: __stack3_esi
// Signature: void core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * output)

#include "nocturne.h"

void __stack3_esi
core_xform_cpp_lerpMatrix3x4_FUN_005f7140
          (CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *output)

{
  float fVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_184c [1498];
  CMatrix3x4f local_d0;
  float local_a0 [12];
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  CQuaternion4f local_40;
  CQuaternion4f local_30;
  CQuaternion4f local_20;
  
  bVar7 = 0;
  if (t <= 0.0) {
    iVar2 = 0xc;
    pfVar4 = local_a0;
    pCVar3 = matrix_a;
  }
  else if (t < 1.0) {
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)matrix_a,&local_20);
    local_70.w = local_20.w;
    puVar6 = (uint *)((int)&local_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    puVar5 = (uint *)((int)&local_20 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&local_70 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_20 + (uint)bVar7 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)matrix_b,&local_60);
    local_40.w = local_60.w;
    puVar6 = (uint *)((int)&local_40 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    puVar5 = (uint *)((int)&local_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&local_40 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_60 + (uint)bVar7 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(&local_70,&local_40,t,&local_50);
    local_30.w = local_50.w;
    puVar6 = (uint *)((int)&local_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    puVar5 = (uint *)((int)&local_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&local_30 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&local_50 + (uint)bVar7 * -8 + 4);
    *puVar6 = *puVar5;
    puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&local_d0,&local_30);
    fVar1 = 1.0 - t;
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
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
  }
  pfVar4 = local_a0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    output->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    output = (CMatrix3x4f *)((int)output + ((uint)bVar7 * -2 + 1) * 4);
  }
  return;
}
