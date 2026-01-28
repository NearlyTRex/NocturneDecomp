// Name: core_batman.cpp_CBatman_process_FUN_00416870
// Address: 00416870
// Address Range: [[00416870, 004173ab]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CDeformableModelInstance *pCVar3;
  char *pcVar4;
  float fVar5;
  uint uVar6;
  CBatman *this_ptr_00;
  CDemonActor_vtable *pCVar7;
  float fVar8;
  CEnemy *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  int iVar12;
  CVector3f *pCVar13;
  uint uVar14;
  int extraout_EAX;
  CDemonActor *pCVar15;
  int extraout_EAX_00;
  SDamageInfo local_188;
  CVector3f local_14c;
  float local_140;
  float local_13c;
  float local_138;
  CVector3f local_134;
  CVector3f local_128;
  CVector3f local_11c;
  uint local_110;
  uint local_10c;
  float local_108;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  float local_8c;
  uint local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  CSkeleton *local_24;
  CSkeleton *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar10 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_3c = delta_time * (this_ptr->base).speed;
  while (0.0 < local_3c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar5 = (this_ptr->base).speed;
  fVar8 = (float)3.1415926535000001;
  pCVar3 = &(this_ptr->base).base.model;
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * fVar8 * fVar5;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar3->motion_controller);
  iVar10 = pSVar11->state_index;
  local_28 = iVar10;
  iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar12 == 0) {
    switch(iVar10) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).field_4)();
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,1,1);
        }
      }
      else {
        iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if ((iVar10 != 0) &&
           (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0
                               (*(CDemonActor **)((this_ptr->base).unk2 + 4),"CHero"),
           iVar10 != 0)) {
          iVar12 = 0;
          iVar10 = 0;
          while ((iVar10 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c) &&
                 ((pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                                       (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar12 + 8000),
                                        g_CBatmanClassInfo.name_hash), pCVar15 == (CDemonActor *)0x0
                  || (*(int *)(pCVar15[0x8e].create_event + 0x10) == 0))))) {
            iVar10 = iVar10 + 1;
            iVar12 = iVar12 + 4;
          }
          if (iVar10 == *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0xd,1);
            iVar10 = *(int *)((this_ptr->base).unk2 + 4);
            this_ptr->mist_state = 1;
            if (&this_ptr->new_pos != (CVector3f *)(iVar10 + 0x20)) {
              (this_ptr->new_pos).x = *(float *)(iVar10 + 0x20);
              (this_ptr->new_pos).y = *(float *)(iVar10 + 0x24);
              (this_ptr->new_pos).z = *(float *)(iVar10 + 0x28);
            }
            pCVar7 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->vanish_timer = 0.0;
            local_28 = 0xd;
            (*pCVar7->playSound)((CDemonActor *)this_ptr,"batman-disappear.wav");
            break;
          }
        }
        iVar10 = *(int *)((this_ptr->base).unk2 + 4);
        local_c8.x = *(float *)(iVar10 + 0x20) - (this_ptr->base).base.base.location.position.x;
        local_c8.y = *(float *)(iVar10 + 0x24) - (this_ptr->base).base.base.location.position.y;
        local_c8.z = *(float *)(iVar10 + 0x28) - (this_ptr->base).base.base.location.position.z;
        if (SQRT(local_c8.z * local_c8.z + local_c8.x * local_c8.x + local_c8.y * local_c8.y) <
            3.5f) {
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_c8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_80.y - (this_ptr->base).base.base.orient.bank);
          if (ABS(local_14) < (float)0.52359877558333301) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,3,1);
          }
        }
        core_batman_cpp_FUN_004167f0();
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).field_4)();
      fVar5 = 3.5f;
      pCVar3 = &(this_ptr->base).base.model;
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,1,1);
        }
      }
      else {
        local_2c = 3.5f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_110 = 0;
        local_108 = fVar5;
        local_10c = 0;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (-1 < iVar10) {
          pCVar1 = &(this_ptr->base).base.base.location;
          iVar10 = *(int *)((this_ptr->base).unk2 + 4);
          local_8c = (pCVar1->position).x - *(float *)(iVar10 + 0x20);
          local_84 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar10 + 0x28);
          local_88 = 0;
          local_38 = SQRT(local_84 * local_84 + local_8c * local_8c);
          local_34 = local_38;
          if ((local_38 <= local_2c) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
            iVar10 = *(int *)((this_ptr->base).unk2 + 4);
            local_5c.x = *(float *)(iVar10 + 0x20) - (pCVar1->position).x;
            local_5c.y = *(float *)(iVar10 + 0x24) - (this_ptr->base).base.base.location.position.y;
            local_5c.z = *(float *)(iVar10 + 0x28) - (this_ptr->base).base.base.location.position.z;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_98,&local_5c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_98.y - (this_ptr->base).base.base.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,3,1);
              uVar6 = *(uint *)(this_ptr->unk2 + 4);
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = -0x80;
              (this_ptr->base).unk2[3] = '?';
              iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar6);
              if ((iVar10 == 0) &&
                 (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                     (*(uint *)(this_ptr->unk2 + 8)), iVar10 == 0)) {
                uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(uint *)(this_ptr->unk2 + 8) = uVar14;
              }
            }
          }
          if ((this_ptr->base).guard_distance < local_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_188);
      local_188.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_188.attacker = (CDemonActor *)this_ptr;
      local_188.wielder = (CDemonActor *)this_ptr;
      local_14 = local_188.damage_amount;
      pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_104,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [INT_008227c0].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_f8,pCVar13);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) && ((this_ptr->base).base.base.unk2 == 0)) {
        pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar3,&local_ec,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_74,pCVar13);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).field_4)();
      if ((*(int *)((this_ptr->base).unk2 + 4) != 0) ||
         (iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                             (g_CEventListPtr,this_ptr->unk1 + 8), iVar10 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xb,1);
        iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 4));
        if ((iVar10 == 0) &&
           ((iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 8)),
            iVar10 == 0 &&
            (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk2),
            iVar10 == 0)))) {
          uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          *(uint *)this_ptr->unk2 = uVar14;
        }
      }
      break;
    case 0xb:
      if ((this_ptr->base).base.base.location.position.y <
          *(float *)((this_ptr->base).base.unk1 + 8) + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0xc,1);
      }
      break;
    case 0xd:
      switch(this_ptr->mist_state) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
        break;
      case 1:
        fVar5 = this_ptr->vanish_timer + delta_time;
        this_ptr->vanish_timer = fVar5;
        if (1.0f < fVar5) {
          this_ptr->mist_state = 2;
          this_ptr->vanish_timer = 1.0f;
        }
        pCVar3 = &(this_ptr->base).base.model;
        iVar10 = 0;
        local_bc.x = 0.0;
        local_bc.y = 3.0;
        local_bc.z = 0.0;
        local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
        if (0 < local_20->bone_count) {
          do {
            pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar3,&local_11c,iVar10);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar13);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_14c,0.5,&local_bc,0xffff);
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_20->bone_count);
        }
        break;
      case 2:
        local_30 = 1;
        local_1c = 0;
        for (local_18 = 0; fVar5 = 1.0f, local_18 < g_CDemonSetPtr->damage_listener_count;
            local_18 = local_18 + 1) {
          this_ptr_00 = *(CBatman **)(g_CDemonSetPtr->unk4 + local_1c + -4);
          if (((this_ptr_00 != (CBatman *)0x0) && (this_ptr_00 != this_ptr)) &&
             (iVar10 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).isDamageable)
                                 ((CCharacter *)this_ptr_00), iVar10 < 1)) {
            local_50 = (this_ptr_00->base).base.base.location.position.x - (this_ptr->new_pos).x;
            local_4c = (this_ptr_00->base).base.base.location.position.y - (this_ptr->new_pos).y;
            local_48 = (this_ptr_00->base).base.base.location.position.z - (this_ptr->new_pos).z;
            if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
                (float)5) goto switchD_004173a5_caseD_4;
          }
          local_1c = local_1c + 4;
        }
        if (local_30 != 0) {
          this_ptr->mist_state = 3;
          pCVar1 = &(this_ptr->base).base.base.location;
          this_ptr->vanish_timer = fVar5;
          (pCVar1->position).x = (this_ptr->new_pos).x;
          (this_ptr->base).base.base.location.position.y = (this_ptr->new_pos).y;
          (this_ptr->base).base.base.location.position.z = (this_ptr->new_pos).z;
          iVar10 = *(int *)((this_ptr->base).unk2 + 4);
          if (iVar10 != 0) {
            local_a4.x = *(float *)(iVar10 + 0x20) - (pCVar1->position).x;
            local_a4.y = *(float *)(iVar10 + 0x24) - (this_ptr->base).base.base.location.position.y;
            local_a4.z = *(float *)(iVar10 + 0x28) - (this_ptr->base).base.base.location.position.z;
            pCVar2 = &(this_ptr->base).base.base.orient;
            pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_b0,&local_a4);
            if (pCVar2 != (COrientation *)pCVar13) {
              pCVar2->pitch = pCVar13->x;
              (this_ptr->base).base.base.orient.bank = pCVar13->y;
              (this_ptr->base).base.base.orient.heading = pCVar13->z;
            }
            (this_ptr->base).base.base.orient.heading = 0.0;
            (this_ptr->base).base.base.orient.pitch = 0.0;
          }
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"batman-disappear.wav");
        }
        break;
      case 3:
        iVar10 = 0;
        local_68.x = 0.0;
        local_68.y = 3.0;
        local_68.z = 0.0;
        local_24 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
        if (0 < local_24->bone_count) {
          do {
            pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar3,&local_128,iVar10);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_134,pCVar13);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_134,0.5,&local_68,0xffff);
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_24->bone_count);
        }
        fVar5 = this_ptr->vanish_timer - delta_time;
        this_ptr->vanish_timer = fVar5;
        if (fVar5 < 0.0) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->mist_state = 0;
          core_batman_cpp_FUN_004167f0();
        }
      }
    }
    goto switchD_004173a5_caseD_4;
  }
  uVar6 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_00416943:
      iVar10 = 1;
    }
    else {
LAB_00416b03:
      iVar10 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
  else {
    if (uVar6 < 3) goto LAB_00416943;
    if (uVar6 != 3) goto LAB_00416b03;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004173a5_caseD_4:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar10 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar10 != 0) && (local_28 != 9)) {
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * (float)32;
    local_e0 = *(float *)((this_ptr->base).base.unk1 + 0x1c) * delta_time;
    local_dc = *(float *)((this_ptr->base).base.unk1 + 0x20) * delta_time;
    pcVar4 = (this_ptr->base).base.unk1 + 0x10;
    local_d8 = delta_time * *(float *)((this_ptr->base).base.unk1 + 0x24);
    pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_140 = local_e0 + *(float *)pcVar4;
    local_13c = local_dc + *(float *)((this_ptr->base).base.unk1 + 0x14);
    local_138 = local_d8 + *(float *)((this_ptr->base).base.unk1 + 0x18);
    local_d4 = local_140 + pCVar13->x;
    local_d0 = local_13c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_cc = local_138 + (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar9 = &this_ptr->base;
    (pCVar9->base).unk1[0x18] = '\0';
    (pCVar9->base).unk1[0x19] = '\0';
    (pCVar9->base).unk1[0x1a] = '\0';
    (pCVar9->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)pcVar4 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar5;
    pCVar13->x = fVar5;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  if (local_28 != 0xd) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
