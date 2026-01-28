// Name: core_mobster.cpp_FUN_00526b20
// Address: 00526b20
// Address Range: [[00526b20, 00526d8b]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_00526b20(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00526b20(uint param_1, uint
   param_2) */

void core_mobster_cpp_FUN_00526b20(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  int iVar3;
  float *unaff_ESI;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f local_d8;
  CMatrix3x4f local_a8;
  CVector3f local_78 [2];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar5 = 0;
  iVar1 = in_stack_00000008 * 0x44 + in_stack_00000004;
  iVar3 = *(int *)(iVar1 + 0x24ac);
  if (in_stack_00000008 == 1) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(iVar1 + 0x24b4),g_CElephantGunClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      local_78[0].x = 0.228082;
      local_78[0].y = -0.13793;
      local_78[0].z = -0.112196;
      if (&local_60 != local_78) {
        local_60.z = -0.112196;
        local_60.y = -0.13793;
        local_60.x = 0.228082;
      }
      local_54.x = -0.278997;
      local_54.z = 1.55012;
      local_54.y = 1.58477;
      if (&local_30 != &local_54) {
        local_30.y = 1.58477;
        local_30.z = 1.55012;
        local_30.x = -0.278997;
      }
    }
    else {
      local_18.y = -0.1;
      local_18.z = 0.309;
      local_18.x = 0.378;
      if (&local_60 != &local_18) {
        local_60.y = -0.1;
        local_60.z = 0.309;
        local_60.x = 0.378;
      }
      local_24.z = 1.494;
      local_24.y = 1.588;
      local_24.x = -0.252;
      if (&local_30 != &local_24) {
        local_30.y = 1.588;
        local_30.x = -0.252;
        local_30.z = 1.494;
      }
    }
  }
  else {
    local_3c.y = -0.14;
    local_3c.z = -0.175;
    local_3c.x = -0.248;
    if (&local_60 != &local_3c) {
      local_60.y = -0.14;
      local_60.z = -0.175;
      local_60.x = -0.248;
    }
    local_48.z = -1.709;
    local_48.y = -1.468;
    local_48.x = -0.456;
    if (&local_30 != &local_48) {
      local_30.y = -1.468;
      local_30.x = -0.456;
      local_30.z = -1.709;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_d8,&local_60,&local_30);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_d8,(CMatrix3x4f *)(iVar3 * 0x30 + in_stack_00000004 + 0xfd8),&local_a8);
  pCVar4 = &local_a8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
