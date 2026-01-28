// Name: core_zombie.cpp_CZombie_FUN_005fb1f0
// Address: 005fb1f0
// Address Range: [[005fb1f0, 005fb521]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_FUN_005fb1f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fb1f0(CZombie* param_1, uint
   param_2) */

void core_zombie_cpp_CZombie_FUN_005fb1f0(void)

{
  uint uVar1;
  int iVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  int iVar5;
  float *unaff_ESI;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f *output_vector;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
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
  CVector3f local_1c;
  int local_10;
  
  bVar8 = 0;
  iVar2 = in_stack_00000008 * 0x44 + in_stack_00000004;
  iVar5 = *(int *)(iVar2 + 0x24b4);
  local_10 = *(int *)(iVar2 + 0x24ac);
  uVar1 = *(uint *)(in_stack_00000004 + 0xbed0);
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    pfVar4 = (float *)(**(code **)(*(int *)(iVar5 + 0x154) + 0x14))();
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
    pfVar4 = (float *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24b8);
    pCVar6 = &local_16c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
  }
  else {
    iVar2 = crt_string_c_strnicmp_FUN_005ff070
                      ((char *)(in_stack_00000004 + 0x23b8),"new",3);
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
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_16c,&g_ZeroVector,&local_94);
    (**(code **)(*(int *)(iVar5 + 0x154) + 0x14))();
    core_actor_cpp_CVector_ctor_FUN_00410340(&local_1c);
    local_1c.x = local_dc + local_d0;
    local_1c.y = local_d8 + local_cc;
    local_1c.z = local_d4 + local_c8;
    core_actor_cpp_CVector_ctor_FUN_00410340(&local_7c);
    local_7c.x = local_1c.x * 0.5f;
    local_7c.y = local_1c.y * 0.5f;
    local_7c.z = local_d4 + (float)0.40000000000000002;
    if (&local_64 != &local_7c) {
      local_64.x = local_7c.x;
      local_64.y = local_7c.y;
      local_64.z = local_7c.z;
    }
  }
  if (local_10 == *(int *)(in_stack_00000004 + 0xbf50)) {
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
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (output_vector,pCVar3,
                      (CMatrix3x4f *)(local_10 * 0x30 + in_stack_00000004 + 0xfd8));
  if (&local_40 != pCVar3) {
    local_40.x = pCVar3->x;
    local_40.y = pCVar3->y;
    local_40.z = pCVar3->z;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_16c,(CMatrix3x4f *)(local_10 * 0x30 + in_stack_00000004 + 0xfd8),&local_13c);
  pCVar6 = &local_13c;
  pCVar7 = &local_10c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar7->m[0].w = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_ac,&local_64,&local_10c);
  local_a0 = local_40.x - pCVar3->x;
  local_9c = local_40.y - pCVar3->y;
  local_98 = local_40.z - pCVar3->z;
  local_10c.m[0].z = local_10c.m[0].z + local_a0;
  local_10c.m[1].z = local_10c.m[1].z + local_9c;
  local_10c.m[2].z = local_10c.m[2].z + local_98;
  pCVar6 = &local_10c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *unaff_ESI = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar8 * -2 + 1;
  }
  return;
}
