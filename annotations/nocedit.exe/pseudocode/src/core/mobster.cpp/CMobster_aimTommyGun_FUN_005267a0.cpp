// Name: core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
// Address: 005267a0
// Address Range: [[005267a0, 00526afd]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0()

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_CMobster_aimTommyGun(CMobster* param_1, uint
   param_2) */

void core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(void)

{
  CCharacter *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_185c [1519];
  float fVar8;
  code *blend_callback;
  float local_88;
  float local_84;
  CQuaternion4f local_80;
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar7 = 0;
  if ((in_stack_00000004->base_character).carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->base_actor).create_event[0x60] = '\0';
    (pCVar1->base_actor).create_event[0x61] = '\0';
    (pCVar1->base_actor).create_event[0x62] = '\0';
    (pCVar1->base_actor).create_event[99] = '\0';
  }
  else {
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
      iVar2 = core_enemy_cpp_FUN_004a9a50(in_stack_00000004);
      if ((iVar2 == 0) && (in_stack_00000004[1].base_character.base_actor.orient.bank == 0.0)) {
        pCVar1 = &in_stack_00000004[1].base_character;
        (pCVar1->base_actor).create_event[0x60] = '\0';
        (pCVar1->base_actor).create_event[0x61] = '\0';
        (pCVar1->base_actor).create_event[0x62] = '\0';
        (pCVar1->base_actor).create_event[99] = '\0';
        return;
      }
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         ((in_stack_00000004->base_character).carry_hands[1].carry_actor,
                          g_CWeaponClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\mobster.cpp";
        g_CurrentLineNumber = 0x323;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_88 = 0.7853982;
      if (in_stack_00000004[1].base_character.base_actor.location.area_id != 0) {
        local_88 = 1.5707964;
      }
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_50,&g_ZeroVector,
                          (in_stack_00000004->base_character).model.bone_transform.
                          bone_world_matrices + DAT_02f37ed0);
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)in_stack_00000004,&local_44,pCVar4);
      iVar2 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
      local_38.x = *(float *)(iVar2 + 0x20) - pCVar4->x;
      local_38.y = *(float *)(iVar2 + 0x24) - pCVar4->y;
      local_38.z = *(float *)(iVar2 + 0x28) - pCVar4->z;
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4),
                          g_CHeroClassInfo.name_hash);
      fVar8 = 3.0f;
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar8 = 4.0f;
      }
      local_38.y = local_38.y + fVar8;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_2c,&local_38);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (local_2c.y - (in_stack_00000004->base_character).base_actor.orient.bank)
      ;
      local_84 = SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y);
      if ((local_88 <= ABS((float)local_18)) || (local_84 <= (float)2)) {
        in_stack_00000008 =
             *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) -
             in_stack_00000008;
        *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) =
             in_stack_00000008;
        if (in_stack_00000008 < 0.0) {
          pCVar1 = &in_stack_00000004[1].base_character;
          (pCVar1->base_actor).create_event[0x60] = '\0';
          (pCVar1->base_actor).create_event[0x61] = '\0';
          (pCVar1->base_actor).create_event[0x62] = '\0';
          (pCVar1->base_actor).create_event[99] = '\0';
        }
      }
      else {
        in_stack_00000008 =
             *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) +
             in_stack_00000008;
        *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) =
             in_stack_00000008;
        if (1.0 < in_stack_00000008) {
          pCVar1 = &in_stack_00000004[1].base_character;
          (pCVar1->base_actor).create_event[0x60] = '\0';
          (pCVar1->base_actor).create_event[0x61] = '\0';
          (pCVar1->base_actor).create_event[0x62] = -0x80;
          (pCVar1->base_actor).create_event[99] = '?';
        }
      }
      local_1c = -local_88;
      if (local_2c.x < local_1c) {
        local_2c.x = local_1c;
      }
      if (local_88 < local_2c.x) {
        local_2c.x = local_88;
      }
      local_20 = -local_88;
      local_2c.y = (float)local_18;
      if ((float)local_18 < local_20) {
        local_2c.y = local_20;
      }
      if (local_88 < local_2c.y) {
        local_2c.y = local_88;
      }
      if ((in_stack_00000004->base_character).carry_hands[0].carry_actor == (CDemonActor *)0x0) {
        fVar8 = *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60);
        iVar2 = 2;
      }
      else {
        fVar8 = *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60);
        iVar2 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (&(in_stack_00000004->base_character).model,iVar2,6.0,fVar8,DAT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_2c.x,&local_60);
      local_80.w = local_60.w;
      puVar6 = (uint *)((int)&local_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar5 = (uint *)((int)&local_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar7 * -8 + 4);
      *puVar6 = *puVar5;
      puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
      local_18 = &(in_stack_00000004->base_character).model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (local_18,&local_80,
                 *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60),
                 DAT_02f37ef0,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_2c.y,&local_70);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      local_80.w = local_70.w;
      puVar6 = (uint *)((int)&local_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar5 = (uint *)((int)&local_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar7 * -8 + 4);
      iVar2 = DAT_02f37ef0;
      *puVar6 = *puVar5;
      puVar6[(uint)bVar7 * -2 + 1] = puVar5[(uint)bVar7 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (local_18,&local_80,
                 *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60),
                 iVar2,blend_callback);
      return;
    }
    pCVar1 = &in_stack_00000004[1].base_character;
    (pCVar1->base_actor).create_event[0x60] = '\0';
    (pCVar1->base_actor).create_event[0x61] = '\0';
    (pCVar1->base_actor).create_event[0x62] = '\0';
    (pCVar1->base_actor).create_event[99] = '\0';
  }
  return;
}
