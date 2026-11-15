// Name: core_zombiepriest.cpp_FUN_0058e8d0
// Address: 0058e8d0
// Address Range: [[0058e8d0, 0058ec91]]
// Convention: unknown
// Signature: void core_zombiepriest_cpp_FUN_0058e8d0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombiepriest_cpp_FUN_0058e8d0(CEnemy *param_1,float param_2)

{
  CCharacter *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_188c [1519];
  float fVar7;
  CVector3f *input_local_point;
  code *pcVar8;
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
  
  bVar6 = 0;
  if ((param_1->base).carry_hands[0].carry_actor == (CDemonActor *)0x0) {
    pCVar1 = &param_1[1].base;
    (pCVar1->base).create_event[0x40] = '\0';
    (pCVar1->base).create_event[0x41] = '\0';
    (pCVar1->base).create_event[0x42] = '\0';
    (pCVar1->base).create_event[0x43] = '\0';
  }
  else {
    if (param_1->victim != (CCharacter *)0x0) {
      iVar2 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00489600(param_1,&param_1->victim->base);
      if ((iVar2 == 0) && (*(int *)(param_1[1].base.base.actor_name + 0x18) == 0)) {
        pCVar1 = &param_1[1].base;
        (pCVar1->base).create_event[0x40] = '\0';
        (pCVar1->base).create_event[0x41] = '\0';
        (pCVar1->base).create_event[0x42] = '\0';
        (pCVar1->base).create_event[0x43] = '\0';
        return;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((param_1->base).carry_hands[0].carry_actor,g_CWeaponClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        _DAT_01d71de0 = "..\\core\\zombiepriest.cpp";
        _DAT_01d71de4 = 0x2aa;
        core_main_c_displayErrorAndQuit_FUN_004e4330("CZombiePriest::Aim Burning Cross - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      core_xform_cpp_transformVector3x4_FUN_00583260
                ((CVector3f *)&DAT_02cfd900,
                 (param_1->base).model.bone_transform.bone_model_matrices + _DAT_02d24978,&local_68)
      ;
      input_local_point = &local_5c;
      local_5c.x = local_68.x;
      *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_68 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&local_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)param_1,input_local_point,&local_2c);
      local_50 = local_2c.x;
      local_4c[(uint)bVar6 * -2] = *(float *)((int)&local_2c + (uint)bVar6 * -8 + 4);
      local_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      pCVar1 = param_1->victim;
      local_38 = (pCVar1->base).location.position.x - local_50;
      local_34 = (pCVar1->base).location.position.y - local_4c[0];
      local_30 = (pCVar1->base).location.position.z - local_4c[1];
      local_4c[2] = local_38;
      local_4c[(uint)bVar6 * -2 + 3] = local_4c[(uint)bVar6 * -2 + 6];
      local_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           local_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (&param_1->victim->base,g_CHeroClassInfo.name_hash);
      fVar7 = _DAT_005d8c0c;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar7 = _DAT_005d8c10;
      }
      local_4c[3] = local_4c[3] + fVar7;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(local_4c + 2);
      local_80 = local_7c[2];
      local_7c[(uint)bVar6 * -2] = local_7c[(uint)bVar6 * -2 + 3];
      local_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                           (local_7c[0] - (param_1->base).base.orient.vec.y);
      local_b8 = SQRT(local_3c * local_3c + local_4c[2] * local_4c[2] + local_4c[3] * local_4c[3]);
      if ((local_b4 <= ABS((float)local_18)) || (local_b8 <= (float)_DAT_005d8c18)) {
        param_2 = *(float *)(param_1[1].base.base.create_event + 0x40) - param_2;
        *(float *)(param_1[1].base.base.create_event + 0x40) = param_2;
        if (param_2 < 0.0) {
          pCVar1 = &param_1[1].base;
          (pCVar1->base).create_event[0x40] = '\0';
          (pCVar1->base).create_event[0x41] = '\0';
          (pCVar1->base).create_event[0x42] = '\0';
          (pCVar1->base).create_event[0x43] = '\0';
        }
      }
      else {
        param_2 = *(float *)(param_1[1].base.base.create_event + 0x40) + param_2;
        *(float *)(param_1[1].base.base.create_event + 0x40) = param_2;
        if (1.0 < param_2) {
          pCVar1 = &param_1[1].base;
          (pCVar1->base).create_event[0x40] = '\0';
          (pCVar1->base).create_event[0x41] = '\0';
          (pCVar1->base).create_event[0x42] = -0x80;
          (pCVar1->base).create_event[0x43] = '?';
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
      if ((param_1->base).carry_hands[1].carry_actor == (CDemonActor *)0x0) {
        fVar7 = *(float *)(param_1[1].base.base.create_event + 0x40);
        iVar2 = 2;
      }
      else {
        fVar7 = *(float *)(param_1[1].base.base.create_event + 0x40);
        iVar2 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
                (&(param_1->base).model,iVar2,6.0,fVar7,_DAT_02d24998,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_80,&local_90);
      pcVar8 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
      local_a0.w = local_90.w;
      puVar5 = (uint *)((int)&local_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_a0 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar6 * -8 + 4);
      iVar2 = _DAT_02d24998;
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      local_18 = &(param_1->base).model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&local_a0,*(float *)(param_1[1].base.base.create_event + 0x40),iVar2,
                 pcVar8);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_7c[0] + (float)_DAT_005d8c20);
      pcVar8 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
      local_a0.w = local_b0;
      puVar4 = (uint *)((int)&local_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_a0 + (uint)bVar6 * -8 + 4) =
           *(uint *)(&stack0xffffff54 + (uint)bVar6 * -8);
      iVar2 = _DAT_02d24998;
      *puVar4 = *(uint *)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar4[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&local_a0,*(float *)(param_1[1].base.base.create_event + 0x40),iVar2,
                 pcVar8);
      return;
    }
    pCVar1 = &param_1[1].base;
    (pCVar1->base).create_event[0x40] = '\0';
    (pCVar1->base).create_event[0x41] = '\0';
    (pCVar1->base).create_event[0x42] = '\0';
    (pCVar1->base).create_event[0x43] = '\0';
  }
  return;
}
