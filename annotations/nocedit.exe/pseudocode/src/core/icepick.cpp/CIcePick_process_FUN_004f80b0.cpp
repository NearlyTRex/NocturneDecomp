// Name: core_icepick.cpp_CIcePick_process_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

{
  CCharacter_full_vtable *pCVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  CDeformableModelInstance *pCVar6;
  CDemonActor *pCVar7;
  uint uVar8;
  CCharacter *pCVar9;
  int iVar10;
  uint uVar11;
  SMotion *pSVar12;
  byte bVar13;
  float afStackY_1868 [1521];
  float fVar14;
  code *blend_callback;
  float in_stack_ffffff70;
  float in_stack_ffffff74;
  byte auStack_7c [24];
  CVector3f CStack_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f CStack_40;
  CVector3f local_34;
  int local_24;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar13 = 0;
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  if ((this_ptr->base).ai_task == 4) {
    return;
  }
  if ((this_ptr->base).control_type == 2) {
    core_icepick_cpp_CIcePick_FUN_004f8c70(this_ptr);
  }
  fVar3 = (float)12.566370614;
  fVar14 = (this_ptr->base).unk1;
  *(uint *)(this_ptr->unk + 0x20) =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar14 = fVar14 - delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar3;
  (this_ptr->base).unk1 = fVar14;
  if (fVar14 < 0.0) {
    (this_ptr->base).unk1 = 0.0;
  }
  pCVar5 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar5->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_FUN_004f93a0(this_ptr);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  pCVar6 = &(this_ptr->base).base.model;
  if (iVar4 == 0) {
    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar6->motion_controller);
    uVar8 = pSVar12->state_index;
    if (uVar8 < 9) {
      if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar8 < 10) {
        return;
      }
      if (uVar8 < 0xf) {
        if (uVar8 < 0xb) {
LAB_004f8427:
          if ((this_ptr->base).base.field3_0x2410 != 0) {
            iVar4 = 0;
            if ((*(int *)this_ptr->unk != 0) && (*(int *)(this_ptr->unk + 0x20) == 0)) {
              iVar4 = 10;
            }
            if ((this_ptr->base).action_bindings.walk_key != 0) {
              if ((this_ptr->base).action_bindings.run_key == 0) {
                iVar4 = 1;
              }
              else {
                iVar4 = 2;
              }
            }
            if ((this_ptr->base).action_bindings.backup_key != 0) {
              iVar4 = 3;
            }
            if ((this_ptr->base).action_bindings.draw_key != 0) {
              iVar4 = *(int *)this_ptr->unk;
              (this_ptr->base).action_bindings.draw_key = 0;
              uVar8 = (uint)(iVar4 == 0);
              *(uint *)this_ptr->unk = uVar8;
              if ((uVar8 == 0) || (*(int *)(this_ptr->unk + 0x20) != 0)) {
                iVar4 = 0;
              }
              else {
                iVar4 = 10;
              }
            }
            if ((this_ptr->base).action_bindings.fire_key != 0) {
              bVar2 = true;
              if ((*(int *)this_ptr->unk == 0) && ((this_ptr->base).control_type != 2)) {
                iVar10 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
                bVar2 = false;
                if (iVar10 != 0) goto LAB_004f84cc;
                local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
                }
                if ((local_24 != 0) ||
                   (iVar10 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar10 != 0))
                goto LAB_004f84cc;
                iVar10 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
                if (iVar10 != 0) {
                  core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
                  goto LAB_004f84cc;
                }
              }
              else {
LAB_004f84cc:
                if (!bVar2) goto switchD_004f8665_default;
              }
              if (*(int *)this_ptr->unk != 0) {
                if (*(int *)(this_ptr->unk + 0x20) == 0) {
                  (this_ptr->base).action_bindings.fire_key = 0;
                  switch(*(uint *)(this_ptr->unk + 4)) {
                  case 0:
                  case 2:
                    iVar4 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar4 = 0xf;
                    break;
                  case 4:
                    iVar4 = 0x10;
                  }
                }
                else {
                  pCVar9 = (CCharacter *)
                           core_actor_cpp_castToClassHash_FUN_0040c790
                                     ((this_ptr->base).base.carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar9 != (CCharacter *)0x0) {
                    (*(((pCVar9->base).vtable._uc)->_uc).isGrabbable)(pCVar9);
                  }
                }
              }
            }
switchD_004f8665_default:
            (this_ptr->base).base.turn_angle_accumulator =
                 *(float *)((this_ptr->base).unk2 + 4) * (this_ptr->base).base.turn_speed;
            pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(this_ptr->base).base.model.motion_controller);
            if (iVar4 != pSVar12->state_index) {
              if ((((iVar4 == 0xe) || (iVar4 == 0xf)) || (iVar4 == 0x10)) &&
                 (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 8))
                 , iVar10 == 0)) {
                uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                *(uint *)(this_ptr->unk + 8) = uVar11;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,iVar4,1);
            }
            if (((this_ptr->base).action_bindings.use_item_key != 0) &&
               (iVar4 = core_icepick_cpp_CIcePick_FUN_004f8970(this_ptr), iVar4 == 0)) {
              core_icepick_cpp_CIcePick_FUN_004f8ad0(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar8) && (0x10 < uVar8)) && (uVar8 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar5->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar8 = (this_ptr->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
        iVar4 = 1;
      }
      else {
LAB_004f8417:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar6->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004f81b6;
        }
        goto LAB_004f8417;
      }
      iVar4 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
