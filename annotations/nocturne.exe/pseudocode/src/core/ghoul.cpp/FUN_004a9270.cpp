// Name: core_ghoul.cpp_FUN_004a9270
// Address: 004a9270
// Address Range: [[004a9270, 004aadfc]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004a9270(UOrientationVector *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004a9270(UOrientationVector *param_1,float param_2)

{
  CCharacter *pCVar1;
  bool bVar2;
  int iVar3;
  SMotion *pSVar4;
  int iVar5;
  UOrientationVector *pUVar6;
  CDemonActor *pCVar7;
  CPathMap *pCVar8;
  CVector3f *pCVar9;
  uint uVar10;
  int iVar11;
  CVector3f *pCVar12;
  UOrientationVector *pUVar13;
  float fVar14;
  char *pcVar15;
  char *pcVar16;
  char cVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  float fVar22;
  ulonglong uVar21;
  UOrientationVector *in_stack_fffffc88;
  UOrientationVector *in_stack_fffffc8c;
  UOrientationVector *in_stack_fffffc90;
  SDamageInfo *pSVar23;
  UOrientationVector *in_stack_fffffc94;
  UOrientationVector *in_stack_fffffc98;
  CVector3f *in_stack_fffffc9c;
  UOrientationVector *in_stack_fffffca0;
  SDamageInfo local_314;
  SDamageInfo local_2d8;
  byte local_29c [28];
  CVector3f local_280 [2];
  uint local_268;
  uint local_264;
  char local_260 [32];
  CBoundingBox3D local_240;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210 [2];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  UOrientationVector local_1c8;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  CVector3f local_18c;
  char local_180 [4];
  float local_17c;
  float local_178;
  CVector3f local_174;
  UOrientationVector local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  uint local_138;
  uint local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  uint local_fc;
  uint local_f8;
  float local_f4;
  CVector3f local_f0;
  CVector3f local_e4;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  int local_84;
  float local_7c;
  float local_78;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  UOrientationVector *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  UOrientationVector *local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1);
  if (iVar3 == 0) {
    return;
  }
  param_1[0x2f9].vec.x = 0.0;
  *(float *)((int)param_1 + 0x23a8) = param_1[0x2f9].vec.x;
  *(int *)((int)param_1 + 0x23a4) = *(int *)((int)param_1 + 0x23a8);
  local_64 = param_2 * *(float *)((int)param_1 + 0xbc8c);
  local_18 = param_1 + 0x1c;
switchD_004a9c0a_caseD_e:
  pUVar6 = local_18;
  if (0.0 < local_64) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      ((CMotionController *)&local_18->vec,&local_64);
    switch(iVar3) {
    case 5:
      pCVar1 = *(CCharacter **)((int)param_1 + 0xbca4);
      if ((pCVar1 != (CCharacter *)0x0) &&
         (iVar3 = (*(((pCVar1->base).vtable._uc)->_uc).releaseFromGrab)(pCVar1), iVar3 == 0)) {
        in_stack_fffffc88 = *(UOrientationVector **)((int)param_1 + 0xbca4);
        iVar3 = (*(((UActorVTable *)((int)in_stack_fffffc88 + 0x14c))->_uc->_uc).applyDamage)
                          ((CCharacter *)&in_stack_fffffc88->vec,(int)in_stack_fffffc8c,
                           (float)in_stack_fffffc90);
        if (iVar3 == 0) {
          in_stack_fffffc94 = (UOrientationVector *)0x0;
          in_stack_fffffc8c = *(UOrientationVector **)((int)param_1 + 0xbca4);
          in_stack_fffffc88 = (UOrientationVector *)0x4a9728;
          in_stack_fffffc90 = param_1;
          iVar3 = (*((UActorVTable *)((int)in_stack_fffffc8c + 0x14c))->_ub->addFilesToExtract)
                            ((CDemonActor *)&in_stack_fffffc8c->vec,(_FILE *)&param_1->vec);
          if (iVar3 != 0) {
            local_174.z = 2.5f;
            in_stack_fffffc9c = &local_174;
            in_stack_fffffc98 = &local_1c8;
            local_174.x = 0.0;
            local_174.y = 0.0;
            in_stack_fffffc90 = (UOrientationVector *)0x4a975c;
            in_stack_fffffc94 = param_1;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)&param_1->vec,&in_stack_fffffc98->vec,in_stack_fffffc9c);
            fVar14 = local_1c8.vec.x - *(float *)(*(int *)((int)param_1 + 0xbca4) + 0x20);
            fVar22 = local_1c8.vec.z - *(float *)(*(int *)((int)param_1 + 0xbca4) + 0x28);
            bVar2 = SQRT(fVar22 * fVar22 + fVar14 * fVar14) <= 1.0;
            pUVar6 = *(UOrientationVector **)((int)param_1 + 0xbca4);
            if (ABS(local_1c8.vec.y - pUVar6[3].vec.x) <= (float)4) {
              if (bVar2) {
                in_stack_fffffc9c = (CVector3f *)0x0;
                in_stack_fffffc90 = (UOrientationVector *)0x4a97cb;
                in_stack_fffffc98 = param_1;
                pCVar7 = (*((UActorVTable *)((int)pUVar6 + 0x14c))->_ub->dtor)
                                   ((CDemonActor *)&pUVar6->vec,(uint)param_1);
                in_stack_fffffc94 = pUVar6;
                if (pCVar7 == (CDemonActor *)0x0) goto LAB_004a96cf;
              }
              if (bVar2) break;
            }
          }
        }
      }
