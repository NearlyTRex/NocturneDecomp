// Name: core_scat.cpp_FUN_005571f0
// Address: 005571f0
// Address Range: [[005571f0, 005578dd]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005571f0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_005571f0(uint param_1, uint param_2)
    */

void core_scat_cpp_FUN_005571f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  CDemonActor *this_ptr;
  float fVar7;
  CCharacter *pCVar8;
  CGame *pCVar9;
  int iVar10;
  CVector3f *pCVar11;
  float fVar12;
  SMotion *pSVar13;
  BADSPACEBASE *in_ESP;
  uint *puVar14;
  int desired_state_index;
  CDeformableModelInstance *unaff_EDI;
  uint *puVar15;
  byte bVar16;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_184c [1518];
  CVector3f *in_stack_ffffff78;
  float in_stack_ffffff7c;
  CQuaternion4f *source_quaternions;
  SCollisionInfo *in_stack_ffffff84;
  code *blend_callback;
  CQuaternion4f CStack_70;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  CVector3f local_34 [2];
  CVector3f *local_1c;
  CVector3f *local_18;
  CDemonActor_vtable *local_14;
  
  bVar16 = 0;
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  pCVar9 = g_CGamePtr;
  if (iVar10 == 0) {
    return;
  }
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * (float)12.566370614;
  if (pCVar9->letterbox_mode != 0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)0.33333333333333298;
  }
  fVar12 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar12;
  if (fVar12 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  pCVar11 = &(in_stack_00000004->model).accumulated_root_motion;
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  pCVar11->x = (in_stack_00000004->model).accumulated_root_motion.y;
  core_scat_cpp_FUN_00557d20();
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  iVar10 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar10 == 0) {
    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
      core_scat_cpp_FUN_005578e0();
    }
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    switch(pSVar13->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar10 = core_scat_cpp_FUN_00558010();
        desired_state_index = 0;
        if (iVar10 != 0) {
          desired_state_index = 7;
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          iVar10 = core_scat_cpp_FUN_00558010();
          if (iVar10 == 0) {
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
              desired_state_index = 1;
            }
            else {
              desired_state_index = 2;
            }
          }
          else {
            desired_state_index = 9;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar10 = core_scat_cpp_FUN_00558010();
          if (iVar10 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if ((((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) &&
             (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)) &&
            (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0)) &&
           (iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) +
                                          0x154) + 0xfc))(), iVar10 != 0)) {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 0xf8))
                    ();
          iVar10 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
          pCVar8 = in_stack_00000004 + 1;
          (pCVar8->base_actor).actor_name[0x14] = '\0';
          (pCVar8->base_actor).actor_name[0x15] = '\0';
          (pCVar8->base_actor).actor_name[0x16] = '\0';
          (pCVar8->base_actor).actor_name[0x17] = '\0';
          if (*(int *)(iVar10 + 0x2e0) == 8) {
            desired_state_index = 0xb;
          }
        }
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c) +
             *(float *)(in_stack_00000004->field2_0x240c + 0xc);
        pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&(in_stack_00000004->model).motion_controller);
        if (desired_state_index != pSVar13->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,desired_state_index,1);
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          (*(in_stack_00000004->base_actor).vtable[1].getAllowedMeleeAttackTypes)
                    (&in_stack_00000004->base_actor);
        }
      }
      break;
    case 5:
      goto switchD_00557686_caseD_5;
    }
  }
  else {
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar11->x = (in_stack_00000004->model).accumulated_root_motion.y;
    uVar6 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar6 < 2) {
      if (uVar6 == 1) {
        iVar10 = core_scat_cpp_FUN_00558010();
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        else {
LAB_005572db:
          iVar10 = 9;
        }
      }
      else {
LAB_00557637:
        iVar10 = core_scat_cpp_FUN_00558010();
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = 7;
        }
      }
    }
    else if (uVar6 < 3) {
      iVar10 = core_scat_cpp_FUN_00558010();
      if (iVar10 != 0) goto LAB_005572db;
      iVar10 = 2;
    }
    else {
      if (uVar6 != 3) goto LAB_00557637;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
      iVar10 = core_scat_cpp_FUN_00558010();
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar10,1);
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pCVar11 = &(in_stack_00000004->model).accumulated_root_motion;
    fVar12 = pCVar11->x;
    fVar1 = *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    fVar2 = (in_stack_00000004->model).accumulated_root_motion.y;
    fVar3 = *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    fVar4 = (in_stack_00000004->model).accumulated_root_motion.z;
    fVar5 = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    fVar7 = (float)32;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar11->x = (in_stack_00000004->model).accumulated_root_motion.y;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(uint *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) - in_stack_00000008 * fVar7;
    CStack_70.z = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_60 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_5c = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_4c = fVar12 + fVar1 + CStack_70.z;
    local_48 = fVar2 + fVar3 + local_60;
    local_44 = fVar4 + fVar5 + local_5c;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&local_40,
                         &(in_stack_00000004->grabbed_by->location).position);
    pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_58,pCVar11);
    local_14 = (CDemonActor_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar11->y);
    in_stack_ffffff78 = (CVector3f *)local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      in_stack_ffffff78 = (CVector3f *)((float)local_14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)in_stack_ffffff78) {
      in_stack_ffffff78 = (CVector3f *)((float)in_stack_ffffff78 + -3.141593f);
    }
    local_18 = (CVector3f *)(in_stack_00000008 * (float)3.1415926535000001);
    local_1c = (CVector3f *)-(float)local_18;
    if ((float)in_stack_ffffff78 < (float)local_1c) {
      in_stack_ffffff78 = local_1c;
    }
    if ((float)local_18 < (float)in_stack_ffffff78) {
      in_stack_ffffff78 = local_18;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + (float)in_stack_ffffff78;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
    this_ptr = in_stack_00000004->grabbed_by;
    local_14 = this_ptr->vtable;
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&in_stack_00000004->model,local_34,0);
    fVar12 = (*local_14[1].cylinderGroundCheck)(this_ptr,(float)in_stack_00000004,pCVar11);
    if (fVar12 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_005573f5:
      in_stack_ffffff7c = 0.0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_005573f5;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_00557408;
      in_stack_ffffff7c = 2.10195e-44;
    }
    in_stack_ffffff78 = (CVector3f *)&in_stack_00000004->model;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)in_stack_ffffff78,(int)in_stack_ffffff7c,1);
  }