LAB_004f81b6:
  pCVar7 = (this_ptr->base).base.grabbed_by;
  if (pCVar7 == (CDemonActor *)0x0) {
    local_34.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    local_34.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_34.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_4c = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_48 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    local_44 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    local_58 = local_4c + (this_ptr->base).base.field6_0x241c.x;
    local_54 = local_48 + (this_ptr->base).base.field6_0x241c.y;
    local_34.x = local_34.x + local_58;
    local_50 = local_44 + (this_ptr->base).base.field6_0x241c.z;
    local_34.y = local_34.y + local_54;
    local_34.z = local_34.z + local_50;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_34);
    goto LAB_004f82f8;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&CStack_64,&(pCVar7->location).position);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_40,pCVar5);
    pCVar6 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
    if ((float)pCVar6 < (float)-1.57079632675) {
      pCVar6 = (CDeformableModelInstance *)((float)pCVar6 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar6) {
      pCVar6 = (CDeformableModelInstance *)((float)pCVar6 + -3.141593f);
    }
    local_14 = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
    local_18 = (CDeformableModelInstance *)-(float)local_14;
    if ((float)pCVar6 < (float)local_18) {
      pCVar6 = local_18;
    }
    if ((float)local_14 < (float)pCVar6) {
      pCVar6 = local_14;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.base.orient.vec.y + (float)pCVar6;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  pCVar9 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCVar1 = (pCVar9->base).vtable._uc;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,(CVector3f *)(auStack_7c + 0xc),0);
  iVar4 = (*(pCVar1->_uc).attractActorToward)(pCVar9,(CDemonActor *)this_ptr,pCVar5);
  if (iVar4 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    in_stack_ffffff70 = 0.0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if ((this_ptr->base).action_bindings.fire_key == 0) goto LAB_004f82f8;
    in_stack_ffffff70 = 2.38221e-44;
  }
  in_stack_ffffff74 = 1.4013e-45;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,(int)in_stack_ffffff70,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
  ;
  if (pCVar7 != (CDemonActor *)0x0) {
    (*((pCVar7->vtable)._ub)->process)(pCVar7,delta_time);
    pCVar7[4].actor_name[8] = 'd';
    pCVar7[4].actor_name[9] = '\0';
    pCVar7[4].actor_name[10] = '\0';
    pCVar7[4].actor_name[0xb] = '\0';
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  local_1c = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(local_1c);
  iVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (iVar4 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar14 = *(float *)(this_ptr->unk + 0x1c);
    iVar4 = INT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CVector3f *)(this_ptr->unk + 0x10),(CQuaternion4f *)&stack0xffffff74);
    auStack_7c._0_4_ = in_stack_ffffff74;
    *(uint *)(auStack_7c + (uint)bVar13 * -8 + 4) =
         *(uint *)(&stack0xffffff78 + (uint)bVar13 * -8);
    *(uint *)(auStack_7c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         *(uint *)(&stack0xffffff7c + (uint)bVar13 * -8 + (uint)bVar13 * -8);
    *(uint *)
     ((int)(auStack_7c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) + ((uint)bVar13 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff7c + (uint)bVar13 * -8 + (uint)bVar13 * -8) +
          ((uint)bVar13 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_18,(CQuaternion4f *)auStack_7c,fVar14,iVar4,blend_callback);
  }
  core_icepick_cpp_CIcePick_FUN_004f8810(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffff70);
  return;
}
