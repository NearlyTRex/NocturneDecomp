// Name: core_xform.cpp_lerpMatrix3x4_FUN_005b72c0
// Address: 005b72c0
// Address Range: [[005b72c0, 005b740d]]
// Convention: unknown
// Signature: void core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(undefined4 *param_1,undefined4 *param_2,float param_3)

#include "nocturne.h"

void core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(uint *param_1,uint *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  uint *unaff_ESI;
  CMatrix3x4f *pCVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_184c [1500];
  CMatrix3x4f local_d0;
  uint local_a0 [12];
  CQuaternion4f local_70;
  uint local_60;
  uint auStack_5c [7];
  uint local_40;
  float local_30;
  uint local_20;
  
  bVar5 = 0;
  if (param_3 <= 0.0) {
    iVar2 = 0xc;
    puVar4 = local_a0;
    pCVar3 = (CMatrix3x4f *)param_1;
  }
  else if ((int)param_3 < 0x3f800000) {
    core_xform_cpp_matrixToQuaternion_FUN_005b75a0(param_1);
    local_60 = local_40;
    auStack_5c[(uint)bVar5 * -2] = auStack_5c[(uint)bVar5 * -2 + 8];
    auStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    (auStack_5c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_5c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_005b75a0(param_2);
    auStack_5c[3] = local_20;
    auStack_5c[(uint)bVar5 * -2 + 4] = auStack_5c[(uint)bVar5 * -2 + 0x10];
    auStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
         auStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
    (auStack_5c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
         (auStack_5c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940(&local_60,auStack_5c + 3,param_3);
    local_70.w = local_30;
    puVar4 = (uint *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_70 + (uint)bVar5 * -8 + 4) = auStack_5c[(uint)bVar5 * -2 + 0xc];
    *puVar4 = auStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    puVar4[(uint)bVar5 * -2 + 1] =
         (auStack_5c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_005b7410(&local_d0,&local_70);
    pCVar3 = &local_d0;
    fVar1 = 1.0 - param_3;
    local_d0.m[0].z = (float)param_2[3] * param_3 + (float)param_1[3] * fVar1;
    local_d0.m[1].z = (float)param_2[7] * param_3 + (float)param_1[7] * fVar1;
    puVar4 = local_a0;
    iVar2 = 0xc;
    local_d0.m[2].z = (float)param_2[0xb] * param_3 + fVar1 * (float)param_1[0xb];
  }
  else {
    iVar2 = 0xc;
    pCVar3 = (CMatrix3x4f *)param_2;
    puVar4 = local_a0;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(uint *)pCVar3;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar4 = local_a0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
