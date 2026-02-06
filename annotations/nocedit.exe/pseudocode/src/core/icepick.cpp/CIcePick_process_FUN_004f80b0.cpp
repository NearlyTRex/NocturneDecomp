// Name: core_icepick.cpp_CIcePick_process_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  CDemonActor *pCVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  SMotion *pSVar9;
  byte bVar10;
  float afStackY_186c [1521];
  float fVar11;
  CDeformableModelInstance *pCVar12;
  code *blend_callback;
  CQuaternion4f CStack_90;
  byte auStack_80 [24];
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  CDeformableModelInstance *pCStack_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar10 = 0;
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return;
  }
  if ((this_ptr->base).ai_task == 4) {
    return;
  }
  if ((this_ptr->base).control_type == 2) {
    core_icepick_cpp_CIcePick_FUN_004f8c70(this_ptr);
  }
  fVar2 = (float)12.566370614;
  fVar11 = (float)(this_ptr->base).unk1;
  *(uint *)(this_ptr->unk + 0x20) =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar11 = fVar11 - delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar2;
  (this_ptr->base).unk1 = (uint)fVar11;
  if (fVar11 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_FUN_004f93a0(this_ptr);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  pCVar12 = &(this_ptr->base).base.model;
  if (iVar3 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar12->motion_controller);
    uVar6 = pSVar9->state_index;
    if (uVar6 < 9) {
      if ((((uVar6 == 0) || (uVar6 < 2)) || (uVar6 < 3)) || (uVar6 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar6 < 10) {
        return;
      }
      if (uVar6 < 0xf) {
        if (uVar6 < 0xb) {
LAB_004f8427:
          if ((this_ptr->base).base.field3_0x2410 != 0) {
            iVar3 = 0;
            if ((*(int *)this_ptr->unk != 0) && (*(int *)(this_ptr->unk + 0x20) == 0)) {
              iVar3 = 10;
            }
            if ((this_ptr->base).action_bindings.walk_key != 0) {
              if ((this_ptr->base).action_bindings.run_key == 0) {
                iVar3 = 1;
              }
              else {
                iVar3 = 2;
              }
            }
            if ((this_ptr->base).action_bindings.backup_key != 0) {
              iVar3 = 3;
            }
            if ((this_ptr->base).action_bindings.draw_key != 0) {
              iVar3 = *(int *)this_ptr->unk;
              (this_ptr->base).action_bindings.draw_key = 0;
              uVar6 = (uint)(iVar3 == 0);
              *(uint *)this_ptr->unk = uVar6;
              if ((uVar6 == 0) || (*(int *)(this_ptr->unk + 0x20) != 0)) {
                iVar3 = 0;
              }
              else {
                iVar3 = 10;
              }
            }
            if ((this_ptr->base).action_bindings.fire_key != 0) {
              bVar1 = true;
              if ((*(int *)this_ptr->unk == 0) && ((this_ptr->base).control_type != 2)) {
                iVar7 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
                bVar1 = false;
                if (iVar7 != 0) goto LAB_004f84cc;
                local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
                }
                if ((local_24 != 0) ||
                   (iVar7 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar7 != 0))
                goto LAB_004f84cc;
                iVar7 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
                if (iVar7 != 0) {
                  core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
                  goto LAB_004f84cc;
                }
              }
              else {
LAB_004f84cc:
                if (!bVar1) goto switchD_004f8665_default;
              }
              if (*(int *)this_ptr->unk != 0) {
                if (*(int *)(this_ptr->unk + 0x20) == 0) {
                  (this_ptr->base).action_bindings.fire_key = 0;
                  switch(*(uint *)(this_ptr->unk + 4)) {
                  case 0:
                  case 2:
                    iVar3 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar3 = 0xf;
                    break;
                  case 4:
                    iVar3 = 0x10;
                  }
                }
                else {
                  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                                     ((this_ptr->base).base.carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar5 != (CDemonActor *)0x0) {
                    (*(((pCVar5->vtable)._uc)->_uc).cfunc4)();
                  }
                }
              }
            }
switchD_004f8665_default:
            (this_ptr->base).base.turn_angle_accumulator =
                 *(float *)((this_ptr->base).unk2 + 4) * (this_ptr->base).base.turn_speed;
            pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                               (&(this_ptr->base).base.model.motion_controller);
            if (iVar3 != pSVar9->state_index) {
              if ((((iVar3 == 0xe) || (iVar3 == 0xf)) || (iVar3 == 0x10)) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 8)),
                 iVar7 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                *(uint *)(this_ptr->unk + 8) = uVar8;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,iVar3,1);
            }
            if (((this_ptr->base).action_bindings.use_item_key != 0) &&
               (iVar3 = core_icepick_cpp_CIcePick_FUN_004f8970(this_ptr), iVar3 == 0)) {
              core_icepick_cpp_CIcePick_FUN_004f8ad0(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar6) && (0x10 < uVar6)) && (uVar6 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar6 = (this_ptr->base).base.field22_0x25b0;
    if (uVar6 < 2) {
      if (uVar6 == 1) {
        iVar3 = 1;
      }
      else {
LAB_004f8417:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar6) {
        if (uVar6 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar12->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004f81b6;
        }
        goto LAB_004f8417;
      }
      iVar3 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar3,1);
  }
LAB_004f81b6:
  pCVar5 = (this_ptr->base).base.grabbed_by;
  if (pCVar5 == (CDemonActor *)0x0) {
    local_38 = (this_ptr->base).base.model.accumulated_root_motion.x;
    local_34 = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_30 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_50 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_4c = (this_ptr->base).base.field7_0x2428.y * delta_time;
    local_48 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    local_5c = local_50 + (this_ptr->base).base.field6_0x241c.x;
    local_58 = local_4c + (this_ptr->base).base.field6_0x241c.y;
    local_38 = local_38 + local_5c;
    local_54 = local_48 + (this_ptr->base).base.field6_0x241c.z;
    local_34 = local_34 + local_58;
    local_30 = local_30 + local_54;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    goto LAB_004f82f8;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&local_68,&(pCVar5->location).position);
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar4);
    local_14 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y)
    ;
    pCVar12 = local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      pCVar12 = (CDeformableModelInstance *)((float)local_14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar12) {
      pCVar12 = (CDeformableModelInstance *)((float)pCVar12 + -3.141593f);
    }
    local_18 = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
    local_1c = (CDeformableModelInstance *)-(float)local_18;
    if ((float)pCVar12 < (float)local_1c) {
      pCVar12 = local_1c;
    }
    if ((float)local_18 < (float)pCVar12) {
      pCVar12 = local_18;
    }
    (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + (float)pCVar12
    ;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  local_14 = (CDeformableModelInstance *)(((this_ptr->base).base.grabbed_by)->vtable)._uc;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (&(this_ptr->base).base.model,(CVector3f *)(auStack_80 + 0xc),0);
  iVar3 = (*((CCharacter_vtable *)((int)local_14 + 0xec))->cfunc15)();
  if (iVar3 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    iVar3 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if ((this_ptr->base).action_bindings.fire_key == 0) goto LAB_004f82f8;
    iVar3 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar3,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
  ;
  if (pCVar5 != (CDemonActor *)0x0) {
    (*((pCVar5->vtable)._ub)->process)(pCVar5,delta_time);
    pCVar5[4].actor_name[8] = 'd';
    pCVar5[4].actor_name[9] = '\0';
    pCVar5[4].actor_name[10] = '\0';
    pCVar5[4].actor_name[0xb] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCStack_20 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_20);
  iVar3 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar11 = *(float *)(this_ptr->unk + 0x1c);
    iVar3 = INT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(this_ptr->unk + 0x10),&CStack_90);
    auStack_80._0_4_ = CStack_90.w;
    *(uint *)(auStack_80 + (uint)bVar10 * -8 + 4) =
         *(uint *)(auStack_80 + (uint)bVar10 * -8 + -0xc);
    *(uint *)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8);
    *(uint *)
     ((int)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) + ((uint)bVar10 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) +
          ((uint)bVar10 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_1c,(CQuaternion4f *)auStack_80,fVar11,iVar3,blend_callback);
  }
  core_icepick_cpp_CIcePick_FUN_004f8810(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