LAB_00557408:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0
            ((CInventory *)(in_stack_00000004[2].cloth_data + 0x5058));
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 4))();
  }
  core_scat_cpp_FUN_00558060();
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  (*(in_stack_00000004->base_actor).vtable[1].processFootstepAtOffset)
            (&in_stack_00000004->base_actor,in_stack_ffffff78,in_stack_ffffff7c);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(in_stack_00000004->model).motion_controller,0xc);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(in_stack_00000004->model).motion_controller,0xd);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(in_stack_00000004->model).motion_controller,4);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(in_stack_00000004->model).motion_controller,5);
  core_scat_cpp_FUN_00558720();
  local_14 = (CDemonActor_vtable *)&in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            ((CDeformableModelInstance *)local_14);
  core_scat_cpp_FUN_005582c0();
  iVar10 = core_scat_cpp_FUN_00558010();
  if ((iVar10 == 0) &&
     (iVar10 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                         (&in_stack_00000004->base_actor,in_stack_ffffff84), iVar10 == 0)) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    pCVar11 = *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5504);
    iVar10 = DAT_0310615c;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54f8),pCVar11);
    source_quaternions = &CStack_70;
    CStack_70.w = local_60;
    puVar15 = (uint *)((int)&CStack_70 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    puVar14 = (uint *)((int)&local_58 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
    *(float *)((int)&CStack_70 + (uint)bVar16 * -8 + 4) = (&local_5c)[(uint)bVar16 * -2];
    *puVar15 = *puVar14;
    puVar15[(uint)bVar16 * -2 + 1] = puVar14[(uint)bVar16 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (unaff_EDI,source_quaternions,(float)pCVar11,iVar10,blend_callback);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  core_scat_cpp_FUN_00558fd0();
switchD_00557686_caseD_5:
  return;
}
