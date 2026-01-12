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
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  float *pfVar5;
  byte bVar6;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_1858 [1519];
  float fVar7;
  code *blend_callback;
  CQuaternion4f *angle_radians;
  float local_80;
  CQuaternion4f CStack_7c;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  uint auStack_54 [2];
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f local_34;
  CVector3f local_28;
  CQuaternion4f *local_1c;
  CQuaternion4f *local_18;
  CDeformableModelInstance *pCStack_14;
  
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
      angle_radians = (CQuaternion4f *)0x3f490fdb;
      if (*(int *)(in_stack_00000004[0x8e].actor_name + 0x10) != 0) {
        angle_radians = (CQuaternion4f *)0x3fc90fdb;
      }
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&CStack_4c,&g_ZeroVector,
                          (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_02f37ed0 * 4].z);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,&CStack_40,pCVar3);
      iVar1 = *(int *)(in_stack_00000004[0x8d].create_event + 0x4c);
      local_34.x = *(float *)(iVar1 + 0x20) - pCVar3->x;
      local_34.y = *(float *)(iVar1 + 0x24) - pCVar3->y;
      local_34.z = *(float *)(iVar1 + 0x28) - pCVar3->z;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[0x8d].create_event + 0x4c),
                          g_CHeroClassInfo.name_hash);
      fVar7 = 3f;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar7 = 4f;
      }
      local_34.y = local_34.y + fVar7;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_28,&local_34);
      local_28.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_28.y - (in_stack_00000004->orient).bank);
      local_80 = SQRT(local_34.z * local_34.z + local_34.x * local_34.x + local_34.y * local_34.y);
      if (((float)angle_radians <= ABS(local_28.y)) || (local_80 <= (float)2)) {
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
      local_18 = (CQuaternion4f *)-(float)angle_radians;
      if (local_28.x < (float)local_18) {
        local_28.x = (float)local_18;
      }
      if ((float)angle_radians < local_28.x) {
        local_28.x = (float)angle_radians;
      }
      local_1c = (CQuaternion4f *)-(float)angle_radians;
      if (local_28.y < (float)local_1c) {
        local_28.y = (float)local_1c;
      }
      if ((float)angle_radians < local_28.y) {
        local_28.y = (float)angle_radians;
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
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                ((CQuaternion4f *)local_28.x,(float)angle_radians);
      CStack_7c.w = fStack_58;
      puVar4 = (uint *)((int)&CStack_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&CStack_7c + (uint)bVar6 * -8 + 4) = auStack_54[(uint)bVar6 * -2];
      *puVar4 = auStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      puVar4[(uint)bVar6 * -2 + 1] =
           (auStack_54 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCStack_14,&CStack_7c,*(float *)(in_stack_00000004[0x8e].create_event + 0x44),
                 DAT_02f37ef0,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                ((CQuaternion4f *)local_28.y,(float)angle_radians);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      CStack_7c.w = fStack_6c;
      pfVar5 = (float *)((int)&CStack_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(float *)((int)&CStack_7c + (uint)bVar6 * -8 + 4) = afStack_68[(uint)bVar6 * -2];
      iVar1 = DAT_02f37ef0;
      *pfVar5 = afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pfVar5[(uint)bVar6 * -2 + 1] =
           (afStack_68 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (pCStack_14,&CStack_7c,*(float *)(in_stack_00000004[0x8e].create_event + 0x44),iVar1
                 ,blend_callback);
      return;
    }
    in_stack_00000004[0x8e].create_event[0x44] = '\0';
    in_stack_00000004[0x8e].create_event[0x45] = '\0';
    in_stack_00000004[0x8e].create_event[0x46] = '\0';
    in_stack_00000004[0x8e].create_event[0x47] = '\0';
  }
  return;
}
