// Name: core_demnfolk.cpp_CDemnfolk_process_FUN_00455080
// Address: 00455080
// Address Range: [[00455080, 004572f5]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_process_FUN_00455080(CDemnfolk *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_process_FUN_00455080(CDemnfolk *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  char cVar4;
  CCharacter *pCVar5;
  EWalkState EVar6;
  CEnemy_full_vtable *pCVar7;
  CCharacter *pCVar8;
  CDoor *this_ptr_00;
  int iVar9;
  uint uVar10;
  CDemnfolk *pCVar11;
  EDeathState EVar12;
  SMotion *pSVar13;
  int iVar14;
  CPathMap *pCVar15;
  CDemonActor *pCVar16;
  uint *puVar17;
  char *pcVar18;
  float *pfVar19;
  char *pcVar20;
  float *pfVar21;
  byte bVar22;
  float10 fVar23;
  float10 fVar24;
  double dVar25;
  float afStackY_14ac [84];
  UActorVTable aUStackY_135c [3];
  float afStackY_1350 [72];
  UActorVTable aUStackY_1230 [9];
  float afStackY_120c [748];
  CGore *this_ptr_01;
  CVector3f *pCVar26;
  CBoundingBox3D *out_box;
  CVector3f *pCVar27;
  UOrientationVector *input_local_point;
  CDemnfolk *in_stack_fffff9bc;
  float fVar28;
  char *in_stack_fffff9c4;
  SDamageInfo SStack_610;
  char acStack_5d4 [32];
  float afStack_5b4 [6];
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float afStack_584 [6];
  float afStack_56c [6];
  float afStack_554 [6];
  float afStack_53c [6];
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float afStack_518 [3];
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float afStack_4e8 [3];
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float afStack_4c0 [4];
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  CVector3f CStack_494;
  CVector3f CStack_488;
  float fStack_47c;
  float afStack_478 [4];
  float fStack_468;
  CVector3f CStack_464;
  float fStack_458;
  float afStack_454 [5];
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  CVector3f CStack_41c;
  CVector3f CStack_410;
  CVector3f CStack_404;
  CVector3f CStack_3f8;
  float fStack_3ec;
  float afStack_3e8 [5];
  CVector3f CStack_3d4;
  CVector3f CStack_3c8;
  CVector3f CStack_3bc;
  uint uStack_3b0;
  uint uStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float afStack_3a0 [5];
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  UActorVTable UStack_370;
  float fStack_36c;
  float fStack_368;
  float afStack_364 [2];
  CVector3f CStack_35c;
  float fStack_350;
  float afStack_34c [4];
  float fStack_33c;
  CVector3f CStack_338;
  float fStack_32c;
  float afStack_328 [2];
  CVector3f CStack_320;
  CVector3f CStack_314;
  float fStack_308;
  float afStack_304 [2];
  CVector3f CStack_2fc;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  CVector3f CStack_2e4;
  CVector3f CStack_2d8;
  float fStack_2cc;
  float afStack_2c8 [5];
  CVector3f CStack_2b4;
  float fStack_2a8;
  float afStack_2a4 [4];
  float fStack_294;
  CVector3f CStack_290;
  CVector3f CStack_284;
  float fStack_278;
  float afStack_274 [2];
  CVector3f CStack_26c;
  UOrientationVector UStack_260;
  CVector3f CStack_254;
  float fStack_248;
  UActorVTable UStack_244;
  float fStack_240;
  CVector3f CStack_23c;
  CVector3f CStack_230;
  float fStack_224;
  float afStack_220 [2];
  CVector3f CStack_218;
  float fStack_20c;
  float afStack_208 [4];
  float fStack_1f8;
  float fStack_1f4;
  CMotionController_vtable *pCStack_1f0;
  float afStack_1ec [4];
  CVector3f CStack_1dc;
  CVector3f CStack_1d0;
  float fStack_1c4;
  float afStack_1c0 [2];
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  CVector3f CStack_194;
  CVector3f CStack_188;
  CVector3f CStack_17c;
  CVector3f CStack_170;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [2];
  CVector3f CStack_14c;
  CVector3f CStack_140;
  float fStack_134;
  float afStack_130 [5];
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [2];
  CVector3f CStack_104;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  double dStack_c8;
  double dStack_c0;
  int iStack_b0;
  float fStack_a8;
  float fStack_a4;
  float *pfStack_a0;
  int iStack_9c;
  float *pfStack_98;
  int iStack_94;
  CLocation *pCStack_90;
  CCharacter *pCStack_8c;
  uint uStack_80;
  float fStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_54;
  CDoor *pCStack_50;
  CDoor *pCStack_4c;
  char *pcStack_48;
  CMotionController *pCStack_44;
  CVector3f *pCStack_40;
  CDeformableModelInstance *pCStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar22 = 0;
  iVar9 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar9 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[1]);
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] == 0) &&
     (EVar12 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar12 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,0x17,1);
  }
  pCStack_8c = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCStack_8c != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_8c->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
              (&(this_ptr->base).base.model,0,&CStack_2b4);
    pCVar27 = &CStack_188;
    CStack_188.x = CStack_2b4.x;
    *(uint *)((int)&CStack_188 + (uint)bVar22 * -8 + 4) =
         *(uint *)((int)&CStack_2b4 + (uint)bVar22 * -8 + 4);
    *(uint *)((int)&CStack_188 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
         *(uint *)((int)&CStack_2b4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
    iVar9 = (*(pCStack_14->_uc).attractActorToward)(pCStack_8c,(CDemonActor *)this_ptr,pCVar27);
    if (iVar9 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  pfStack_a0 = afStack_518;
  fStack_a4 = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pfStack_98 = afStack_4e8;
  pCStack_3c = &(this_ptr->base).base.model;
LAB_0045511e:
  if (0.0 < fStack_a4) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_3c->base,&fStack_a4);
    if (uVar10 < 0xb) {
      if (uVar10 < 5) {
        if (uVar10 == 2) {
          pCVar16 = this_ptr->pickup_target;
          if (pCVar16 != (CDemonActor *)0x0) {
            this_ptr->pickup_target = (CDemonActor *)0x0;
            iVar9 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0
                              (this_ptr,this_ptr->object_shape_class);
            if (-1 < iVar9) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                        ((CCharacter *)this_ptr,iVar9,pCVar16,0.2,(CMatrix3x4f *)0x0);
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n");
            }
          }
        }
        else {
LAB_0045515b:
          core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
        }
        goto LAB_0045511e;
      }
      if (uVar10 < 6) {
        iStack_28 = 1;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          CStack_2fc.z = (float)g_INT_005de058;
          CStack_2fc.x = 0.0;
          CStack_2fc.y = 0.0;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,&CStack_2fc,&CStack_290);
          fStack_380 = CStack_290.x;
          afStack_3a0[(uint)bVar22 * -2 + 9] = *(float *)((int)&CStack_290 + (uint)bVar22 * -8 + 4);
          afStack_3a0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
               *(float *)((int)&CStack_290 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
          pCVar5 = (this_ptr->base).victim;
          fStack_1c4 = fStack_380 - (pCVar5->base).location.position.x;
          afStack_1c0[0] = fStack_37c - (pCVar5->base).location.position.y;
          afStack_1c0[1] = fStack_378 - (pCVar5->base).location.position.z;
          afStack_1ec[1] = fStack_1c4;
          afStack_1ec[(uint)bVar22 * -2 + 2] = afStack_1c0[(uint)bVar22 * -2];
          afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 3] =
               afStack_1c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          afStack_1ec[2] = 0.0;
          if (SQRT(afStack_1ec[3] * afStack_1ec[3] + afStack_1ec[1] * afStack_1ec[1]) <= 1.0) {
            if (iStack_28 != 0) {
              CStack_314.x = 0.0;
              CStack_314.z = 0.0;
              CStack_314.y = 4.0;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)this_ptr,&CStack_314,&CStack_ec);
              CStack_404.x = CStack_ec.x;
              *(uint *)((int)&CStack_404 + (uint)bVar22 * -8 + 4) =
                   *(uint *)((int)&CStack_ec + (uint)bVar22 * -8 + 4);
              *(uint *)((int)&CStack_404 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
                   *(uint *)((int)&CStack_ec + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
              pCVar5 = (this_ptr->base).victim;
              puVar17 = (uint *)((int)pCVar5 + (uint)bVar22 * -8 + 0x24);
              CStack_14c.x = (pCVar5->base).location.position.x;
              *(uint *)((int)&CStack_14c + (uint)bVar22 * -8 + 4) = *puVar17;
              *(uint *)((int)&CStack_14c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
                   puVar17[(uint)bVar22 * -2 + 1];
              CStack_14c.y = CStack_404.y;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
              iVar9 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                (g_CDemonSetPtr,&CStack_404,&CStack_14c);
              if (iVar9 != 0) {
                iStack_28 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            }
            if ((iStack_28 == 0) ||
               (pCVar5 = (this_ptr->base).victim,
               iVar9 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar5,(CDemonActor *)this_ptr,0), iVar9 != 0)) {
              if (iStack_28 == 0) {
                core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
              }
              goto LAB_0045511e;
            }
          }
        }
        core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
        goto LAB_0045511e;
      }
      if (uVar10 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
        goto LAB_0045511e;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_3c,this_ptr->bone_indices[0],&CStack_164);
        pCVar27 = &CStack_1b8;
        CStack_1b8.x = CStack_164.x;
        *(uint *)((int)&CStack_1b8 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_164 + (uint)bVar22 * -8 + 4);
        *(uint *)((int)&CStack_1b8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             *(uint *)((int)&CStack_164 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar27,&CStack_170);
        CStack_338.x = CStack_170.x;
        *(uint *)((int)&CStack_338 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_170 + (uint)bVar22 * -8 + 4);
        *(uint *)((int)&CStack_338 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_170 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        if (this_ptr->part_indices[4] < 0) {
          pCVar5 = (this_ptr->base).victim;
          fVar28 = CStack_338.x - (pCVar5->base).location.position.x;
          fVar3 = CStack_338.z - (pCVar5->base).location.position.z;
          if ((float)1.5 < SQRT(fVar3 * fVar3 + fVar28 * fVar28)) {
            core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
            goto LAB_0045511e;
          }
        }
        else {
          pCVar5 = (this_ptr->base).victim;
          pCVar11 = (CDemnfolk *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5);
          if (pCVar11 != this_ptr) {
            in_stack_fffff9bc = this_ptr;
            core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
            goto LAB_0045511e;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_610);
        pCStack_14 = (CCharacter_full_vtable *)
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
        SStack_610.damage_amount = (float)pCStack_14 * this_ptr->difficulty_speed_scale;
        SStack_610.attacker = (CDemonActor *)this_ptr;
        SStack_610.wielder = (CDemonActor *)this_ptr;
        pCVar5 = (this_ptr->base).victim;
        (*(((pCVar5->base).vtable._uc)->_uc).processDamage)(pCVar5,&SStack_610);
        dStack_c0 = (double)SStack_610.damage_amount;
        if (0.0 < dStack_c0) {
          fVar28 = 6.367255e-39;
          dVar25 = round(dStack_c0 * 2.5 * 0.25);
          iStack_54 = (int)ROUND(dVar25);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                    (g_CGorePtr,&CStack_338,(CVector3f *)0x0,iStack_54,(EBloodType)fVar28);
        }
        pCVar5 = (this_ptr->base).victim;
        EVar12 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5);
        if (0 < (int)EVar12) {
          pCVar5 = (this_ptr->base).victim;
          (*(((pCVar5->base).vtable._uc)->_uc).releaseFromGrab)(pCVar5);
          core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
        }
        in_stack_fffff9c4 = "ghoul-eat-?.wav";
        in_stack_fffff9bc = (CDemnfolk *)0x4555b8;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_0045511e;
      }
      core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
    }
    else if (uVar10 < 0xc) {
      iVar9 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0(this_ptr,2);
      if (iVar9 < 0) {
        g_CurrentFilename = "..\\core\\demnfolk.cpp";
        g_CurrentLineNumber = 543;
        core_main_c_displayErrorAndQuit_FUN_004e4330("WTF!");
      }
      if ((this_ptr->base).base.carry_hands[iVar9].carry_actor != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s lugging %s\n");
        CStack_218.x = 0.0;
        CStack_218.y = 6.0;
        CStack_218.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar9,&CStack_218);
        in_stack_fffff9c4 = "demn_taunt__???.wav";
        in_stack_fffff9bc = (CDemnfolk *)0x4556a2;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"demn_taunt__???.wav");
      }
    }
    else if (uVar10 < 0xd) {
      iStack_b0 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0(this_ptr,3);
      if (iStack_b0 < 0) {
        g_CurrentFilename = "..\\core\\demnfolk.cpp";
        g_CurrentLineNumber = 566;
        core_main_c_displayErrorAndQuit_FUN_004e4330("WTF!");
      }
      pcStack_48 = (this_ptr->base).base.base.actor_name + iStack_b0 * 0x78;
      if (*(int *)(pcStack_48 + 0x25b0) != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s tossing %s\n");
        CStack_3c8.x = 0.0;
        CStack_3c8.y = 0.0;
        CStack_3c8.z = 1.0;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          out_box = (CBoundingBox3D *)0x4557f4;
          (**(code **)(*(int *)(*(int *)(pcStack_48 + 0x25b0) + 0x154) + 0x1c))();
          pfVar19 = afStack_584;
          pfVar21 = &fStack_524;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar21 = *pfVar19;
            pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
            pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
          }
          fStack_368 = fStack_524 + *pfStack_a0;
          afStack_364[0] = fStack_520 + pfStack_a0[1];
          afStack_364[1] = fStack_51c + pfStack_a0[2];
          fStack_224 = fStack_524 + *pfStack_a0;
          afStack_220[(uint)bVar22 * -2] = afStack_364[(uint)bVar22 * -2];
          pcVar18 = pcStack_48;
          afStack_220[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               afStack_364[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          pCVar27 = &CStack_104;
          fStack_428 = fStack_224 * 0.5f;
          fStack_424 = afStack_220[0] * 0.5f;
          fStack_420 = afStack_220[1] * 0.5f;
          CStack_104.x = fStack_224 * 0.5f;
          *(float *)((int)&CStack_104 + (uint)bVar22 * -8 + 4) =
               afStack_454[(uint)bVar22 * -2 + 0xc];
          *(float *)((int)&CStack_104 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
               afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (*(CDemonActor **)(pcVar18 + 0x25b0),pCVar27,&CStack_3d4);
          fStack_2a8 = CStack_3d4.x;
          afStack_2a4[(uint)bVar22 * -2] = *(float *)((int)&CStack_3d4 + (uint)bVar22 * -8 + 4);
          afStack_2a4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               *(float *)((int)&CStack_3d4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
          pCVar5 = (this_ptr->base).victim;
          (*((pCVar5->base).vtable._ub)->getBoundingBox)(&pCVar5->base,out_box);
          pfVar19 = afStack_53c;
          pfVar21 = &fStack_4f4;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar21 = *pfVar19;
            pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
            pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
          }
          fStack_20c = fStack_4f4 + *pfStack_98;
          afStack_208[0] = fStack_4f0 + pfStack_98[1];
          afStack_208[1] = fStack_4ec + pfStack_98[2];
          fStack_458 = fStack_4f4 + *pfStack_98;
          afStack_454[(uint)bVar22 * -2] = afStack_208[(uint)bVar22 * -2];
          afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               afStack_208[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          fStack_278 = fStack_458 * 0.5f;
          afStack_274[0] = afStack_454[0] * 0.5f;
          afStack_274[1] = afStack_454[1] * 0.5f;
          CStack_320.x = fStack_458 * 0.5f;
          *(float *)((int)&CStack_320 + (uint)bVar22 * -8 + 4) = afStack_274[(uint)bVar22 * -2];
          *(float *)((int)&CStack_320 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
               afStack_274[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (&((this_ptr->base).victim)->base,&CStack_320,&CStack_26c);
          fStack_2cc = CStack_26c.x;
          afStack_2c8[(uint)bVar22 * -2] = *(float *)((int)&CStack_26c + (uint)bVar22 * -8 + 4);
          afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               *(float *)((int)&CStack_26c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
          fStack_3a4 = fStack_2cc - fStack_2a8;
          afStack_3a0[0] = afStack_2c8[0] - afStack_2a4[0];
          afStack_3a0[1] = afStack_2c8[1] - afStack_2a4[1];
          CStack_464.x = fStack_2cc - fStack_2a8;
          *(float *)((int)&CStack_464 + (uint)bVar22 * -8 + 4) = afStack_3a0[(uint)bVar22 * -2];
          *(float *)((int)&CStack_464 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8) =
               afStack_3a0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          fStack_68 = SQRT(CStack_464.z * CStack_464.z +
                           CStack_464.x * CStack_464.x + CStack_464.y * CStack_464.y);
          if (0.0 < fStack_68) {
            core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
                      ((CDemonActor *)this_ptr,&CStack_464,&CStack_e0);
            fStack_134 = CStack_e0.x;
            afStack_130[(uint)bVar22 * -2] = *(float *)((int)&CStack_e0 + (uint)bVar22 * -8 + 4);
            afStack_130[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 *(float *)((int)&CStack_e0 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
            fVar28 = 1.0 / fStack_68;
            fStack_4ac = fStack_134 * fVar28;
            fStack_4a8 = afStack_130[0] * fVar28;
            fStack_4a4 = afStack_130[1] * fVar28;
            CStack_17c.x = fStack_134 * fVar28;
            *(float *)((int)&CStack_17c + (uint)bVar22 * -8 + 4) =
                 afStack_4c0[(uint)bVar22 * -2 + 6];
            *(float *)((int)&CStack_17c + ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 1) * 4 + 4) =
                 afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
            if (&CStack_3c8 != &CStack_17c) {
              CStack_3c8.x = CStack_17c.x;
              CStack_3c8.y = CStack_17c.y;
              CStack_3c8.z = CStack_17c.z;
            }
          }
        }
        CStack_3c8.x = CStack_3c8.x * 27.0f;
        CStack_3c8.z = CStack_3c8.z * 27.0f;
        CStack_3c8.y = CStack_3c8.y * 27.0f + 5.0f;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iStack_b0,&CStack_3c8);
        in_stack_fffff9c4 = "demn_taunt__???.wav";
        in_stack_fffff9bc = (CDemnfolk *)0x4557ab;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"demn_taunt__???.wav");
      }
    }
    else if (uVar10 < 0xe) {
      if (this_ptr->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00465060(this_ptr->target_door,0.3);
        (*((this_ptr->target_door->base).vtable._ub)->playSound)
                  (&this_ptr->target_door->base,"zombie-bang-door?.wav");
        this_ptr->target_door = (CDoor *)0x0;
      }
    }
    else {
      if (uVar10 < 0x65) goto LAB_0045515b;
      if (uVar10 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar10 == 0x29a) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_3c,this_ptr->bone_indices[0],&CStack_41c);
        pCVar27 = &CStack_230;
        CStack_230.x = CStack_41c.x;
        *(uint *)((int)&CStack_230 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_41c + (uint)bVar22 * -8 + 4);
        *(uint *)((int)&CStack_230 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             *(uint *)((int)&CStack_41c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar27,&CStack_494);
        fVar28 = 0.0;
        iVar9 = 3;
        pCVar26 = (CVector3f *)0x0;
        pCVar27 = &CStack_140;
        CStack_140.x = CStack_494.x;
        *(uint *)((int)&CStack_140 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_494 + (uint)bVar22 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_140 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             *(uint *)((int)&CStack_494 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                  (this_ptr_01,pCVar27,pCVar26,iVar9,(EBloodType)fVar28);
        iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
        if (iVar9 == 0) {
          pcVar18 = "ghoul-dig-?.wav";
        }
        else {
          pcVar18 = "ghoul-eat-?.wav";
        }
        pcVar20 = acStack_5d4;
        do {
          cVar4 = *pcVar18;
          *pcVar20 = cVar4;
          if (cVar4 == '\0') break;
          cVar4 = pcVar18[1];
          pcVar18 = pcVar18 + 2;
          pcVar20[1] = cVar4;
          pcVar20 = pcVar20 + 2;
        } while (cVar4 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_5d4);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
      }
    }
    goto LAB_0045511e;
  }
  fVar28 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar28);
  if (((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar28 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar28,
      (float)6 <= fVar28)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffff9b4);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffff9b4);
    this_ptr->bleedout_timer = -1.0;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  iVar9 = pSVar13->state_index;
  iStack_9c = 0;
  iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar14 == 0) {
    fStack_30 = -1.0;
    fStack_a8 = 0.3;
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
    switch(pSVar13->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(delta_time * (float)0.125);
      if (iVar9 == 0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar9 != 0) {
          core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          in_stack_fffff9bc = (CDemnfolk *)0x45657c;
          EVar12 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                     getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
          if (EVar12 == DEATH_STATE_ALIVE) break;
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
        }
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
          iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
          if (iVar9 == 0) {
            if (this_ptr->is_female == 0) {
              in_stack_fffff9bc = (CDemnfolk *)0x4565bc;
              uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"demn_chase_???.wav");
              this_ptr->sfx_handles[1] = uVar10;
            }
            else {
              in_stack_fffff9bc = (CDemnfolk *)0x456555;
              uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"demn_chase_???.wav");
              this_ptr->sfx_handles[1] = uVar10;
            }
          }
        }
      }
      else {
LAB_00456085:
        fVar28 = 1.4013e-45;
        iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,iVar9,(int)fVar28);
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      pCVar5 = (this_ptr->base).victim;
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        in_stack_fffff9bc = (CDemnfolk *)0x45663f;
        EVar12 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                   getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
        if (EVar12 != DEATH_STATE_ALIVE) {
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
        }
      }
      pCVar8 = (this_ptr->base).victim;
      pCVar2 = &(this_ptr->base).base.model;
      if (pCVar8 == (CCharacter *)0x0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar9 == 0) {
          fVar28 = 1.4013e-45;
          iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar2->base,iVar9,(int)fVar28);
        }
      }
      else {
        if (pCVar5 == (CCharacter *)0x0) {
          iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
          if (iVar9 == 0) {
            if (this_ptr->is_female == 0) {
              pcVar18 = "demn_chase_???.wav";
            }
            else {
              pcVar18 = "demn_chase_???.wav";
            }
            uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,pcVar18);
            this_ptr->sfx_handles[1] = uVar10;
          }
          goto LAB_004566b3;
        }
        if (pCVar8 != (CCharacter *)0x0) {
          pCStack_14 = (CCharacter_full_vtable *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                 (&pCVar2->base);
          if ((float)0.90000000000000002 < (float)pCStack_14) {
            pCVar5 = (this_ptr->base).victim;
            fStack_158 = (pCVar5->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            afStack_154[0] =
                 (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            afStack_154[1] =
                 (pCVar5->base).location.position.z - (this_ptr->base).base.base.location.position.z
            ;
            fStack_3ec = fStack_158;
            afStack_3e8[(uint)bVar22 * -2] = afStack_154[(uint)bVar22 * -2];
            afStack_3e8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_154[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            if (afStack_2a4 + 2 != &fStack_3ec) {
              afStack_2a4[2] = fStack_3ec;
              afStack_2a4[3] = afStack_3e8[0];
              fStack_294 = afStack_3e8[1];
            }
            fStack_70 = SQRT(fStack_294 * fStack_294 +
                             afStack_2a4[2] * afStack_2a4[2] + afStack_2a4[3] * afStack_2a4[3]);
            if ((fStack_70 < 25.0f) && (10.0f < fStack_70)) {
              iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
              if (iVar9 == 1) {
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + -0.2617994f;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,0xb,1);
              }
              else {
                core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
              }
            }
          }
        }
        iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(delta_time * (float)0.0083333333333333297);
        if (iVar9 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,4,1);
        }
        uStack_80 = (uint)((this_ptr->base).base.model.part_data.visibility_flags
                           [this_ptr->part_indices[1]] != 0);
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0)
        {
          uStack_80 = uStack_80 + 1;
        }
        iVar9 = core_demnfolk_cpp_CDemnfolk_processPickup_FUN_00457740(this_ptr,delta_time);
        if (iVar9 == 0) {
          fStack_7c = (float)g_INT_005de058;
          iStack_78 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0(this_ptr,1);
          if (((-1 < iStack_78) &&
              (pCVar16 = (this_ptr->base).base.carry_hands[iStack_78].carry_actor,
              pCVar16 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
            fStack_6c = 1.0;
            if (pCVar16 != (CDemonActor *)0x0) {
              (*((pCVar16->vtable)._ub)->getBoundingBox)
                        (pCVar16,(CBoundingBox3D *)in_stack_fffff9bc);
              pfVar19 = afStack_5b4;
              pfVar21 = &fStack_59c;
              for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                *pfVar21 = *pfVar19;
                pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
                pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
              }
              in_stack_fffff9bc = (CDemnfolk *)0x456903;
              core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_35c);
              CStack_35c.x = fStack_590 - fStack_59c;
              CStack_35c.y = fStack_58c - fStack_598;
              CStack_35c.z = fStack_588 - fStack_594;
              afStack_1a8[2] = fStack_590 - fStack_59c;
              afStack_1a8[(uint)bVar22 * -2 + 3] =
                   *(float *)((int)&CStack_35c + (uint)bVar22 * -8 + 4);
              afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   *(float *)((int)&CStack_35c + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
              fStack_6c = fStack_198 * (float)0.5 + 1.0;
            }
            fStack_7c = fStack_6c;
          }
          fVar28 = 0.34906584;
          pCVar27 = (CVector3f *)0x3f8ccccd;
          uStack_3b0 = 0;
          fStack_3a8 = fStack_7c;
          uStack_3ac = 0;
          pCVar5 = (this_ptr->base).victim;
          pCVar15 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
          iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar15,pCVar27,
                             fVar28,(float)in_stack_fffff9bc);
          pCStack_44 = &(this_ptr->base).base.model.base;
          if (iVar9 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            in_stack_fffff9bc = (CDemnfolk *)0x1;
            iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (pCStack_44,iVar9,(int)in_stack_fffff9bc);
          }
          else if (iVar9 < 1) {
            in_stack_fffff9bc = (CDemnfolk *)this_ptr->object_shape_class;
            iStack_64 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0
                                  (this_ptr,(int)in_stack_fffff9bc);
            pCVar5 = (this_ptr->base).victim;
            fStack_47c = (this_ptr->base).base.base.location.position.x -
                         (pCVar5->base).location.position.x;
            afStack_478[0] =
                 (this_ptr->base).base.base.location.position.y - (pCVar5->base).location.position.y
            ;
            afStack_478[1] =
                 (this_ptr->base).base.base.location.position.z - (pCVar5->base).location.position.z
            ;
            fStack_4c4 = fStack_47c;
            afStack_4c0[(uint)bVar22 * -2] = afStack_478[(uint)bVar22 * -2];
            afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            if (SQRT(afStack_4c0[1] * afStack_4c0[1] +
                     fStack_4c4 * fStack_4c4 + afStack_4c0[0] * afStack_4c0[0]) <
                (float)20) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        ((CDemonActor *)this_ptr,&(pCVar5->base).location.position,&CStack_3bc);
              in_stack_fffff9bc = (CDemnfolk *)(afStack_3a0 + 2);
              afStack_3a0[2] = CStack_3bc.x;
              afStack_3a0[(uint)bVar22 * -2 + 3] =
                   *(float *)((int)&CStack_3bc + (uint)bVar22 * -8 + 4);
              afStack_3a0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   *(float *)((int)&CStack_3bc + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                        ((CVector3f *)in_stack_fffff9bc,&CStack_410);
              fStack_434 = CStack_410.x;
              afStack_454[(uint)bVar22 * -2 + 9] =
                   *(float *)((int)&CStack_410 + (uint)bVar22 * -8 + 4);
              afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
                   *(float *)((int)&CStack_410 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
              if (((ABS(fStack_430) < (float)0.261799387791667) && (-1 < iStack_64)) &&
                 (uVar10 = this_ptr->object_shape_class, 1 < uVar10)) {
                if (uVar10 < 3) {
                  if ((this_ptr->base).base.carry_hands[iStack_64].carry_actor != (CDemonActor *)0x0
                     ) {
                    engine_console_cpp_CConsole_printf_FUN_00441ff0
                              (g_CConsolePtr,"%s lugging\n");
                    in_stack_fffff9bc = (CDemnfolk *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              (pCStack_44,0x22,1);
                  }
                }
                else if ((uVar10 == 3) &&
                        ((this_ptr->base).base.carry_hands[iStack_64].carry_actor !=
                         (CDemonActor *)0x0)) {
                  engine_console_cpp_CConsole_printf_FUN_00441ff0
                            (g_CConsolePtr,"%s tossing\n");
                  in_stack_fffff9bc = (CDemnfolk *)0x1;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_44,0x20,1);
                }
              }
            }
          }
          else if ((0 < (int)uStack_80) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            in_stack_fffff9bc = (CDemnfolk *)(this_ptr->base).victim;
            pCVar16 = (*(((in_stack_fffff9bc->base).base.base.vtable._uc)->_uc).getGrabber)
                                ((CCharacter *)in_stack_fffff9bc);
            if (pCVar16 == (CDemonActor *)0x0) {
              if ((iStack_78 < 0) ||
                 ((this_ptr->base).base.carry_hands[iStack_78].carry_actor == (CDemonActor *)0x0)) {
                pCVar5 = (this_ptr->base).victim;
                in_stack_fffff9bc = (CDemnfolk *)&(this_ptr->base).base.model;
                EVar12 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5);
                if (EVar12 == DEATH_STATE_ALIVE) {
                  in_stack_fffff9c4 = (char *)0x1;
                  fVar28 = 1.82169e-44;
                }
                else {
                  iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
                  if (iVar9 == 0) {
                    in_stack_fffff9c4 = (char *)0x1;
                    fVar28 = 6.02558e-44;
                  }
                  else {
                    in_stack_fffff9c4 = (char *)0x1;
                    fVar28 = 5.88545e-44;
                  }
                }
              }
              else {
                fVar28 = 1.4013e-45;
                in_stack_fffff9bc = (CDemnfolk *)0xc;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)in_stack_fffff9bc,(int)fVar28,(int)in_stack_fffff9c4);
              (this_ptr->base).attack_cooldown = 0.8;
            }
          }
        }
      }
      break;
    case 8:
    case 9:
      pCVar2 = &(this_ptr->base).base.model;
      pCStack_14 = (CCharacter_full_vtable *)
                   core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                             (&pCVar2->base);
      if ((float)0.90000000000000002 < (float)pCStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,4,1);
      }
      break;
    case 0xc:
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
LAB_00456ca5:
        core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
      }
      else {
        iVar9 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0(this_ptr,1);
        if (((-1 < iVar9) &&
            (pCVar5 = (this_ptr->base).victim,
            EVar12 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5), (int)EVar12 < 1))
           && ((this_ptr->base).base.carry_hands[iVar9].carry_actor != (CDemonActor *)0x0)) {
          in_stack_fffff9bc = (CDemnfolk *)(this_ptr->base).victim;
          pCVar16 = (*(((in_stack_fffff9bc->base).base.base.vtable._uc)->_uc).getGrabber)
                              ((CCharacter *)in_stack_fffff9bc);
          if (pCVar16 == (CDemonActor *)0x0) {
            pCVar16 = (this_ptr->base).base.carry_hands[iVar9].carry_actor;
            fStack_5c = 1.0;
            if (pCVar16 != (CDemonActor *)0x0) {
              in_stack_fffff9bc = (CDemnfolk *)0x456d60;
              (*((pCVar16->vtable)._ub)->getBoundingBox)
                        (pCVar16,(CBoundingBox3D *)in_stack_fffff9c4);
              pfVar19 = afStack_554;
              pfVar21 = &fStack_4dc;
              for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                *pfVar21 = *pfVar19;
                pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
                pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_488);
              CStack_488.x = fStack_4d0 - fStack_4dc;
              CStack_488.y = fStack_4cc - fStack_4d8;
              CStack_488.z = fStack_4c8 - fStack_4d4;
              fStack_308 = fStack_4d0 - fStack_4dc;
              afStack_304[(uint)bVar22 * -2] = *(float *)((int)&CStack_488 + (uint)bVar22 * -8 + 4);
              afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                   *(float *)((int)&CStack_488 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
              fStack_110 = fStack_308;
              afStack_10c[(uint)bVar22 * -2] = afStack_304[(uint)bVar22 * -2];
              afStack_10c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                   afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
              afStack_2c8[2] = fStack_110;
              afStack_2c8[(uint)bVar22 * -2 + 3] = afStack_10c[(uint)bVar22 * -2];
              afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   afStack_10c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
              afStack_454[2] = afStack_2c8[2];
              afStack_454[(uint)bVar22 * -2 + 3] = afStack_2c8[(uint)bVar22 * -2 + 3];
              afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
              afStack_478[2] = afStack_454[2];
              afStack_478[(uint)bVar22 * -2 + 3] = afStack_454[(uint)bVar22 * -2 + 3];
              afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
              fStack_5c = fStack_468 * (float)0.5 + fStack_5c;
            }
            fStack_30 = fStack_5c;
            fStack_60 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  (&(this_ptr->base).base.model.base);
            dStack_c8 = (double)fStack_60;
            pCStack_14 = (CCharacter_full_vtable *)fStack_60;
            if ((1.0 <= dStack_c8) && (dStack_c8 <= 2)) {
              iStack_9c = 1;
            }
            break;
          }
        }
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s gave up swing\n");
        core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
      }
      break;
    case 0xd:
      pCVar5 = (this_ptr->base).victim;
      if ((pCVar5 == (CCharacter *)0x0) ||
         (EVar12 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5), 0 < (int)EVar12)) {
LAB_004566b3:
        core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
      }
      else {
        in_stack_fffff9bc = (CDemnfolk *)(this_ptr->base).victim;
        pCVar11 = (CDemnfolk *)
                  (*(((in_stack_fffff9bc->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffff9bc);
        if (pCVar11 == (CDemnfolk *)0x0) {
          fStack_30 = (float)g_INT_005de058;
          fStack_a8 = 3.0;
        }
        else if (pCVar11 != this_ptr) goto LAB_00456ca5;
      }
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&(this_ptr->base).base.model,0,&CStack_f8);
        input_local_point = &UStack_260;
        UStack_260.vec.x = CStack_f8.x;
        *(uint *)((int)&UStack_260 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_f8 + (uint)bVar22 * -8 + 4);
        *(uint *)((int)&UStack_260 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             *(uint *)((int)&CStack_f8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,&input_local_point->vec,&CStack_23c);
        fVar28 = 0.0;
        CStack_254.x = CStack_23c.x;
        *(uint *)((int)&CStack_254 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_23c + (uint)bVar22 * -8 + 4);
        *(uint *)((int)&CStack_254 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             *(uint *)((int)&CStack_23c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_254,(EBloodType)fVar28);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 0x23:
      iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (g_CEventListPtr,this_ptr->rise_from_grave_condition);
      if ((iVar9 != 0) &&
         (fVar28 = this_ptr->rise_delay - delta_time, this_ptr->rise_delay = fVar28, fVar28 < 0.0))
      {
        pCStack_90 = &(this_ptr->base).base.base.location;
        iStack_94 = 0;
        iStack_38 = 0;
        this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
        for (; iStack_94 < g_CDemonSetPtr->character_count; iStack_94 = iStack_94 + 1) {
          iVar9 = *(int *)((int)g_CDemonSetPtr->characters + iStack_38);
          iVar14 = (**(code **)(*(int *)(iVar9 + 0x154) + 0xe4))();
          if (iVar14 != 0) {
            fStack_248 = *(float *)(iVar9 + 0x20) - (pCStack_90->position).x;
            UStack_244 = (UActorVTable)(*(float *)(iVar9 + 0x24) - (pCStack_90->position).y);
            fStack_240 = *(float *)(iVar9 + 0x28) - (pCStack_90->position).z;
            fStack_374 = fStack_248;
            (&UStack_370)[(uint)bVar22 * -2] = (&UStack_244)[(uint)bVar22 * -2];
            (&UStack_370)[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 (&UStack_244)[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            if ((ABS((float)UStack_370) <= (float)10) &&
               (UStack_370._ub = (CDemonActor_vtable *)0x0,
               SQRT(fStack_36c * fStack_36c + fStack_374 * fStack_374) <=
               (this_ptr->base).guard_distance)) {
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"%s rising from the grave\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,0x24,1);
              if ((CGrave *)this_ptr->grave_actor != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004cf580((CGrave *)this_ptr->grave_actor);
                this_ptr->grave_actor = (CDemonActor *)0x0;
              }
              (this_ptr->base).guard_distance = 100.0;
              break;
            }
          }
          iStack_38 = iStack_38 + 4;
        }
      }
      break;
    case 0x29:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      if ((pCVar5 != (CCharacter *)0x0) &&
         ((fVar28 = (this_ptr->base).base.base.location.position.x -
                    (pCVar5->base).location.position.x,
          fVar3 = (this_ptr->base).base.base.location.position.z -
                  (pCVar5->base).location.position.z,
          SQRT(fVar3 * fVar3 + fVar28 * fVar28) <= (float)3 &&
          (ABS((this_ptr->base).base.base.location.position.y - (pCVar5->base).location.position.y)
           <= (float)2)))) {
        fVar28 = 1.4013e-45;
        in_stack_fffff9bc = (CDemnfolk *)core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&pCVar2->base,(int)in_stack_fffff9bc,(int)fVar28);
      }
      break;
    case 0x2a:
    case 0x2b:
      EVar12 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                 getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
      if ((EVar12 == DEATH_STATE_ALIVE) &&
         (in_stack_fffff9bc = (CDemnfolk *)delta_time,
         (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time),
         (this_ptr->base).victim != (CCharacter *)0x0)) goto LAB_00456085;
      break;
    case 0x2c:
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00534820
                (g_CDemonSetPtr,(CDemonActor *)this_ptr);
      break;
    case 0x2e:
      fVar28 = this_ptr->buried_timer - delta_time;
      this_ptr->buried_timer = fVar28;
      if (fVar28 <= 0.0) {
        pCVar7 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->buried_timer = 0.0;
        (*(pCVar7->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar5 = (this_ptr->base).victim;
        if (pCVar5 != (CCharacter *)0x0) {
          afStack_34c[2] =
               (this_ptr->base).base.base.location.position.x - (pCVar5->base).location.position.x;
          afStack_34c[3] =
               (this_ptr->base).base.base.location.position.y - (pCVar5->base).location.position.y;
          fStack_33c = (this_ptr->base).base.base.location.position.z -
                       (pCVar5->base).location.position.z;
          fStack_440 = afStack_34c[2];
          afStack_454[(uint)bVar22 * -2 + 6] = afStack_34c[(uint)bVar22 * -2 + 3];
          afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
               afStack_34c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
          if (&fStack_2f0 != afStack_454 + 5) {
            fStack_2f0 = fStack_440;
            fStack_2ec = fStack_43c;
            fStack_2e8 = fStack_438;
          }
          fStack_74 = fStack_2e8 * fStack_2e8 + fStack_2f0 * fStack_2f0 + fStack_2ec * fStack_2ec;
          fStack_24 = (float)(((int)fStack_74 >> 1) + g_FastSqrtMagic);
          if (fStack_24 <= (float)8) {
            fStack_2c = (this_ptr->base).base.collision_cylinder_top;
            if (fStack_2c < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_2c = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (fStack_2c < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_2c = (this_ptr->base).base.collision_cylinder_bottom + (float)0.5
              ;
            }
            iVar9 = 0;
            do {
              fStack_1c = (float)iVar9 * 6.283185f * 0.25f;
              pCStack_14 = (CCharacter_full_vtable *)iVar9;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar23 = (float10)fcos((float10)fStack_1c);
              fVar24 = (float10)fsin((float10)fStack_1c);
              fStack_18 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_0053de10
                                    (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                     (this_ptr->base).base.base.location.position.z,
                                     (float)(fVar24 * (float10)0.050000000000000003),
                                     (float)(fVar23 * (float10)0.050000000000000003),
                                     (this_ptr->base).base.collision_cylinder_radius,
                                     (this_ptr->base).base.base.location.position.y +
                                     (this_ptr->base).base.collision_cylinder_bottom,
                                     (this_ptr->base).base.base.location.position.y + fStack_2c);
              in_stack_fffff9bc = (CDemnfolk *)0x45627a;
              pCStack_14 = (CCharacter_full_vtable *)fStack_18;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              if (fStack_18 < 1.0) break;
              iVar9 = iVar9 + 1;
            } while (iVar9 < 4);
            if (3 < iVar9) goto LAB_00456085;
            this_ptr->buried_timer = 3.0;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
        }
      }
    }
    if ((0.0 <= fStack_30) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar28 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed = fStack_a8 * (this_ptr->base).speed * delta_time;
      core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
                ((CCharacter *)this_ptr,delta_time * fVar28);
      fVar28 = 0.7853982;
      pCVar27 = (CVector3f *)0x40400000;
      afStack_130[2] = 0.0;
      afStack_130[4] = fStack_30;
      afStack_130[3] = 0.0;
      pCVar5 = (this_ptr->base).victim;
      pCVar15 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar15,pCVar27,fVar28,(float)in_stack_fffff9bc);
      if (iVar9 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s giving up attack\n")
        ;
        in_stack_fffff9bc = this_ptr;
        core_demnfolk_cpp_CDemnfolk_resetChaseState_FUN_00458fb0(this_ptr);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_00455cd6;
  }
  EVar6 = (this_ptr->base).base.walk_state;
  if (EVar6 < 2) {
    if (EVar6 == WALK_STATE_WALKING) goto LAB_00455cbe;
LAB_00455f5f:
    iVar9 = 0;
  }
  else {
    if (2 < EVar6) {
      if (EVar6 == WALK_STATE_NO_PATH) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,2,1);
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        goto LAB_00455cd6;
      }
      goto LAB_00455f5f;
    }
LAB_00455cbe:
    if (iVar9 == 4) goto LAB_00455cd6;
    iVar9 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,iVar9,1);
LAB_00455cd6:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                      (&(this_ptr->base).base.model.base);
  iStack_34 = pSVar13->state_index;
  pCStack_40 = &(this_ptr->base).base.model.accumulated_root_motion;
  if (iStack_34 == 0x23) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCStack_40->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  else if (iStack_34 == 0x24) {
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              ((CDemonActor *)this_ptr,pCStack_40,&CStack_194);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_32c = CStack_194.x;
    afStack_328[(uint)bVar22 * -2] = *(float *)((int)&CStack_194 + (uint)bVar22 * -8 + 4);
    afStack_328[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
         *(float *)((int)&CStack_194 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
    fVar28 = (this_ptr->base).base.base.location.position.y;
    (pCVar1->position).x = (pCVar1->position).x + fStack_32c;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar28 + afStack_328[0];
    (this_ptr->base).base.base.location.position.z = fVar3 + afStack_328[1];
    pCStack_40->z = 0.0;
    pCStack_40->y = pCStack_40->z;
    pCStack_40->x = pCStack_40->y;
  }
  else {
    iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
    if (iVar9 != 0) {
      pCVar5 = (this_ptr->base).victim;
      if ((pCVar5 != (CCharacter *)0x0) &&
         (pCVar11 = (CDemnfolk *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
         pCVar11 == this_ptr)) {
        in_stack_fffff9bc = (CDemnfolk *)(this_ptr->base).victim;
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,(CDemonActor *)in_stack_fffff9bc);
      }
      core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
      afStack_208[2] = (this_ptr->base).base.velocity.x * delta_time;
      afStack_208[3] = (this_ptr->base).base.velocity.y * delta_time;
      fStack_1f8 = (this_ptr->base).base.velocity.z * delta_time;
      fStack_d4 = afStack_208[2];
      afStack_d0[(uint)bVar22 * -2] = afStack_208[(uint)bVar22 * -2 + 3];
      afStack_d0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
           afStack_208[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
      pCVar27 = &(this_ptr->base).base.position_delta;
      fStack_4a0 = fStack_d4 + pCVar27->x;
      fStack_49c = afStack_d0[0] + (this_ptr->base).base.position_delta.y;
      fStack_498 = afStack_d0[1] + (this_ptr->base).base.position_delta.z;
      afStack_4c0[2] = fStack_4a0;
      afStack_4c0[(uint)bVar22 * -2 + 3] = afStack_4c0[(uint)bVar22 * -2 + 9];
      afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
           afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
      pCVar26 = &(this_ptr->base).base.model.accumulated_root_motion;
      fStack_1ac = afStack_4c0[2] + pCVar26->x;
      afStack_1a8[0] = afStack_4c0[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
      afStack_1a8[1] = fStack_4b0 + (this_ptr->base).base.model.accumulated_root_motion.z;
      CStack_2d8.x = fStack_1ac;
      *(float *)((int)&CStack_2d8 + (uint)bVar22 * -8 + 4) = afStack_1a8[(uint)bVar22 * -2];
      *(float *)((int)&CStack_2d8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar27->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      pCVar26->x = (this_ptr->base).base.model.accumulated_root_motion.y;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_2d8);
      if ((iStack_34 == 4) &&
         (pCStack_50 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840
                                          (g_CDemonActor_PTR_007e2cf0,g_CDoorClassInfo.name_hash),
         pCStack_4c = pCStack_50, pCStack_50 != (CDoor *)0x0)) {
        (*((pCStack_50->base).vtable._ub)->getBoundingBox)
                  ((CDemonActor *)pCStack_50,(CBoundingBox3D *)in_stack_fffff9bc);
        pfVar19 = afStack_56c;
        pfVar21 = &fStack_50c;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar21 = *pfVar19;
          pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
          pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
        }
        fStack_350 = fStack_50c + fStack_500;
        afStack_34c[0] = fStack_508 + fStack_4fc;
        afStack_34c[1] = fStack_504 + fStack_4f8;
        fStack_38c = fStack_50c + fStack_500;
        afStack_3a0[(uint)bVar22 * -2 + 6] = afStack_34c[(uint)bVar22 * -2];
        this_ptr_00 = pCStack_4c;
        afStack_3a0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
             afStack_34c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
        pCVar27 = &CStack_3f8;
        fStack_1f4 = fStack_38c * 0.5f;
        pCStack_1f0 = (CMotionController_vtable *)(fStack_388 * 0.5f);
        afStack_1ec[0] = fStack_384 * 0.5f;
        CStack_3f8.x = fStack_38c * 0.5f;
        *(CMotionController_vtable **)((int)&CStack_3f8 + (uint)bVar22 * -8 + 4) =
             (&pCStack_1f0)[(uint)bVar22 * -2];
        *(float *)((int)&CStack_3f8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  (&this_ptr_00->base,pCVar27,&CStack_284);
        pCVar27 = &CStack_2e4;
        CStack_2e4.x = CStack_284.x;
        *(uint *)((int)&CStack_2e4 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_284 + (uint)bVar22 * -8 + 4);
        *(uint *)((int)&CStack_2e4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             *(uint *)((int)&CStack_284 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  ((CDemonActor *)this_ptr,pCVar27,&CStack_1d0);
        CStack_1dc.x = CStack_1d0.x;
        *(uint *)((int)&CStack_1dc + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_1d0 + (uint)bVar22 * -8 + 4);
        *(uint *)((int)&CStack_1dc + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             *(uint *)((int)&CStack_1d0 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_1dc,&CStack_11c);
        afStack_3e8[2] = CStack_11c.x;
        afStack_3e8[(uint)bVar22 * -2 + 3] = *(float *)((int)&CStack_11c + (uint)bVar22 * -8 + 4);
        afStack_3e8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
             *(float *)((int)&CStack_11c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
        if (ABS(afStack_3e8[3]) < (float)0.34906585038888899) {
          iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
          iVar14 = 0x27;
          if (iVar9 != 0) {
            iVar14 = 0x28;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,iVar14,1);
          this_ptr->target_door = pCStack_50;
        }
      }
    }
  }
  iVar9 = iStack_34;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  if (iVar9 != 0x23) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar9 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar9] == 0) {
      iVar14 = this_ptr->bone_indices[10];
      fVar28 = 0.5;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],this_ptr->bone_indices[5],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],this_ptr->bone_indices[3],0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],this_ptr->bone_indices[6],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],this_ptr->bone_indices[4],0.2);
      }
      iVar14 = this_ptr->bone_indices[0];
      fVar28 = 0.7;
      iVar9 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
              ((CCharacter *)this_ptr,iVar9,iVar14,fVar28);
    if ((this_ptr->part_indices[4] < 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10],0.2);
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042fc90((CCharacter *)this_ptr);
  }
  iVar9 = core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0(this_ptr,1);
  if (((iStack_9c != 0) && (-1 < iVar9)) &&
     (pCVar16 = (this_ptr->base).base.carry_hands[iVar9].carry_actor, pCVar16 != (CDemonActor *)0x0)
     ) {
    (*((pCVar16->vtable)._ub)->processMeleeHit)(pCVar16,2);
    return;
  }
  return;
}
