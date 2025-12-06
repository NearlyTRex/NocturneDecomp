// Name: core_mobster.cpp_FUN_00526b20
// Address: 00526b20
// Address Range: [[00526b20, 00526d8b]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00526b20()

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00526b20(uint param_1, uint
   param_2) */

void core_mobster_cpp_FUN_00526b20(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  uint *puVar3;
  byte bVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffff30;
  uint auStack_9c [10];
  CVector3f local_74;
  uint local_60;
  CVector3f local_5c;
  CVector3f local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  in_stack_00000004 = in_stack_00000008 * 0x44 + in_stack_00000004;
  iVar2 = *(int *)(in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(in_stack_00000004 + 0x24b4),
                        g_CElephantGunClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      local_74.x = 0.228082;
      local_74.y = -0.13793;
      local_74.z = -0.112196;
      if (&local_5c != &local_74) {
        local_5c.z = -0.112196;
        local_5c.y = -0.13793;
        local_5c.x = 0.228082;
      }
      local_50.x = -0.278997;
      local_50.z = 1.55012;
      local_50.y = 1.58477;
      if (&local_2c != &local_50) {
        local_2c.y = 1.58477;
        local_2c.z = 1.55012;
        local_2c.x = -0.278997;
      }
    }
    else {
      local_10 = -0.1;
      local_14 = 0.378;
      if (&local_5c != (CVector3f *)&local_14) {
        local_5c.y = -0.1;
        local_5c.z = 0.309;
        local_5c.x = 0.378;
      }
      local_20.z = 1.494;
      local_20.y = 1.588;
      local_20.x = -0.252;
      if (&local_2c != &local_20) {
        local_2c.y = 1.588;
        local_2c.x = -0.252;
        local_2c.z = 1.494;
      }
    }
  }
  else {
    local_38 = 0xbe0f5c29;
    local_34 = 0xbe333333;
    local_3c = 0xbe7df3b6;
    if (&local_60 != &local_3c) {
      local_5c.x = -0.14;
      local_5c.y = -0.175;
      local_60 = 0xbe7df3b6;
    }
    local_40 = 0xbfdac083;
    local_44 = 0xbfbbe76d;
    local_50.z = -0.456;
    if ((float *)&local_30 != &local_50.z) {
      local_2c.y = -1.468;
      local_2c.x = -0.456;
      local_2c.z = -1.709;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)&stack0xffffff2c,&local_5c,&local_2c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)&stack0xffffff30,
             (CMatrix3x4f *)(iVar2 * 0x30 + in_stack_0000000c + 0xfd8),in_stack_ffffff30);
  puVar3 = auStack_9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
