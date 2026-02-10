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
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  SMotion *pSVar11;
  CImp *pCVar12;
  int extraout_EAX;
  int extraout_EAX_00;
  CPathMap *path_map;
  uint uVar13;
  int iVar14;
  double dVar15;
  float fVar16;
  CImp *in_stack_fffffe64;
  SDamageInfo local_164;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  CVector3f local_110;
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
  CImp *local_24;
  float local_20;
  float local_1c;
  float local_18;
  CImp *local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x30)] == 0) &&
     (iVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), iVar7 == 0)) {
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
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar8 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
      goto LAB_004f9c99;
    }
    if (uVar8 < 0x29b) {
      pCVar4 = (CCharacter *)(this_ptr->base).victim;
      if ((((pCVar4 != (CCharacter *)0x0) &&
           (iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4), iVar7 == 0)) &&
          (pCVar4 = (CCharacter *)(this_ptr->base).victim,
          pCVar9 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
          pCVar9 == (CDemonActor *)0x0)) &&
         (pCVar4 = (CCharacter *)(this_ptr->base).victim,
         iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar4,(CDemonActor *)this_ptr,0), iVar7 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_68,&local_50);
        pCVar9 = (this_ptr->base).victim;
        fVar3 = local_68.x - (pCVar9->location).position.x;
        fVar16 = local_68.z - (pCVar9->location).position.z;
        bVar6 = (float)0.80000000000000004 < SQRT(fVar16 * fVar16 + fVar3 * fVar3);
        if (((ABS(local_68.y - (((this_ptr->base).victim)->location).position.y) <=
              (float)4) &&
            ((bVar6 || (pCVar4 = (CCharacter *)(this_ptr->base).victim,
                       iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                         (pCVar4,(CDemonActor *)this_ptr,0), iVar7 != 0)))) &&
           (!bVar6)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004f9c99;
    }
    if (uVar8 == 0x29b) {
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_104,INT_02db89f4);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_8c,pCVar10);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)this_ptr;
        local_164.wielder = (CDemonActor *)this_ptr;
        pCVar4 = (CCharacter *)(this_ptr->base).victim;
        local_14 = (CImp *)local_164.damage_amount;
        (*(((pCVar4->base).vtable._uc)->_uc).processDamage)(pCVar4,&local_164);
        dVar15 = round
                           ((double)(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        local_3c = (int)ROUND(dVar15);
        core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
        pCVar4 = (CCharacter *)(this_ptr->base).victim;
        iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
        if (iVar7 < 1) {
          in_stack_fffffe64 = this_ptr;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        }
        else {
          pCVar4 = (CCharacter *)(this_ptr->base).victim;
          (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
          in_stack_fffffe64 = (CImp *)pCVar1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
    goto LAB_004f9c99;
  }
  fVar3 = (this_ptr->base).speed;
  fVar16 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar16 * fVar3;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  pCVar12 = (CImp *)pSVar11->state_index;
  local_24 = pCVar12;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(pCVar12) {
    case (CImp *)0x0:
      iVar7 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar7 == 0) {
        in_stack_fffffe64 = (CImp *)delta_time;
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        pCVar9 = (this_ptr->base).victim;
        if (pCVar9 == (CDemonActor *)0x0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (pCVar9[0x1b].prev_actor == (CDemonActor *)0x0) {
          local_80.x = (pCVar9->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_80.y = (pCVar9->location).position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_80.z = (pCVar9->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_80.z * local_80.z +
                          local_80.x * local_80.x + local_80.y * local_80.y);
          local_18 = local_20;
          if (local_20 < 2.0f) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_e0,&local_80);
            local_14 = (CImp *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                         (local_e0.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)local_14) < (float)0.52359877558333301) {
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
        in_stack_fffffe64 = (CImp *)0x3dcccccd;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar7 != 0) {
          in_stack_fffffe64 = (CImp *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,3,1);
        }
      }
      break;
    case (CImp *)0x1:
    case (CImp *)0x2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar3 = 2.0f;
      pCVar9 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar9 == (CDemonActor *)0x0) {
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
        pCVar9 = pCVar9[0x1b].prev_actor;
        if (pCVar9 == (CDemonActor *)0x0) {
          local_28 = 2.0f;
          fVar16 = 0.17453292;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          pCVar10 = (CVector3f *)0x3f000000;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_90 = fVar3;
          pCVar5 = (this_ptr->base).victim;
          local_98 = pCVar9;
          local_94 = pCVar9;
          path_map = (*((pCVar5->vtable)._ub)->getPathMap)(pCVar5);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                             path_map,pCVar10,fVar16,(float)in_stack_fffffe64);
          if (-1 < iVar7) {
            pCVar9 = (this_ptr->base).victim;
            local_a4 = (this_ptr->base).base.base.location.position.x -
                       (pCVar9->location).position.x;
            local_9c = (this_ptr->base).base.base.location.position.z -
                       (pCVar9->location).position.z;
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((10.0f < local_2c) && (local_24 == (CImp *)0x1)) {
              in_stack_fffffe64 = local_24;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            if (local_1c < 4.0f) {
              in_stack_fffffe64 = (CImp *)(this_ptr->base).victim;
              pCVar9 = (*(((in_stack_fffffe64->base).base.base.vtable._uc)->_uc).getGrabber)
                                 ((CCharacter *)in_stack_fffffe64);
              if ((pCVar9 == (CDemonActor *)0x0) &&
                 ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x34)]
                  != 0)) {
                pCVar9 = (this_ptr->base).victim;
                local_74.x = (pCVar9->location).position.x -
                             (this_ptr->base).base.base.location.position.x;
                local_74.y = (pCVar9->location).position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_74.z = (pCVar9->location).position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_ec,&local_74);
                in_stack_fffffe64 = (CImp *)0x4fa68c;
                local_14 = (CImp *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                             (local_ec.y - (this_ptr->base).base.base.orient.vec.y);
                if (ABS((float)local_14) < (float)0.52359877558333301) {
                  in_stack_fffffe64 = (CImp *)0x4fa6ac;
                  iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
                  if (iVar7 != 0) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&(this_ptr->base).base.model.motion_controller,8,1);
                    in_stack_fffffe64 = (CImp *)0x4fa6d2;
                    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk);
                    if (iVar7 == 0) {
                      in_stack_fffffe64 = this_ptr;
                      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                         ((CDemonActor *)this_ptr,"imp-jump?.wav");
                      *(uint *)this_ptr->unk = uVar13;
                    }
                  }
                }
              }
            }
            if ((local_1c <= local_28) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
              pCVar9 = (this_ptr->base).victim;
              local_d4.x = (pCVar9->location).position.x -
                           (this_ptr->base).base.base.location.position.x;
              local_d4.y = (pCVar9->location).position.y -
                           (this_ptr->base).base.base.location.position.y;
              local_d4.z = (pCVar9->location).position.z -
                           (this_ptr->base).base.base.location.position.z;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (&local_11c,&local_d4);
              local_14 = (CImp *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                           (local_11c.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS((float)local_14) < (float)0.52359877558333301) {
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
              uVar8 = *(uint *)this_ptr->unk;
              this_ptr->unk[8] = '\0';
              this_ptr->unk[9] = '\0';
              this_ptr->unk[10] = '\0';
              this_ptr->unk[0xb] = '\0';
              iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar8);
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4)),
                 iVar7 == 0)) {
                uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                in_stack_fffffe64 = (CImp *)0x41200000;
                *(uint *)this_ptr->unk = uVar13;
                local_14 = (CImp *)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
                *(CImp **)(this_ptr->unk + 8) = local_14;
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
    case (CImp *)0x3:
      fVar3 = *(float *)(this_ptr->unk + 8) - delta_time * 4.0f;
      *(float *)(this_ptr->unk + 8) = fVar3;
      if (fVar3 < 0.0) {
        uVar8 = *(uint *)this_ptr->unk;
        this_ptr->unk[8] = '\0';
        this_ptr->unk[9] = '\0';
        this_ptr->unk[10] = '\0';
        this_ptr->unk[0xb] = '\0';
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar8);
        if ((iVar7 == 0) &&
           (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4)),
           iVar7 == 0)) {
          uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          in_stack_fffffe64 = (CImp *)0x41200000;
          *(uint *)this_ptr->unk = uVar13;
          local_14 = (CImp *)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          *(CImp **)(this_ptr->unk + 8) = local_14;
        }
      }
      break;
    case (CImp *)0x4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      in_stack_fffffe64 = (CImp *)core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      local_14 = in_stack_fffffe64;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_b0,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [INT_02db89fc].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_5c,pCVar10);
      iVar7 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      if (iVar7 != 0) {
        iVar14 = 0;
        iVar7 = 0;
        while (iVar7 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c)) {
          pCVar12 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar14 + 8000),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar12 == (CImp *)0x0) || (pCVar12 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar12->base).victim)) {
            iVar7 = iVar7 + 1;
            iVar14 = iVar14 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar12->base).base.model.motion_controller,3,1);
            iVar7 = iVar7 + 1;
            iVar14 = iVar14 + 4;
          }
        }
      }
      break;
    case (CImp *)0x7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c8,pCVar10);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case (CImp *)0x9:
      pCVar4 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar4 != (CCharacter *)0x0) &&
         (iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4), iVar7 == 0)) {
        pCVar9 = (this_ptr->base).victim;
        pCVar12 = (CImp *)pCVar9[0x1b].prev_actor;
        if (this_ptr == pCVar12) {
          fVar3 = (float)0.75;
          pCVar5 = (pCVar12->base).victim;
          (pCVar12->base).base.base.location.position.x =
               (pCVar9->location).position.x -
               (pCVar12->base).base.base.orient_matrix.m[0].z * fVar3;
          (pCVar12->base).base.base.location.position.z =
               (pCVar5->location).position.z -
               (pCVar12->base).base.base.orient_matrix.m[2].z * fVar3;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004fa8ed_caseD_8;
  }
  uVar8 = (this_ptr->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_004f9fc4:
      iVar7 = 1;
    }
    else {
LAB_004fa163:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar8 < 3) goto LAB_004f9fc4;
    if (uVar8 != 3) goto LAB_004fa163;
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
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar7 != 0) && (local_24 != (CImp *)0x9)) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_bc = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_b8 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar10 = &(this_ptr->base).base.field6_0x241c;
    local_b4 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_128 = local_bc + pCVar10->x;
    local_124 = local_b8 + (this_ptr->base).base.field6_0x241c.y;
    local_120 = local_b4 + (this_ptr->base).base.field6_0x241c.z;
    local_110.x = local_128 + pCVar2->x;
    local_110.y = local_124 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_110.z = local_120 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar10->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffe64);
  return;
}
