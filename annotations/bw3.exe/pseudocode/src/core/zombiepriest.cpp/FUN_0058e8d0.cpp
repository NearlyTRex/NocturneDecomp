// Name: core_zombiepriest.cpp_FUN_0058e8d0
// Address: 0058e8d0
// Address Range: [[0058e8d0, 0058ec91]]
// Convention: unknown
// Signature: void core_zombiepriest_cpp_FUN_0058e8d0(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombiepriest_cpp_FUN_0058e8d0(CDemonActor *param_1,float param_2)

{
  int iVar1;
  CDemonActor *pCVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_188c [1519];
  float fVar6;
  CVector3f *input_local_point;
  code *pcVar7;
  float local_b8;
  float local_b4;
  float local_b0;
  CQuaternion4f local_a0;
  CQuaternion4f local_90;
  float local_80;
  float local_7c [5];
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar5 = 0;
  if (*(int *)(param_1[0x1c].actor_name + 0x10) == 0) {
    param_1[0x9b].create_event[0x4c] = '\0';
    param_1[0x9b].create_event[0x4d] = '\0';
    param_1[0x9b].create_event[0x4e] = '\0';
    param_1[0x9b].create_event[0x4f] = '\0';
  }
  else {
    fVar6 = param_1[0x99].orient_matrix.m[1].y;
    if (fVar6 != 0.0) {
      iVar1 = core_enemy_cpp_FUN_00489600(param_1,fVar6);
      if ((iVar1 == 0) && (param_1[0x9b].location.position.y == 0.0)) {
        param_1[0x9b].create_event[0x4c] = '\0';
        param_1[0x9b].create_event[0x4d] = '\0';
        param_1[0x9b].create_event[0x4e] = '\0';
        param_1[0x9b].create_event[0x4f] = '\0';
        return;
      }
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)(param_1[0x1c].actor_name + 0x10),
                          g_CWeaponClassInfo.name_hash);
      if (pCVar2 == (CDemonActor *)0x0) {
        _DAT_01d71de0 = "..\\core\\zombiepriest.cpp";
        _DAT_01d71de4 = 0x2aa;
        core_main_c_displayErrorAndQuit_FUN_004e4330("CZombiePriest::Aim Burning Cross - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      core_xform_cpp_transformVector3x4_FUN_00583260
                ((CVector3f *)&DAT_02cfd900,
                 (CMatrix3x4f *)(param_1[0xb].footstep_sound_code + _DAT_02d24978 * 0x30 + -0x10),
                 &local_68);
      input_local_point = &local_5c;
      local_5c.x = local_68.x;
      *(uint *)((int)&local_5c + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&local_68 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&local_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&local_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(param_1,input_local_point,&local_2c)
      ;
      local_50 = local_2c.x;
      local_4c[(uint)bVar5 * -2] = *(float *)((int)&local_2c + (uint)bVar5 * -8 + 4);
      local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)&local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      fVar6 = param_1[0x99].orient_matrix.m[1].y;
      local_38 = *(float *)((int)fVar6 + 0x20) - local_50;
      local_34 = *(float *)((int)fVar6 + 0x24) - local_4c[0];
      local_30 = *(float *)((int)fVar6 + 0x28) - local_4c[1];
      local_4c[2] = local_38;
      local_4c[(uint)bVar5 * -2 + 3] = local_4c[(uint)bVar5 * -2 + 6];
      local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((CDemonActor *)param_1[0x99].orient_matrix.m[1].y,
                          g_CHeroClassInfo.name_hash);
      fVar6 = _DAT_005d8c0c;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar6 = _DAT_005d8c10;
      }
      local_4c[3] = local_4c[3] + fVar6;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(local_4c + 2);
      local_80 = local_7c[2];
      local_7c[(uint)bVar5 * -2] = local_7c[(uint)bVar5 * -2 + 3];
      local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (local_7c[0] - (param_1->orient).vec.y);
      local_b8 = SQRT(local_3c * local_3c + local_4c[2] * local_4c[2] + local_4c[3] * local_4c[3]);
      if ((local_b4 <= ABS((float)local_18)) || (local_b8 <= (float)_DAT_005d8c18)) {
        param_2 = *(float *)(param_1[0x9b].create_event + 0x4c) - param_2;
        *(float *)(param_1[0x9b].create_event + 0x4c) = param_2;
        if (param_2 < 0.0) {
          param_1[0x9b].create_event[0x4c] = '\0';
          param_1[0x9b].create_event[0x4d] = '\0';
          param_1[0x9b].create_event[0x4e] = '\0';
          param_1[0x9b].create_event[0x4f] = '\0';
        }
      }
      else {
        param_2 = *(float *)(param_1[0x9b].create_event + 0x4c) + param_2;
        *(float *)(param_1[0x9b].create_event + 0x4c) = param_2;
        if (1.0 < param_2) {
          param_1[0x9b].create_event[0x4c] = '\0';
          param_1[0x9b].create_event[0x4d] = '\0';
          param_1[0x9b].create_event[0x4e] = -0x80;
          param_1[0x9b].create_event[0x4f] = '?';
        }
      }
      local_1c = -local_b4;
      if (local_80 < local_1c) {
        local_80 = local_1c;
      }
      if (local_b4 < local_80) {
        local_80 = local_b4;
      }
      local_20 = -local_b4;
      local_7c[0] = (float)local_18;
      if ((float)local_18 < local_20) {
        local_7c[0] = local_20;
      }
      if (local_b4 < local_7c[0]) {
        local_7c[0] = local_b4;
      }
      if (*(int *)(param_1[0x1c].create_event + 0x10) == 0) {
        fVar6 = *(float *)(param_1[0x9b].create_event + 0x4c);
        iVar1 = 2;
      }
      else {
        fVar6 = *(float *)(param_1[0x9b].create_event + 0x4c);
        iVar1 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
                ((CDeformableModelInstance *)(param_1 + 1),iVar1,6.0,fVar6,_DAT_02d24998,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_80,&local_90);
      pcVar7 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
      local_a0.w = local_90.w;
      puVar4 = (uint *)((int)&local_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      puVar3 = (uint *)((int)&local_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(uint *)((int)&local_a0 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar5 * -8 + 4);
      iVar1 = _DAT_02d24998;
      *puVar4 = *puVar3;
      puVar4[(uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
      local_18 = (CDeformableModelInstance *)(param_1 + 1);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&local_a0,*(float *)(param_1[0x9b].create_event + 0x4c),iVar1,pcVar7);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_7c[0] + (float)_DAT_005d8c20);
      pcVar7 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
      local_a0.w = local_b0;
      puVar3 = (uint *)((int)&local_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(uint *)((int)&local_a0 + (uint)bVar5 * -8 + 4) =
           *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8);
      iVar1 = _DAT_02d24998;
      *puVar3 = *(uint *)(&stack0xffffff58 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar3[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff58 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&local_a0,*(float *)(param_1[0x9b].create_event + 0x4c),iVar1,pcVar7);
      return;
    }
    param_1[0x9b].create_event[0x4c] = '\0';
    param_1[0x9b].create_event[0x4d] = '\0';
    param_1[0x9b].create_event[0x4e] = '\0';
    param_1[0x9b].create_event[0x4f] = '\0';
  }
  return;
}
