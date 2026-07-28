// Name: core_xform.cpp_lerpMatrix3x4_FUN_0055cc30
// Address: 0055cc30
// Address Range: [[0055cc30, 0055cd6d]]
// Convention: unknown
// Signature: void core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(CMatrix3x4f *param_1,CMatrix3x4f *param_2,float param_3)

#include "nocturne.h"

void core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(CMatrix3x4f *param_1,CMatrix3x4f *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float *unaff_ESI;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_184c [1498];
  CMatrix3x4f local_d0;
  float local_a0 [12];
  uint local_70;
  float afStack_6c [7];
  float local_50;
  float local_40 [4];
  CQuaternion4f local_30;
  uint local_20;
  float afStack_1c [4];
  
  bVar5 = 0;
  if (param_3 <= 0.0) {
    iVar2 = 0xc;
    pfVar4 = local_a0;
    pCVar3 = param_1;
  }
  else if (param_3 < 1.0) {
    core_xform_cpp_matrixToQuaternion_FUN_0055cf10(param_1);
    local_70 = local_20;
    afStack_6c[(uint)bVar5 * -2] = afStack_1c[(uint)bVar5 * -2];
    afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (afStack_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_1c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_0055cf10(param_2);
    local_40[0] = afStack_6c[3];
    afStack_6c[(uint)bVar5 * -2 + 0xc] = afStack_6c[(uint)bVar5 * -2 + 4];
    afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (afStack_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
         (afStack_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(&local_70,afStack_6c + 0xb,param_3);
    local_30.w = local_50;
    pfVar4 = (float *)((int)&local_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_30 + (uint)bVar5 * -8 + 4) = afStack_6c[(uint)bVar5 * -2 + 8];
    *pfVar4 = afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(&local_d0,&local_30);
    fVar1 = 1.0 - param_3;
    local_d0.m[0].z = param_2->m[0].z * param_3 + param_1->m[0].z * fVar1;
    local_d0.m[1].z = param_2->m[1].z * param_3 + param_1->m[1].z * fVar1;
    pfVar4 = local_a0;
    iVar2 = 0xc;
    pCVar3 = &local_d0;
    local_d0.m[2].z = param_2->m[2].z * param_3 + fVar1 * param_1->m[2].z;
  }
  else {
    iVar2 = 0xc;
    pCVar3 = param_2;
    pfVar4 = local_a0;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = local_a0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