LAB_004a96cf:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)&local_18->vec,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)&param_1->vec,iVar3);
      break;
    case 10:
      pCVar1 = *(CCharacter **)((int)param_1 + 0xbca4);
      if (pCVar1 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)&pUVar6->vec,1,1);
      }
      else {
        pUVar13 = (UOrientationVector *)
                  (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                            (pCVar1,(int)in_stack_fffffc88,(float)in_stack_fffffc8c);
        if (pUVar13 == param_1) {
          iVar3 = (*((((*(CCharacter **)((int)param_1 + 0xbca4))->base).vtable._uc)->_uc).
                    releaseFromGrab)(*(CCharacter **)((int)param_1 + 0xbca4));
          if (iVar3 == 0) {
            in_stack_fffffc8c = (UOrientationVector *)0x4a984e;
            (*(((*(CDemonActor **)((int)param_1 + 0xbca4))->vtable)._ub)->getBoundingBox)
                      (*(CDemonActor **)((int)param_1 + 0xbca4),&local_240);
            iVar3 = *(int *)((int)param_1 + 0xbca4);
            local_168.vec.x = *(float *)(iVar3 + 0x20);
            local_168.vec.z = *(float *)(iVar3 + 0x28);
            local_168.vec.y =
                 (local_240.max.y - local_240.min.y) * (float)0.69999999999999996 +
                 *(float *)(iVar3 + 0x24);
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)local_29c);
            local_29c._4_4_ = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
            in_stack_fffffc90 = (UOrientationVector *)0x4a98e1;
            local_14 = (float)local_29c._4_4_;
            pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               (*(CDemonActor **)((int)param_1 + 0xbca4),&local_f0,&local_168.vec);
            if (local_280 != pCVar9) {
              local_280[0].x = pCVar9->x;
              local_280[0].y = pCVar9->y;
              local_280[0].z = pCVar9->z;
            }
            local_268 = param_1;
            local_264 = param_1;
            in_stack_fffffc98 = *(UOrientationVector **)((int)param_1 + 0xbca4);
            in_stack_fffffc94 = (UOrientationVector *)0x4a9930;
            (*(((UActorVTable *)((int)in_stack_fffffc98 + 0x14c))->_uc->_uc).getGrabbed)
                      ((CCharacter *)&in_stack_fffffc98->vec,(CDemonActor *)local_29c,
                       (int)in_stack_fffffca0);
            local_ac = (double)(float)local_29c._4_4_;
            if (0.0 < local_ac) {
              iVar3 = 0x4a995e;
              dVar20 = round(local_ac * 2.5 * 0.25);
              local_70 = (int)ROUND(dVar20);
              in_stack_fffffc98 = &local_168;
              in_stack_fffffc90 = (UOrientationVector *)0x4a997a;
              in_stack_fffffc94 = (UOrientationVector *)INT_005b96c4;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                        ((CGore *)INT_005b96c4,&in_stack_fffffc98->vec,(CVector3f *)0x0,local_70,
                         iVar3);
            }
            pCVar7 = *(CDemonActor **)((int)param_1 + 0xbca4);
            if (*(float *)(pCVar7[0x1b].create_event + 0x4c) <= 0.0) {
              (*((pCVar7->vtable)._ub)->archive)(pCVar7);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)&local_18->vec,1,1);
            }
            in_stack_fffffc9c = (CVector3f *)0x4a99c1;
            in_stack_fffffca0 = param_1;
            (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))
                      ((CDemonActor *)&param_1->vec,"ghoul-eat-?.wav");
          }
          else {
            (*(((*(CDemonActor **)((int)param_1 + 0xbca4))->vtable)._ub)->archive)
                      (*(CDemonActor **)((int)param_1 + 0xbca4));
            in_stack_fffffc98 = (UOrientationVector *)0x1;
            in_stack_fffffc94 = (UOrientationVector *)0x1;
            in_stack_fffffc8c = (UOrientationVector *)0x4a99e9;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)&pUVar6->vec,1,1);
            in_stack_fffffc90 = pUVar6;
          }
        }
        else {
          in_stack_fffffc90 = (UOrientationVector *)0x1;
          in_stack_fffffc8c = (UOrientationVector *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)&pUVar6->vec,1,1);
          in_stack_fffffc88 = pUVar6;
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)&local_18->vec);
      iVar5 = _DAT_01c78c18;
      if (iVar3 == 0xc) {
        iVar5 = _DAT_01c78c1c;
      }
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         ((CDeformableModelInstance *)&local_18->vec,&local_1e0,iVar5);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)&param_1->vec,&local_1d4,pCVar9);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41000000);
      iVar3 = 0x4a9a56;
      dVar20 = round((double)(local_14 * (float)0.25));
      local_58 = (int)ROUND(dVar20);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,&local_1d4,(CVector3f *)0x0,local_58,iVar3);
      (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))
                ((CDemonActor *)&param_1->vec,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)&pUVar6->vec);
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         ((CDeformableModelInstance *)&pUVar6->vec,&local_1b0,_DAT_01c78c14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)&param_1->vec,&local_228,pCVar9);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41000000);
      iVar3 = 0x4a9ae1;
      dVar20 = round((double)(local_14 * (float)0.25));
      local_54 = (int)ROUND(dVar20);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,&local_228,(CVector3f *)0x0,local_54,iVar3);
      (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))
                ((CDemonActor *)&param_1->vec,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
                ((CDeformableModelInstance *)&pUVar6->vec);
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         ((CDeformableModelInstance *)&pUVar6->vec,&local_1ec,_DAT_01c78c14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)&param_1->vec,&local_15c,pCVar9);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41000000);
      iVar3 = 0x4a9b6c;
      dVar20 = round((double)(local_14 * (float)0.25));
      local_84 = (int)ROUND(dVar20);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,&local_15c,(CVector3f *)0x0,local_84,iVar3);
      iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
      if (iVar3 == 0) {
        pcVar15 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar15 = "ghoul-eat-?.wav @1.3";
      }
      pcVar16 = local_260;
      do {
        cVar17 = *pcVar15;
        *pcVar16 = cVar17;
        if (cVar17 == '\0') break;
        cVar17 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar16[1] = cVar17;
        pcVar16 = pcVar16 + 2;
      } while (cVar17 != '\0');
      (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))((CDemonActor *)&param_1->vec,local_260);
    }
    goto switchD_004a9c0a_caseD_e;
  }
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(local_18);
  local_8c = (double)param_2;
  fVar14 = (float)1.57079632675;
  *(float *)((int)param_1 + 0x242c) =
       *(float *)((int)param_1 + 0xbc8c) * local_14 * (float)3 * param_2;
  param_1[0x304].vec.x = param_2 * fVar14 * *(float *)((int)param_1 + 0xbc8c);
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)&local_18->vec);
  iVar3 = pSVar4->state_index;
  if (iVar3 == 0x11) {
    fVar14 = *(float *)((int)param_1 + 0xbc8c);
    fVar18 = (float10)8;
    param_1[0x304].vec.x = (float)(fVar18 * (float10)param_1[0x304].vec.x);
    *(float *)((int)param_1 + 0x242c) = (float)((float10)local_8c * fVar18 * (float10)fVar14);
  }
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1);
  if (iVar5 == 0) {
    local_20 = -1.0;
    pUVar6 = param_1 + 0x1c;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       ((CMotionController *)&pUVar6->vec);
    switch(pSVar4->state_index) {
    case 0:
      if (*(float *)((int)param_1 + 0xbd80) <= 0.0) {
        iVar5 = *(int *)(param_1 + 0xfcb);
        if (iVar5 == 0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)&param_1->vec,param_2);
          if (iVar5 != 0) goto LAB_004aa1e6;
          (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x13c))
                    ((CCharacter *)&param_1->vec,(int)param_2,&in_stack_fffffc88->vec);
          if (*(int *)((int)param_1 + 0xbca4) != 0) {
            in_stack_fffffc88 = param_1 + 0x1c;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)&in_stack_fffffc88->vec,1,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(int *)((int)param_1 + 0xbd74));
            if (iVar5 != 0) {
              in_stack_fffffc8c = (UOrientationVector *)0x4aa254;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50((uint)param_1[0xfca].vec.x);
              if (iVar5 != 0) break;
            }
            in_stack_fffffc88 = (UOrientationVector *)0x4aa26e;
            in_stack_fffffc8c = param_1;
            uVar10 = (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))
                               ((CDemonActor *)&param_1->vec,"ghoul-alert-?.wav");
            *(uint *)((int)param_1 + 0xbd74) = uVar10;
          }
        }
        else {
          local_180 = (char  [4])(*(float *)(iVar5 + 0x20) - *(float *)((int)param_1 + 0x20));
          local_17c = *(float *)(iVar5 + 0x24) - param_1[3].vec.x;
          local_178 = *(float *)(iVar5 + 0x28) - *(float *)((int)param_1 + 0x28);
          if (SQRT(local_178 * local_178 +
                   (float)local_180 * (float)local_180 + local_17c * local_17c) <
              (float)4) {
            fVar14 = *(float *)((int)param_1 + 0x2434) + param_2;
            *(float *)((int)param_1 + 0xbd88) = *(float *)((int)param_1 + 0xbd88) - param_2;
            *(float *)((int)param_1 + 0x2434) = fVar14;
            if ((float)100 < fVar14) {
              *(int *)((int)param_1 + 0x2434) = 0x42c80000;
            }
            if (*(float *)((int)param_1 + 0xbd88) < 0.0) {
              *(int *)((int)param_1 + 0xbd88) = 0;
              param_1[0xfcb].vec.x = 0.0;
            }
          }
        }
      }
      else {
        *(float *)((int)param_1 + 0xbd80) = *(float *)((int)param_1 + 0xbd80) - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)((int)param_1 + 0xbd8c) != 0) && (iVar3 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)&param_1[0x1c].vec,0x11,1);
      }
      if (0.0 < *(float *)((int)param_1 + 0xbd80)) {
        *(float *)((int)param_1 + 0xbd80) = *(float *)((int)param_1 + 0xbd80) - param_2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)&param_1[0x1c].vec,0,1);
      }
      else {
        param_1[0x2f9].vec.x = 0.0;
        *(float *)((int)param_1 + 0x23a8) = param_1[0x2f9].vec.x;
        *(int *)((int)param_1 + 0x23a4) = *(int *)((int)param_1 + 0x23a8);
        cVar17 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0xbd4c) * 4 + 0x2290) != 0;
        if (*(int *)((int)param_1 + (int)param_1[0xfc7].vec.x * 4 + 0x2290) != 0) {
          cVar17 = cVar17 + '\x01';
        }
        iVar11 = (**(code **)(*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x14c) + 0x104))();
        iVar5 = 0x01C775EC;
        if (iVar11 == 0) {
          (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x13c))
                    ((CCharacter *)&param_1->vec,(int)param_2,&in_stack_fffffc88->vec);
          iVar5 = *(int *)((int)param_1 + 0xbca4);
          if (iVar5 == 0) {
            in_stack_fffffc88 = (UOrientationVector *)0x4aa46a;
            in_stack_fffffc8c = param_1;
            pUVar6 = (UOrientationVector *)
                     core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030
                               ((CEnemy *)&param_1->vec,param_2);
            if (pUVar6 == (UOrientationVector *)0x0) {
              in_stack_fffffc88 = param_1 + 0x1c;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)&in_stack_fffffc88->vec,0,1);
              in_stack_fffffc8c = pUVar6;
            }
          }
          else {
            local_1f8 = *(float *)(iVar5 + 0x20) - *(float *)((int)param_1 + 0x20);
            local_1f0 = *(float *)(iVar5 + 0x28) - *(float *)((int)param_1 + 0x28);
            local_1f4 = 0.0;
            if (((*(float *)((int)param_1 + 0x2434) < (float)25) && (cVar17 != '\0'))
               && (param_1[0xfcb].vec.x == 0.0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040((CGhoul *)&param_1->vec,param_2);
            }
            local_30 = param_1 + 0x1c;
            pCVar7 = (CDemonActor *)param_1[0xfcb].vec.x;
            if (pCVar7 == (CDemonActor *)0x0) {
              fVar14 = 0.17453292;
              in_stack_fffffc8c = (UOrientationVector *)0x3f800000;
              local_fc = 0;
              local_f4 = 2.5f;
              local_f8 = 0;
              in_stack_fffffc88 =
                   (UOrientationVector *)
                   (*(((*(CDemonActor **)((int)param_1 + 0xbca4))->vtable)._ub)->getPathMap)
                             (*(CDemonActor **)((int)param_1 + 0xbca4));
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)&param_1->vec,
                                 (CVector3f *)(*(int *)((int)param_1 + 0xbca4) + 0x20),
                                 (CPathMap *)&in_stack_fffffc88->vec,&in_stack_fffffc8c->vec,fVar14,
                                 (float)in_stack_fffffc94);
              if (iVar5 < 0) {
                in_stack_fffffc88 = (UOrientationVector *)0x4aa677;
                in_stack_fffffc8c = local_30;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          ((CMotionController *)&local_30->vec,0,1);
              }
              else if (((0 < iVar5) && (cVar17 != '\0')) &&
                      ((param_1[0xfb8].vec.x <= 0.0 &&
                       ((iVar5 = (*((((*(CCharacter **)((int)param_1 + 0xbca4))->base).vtable._uc)->
                                   _uc).applyDamage)(*(CCharacter **)((int)param_1 + 0xbca4),
                                                     (int)in_stack_fffffc98,(float)in_stack_fffffc9c
                                                    ), iVar5 == 0 &&
                        (*(float *)((int)param_1 + 0xbd38) <= 0.0)))))) {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if (*(int *)((int)param_1 + (int)param_1[0xfc7].vec.x * 4 + 0x2290) != 0) {
                  local_24 = (1.0 - ABS(local_48 - 3.4f) / 3.4f) *
                             (float)0.29999999999999999;
                }
                if (*(int *)((int)param_1 + *(int *)((int)param_1 + 0xbd4c) * 4 + 0x2290) != 0) {
                  local_40 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.40000000000000002;
                }
                local_44 = local_48;
                iVar5 = (*(((*(CDemonActor **)((int)param_1 + 0xbca4))->vtable)._ub)->
                          addFilesToExtract)
                                  (*(CDemonActor **)((int)param_1 + 0xbca4),(_FILE *)&param_1->vec);
                if (iVar5 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar5 = 0xb;
                    }
                    else {
                      iVar5 = 0xc;
                    }
                  }
                  else {
                    iVar5 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            ((CMotionController *)&param_1[0x1c].vec,iVar5,1);
                  param_1[0xfb8].vec.x = 0.7;
                }
              }
            }
            else {
              fVar14 = 0.0;
              in_stack_fffffc8c = (UOrientationVector *)0x40400000;
              in_stack_fffffc88 =
                   (UOrientationVector *)(*((pCVar7->vtable)._ub)->getPathMap)(pCVar7);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)&param_1->vec,
                                 (CVector3f *)((int)param_1[0xfcb].vec.x + 0x20),
                                 (CPathMap *)&in_stack_fffffc88->vec,&in_stack_fffffc8c->vec,fVar14,
                                 (float)in_stack_fffffc94);
              if (0 < iVar5) {
                in_stack_fffffc88 = (UOrientationVector *)0x4aa3ef;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          ((CMotionController *)&local_30->vec,0,1);
                in_stack_fffffc8c = (UOrientationVector *)0x4aa401;
                local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                *(float *)((int)param_1 + 0xbd88) = local_14;
              }
              if (iVar5 < 0) {
                *(int *)((int)param_1 + 0xbd88) = 0x41f00000;
                param_1[0xfcb].vec.x = 0.0;
              }
              if (iVar3 == 1) {
                in_stack_fffffc8c = param_1 + 0x1c;
                in_stack_fffffc88 = (UOrientationVector *)0x4aa42c;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          ((CMotionController *)&in_stack_fffffc8c->vec,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)((int)param_1 + 0xbd34) < 0) {
            cVar17 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0xbd4c) * 4 + 0x2290) != 0;
            if (*(int *)((int)param_1 + (int)param_1[0xfc7].vec.x * 4 + 0x2290) != 0) {
              cVar17 = cVar17 + '\x01';
            }
            if (cVar17 != '\0') {
              if (cVar17 == '\x01') {
                *(int *)((int)param_1 + 0xbd34) = 0xe;
                *(uint *)(iVar5 + 0x220) = 1;
              }
              else {
                iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
                *(uint *)((int)param_1 + 0xbd34) = (iVar5 == 0) + 0xd;
                *(uint *)(0x01C775EC + 0x220) = 1;
              }
              goto LAB_004aa6a3;
            }
            *(int *)((int)param_1 + 0xbd34) = 0;
          }
          else {
LAB_004aa6a3:
            if (*(int *)((int)param_1 + 0xbd34) != 0) {
              local_2c = 2.0f;
              if (*(int *)((int)param_1 + 0xbd34) == 0xe) {
                local_2c = 5.5f;
              }
              fVar22 = 0.08726646;
              fVar14 = 0.5;
              local_e4.z = local_2c;
              pCVar9 = &local_e4;
              local_e4.x = 0.0;
              iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
              local_e4.y = 0.0;
              pCVar8 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x14c) + 0xbc))(iVar5);
              pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                                  ((CDeformableModelInstance *)
                                   (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x150),&local_198,0);
              pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),&local_150,
                                   pCVar12);
              iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                ((CCharacter *)&param_1->vec,pCVar12,pCVar8,pCVar9,fVar14,fVar22);
              if (0 < iVar5) {
                iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
                uVar21 = CONCAT44(iVar5,0x4aa770);
                iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0x104))();
                if ((iVar5 == 2) &&
                   (core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                              ((CMotionController *)&param_1[0x1c].vec,
                               *(int *)((int)param_1 + 0xbd34),1),
                   *(int *)((int)param_1 + 0xbd34) == 0xd)) {
                  iVar5 = *(int *)((int)param_1 + 0x14c);
                  local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                              (0x3f000000,0x3f99999a,pCVar9,uVar21);
                  (**(code **)(iVar5 + 0x2c))
                            ((CDemonActor *)&param_1->vec,"ghoul-scream-!-?.wav",local_14);
                }
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)&param_1[0x1c].vec,0,1);
        }
      }
      break;
    case 2:
      pCVar1 = *(CCharacter **)((int)param_1 + 0xbca4);
      if (pCVar1 == (CCharacter *)0x0) {
LAB_004aa1e6:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)&param_1[0x1c].vec,1,1);
      }
      else {
        iVar5 = (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                          (pCVar1,(int)in_stack_fffffc88,(float)in_stack_fffffc8c);
        if (iVar5 == 0) {
          in_stack_fffffc8c = (UOrientationVector *)0x3e4ccccd;
          in_stack_fffffc88 = (UOrientationVector *)0x4aa8bd;
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          param_1[0xfb8].vec.x = local_14;
          if (*(int *)((int)param_1 + (int)param_1[0xfc7].vec.x * 4 + 0x2290) != 0) {
            in_stack_fffffc8c = (UOrientationVector *)0x4aa8e7;
            local_50 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                 ((CMotionController *)&pUVar6->vec);
            local_9c = (double)local_50;
            local_14 = local_50;
            if ((local_50 <= (float)2) && (local_20 = 3.4f, 1.0 <= local_9c)
               ) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2d8);
              local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
              local_2d8.damage_amount = local_14;
              if (*(int *)((int)param_1 + 0xbd8c) != 0) {
                local_2d8.damage_amount = local_14 * (float)2;
              }
              pSVar23 = &local_2d8;
              local_2d8.attacker = (CDemonActor *)param_1;
              local_2d8.wielder = (CDemonActor *)param_1;
              in_stack_fffffc8c = (UOrientationVector *)0x3e4ccccd;
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                 (&local_114,&CVector3f_01c78bcc,
                                  (CMatrix3x4f *)((int)param_1 + _DAT_01c78c1c * 0x30 + 0xfd0));
              in_stack_fffffc88 =
                   (UOrientationVector *)
                   core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)&param_1->vec,&local_1bc,pCVar9);
              iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                                ((CEnemy *)&param_1->vec,&in_stack_fffffc88->vec,
                                 (float)in_stack_fffffc8c,pSVar23);
              if (iVar5 != 0) {
                in_stack_fffffc88 = (UOrientationVector *)0x4aa9e4;
                in_stack_fffffc8c = param_1;
                (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))
                          ((CDemonActor *)&param_1->vec,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          in_stack_fffffc8c = (UOrientationVector *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)&pUVar6->vec,1,1);
          in_stack_fffffc88 = pUVar6;
        }
      }
      break;
    case 10:
      if (((*(int *)((int)param_1 + 0xbc90) == 0) &&
          ((*(int (*) [100])((int)param_1 + 0xbd40))[0] < 1)) &&
         (*(int *)((int)param_1 + 0xdc) == 0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           ((CDeformableModelInstance *)&pUVar6->vec,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)&param_1->vec,&local_108,pCVar9);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_108,0);
        *(int *)((int)param_1 + 0xbc90) = 1;
      }
      *(int *)((int)param_1 + 0xbd8c) = 0;
      if (((0 < *(int *)((int)param_1 + 0xbd44)) ||
          (0 < (*(int (*) [100])((int)param_1 + 0xbd40))[0])) &&
         (iVar5 = *(int *)((int)param_1 + 0xbd2c) - _DAT_01bd1d80,
         *(int *)((int)param_1 + 0xbd2c) = iVar5, iVar5 < 1)) {
        if ((*(int (*) [100])((int)param_1 + 0xbd40))[0] < 1) {
          *(int *)((int)param_1 + 0xbd44) = *(int *)((int)param_1 + 0xbd44) + -1;
        }
        if ((0 < *(int *)((int)param_1 + 0xbd44)) ||
           (0 < (*(int (*) [100])((int)param_1 + 0xbd40))[0])) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f800000);
          iVar11 = 0xf;
          iVar5 = 0x4a9e4f;
          dVar20 = round((double)(local_14 * (float)65536));
          *(int *)((int)param_1 + 0xbd2c) = (int)ROUND(dVar20);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)&param_1[0x1c].vec,iVar5,iVar11);
        }
      }
      if (0 < (*(int (*) [100])((int)param_1 + 0xbd40))[0]) {
        if ((int)param_1[0xfc4].vec.x < 1) {
          fVar14 = (float)((int)param_1[0xfc4].vec.x + _DAT_01bd1d80);
          param_1[0xfc4].vec.x = fVar14;
          if ((int)fVar14 < 0) {
            (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x13c))
                      ((CCharacter *)&param_1->vec,(int)param_2,&in_stack_fffffc88->vec);
            iVar5 = *(int *)((int)param_1 + 0xbca4);
            if (iVar5 != 0) {
              local_120 = *(float *)((int)param_1 + 0x20) - *(float *)(iVar5 + 0x20);
              local_11c = param_1[3].vec.x - *(float *)(iVar5 + 0x24);
              local_118 = *(float *)((int)param_1 + 0x28) - *(float *)(iVar5 + 0x28);
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
              local_78 = (float)(((int)local_7c >> 1) + (int)CVector3f_01c70708.y);
              if (local_78 < (float)8) goto LAB_004a9eb3;
            }
          }
          else {
            param_1[0xfc4].vec.x = 0.0;
LAB_004a9eb3:
            local_1c = *(float *)((int)param_1 + 0x2de8);
            if (local_1c < param_1[0x3d3].vec.x) {
              local_1c = *(float *)((int)param_1 + 0x2398);
            }
            if (local_1c < param_1[0x3d3].vec.x) {
              local_1c = param_1[0x3d3].vec.x + (float)0.5;
            }
            iVar5 = 0;
            do {
              local_68 = (float)iVar5 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (float)iVar5;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                        (0x01E57284,(CDemonActor *)&param_1->vec);
              fVar18 = (float10)fcos((float10)local_68);
              fVar19 = (float10)fsin((float10)local_68);
              local_6c = (float)core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                                          (0x01E57284,*(int *)((int)param_1 + 0x20),
                                           *(int *)((int)param_1 + 0x28),
                                           (float)(fVar19 * (float10)0.050000000000000003),
                                           (float)(fVar18 * (float10)0.050000000000000003),
                                           param_1[0x3d2].vec.x,
                                           param_1[3].vec.x + param_1[0x3d3].vec.x);
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              if (local_6c < 1.0) break;
              iVar5 = iVar5 + 1;
            } while (iVar5 < 4);
            if (iVar5 < 4) {
              param_1[0xfc4].vec.x = 4.2039e-45;
              *(int *)((int)param_1 + 0xbca4) = 0;
            }
            else {
              local_14 = (float)((*(int (*) [100])((int)param_1 + 0xbd40))[0] + 1);
              local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000);
              *(float *)((int)param_1 + 0x2434) = local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)&param_1[0x1c].vec,0x10,1);
            }
          }
        }
        else {
          fVar14 = (float)((int)param_1[0xfc4].vec.x - _DAT_01bd1d80);
          param_1[0xfc4].vec.x = fVar14;
          if ((int)fVar14 < 1) {
            local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0);
            in_stack_fffffc88 = (UOrientationVector *)0x4a9e85;
            dVar20 = round((double)(-local_14 * 65536.0f));
            param_1[0xfc4].vec.x = (float)(int)ROUND(dVar20);
          }
        }
      }
      break;
    case 0xb:
      pCVar1 = *(CCharacter **)((int)param_1 + 0xbca4);
      if (pCVar1 == (CCharacter *)0x0) {
LAB_004aaa0a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)&pUVar6->vec,1,1);
      }
      else {
        iVar5 = (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                          (pCVar1,(int)in_stack_fffffc88,(float)in_stack_fffffc8c);
        if (iVar5 == 0) {
          local_20 = 2.5f;
        }
        else {
          in_stack_fffffc8c = (UOrientationVector *)0x4aab9c;
          pUVar13 = (UOrientationVector *)
                    (*((((*(CCharacter **)((int)param_1 + 0xbca4))->base).vtable._uc)->_uc).
                      applyDamage)(*(CCharacter **)((int)param_1 + 0xbca4),(int)in_stack_fffffc94,
                                   (float)in_stack_fffffc98);
          if (pUVar13 != param_1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)&pUVar6->vec,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar1 = *(CCharacter **)((int)param_1 + 0xbca4);
      if ((pCVar1 == (CCharacter *)0x0) ||
         (iVar5 = (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                            (pCVar1,(int)in_stack_fffffc88,(float)in_stack_fffffc8c), iVar5 != 0))
      goto LAB_004aaa0a;
      in_stack_fffffc8c = (UOrientationVector *)0x3e4ccccd;
      in_stack_fffffc88 = (UOrientationVector *)0x4aaa2b;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
      iVar5 = *(int *)((int)param_1 + 0xbd4c);
      param_1[0xfb8].vec.x = local_14;
      if (*(int *)((int)param_1 + iVar5 * 4 + 0x2290) != 0) {
        in_stack_fffffc8c = (UOrientationVector *)0x4aaa55;
        local_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                             ((CMotionController *)&pUVar6->vec);
        local_a4 = (double)local_4c;
        local_14 = local_4c;
        if (local_4c <= (float)2) {
          local_20 = 2.5f;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_314);
            local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
            local_314.damage_amount = local_14;
            if (*(int *)((int)param_1 + 0xbd8c) != 0) {
              local_314.damage_amount = local_14 * (float)2;
            }
            pSVar23 = &local_314;
            local_314.attacker = (CDemonActor *)param_1;
            local_314.wielder = (CDemonActor *)param_1;
            in_stack_fffffc8c = (UOrientationVector *)0x3ecccccd;
            pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                               (local_210,&CVector3f_01c78bc0,
                                (CMatrix3x4f *)((int)param_1 + _DAT_01c78c18 * 0x30 + 0xfd0));
            in_stack_fffffc88 =
                 (UOrientationVector *)
                 core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           ((CDemonActor *)&param_1->vec,&local_21c,pCVar9);
            iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                              ((CEnemy *)&param_1->vec,&in_stack_fffffc88->vec,
                               (float)in_stack_fffffc8c,pSVar23);
            if (iVar5 != 0) {
              in_stack_fffffc88 = (UOrientationVector *)0x4aab52;
              in_stack_fffffc8c = param_1;
              (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))
                        ((CDemonActor *)&param_1->vec,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar5 = *(int *)((int)param_1 + 0xbd28) - _DAT_01bd1d80;
      *(int *)((int)param_1 + 0xbd28) = iVar5;
      if (iVar5 < 1) {
        (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x24))
                  ((CDemonActor *)&param_1->vec,"burp[1,2].wav");
        in_stack_fffffc88 = (UOrientationVector *)0x41700000;
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        in_stack_fffffc8c = (UOrientationVector *)0x4aac05;
        dVar20 = round((double)(local_14 * (float)65536));
        *(int *)((int)param_1 + 0xbd28) = (int)ROUND(dVar20);
      }
      (**(code **)(*(int *)((int)param_1 + 0x14c) + 0x13c))
                ((CCharacter *)&param_1->vec,(int)param_2,&in_stack_fffffc88->vec);
      if (*(int *)((int)param_1 + 0xbca4) != 0) {
        in_stack_fffffc8c = (UOrientationVector *)0x0;
        in_stack_fffffc88 = param_1 + 0x1c;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)&in_stack_fffffc88->vec,0,1);
      }
    }
    if (((0.0 <= local_20) && (*(float *)((int)param_1 + 0xbd38) <= 0.0)) &&
       (*(int *)((int)param_1 + 0xbca4) != 0)) {
      local_138 = 0;
      local_134 = 0;
      local_130 = local_20;
      fVar14 = 0.5235988;
      pCVar12 = (CVector3f *)0x40400000;
      pCVar8 = (*(((*(CDemonActor **)((int)param_1 + 0xbca4))->vtable)._ub)->getPathMap)
                         (*(CDemonActor **)((int)param_1 + 0xbca4));
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         ((CDeformableModelInstance *)(*(int *)((int)param_1 + 0xbca4) + 0x150),
                          &local_1a4,0);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (*(CDemonActor **)((int)param_1 + 0xbca4),&local_144,pCVar9);
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)&param_1->vec,pCVar9,pCVar8,pCVar12,fVar14,
                         (float)in_stack_fffffc88);
      if (iVar5 != 1) {
        in_stack_fffffc88 = (UOrientationVector *)0x1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)&param_1[0x1c].vec,1,1);
        *(int *)((int)param_1 + 0x2410) = 0;
      }
    }
    goto LAB_004a93c4;
  }
  uVar10 = *(int *)((int)param_1 + 0x25a8);
  if (uVar10 < 2) {
    if (uVar10 == 1) {
      iVar5 = 1;
    }
    else {
LAB_004a9c4c:
      iVar5 = 0;
    }
LAB_004a939d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)&param_1[0x1c].vec,iVar5,1);
  }
  else {
    if (uVar10 < 3) {
      iVar5 = 0x11;
      goto LAB_004a939d;
    }
    if (uVar10 != 3) goto LAB_004a9c4c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)&param_1[0x1c].vec,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n");
  }
  param_1[0x2f9].vec.x = 0.0;
  *(float *)((int)param_1 + 0x23a8) = param_1[0x2f9].vec.x;
  *(int *)((int)param_1 + 0x23a4) = *(int *)((int)param_1 + 0x23a8);
