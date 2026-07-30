// Name: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_004dba70
// Address: 004dba70
// Address Range: [[004dba70, 004dbcdb]]
// Convention: unknown
// Signature: void core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_004dba70(int param_1,int param_2)

#include "nocturne.h"

void core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_004dba70(int param_1,int param_2)

{
  int iVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  byte bVar5;
  CMatrix3x4f local_d8;
  uint local_a8 [12];
  CVector3f local_78 [2];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar5 = 0;
  iVar1 = param_2 * 0x44 + param_1;
  iVar3 = *(int *)(iVar1 + 0x24a4);
  if (param_2 == 1) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)(iVar1 + 0x24ac),g_CElephantGunActorType_01bcde44.name_hash
                       );
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
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_d8,&local_60,&local_30);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_d8,iVar3 * 0x30 + param_1 + 0xfd0);
  puVar4 = local_a8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
