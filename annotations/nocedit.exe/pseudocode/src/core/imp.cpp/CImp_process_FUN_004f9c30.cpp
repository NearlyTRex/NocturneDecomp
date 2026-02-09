// Name: core_imp.cpp_CImp_process_FUN_004f9c30
// Address: 004f9c30
// Address Range: [[004f9c30, 004fa8f3]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CCharacter *pCVar5;
  CDemonActor *pCVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  CVector3f *pCVar11;
  SMotion *pSVar12;
  int iVar13;
  CImp *pCVar14;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar15;
  double dVar16;
  SDamageInfo local_164;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  float local_a4;
  uint local_a0;
  float local_9c;
  CDemonActor *local_98;
  CDemonActor *local_94;
  float local_90;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  int local_3c;
  float local_34;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x30)] == 0) &&
     (iVar9 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr)
     , iVar9 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,6,1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_34 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
LAB_004f9c99:
  if (0.0 < local_34) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar10 < 0x29a) {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      goto LAB_004f9c99;
    }
    if (uVar10 < 0x29b) {
      pCVar5 = (CCharacter *)(this_ptr->base).victim;
      if ((((pCVar5 != (CCharacter *)0x0) &&
           (iVar9 = (*(((pCVar5->base).vtable._uc)->_uc).isDamageable)(pCVar5), iVar9 == 0)) &&
          (iVar9 = (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc8)(), iVar9 == 0)) &&
         (iVar9 = (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc5)(), iVar9 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_68,&local_50);
        pCVar4 = (this_ptr->base).victim;
        fVar3 = local_68.x - (pCVar4->location).position.x;
        fVar8 = local_68.z - (pCVar4->location).position.z;
        bVar7 = (float)0.80000000000000004 < SQRT(fVar8 * fVar8 + fVar3 * fVar3);
        if (((ABS(local_68.y - (((this_ptr->base).victim)->location).position.y) <=
              (float)4) &&
            ((bVar7 || (iVar9 = (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc6)(),
                       iVar9 != 0)))) && (!bVar7)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004f9c99;
    }
    if (uVar10 == 0x29b) {
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_104,INT_02db89f4);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_8c,pCVar11);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        pCVar5 = (CCharacter *)(this_ptr->base).victim;
        local_14 = local_164.damage_amount;
        (*(((pCVar5->base).vtable._uc)->_uc).processDamage)(pCVar5,&local_164);
        dVar16 = round
                           ((double)(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        local_3c = (int)ROUND(dVar16);
        core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
        pCVar5 = (CCharacter *)(this_ptr->base).victim;
        iVar9 = (*(((pCVar5->base).vtable._uc)->_uc).isDamageable)(pCVar5);
        if (iVar9 < 1) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        }
        else {
          (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc7)();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
    goto LAB_004f9c99;
  }
  fVar3 = (this_ptr->base).speed;
  fVar8 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar8 * fVar3;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  iVar9 = pSVar12->state_index;
  local_24 = iVar9;
  iVar13 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar13 == 0) {
    switch(iVar9) {
    case 0:
      iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar9 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 == (CDemonActor *)0x0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (pCVar4[0x1b].prev_actor == (CDemonActor *)0x0) {
          local_80.x = (pCVar4->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_80.y = (pCVar4->location).position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_80.z = (pCVar4->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_80.z * local_80.z +
                          local_80.x * local_80.x + local_80.y * local_80.y);
          local_18 = local_20;
          if (local_20 < 2.0f) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_e0,&local_80);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_e0.y - (this_ptr->base).base.base.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,4,1);
            }
          }
          if (local_20 < (this_ptr->base).guard_distance) {
            pCVar1 = &(this_ptr->base).base.model;
            if (10.0f <= local_20) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
        }
      }
      else {
        iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar9 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar3 = 2.0f;
      pCVar4 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar4 == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        pCVar4 = pCVar4[0x1b].prev_actor;
        if (pCVar4 == (CDemonActor *)0x0) {
          local_28 = 2.0f;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_90 = fVar3;
          pCVar6 = (this_ptr->base).victim;
          local_98 = pCVar4;
          local_94 = pCVar4;
          (*((pCVar6->vtable)._ub)->getPathMap)(pCVar6);
          iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
          if (-1 < iVar9) {
            pCVar4 = (this_ptr->base).victim;
            local_a4 = (this_ptr->base).base.base.location.position.x -
                       (pCVar4->location).position.x;
            local_9c = (this_ptr->base).base.base.location.position.z -
                       (pCVar4->location).position.z;
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((10.0f < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            if (((local_1c < 4.0f) &&
                (iVar9 = (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc8)(), iVar9 == 0))
               && ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x34)]
                   != 0)) {
              pCVar4 = (this_ptr->base).victim;
              local_74.x = (pCVar4->location).position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_74.y = (pCVar4->location).position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_74.z = (pCVar4->location).position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_ec,&local_74)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_ec.y - (this_ptr->base).base.base.orient.bank);
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.1), iVar9 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,8,1);
                iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk);
                if (iVar9 == 0) {
                  uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  *(uint *)this_ptr->unk = uVar15;
                }
              }
            }
            if ((local_1c <= local_28) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
              pCVar4 = (this_ptr->base).victim;
              local_d4.x = (pCVar4->location).position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_d4.y = (pCVar4->location).position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_d4.z = (pCVar4->location).position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (&local_11c,&local_d4);
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_11c.y - (this_ptr->base).base.base.orient.bank);
              if (ABS(local_14) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,4,1);
                (this_ptr->base).unk2[0] = '\0';
                (this_ptr->base).unk2[1] = '\0';
                (this_ptr->base).unk2[2] = -0x80;
                (this_ptr->base).unk2[3] = '@';
              }
            }
            if ((this_ptr->base).guard_distance < local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
            fVar3 = *(float *)(this_ptr->unk + 8) - delta_time;
            *(float *)(this_ptr->unk + 8) = fVar3;
            if (fVar3 < 0.0) {
              uVar10 = *(uint *)this_ptr->unk;
              this_ptr->unk[8] = '\0';
              this_ptr->unk[9] = '\0';
              this_ptr->unk[10] = '\0';
              this_ptr->unk[0xb] = '\0';
              iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar10);
              if ((iVar9 == 0) &&
                 (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4)),
                 iVar9 == 0)) {
                uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                *(uint *)this_ptr->unk = uVar15;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
                *(float *)(this_ptr->unk + 8) = local_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
        }
      }
      break;
    case 3:
      fVar3 = *(float *)(this_ptr->unk + 8) - delta_time * 4.0f;
      *(float *)(this_ptr->unk + 8) = fVar3;
      if (fVar3 < 0.0) {
        uVar10 = *(uint *)this_ptr->unk;
        this_ptr->unk[8] = '\0';
        this_ptr->unk[9] = '\0';
        this_ptr->unk[10] = '\0';
        this_ptr->unk[0xb] = '\0';
        iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar10);
        if ((iVar9 == 0) &&
           (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4)),
           iVar9 == 0)) {
          uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          *(uint *)this_ptr->unk = uVar15;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          *(float *)(this_ptr->unk + 8) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_b0,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [INT_02db89fc].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_5c,pCVar11);
      iVar9 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      if (iVar9 != 0) {
        iVar13 = 0;
        iVar9 = 0;
        while (iVar9 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c)) {
          pCVar14 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar13 + 8000),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar14 == (CImp *)0x0) || (pCVar14 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar14->base).victim)) {
            iVar9 = iVar9 + 1;
            iVar13 = iVar13 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar14->base).base.model.motion_controller,3,1);
            iVar9 = iVar9 + 1;
            iVar13 = iVar13 + 4;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,pCVar11);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar5 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar5 != (CCharacter *)0x0) &&
         (iVar9 = (*(((pCVar5->base).vtable._uc)->_uc).isDamageable)(pCVar5), iVar9 == 0)) {
        pCVar4 = (this_ptr->base).victim;
        pCVar14 = (CImp *)pCVar4[0x1b].prev_actor;
        if (this_ptr == pCVar14) {
          fVar3 = (float)0.75;
          pCVar6 = (pCVar14->base).victim;
          (pCVar14->base).base.base.location.position.x =
               (pCVar4->location).position.x -
               (pCVar14->base).base.base.orient_matrix.m[0].z * fVar3;
          (pCVar14->base).base.base.location.position.z =
               (pCVar6->location).position.z -
               (pCVar14->base).base.base.orient_matrix.m[2].z * fVar3;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004fa8ed_caseD_8;
  }
  uVar10 = (this_ptr->base).base.field22_0x25b0;
  if (uVar10 < 2) {
    if (uVar10 == 1) {
LAB_004f9fc4:
      iVar9 = 1;
    }
    else {
LAB_004fa163:
      iVar9 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar9,1);
  }
  else {
    if (uVar10 < 3) goto LAB_004f9fc4;
    if (uVar10 != 3) goto LAB_004fa163;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004fa8ed_caseD_8:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar9 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar9 != 0) && (local_24 != 9)) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_bc = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_b8 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar11 = &(this_ptr->base).base.field6_0x241c;
    local_b4 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_bc + pCVar11->x;
    local_124 = local_b8 + (this_ptr->base).base.field6_0x241c.y;
    local_120 = local_b4 + (this_ptr->base).base.field6_0x241c.z;
    local_110 = local_128 + pCVar2->x;
    local_10c = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_108 = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar11->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
