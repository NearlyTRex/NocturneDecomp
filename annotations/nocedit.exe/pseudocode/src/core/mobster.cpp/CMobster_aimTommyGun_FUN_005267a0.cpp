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
  CQuaternion4f *quat_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  uint *puVar4;
  float unaff_EDI;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  CDeformableModelInstance *in_stack_00000018;
  float afStackY_1838 [1515];
  float fVar6;
  CQuaternion4f *in_stack_ffffff98;
  float fVar7;
  code *blend_callback;
  byte auStack_58 [12];
  float afStack_4c [2];
  CVector3f local_44;
  float local_38;
  CVector3f local_34;
  float fStack_24;
  CVector3f local_20;
  float fStack_14;
  
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
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_44,&g_ZeroVector,
                          (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_02f37ed0 * 4].z);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,&local_34,pCVar3);
      iVar1 = *(int *)(in_stack_00000004[0x8d].create_event + 0x4c);
      fStack_24 = *(float *)(iVar1 + 0x20) - pCVar3->x;
      local_20.x = *(float *)(iVar1 + 0x24) - pCVar3->y;
      local_20.y = *(float *)(iVar1 + 0x28) - pCVar3->z;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[0x8d].create_event + 0x4c),
                          g_CHeroClassInfo.name_hash);
      fVar7 = 3f;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar7 = 4f;
      }
      local_20.y = local_20.y + fVar7;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                ((CVector3f *)&fStack_14,&local_20);
      quat_ptr = (CQuaternion4f *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (unaff_EDI - (in_stack_00000004->orient).bank);
      fVar7 = SQRT(unaff_EBP * unaff_EBP + local_20.z * local_20.z + fStack_14 * fStack_14);
      if (((float)in_stack_ffffff98 <= ABS((float)quat_ptr)) || (fVar7 <= (float)2)) {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44) - (float)quat_ptr;
        *(float *)(in_stack_00000004[0x8e].create_event + 0x44) = fVar6;
        if (fVar6 < 0.0) {
          in_stack_00000004[0x8e].create_event[0x44] = '\0';
          in_stack_00000004[0x8e].create_event[0x45] = '\0';
          in_stack_00000004[0x8e].create_event[0x46] = '\0';
          in_stack_00000004[0x8e].create_event[0x47] = '\0';
        }
      }
      else {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44) + (float)quat_ptr;
        *(float *)(in_stack_00000004[0x8e].create_event + 0x44) = fVar6;
        if (1.0 < fVar6) {
          in_stack_00000004[0x8e].create_event[0x44] = '\0';
          in_stack_00000004[0x8e].create_event[0x45] = '\0';
          in_stack_00000004[0x8e].create_event[0x46] = -0x80;
          in_stack_00000004[0x8e].create_event[0x47] = '?';
        }
      }
      if ((float)quat_ptr < -(float)in_stack_ffffff98) {
        quat_ptr = (CQuaternion4f *)-(float)in_stack_ffffff98;
      }
      if ((float)in_stack_ffffff98 < (float)quat_ptr) {
        quat_ptr = in_stack_ffffff98;
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
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(quat_ptr,fVar7);
      puVar4 = (uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
      *(uint *)(auStack_58 + (uint)bVar5 * -8) =
           *(uint *)((int)&local_34 + (uint)bVar5 * -8);
      *(uint *)(auStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) = *puVar4;
      fVar7 = local_38;
      *(uint *)
       ((int)(auStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) + ((uint)bVar5 * -2 + 1) * 4) =
           puVar4[(uint)bVar5 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CQuaternion4f *)auStack_58,
                 *(float *)(in_stack_00000004[0x8e].create_event + 0x44),DAT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                ((CQuaternion4f *)-(float)in_stack_ffffff98,fVar7);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      auStack_58._8_4_ = local_44.y;
      afStack_4c[(uint)bVar5 * -2] = *(float *)((int)&local_44 + (uint)bVar5 * -8 + 8);
      iVar1 = DAT_02f37ef0;
      afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (&local_38)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
      (afStack_4c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (&local_38 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (in_stack_00000018,(CQuaternion4f *)(auStack_58 + 8),
                 *(float *)(in_stack_00000004[0x8e].create_event + 0x44),iVar1,blend_callback);
      return;
    }
    in_stack_00000004[0x8e].create_event[0x44] = '\0';
    in_stack_00000004[0x8e].create_event[0x45] = '\0';
    in_stack_00000004[0x8e].create_event[0x46] = '\0';
    in_stack_00000004[0x8e].create_event[0x47] = '\0';
  }
  return;
}
