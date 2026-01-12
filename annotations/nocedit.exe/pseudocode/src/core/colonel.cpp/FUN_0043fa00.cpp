// Name: core_colonel.cpp_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043fa00()

#include "nocturne.h"

/* Signature: byte actors_hero_colonel.cpp_FUN_0043fa00(uint param_1, uint
   param_2) */

void core_colonel_cpp_FUN_0043fa00(void)

{
  uint uVar1;
  CDemonActor *this_ptr;
  bool bVar2;
  CCharacter *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  int iVar7;
  SMotion *pSVar8;
  BADSPACEBASE *in_ESP;
  CDeformableModelInstance *unaff_EDI;
  byte bVar9;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_1864 [1519];
  CQuaternion4f *source_quaternions;
  SCollisionInfo *in_stack_ffffff68;
  int in_stack_ffffff6c;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffff70;
  float fStack_88;
  byte auStack_78 [8];
  float afStack_70 [4];
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  SCollisionInfo *local_20;
  SCollisionInfo *local_1c;
  CDeformableModelInstance *pCStack_18;
  CDemonActor_vtable *local_14;
  
  bVar9 = 0;
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar4 == 0) {
    return;
  }
  fVar6 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar6;
  if (fVar6 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  core_colonel_cpp_FUN_00440430();
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_colonel_cpp_FUN_0043ff20();
  }
  fVar6 = (float)12.566370614;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar6;
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar4 == 0) {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar4 = 0;
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar4 = 3;
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          iVar7 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          iVar4 = 0;
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = (uint)(iVar7 == 0);
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar2 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar7 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar7 != 0) goto LAB_0043fd60;
            local_24 = core_hero_cpp_FUN_004f2d70();
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((local_24 != 0) || (iVar7 = core_hero_cpp_FUN_004f2c40(), iVar7 != 0))
            goto LAB_0043fd60;
            iVar7 = core_hero_cpp_FUN_004f2f50();
            if (iVar7 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar2) goto LAB_0043fd6e;
          }
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[0x14] = '\0';
          (pCVar3->base_actor).actor_name[0x15] = '\0';
          (pCVar3->base_actor).actor_name[0x16] = '\0';
          (pCVar3->base_actor).actor_name[0x17] = '\0';
        }
LAB_0043fd6e:
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if (iVar4 != pSVar8->state_index) goto LAB_0043fad3;
      }
      break;
    case 6:
      goto switchD_0043fe37_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar4 = 1;
      }
      else {
LAB_0043fcd4:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar4 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar4,1);
  }
switchD_0043fe37_caseD_5:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_38 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_34 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_30 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    pCVar5 = &(in_stack_00000004->model).accumulated_root_motion;
    local_50 = pCVar5->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_4c = (in_stack_00000004->model).accumulated_root_motion.y +
               *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    afStack_70[2] = local_50 + local_38;
    local_48 = (in_stack_00000004->model).accumulated_root_motion.z +
               *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    afStack_70[3] = local_4c + local_34;
    local_60 = local_48 + local_30;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar5->x = (in_stack_00000004->model).accumulated_root_motion.y;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(float *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,&local_5c,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar5);
      in_stack_ffffff68 =
           (SCollisionInfo *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
      if ((float)in_stack_ffffff68 < (float)-1.57079632675) {
        in_stack_ffffff68 = (SCollisionInfo *)((float)in_stack_ffffff68 + 5.3286462644388174e-315._0_4_);
      }
      if ((float)1.57079632675 < (float)in_stack_ffffff68) {
        in_stack_ffffff68 = (SCollisionInfo *)((float)in_stack_ffffff68 + -3.141593f);
      }
      local_1c = (SCollisionInfo *)(in_stack_00000008 * (float)3.1415926535000001);
      local_20 = (SCollisionInfo *)-(float)local_1c;
      if ((float)in_stack_ffffff68 < (float)local_20) {
        in_stack_ffffff68 = local_20;
      }
      if ((float)local_1c < (float)in_stack_ffffff68) {
        in_stack_ffffff68 = local_1c;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + (float)in_stack_ffffff68;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr = in_stack_00000004->grabbed_by;
    local_14 = this_ptr->vtable;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,(CVector3f *)(auStack_78 + 4),0);
    fVar6 = (*local_14[1].cylinderGroundCheck)(this_ptr,(float)in_stack_00000004,pCVar5);
    if (fVar6 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar4 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_0043fc14;
      iVar4 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar4,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  pCStack_18 = &in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_18);
  iVar4 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,in_stack_ffffff68);
  if (iVar4 == 0) {
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    source_quaternions = (CQuaternion4f *)auStack_78;
    auStack_78._0_4_ = fStack_88;
    *(uint *)(auStack_78 + (uint)bVar9 * -8 + 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar9 * -8);
    afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
         *(float *)(&stack0xffffff80 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (afStack_70 + (uint)bVar9 * -2 + (uint)bVar9 * -2)[(uint)bVar9 * -2 + 1] =
         *(float *)((int)(&stack0xffffff80 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                   ((uint)bVar9 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (unaff_EDI,source_quaternions,(float)in_stack_ffffff68,in_stack_ffffff6c,
               in_stack_ffffff70);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_0043fe37_caseD_6:
  return;
}
