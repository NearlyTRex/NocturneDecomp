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
  float *pfVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_185c [1519];
  float fVar6;
  code *blend_callback;
  CQuaternion4f *angle_radians;
  float local_84;
  CQuaternion4f local_80;
  float local_70;
  float afStack_6c [7];
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CQuaternion4f *local_20;
  CQuaternion4f *local_1c;
  CDeformableModelInstance *local_18;
  
  bVar5 = 0;
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
      angle_radians = (CQuaternion4f *)0x3f490fdb;
      if (*(int *)(in_stack_00000004[0x8e].actor_name + 0x10) != 0) {
        angle_radians = (CQuaternion4f *)0x3fc90fdb;
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
      fVar6 = 3.0f;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar6 = 4.0f;
      }
      local_38.y = local_38.y + fVar6;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_2c,&local_38);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (local_2c.y - (in_stack_00000004->orient).bank);
      local_84 = SQRT(local_38.z * local_38.z + local_38.x * local_38.x + local_38.y * local_38.y);
      if (((float)angle_radians <= ABS((float)local_18)) || (local_84 <= (float)2)) {
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
      local_1c = (CQuaternion4f *)-(float)angle_radians;
      if (local_2c.x < (float)local_1c) {
        local_2c.x = (float)local_1c;
      }
      if ((float)angle_radians < local_2c.x) {
        local_2c.x = (float)angle_radians;
      }
      local_20 = (CQuaternion4f *)-(float)angle_radians;
      local_2c.y = (float)local_18;
      if ((float)local_18 < (float)local_20) {
        local_2c.y = (float)local_20;
      }
      if ((float)angle_radians < local_2c.y) {
        local_2c.y = (float)angle_radians;
      }
      if (in_stack_00000004[0x1b].field7_0x6c == 0) {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 2;
      }
      else {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),iVar1,6.0,fVar6,DAT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                ((CQuaternion4f *)local_2c.x,(float)angle_radians);
      local_80.w = afStack_6c[3];
      pfVar4 = (float *)((int)&local_80 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(float *)((int)&local_80 + (uint)bVar5 * -8 + 4) = afStack_6c[(uint)bVar5 * -2 + 4];
      *pfVar4 = afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      pfVar4[(uint)bVar5 * -2 + 1] =
           (afStack_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (local_18,&local_80,*(float *)(in_stack_00000004[0x8e].create_event + 0x44),
                 DAT_02f37ef0,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                ((CQuaternion4f *)local_2c.y,(float)angle_radians);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      local_80.w = local_70;
      pfVar4 = (float *)((int)&local_80 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(float *)((int)&local_80 + (uint)bVar5 * -8 + 4) = afStack_6c[(uint)bVar5 * -2];
      iVar1 = DAT_02f37ef0;
      *pfVar4 = afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      pfVar4[(uint)bVar5 * -2 + 1] =
           (afStack_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
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
