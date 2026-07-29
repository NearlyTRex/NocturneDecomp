// Name: core_boneguy.cpp_FUN_004194b0
// Address: 004194b0
// Address Range: [[004194b0, 004196a6]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_004194b0(int param_1,int param_2)

#include "nocturne.h"

void core_boneguy_cpp_FUN_004194b0(int param_1,int param_2)

{
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  float *unaff_ESI;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_120;
  CMatrix3x4f local_f0;
  float local_c0 [12];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar6 = 0;
  iVar1 = param_2 * 0x44 + param_1;
  iVar3 = *(int *)(iVar1 + 0x24ac);
  iVar1 = *(int *)(iVar1 + 0x24a4);
  local_60.z = 2.536;
  local_60.x = -0.771;
  local_60.y = -2.536;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_120,(CVector3f *)&DAT_02dd1184,&local_60);
  (**(code **)(*(int *)(iVar3 + 0x14c) + 0x14))(iVar3,&local_90);
  core_actor_cpp_CVector_ctor_FUN_0040e160(&local_54);
  local_54 = local_90 + local_84;
  local_50 = local_8c + local_80;
  local_4c = local_88 + local_7c;
  core_actor_cpp_CVector_ctor_FUN_0040e160(&local_30);
  local_30.x = local_54 * 5.2220990168285998e-315._0_4_;
  local_30.y = local_50 * 5.2220990168285998e-315._0_4_;
  local_30.z = local_88 + (float)0.40000000000000002;
  if (&local_48 != &local_30) {
    local_48.x = local_30.x;
    local_48.y = local_30.y;
    local_48.z = local_30.z;
  }
  local_6c.z = -0.082;
  local_6c.x = 0.032;
  local_6c.y = 0.209;
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                     (&local_78,&local_6c,(CMatrix3x4f *)(param_1 + 0xfd0 + iVar1 * 0x30));
  if (&local_18 != pCVar2) {
    local_18.x = pCVar2->x;
    local_18.y = pCVar2->y;
    local_18.z = pCVar2->z;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_120,param_1 + 0xfd0 + iVar1 * 0x30);
  pfVar4 = local_c0;
  pCVar5 = &local_f0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_24,&local_48,&local_f0);
  local_3c = local_18.x - pCVar2->x;
  local_38 = local_18.y - pCVar2->y;
  local_34 = local_18.z - pCVar2->z;
  local_f0.m[0].z = local_f0.m[0].z + local_3c;
  local_f0.m[1].z = local_f0.m[1].z + local_38;
  local_f0.m[2].z = local_f0.m[2].z + local_34;
  pCVar5 = &local_f0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