LAB_004a93c4:
  if (0.0 < param_1[0xfb8].vec.x) {
    param_1[0xfb8].vec.x = param_1[0xfb8].vec.x - param_2;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)&param_1->vec);
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)&param_1->vec);
  if (iVar5 != 0) {
    pCVar1 = *(CCharacter **)((int)param_1 + 0xbca4);
    if ((pCVar1 != (CCharacter *)0x0) &&
       (pUVar6 = (UOrientationVector *)
                 (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                           (pCVar1,(int)in_stack_fffffc88,(float)in_stack_fffffc8c),
       pUVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(CDemonActor **)((int)param_1 + 0xbca4));
    }
    param_1[0x303].vec.x = param_1[0x303].vec.x - param_2 * (float)32;
    local_cc = (float)(*(int (*) [100])((int)param_1 + 0x2420))[0] * param_2;
    local_c8 = param_1[0x303].vec.x * param_2;
    local_c4 = param_2 * *(float *)((int)param_1 + 0x2428);
    local_d8 = local_cc + *(float *)((int)param_1 + 0x2414);
    local_d4 = local_c8 + param_1[0x302].vec.x;
    local_d0 = local_c4 + *(float *)((int)param_1 + 0x241c);
    local_18c.x = local_d8 + *(float *)((int)param_1 + 0x23a4);
    local_18c.y = local_d4 + *(float *)((int)param_1 + 0x23a8);
    local_18c.z = local_d0 + param_1[0x2f9].vec.x;
    *(int *)((int)param_1 + 0x241c) = 0;
    param_1[0x302].vec.x = *(float *)((int)param_1 + 0x241c);
    *(float *)((int)param_1 + 0x2414) = param_1[0x302].vec.x;
    param_1[0x2f9].vec.x = 0.0;
    *(float *)((int)param_1 + 0x23a8) = param_1[0x2f9].vec.x;
    *(int *)((int)param_1 + 0x23a4) = *(int *)((int)param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)&param_1->vec,&local_18c)
    ;
  }
  pUVar6 = param_1 + 0x1c;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            ((CDeformableModelInstance *)&pUVar6->vec);
  local_b4 = (double)*(float *)((int)param_1 + 0xbd38);
  if (0.0 < local_b4) {
    local_60 = (float)core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                                (pUVar6,param_1[0xfc5].vec.x);
    fVar14 = 1.0 - *(float *)((int)param_1 + 0xbd38);
    local_5c = 1.0 - fVar14 * fVar14 * fVar14;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (pUVar6,param_1[0xfc5].vec.x,local_60,local_5c,_DAT_01c78c38);
    fVar14 = *(float *)((int)param_1 + 0xbd38) - param_2 / 0.7f;
    *(float *)((int)param_1 + 0xbd38) = fVar14;
    if (fVar14 < 0.0) {
      *(int *)((int)param_1 + 0xbd38) = 0;
    }
  }
  core_charactr_cpp_FUN_0042a150(param_1);
  if (((float)0.01 < ABS(*(float *)((int)param_1 + 0x2410))) ||
     ((float)0.01 <
      SQRT(*(float *)((int)param_1 + 0x241c) * *(float *)((int)param_1 + 0x241c) +
           *(float *)((int)param_1 + 0x2414) * *(float *)((int)param_1 + 0x2414) +
           param_1[0x302].vec.x * param_1[0x302].vec.x))) {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (0x02DC9450,(uint)param_1[0xfc3].vec.x);
    if (iVar5 == 0) {
      _sprintf(&stack0xfffffc88,"ghoul-walk-?.wav *%f",
                 (double)*(float *)((int)param_1 + 0xbc8c));
      fVar14 = (float)(**(code **)(*(int *)((int)param_1 + 0x14c) + 0x28))
                                ((CDemonActor *)&param_1->vec,&stack0xfffffc88);
      param_1[0xfc3].vec.x = fVar14;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,(uint)param_1[0xfc3].vec.x);
  }
  if (*(int *)((int)param_1 + 0xbc90) == 0) {
    if (*(int *)((int)param_1 + (int)param_1[0xfc9].vec.x * 4 + 0x2290) == 0) {
      fVar22 = 0.5;
      fVar14 = param_1[0xfc9].vec.x;
      iVar5 = _DAT_01c78c3c;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,param_1[0xfc6].vec.x,_DAT_01c78c28);
      if (*(int *)((int)param_1 + (int)param_1[0xfc6].vec.x * 4 + 0x2290) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,*(int *)((int)param_1 + 0xbd4c),_DAT_01c78c20);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(int *)((int)param_1 + 0xbd50),_DAT_01c78c2c);
      if (*(int *)((int)param_1 + *(int *)((int)param_1 + 0xbd50) * 4 + 0x2290) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,param_1[0xfc7].vec.x,_DAT_01c78c24);
      }
      fVar22 = 0.7;
      fVar14 = *(float *)((int)param_1 + 0xbd70);
      iVar5 = _DAT_01c78c14;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
              ((CCharacter *)&param_1->vec,(int)fVar14,iVar5,fVar22);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0((CCharacter *)&param_1->vec);
  }
  if ((param_1[0xfcb].vec.x != 0.0) && (iVar3 == 0x11)) {
    fVar14 = *(float *)((int)param_1 + 0x20) - *(float *)((int)param_1 + 0xbd94);
    fVar22 = *(float *)((int)param_1 + 0x28) - param_1[0xfcd].vec.x;
    if (param_2 * (float)0.5 <= SQRT(fVar22 * fVar22 + fVar14 * fVar14)) {
      param_1[0xfcc].vec.x = 1.0;
    }
    else {
      param_2 = param_1[0xfcc].vec.x - param_2;
      param_1[0xfcc].vec.x = param_2;
      if (param_2 < 0.0) {
        *(int *)((int)param_1 + 0xbd88) = 0x41f00000;
        param_1[0xfcb].vec.x = 0.0;
        *(int *)((int)param_1 + 0xbd8c) = 0;
      }
    }
  }
  if ((int *)((int)param_1 + 0xbd94) == (int *)((int)param_1 + 0x20)) {
    return;
  }
  *(int *)((int)param_1 + 0xbd94) = *(int *)((int)param_1 + 0x20);
  *(float *)((int)param_1 + 0xbd98) = param_1[3].vec.x;
  param_1[0xfcd].vec.x = *(float *)((int)param_1 + 0x28);
  return;
}
