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
  int iVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_185c [1519];
  float fVar7;
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
  
  bVar6 = 0;
  if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
    in_stack_00000004[0x8e].create_event[0x44] = '\0';
    in_stack_00000004[0x8e].create_event[0x45] = '\0';
    in_stack_00000004[0x8e].create_event[0x46] = '\0';
    in_stack_00000004[0x8e].create_event[0x47] = '\0';
  }
  else {
    if (*(int *)(in_stack_00000004[0x8d].create_event + 0x4c) != 0) {
      iVar1 = core_enemy_cpp_FUN_004a9a50();
      if ((iVar1 == 0) && (*(int *)(in_stack_00000004[0x8e].actor_name + 0x18) == 0)) {
        in_stack_00000004[0x8e].create_event[0x44] = '\0';
        in_stack_00000004[0x8e].create_event[0x45] = '\0';
        in_stack_00000004[0x8e].create_event[0x46] = '\0';
        in_stack_00000004[0x8e].create_event[0x47] = '\0';
        return;
      }
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38),
                          g_CWeaponClassInfo.name_hash);
      if (pCVar2 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\mobster.cpp";
        g_CurrentLineNumber = 0x323;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_88 = 0.7853982;
      if (*(int *)(in_stack_00000004[0x8e].actor_name + 0x10) != 0) {
        local_88 = 1.5707964;
      }
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_50,&g_ZeroVector,
                          (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_02f37ed0 * 4].z);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,&local_44,pCVar3);
      iVar1 = *(int *)(in_stack_00000004[0x8d].create_event + 0x4c);
      local_38.x = *(float *)(iVar1 + 0x20) - pCVar3->x;
      local_38.y = *(float *)(iVar1 + 0x24) - pCVar3->y;
      local_38.z = *(float *)(iVar1 + 0x28) - pCVar3->z;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[0x8d].create_event + 0x4c),
                          g_CHeroClassInfo.name_hash);
      fVar7 = 3.0f;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar7 = 4.0f;
      }
      local_38.y = local_38.y + fVar7;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_2c,&local_38);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (local_2c.y - (in_stack_00000004->orient).bank);
      local_84 = SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y);
      if ((local_88 <= ABS((float)local_18)) || (local_84 <= (float)2)) {
        in_stack_00000008 =
             *(float *)(in_stack_00000004[0x8e].create_event + 0x44) - in_stack_00000008;
        *(float *)(in_stack_00000004[0x8e].create_event + 0x44) = in_stack_00000008;
        if (in_stack_00000008 < 0.0) {
          in_stack_00000004[0x8e].create_event[0x44] = '\0';
          in_stack_00000004[0x8e].create_event[0x45] = '\0';
          in_stack_00000004[0x8e].create_event[0x46] = '\0';
          in_stack_00000004[0x8e].create_event[0x47] = '\0';
        }
      }
      else {
        in_stack_00000008 =
             *(float *)(in_stack_00000004[0x8e].create_event + 0x44) + in_stack_00000008;
        *(float *)(in_stack_00000004[0x8e].create_event + 0x44) = in_stack_00000008;
        if (1.0 < in_stack_00000008) {
          in_stack_00000004[0x8e].create_event[0x44] = '\0';
          in_stack_00000004[0x8e].create_event[0x45] = '\0';
          in_stack_00000004[0x8e].create_event[0x46] = -0x80;
          in_stack_00000004[0x8e].create_event[0x47] = '?';
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
      if (in_stack_00000004[0x1b].field7_0x6c == 0) {
        fVar7 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 2;
      }
      else {
        fVar7 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),iVar1,6.0,fVar7,DAT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_2c.x,&local_60);
      local_80.w = local_60.w;
      puVar5 = (uint *)((int)&local_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar6 * -8 + 4);
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (local_18,&local_80,*(float *)(in_stack_00000004[0x8e].create_event + 0x44),
                 DAT_02f37ef0,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_2c.y,&local_70);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      local_80.w = local_70.w;
      puVar5 = (uint *)((int)&local_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar4 = (uint *)((int)&local_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar6 * -8 + 4);
      iVar1 = DAT_02f37ef0;
      *puVar5 = *puVar4;
      puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (local_18,&local_80,*(float *)(in_stack_00000004[0x8e].create_event + 0x44),iVar1,
                 blend_callback);
      return;
    }
    in_stack_00000004[0x8e].create_event[0x44] = '\0';
    in_stack_00000004[0x8e].create_event[0x45] = '\0';
    in_stack_00000004[0x8e].create_event[0x46] = '\0';
    in_stack_00000004[0x8e].create_event[0x47] = '\0';
  }
  return;
}
