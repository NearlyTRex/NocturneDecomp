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
  bool bVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  CVector3f *pCVar8;
  SMotion *pSVar9;
  int iVar10;
  CImp *pCVar11;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar12;
  double dVar13;
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
  int local_98;
  int local_94;
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
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x38)] == 0) &&
     (iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr)
     , iVar6 == 0)) {
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
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar7 < 0x29a) {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      goto LAB_004f9c99;
    }
    if (uVar7 < 0x29b) {
      iVar6 = *(int *)((this_ptr->base).unk2 + 4);
      if ((((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x120))(), iVar6 == 0))
          && (iVar6 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108))()
             , iVar6 == 0)) &&
         (iVar6 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xfc))(),
         iVar6 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_68,&local_50);
        iVar6 = *(int *)((this_ptr->base).unk2 + 4);
        fVar3 = local_68.x - *(float *)(iVar6 + 0x20);
        fVar5 = local_68.z - *(float *)(iVar6 + 0x28);
        bVar4 = (float)0.80000000000000004 < SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        if (((ABS(local_68.y - *(float *)(*(int *)((this_ptr->base).unk2 + 4) + 0x24)) <=
              (float)4) &&
            ((bVar4 || (iVar6 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) +
                                            0x100))(), iVar6 != 0)))) && (!bVar4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004f9c99;
    }
    if (uVar7 == 0x29b) {
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar1,&local_104,INT_02db89f4);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_8c,pCVar8);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        local_14 = local_164.damage_amount;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x11c))();
        dVar13 = round
                           ((double)(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        local_3c = (int)ROUND(dVar13);
        core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
        iVar6 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x120))();
        if (iVar6 < 1) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        }
        else {
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x104))();
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
  fVar5 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar3;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar6 = pSVar9->state_index;
  local_24 = iVar6;
  iVar10 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar10 == 0) {
    switch(iVar6) {
    case 0:
      iVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        iVar6 = *(int *)((this_ptr->base).unk2 + 4);
        if (iVar6 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (*(int *)(iVar6 + 0x2598) == 0) {
          local_80.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_80.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_80.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
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
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar3 = 2.0f;
      iVar6 = *(int *)((this_ptr->base).unk2 + 4);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar6 == 0) {
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
        iVar6 = *(int *)(iVar6 + 0x2598);
        if (iVar6 == 0) {
          local_28 = 2.0f;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_90 = fVar3;
          local_98 = iVar6;
          local_94 = iVar6;
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
          if (-1 < iVar6) {
            iVar6 = *(int *)((this_ptr->base).unk2 + 4);
            local_a4 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar6 + 0x20);
            local_9c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar6 + 0x28);
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((10.0f < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            if (((local_1c < 4.0f) &&
                (iVar6 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108)
                         )(), iVar6 == 0)) &&
               ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x3c)] !=
                0)) {
              iVar6 = *(int *)((this_ptr->base).unk2 + 4);
              local_74.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x
              ;
              local_74.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y
              ;
              local_74.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z
              ;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_ec,&local_74)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_ec.y - (this_ptr->base).base.base.orient.bank);
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.1), iVar6 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,8,1);
                iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 8));
                if (iVar6 == 0) {
                  uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  *(uint *)(this_ptr->unk + 8) = uVar12;
                }
              }
            }
            if ((local_1c <= local_28) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
              iVar6 = *(int *)((this_ptr->base).unk2 + 4);
              local_d4.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x
              ;
              local_d4.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y
              ;
              local_d4.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z
              ;
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
            fVar3 = *(float *)(this_ptr->unk + 0x10) - delta_time;
            *(float *)(this_ptr->unk + 0x10) = fVar3;
            if (fVar3 < 0.0) {
              uVar7 = *(uint *)(this_ptr->unk + 8);
              this_ptr->unk[0x10] = '\0';
              this_ptr->unk[0x11] = '\0';
              this_ptr->unk[0x12] = '\0';
              this_ptr->unk[0x13] = '\0';
              iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar7);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(this_ptr->unk + 0xc)), iVar6 == 0)) {
                uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                *(uint *)(this_ptr->unk + 8) = uVar12;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
                *(float *)(this_ptr->unk + 0x10) = local_14;
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
      fVar3 = *(float *)(this_ptr->unk + 0x10) - delta_time * 4.0f;
      *(float *)(this_ptr->unk + 0x10) = fVar3;
      if (fVar3 < 0.0) {
        uVar7 = *(uint *)(this_ptr->unk + 8);
        this_ptr->unk[0x10] = '\0';
        this_ptr->unk[0x11] = '\0';
        this_ptr->unk[0x12] = '\0';
        this_ptr->unk[0x13] = '\0';
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar7);
        if ((iVar6 == 0) &&
           (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0xc)),
           iVar6 == 0)) {
          uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          *(uint *)(this_ptr->unk + 8) = uVar12;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          *(float *)(this_ptr->unk + 0x10) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [INT_02db89fc].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_5c,pCVar8);
      iVar6 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      if (iVar6 != 0) {
        iVar10 = 0;
        iVar6 = 0;
        while (iVar6 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c)) {
          pCVar11 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar10 + 8000),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar11 == (CImp *)0x0) || (pCVar11 == this_ptr)) ||
             (*(int *)((this_ptr->base).unk2 + 4) != *(int *)((pCVar11->base).unk2 + 4))) {
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar11->base).base.model.motion_controller,3,1);
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 4;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,pCVar8);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      iVar6 = *(int *)((this_ptr->base).unk2 + 4);
      if ((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x120))(), iVar6 == 0)) {
        iVar6 = *(int *)((this_ptr->base).unk2 + 4);
        pCVar11 = *(CImp **)(iVar6 + 0x2598);
        if (this_ptr == pCVar11) {
          fVar3 = (float)0.75;
          iVar10 = *(int *)((pCVar11->base).unk2 + 4);
          (pCVar11->base).base.base.location.position.x =
               *(float *)(iVar6 + 0x20) - (pCVar11->base).base.base.orient_matrix.m[0].z * fVar3;
          (pCVar11->base).base.base.location.position.z =
               *(float *)(iVar10 + 0x28) - (pCVar11->base).base.base.orient_matrix.m[2].z * fVar3;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004fa8ed_caseD_8;
  }
  uVar7 = (this_ptr->base).base.field22_0x25b0;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_004f9fc4:
      iVar6 = 1;
    }
    else {
LAB_004fa163:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar7 < 3) goto LAB_004f9fc4;
    if (uVar7 != 3) goto LAB_004fa163;
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
  iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar6 != 0) && (local_24 != 9)) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_bc = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_b8 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar8 = &(this_ptr->base).base.field6_0x241c;
    local_b4 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_bc + pCVar8->x;
    local_124 = local_b8 + (this_ptr->base).base.field6_0x241c.y;
    local_120 = local_b4 + (this_ptr->base).base.field6_0x241c.z;
    local_110 = local_128 + pCVar2->x;
    local_10c = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_108 = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar8->x = (this_ptr->base).base.field6_0x241c.y;
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
