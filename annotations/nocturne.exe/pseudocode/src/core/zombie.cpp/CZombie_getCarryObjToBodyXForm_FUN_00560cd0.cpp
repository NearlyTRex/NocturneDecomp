// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_00560cd0
// Address: 00560cd0
// Address Range: [[00560cd0, 00561001]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_00560cd0(int param_1,int param_2)

#include "nocturne.h"

void core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_00560cd0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  int iVar5;
  float *unaff_ESI;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CVector3f *output_vector;
  CMatrix3x4f local_16c;
  float local_13c [12];
  CMatrix3x4f local_10c;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  byte local_c4 [24];
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar7 = 0;
  iVar2 = param_2 * 0x44 + param_1;
  iVar5 = *(int *)(iVar2 + 0x24ac);
  local_10 = *(int *)(iVar2 + 0x24a4);
  uVar1 = *(uint *)(param_1 + 0xbd38);
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    pfVar4 = (float *)(**(code **)(*(int *)(iVar5 + 0x14c) + 0x14))(iVar5,local_c4);
    local_34 = *pfVar4 + pfVar4[3];
    local_30 = pfVar4[1] + pfVar4[4];
    local_4c.x = local_34 * 0.5f;
    local_2c = pfVar4[2] + pfVar4[5];
    local_4c.y = local_30 * 0.5f;
    local_4c.z = local_2c * 0.5f;
    if (&local_64 != &local_4c) {
      local_64.x = local_4c.x;
      local_64.y = local_4c.y;
      local_64.z = local_4c.z;
    }
    pfVar4 = (float *)(param_2 * 0x44 + param_1 + 0x24b0);
    pCVar6 = &local_16c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
  }
  else {
    iVar2 = _strnicmp((char *)(param_1 + 0x23b0),"new",3);
    if (iVar2 == 0) {
      local_94.z = -0.986001;
      local_94.y = 0.950253;
      local_94.x = -1.15383;
    }
    else {
      local_94.z = 0.0;
      local_94.y = 0.904;
      local_94.x = 0.155;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_16c,(CVector3f *)&DAT_02dd1184,&local_94);
    (**(code **)(*(int *)(iVar5 + 0x14c) + 0x14))(iVar5,&local_dc);
    core_actor_cpp_CVector_ctor_FUN_0040e160(&local_1c);
    local_1c = local_dc + local_d0;
    local_18 = local_d8 + local_cc;
    local_14 = local_d4 + local_c8;
    core_actor_cpp_CVector_ctor_FUN_0040e160(&local_7c);
    local_7c.x = local_1c * 0.5f;
    local_7c.y = local_18 * 0.5f;
    local_7c.z = local_d4 + (float)0.40000000000000002;
    if (&local_64 != &local_7c) {
      local_64.x = local_7c.x;
      local_64.y = local_7c.y;
      local_64.z = local_7c.z;
    }
  }
  if (local_10 == *(int *)(param_1 + 0xbdb8)) {
    pCVar3 = &local_70;
    output_vector = &local_88;
    local_70.x = -0.4;
    local_70.y = 0.0;
    local_70.z = 0.0;
  }
  else {
    pCVar3 = &local_58;
    output_vector = &local_28;
    local_58.x = 0.4;
    local_58.y = 0.0;
    local_58.z = 0.0;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                     (output_vector,pCVar3,(CMatrix3x4f *)(local_10 * 0x30 + param_1 + 0xfd0));
  if (&local_40 != pCVar3) {
    local_40.x = pCVar3->x;
    local_40.y = pCVar3->y;
    local_40.z = pCVar3->z;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_16c,local_10 * 0x30 + param_1 + 0xfd0);
  pfVar4 = local_13c;
  pCVar6 = &local_10c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar6->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_ac,&local_64,&local_10c);
  local_a0 = local_40.x - pCVar3->x;
  local_9c = local_40.y - pCVar3->y;
  local_98 = local_40.z - pCVar3->z;
  local_10c.m[0].z = local_10c.m[0].z + local_a0;
  local_10c.m[1].z = local_10c.m[1].z + local_9c;
  local_10c.m[2].z = local_10c.m[2].z + local_98;
  pCVar6 = &local_10c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *unaff_ESI = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar7 * -2 + 1;
  }
  return;
}
