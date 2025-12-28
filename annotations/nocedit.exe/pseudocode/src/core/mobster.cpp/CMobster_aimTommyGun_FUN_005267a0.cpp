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
  CQuaternion4f *quat_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  CQuaternion4f *quat_ptr_00;
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CDeformableModelInstance *in_stack_00000010;
  float afStackY_1840 [1516];
  float blend_weight;
  CQuaternion4f *in_stack_ffffff90;
  float fVar6;
  code *blend_callback;
  byte local_60 [12];
  float afStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  CVector3f CStack_3c;
  float local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  
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
                         (&CStack_4c,&g_ZeroVector,
                          (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_02f37ed0 * 4].z);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,&CStack_3c,pCVar3);
      iVar1 = *(int *)(in_stack_00000004[0x8d].create_event + 0x4c);
      local_2c = *(float *)(iVar1 + 0x20) - pCVar3->x;
      local_28.x = *(float *)(iVar1 + 0x24) - pCVar3->y;
      local_28.y = *(float *)(iVar1 + 0x28) - pCVar3->z;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[0x8d].create_event + 0x4c),
                          g_CHeroClassInfo.name_hash);
      fVar6 = 3f;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar6 = 4f;
      }
      local_28.y = local_28.y + fVar6;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_1c,&local_28);
      quat_ptr_00 = (CQuaternion4f *)
                    core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (local_1c.z - (in_stack_00000004->orient).bank);
      fVar6 = SQRT(local_1c.y * local_1c.y + local_28.z * local_28.z + local_1c.x * local_1c.x);
      if (((float)in_stack_ffffff90 <= ABS((float)quat_ptr_00)) || (fVar6 <= (float)2)
         ) {
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
      quat_ptr = (CQuaternion4f *)-(float)in_stack_ffffff90;
      if (local_1c.z < (float)quat_ptr) {
        local_1c.z = (float)quat_ptr;
      }
      if ((float)in_stack_ffffff90 < local_1c.z) {
        local_1c.z = (float)in_stack_ffffff90;
      }
      if ((float)quat_ptr_00 < -(float)in_stack_ffffff90) {
        quat_ptr_00 = (CQuaternion4f *)-(float)in_stack_ffffff90;
      }
      if ((float)in_stack_ffffff90 < (float)quat_ptr_00) {
        quat_ptr_00 = in_stack_ffffff90;
      }
      if (in_stack_00000004[0x1b].field7_0x6c == 0) {
        blend_weight = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 2;
      }
      else {
        blend_weight = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),iVar1,6.0,blend_weight,
                 DAT_02f37ef0,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(quat_ptr_00,fVar6);
      puVar4 = (uint *)((int)&CStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
      *(uint *)(local_60 + (uint)bVar5 * -8) =
           *(uint *)((int)&CStack_3c + (uint)bVar5 * -8);
      *(uint *)(local_60 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) = *puVar4;
      fVar6 = fStack_40;
      *(uint *)
       ((int)(local_60 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) + ((uint)bVar5 * -2 + 1) * 4) =
           puVar4[(uint)bVar5 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CQuaternion4f *)local_60,
                 *(float *)(in_stack_00000004[0x8e].create_event + 0x44),DAT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(quat_ptr,fVar6);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      local_60._8_4_ = CStack_4c.y;
      afStack_54[(uint)bVar5 * -2] = *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + 8);
      iVar1 = DAT_02f37ef0;
      afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (&fStack_40)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
      (afStack_54 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (&fStack_40 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (in_stack_00000010,(CQuaternion4f *)(local_60 + 8),
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
