// Name: core_demnfolk.cpp_FUN_00455080
// Address: 00455080
// Address Range: [[00455080, 004572f5]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00455080(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_demnfolk_cpp_FUN_00455080(CEnemy *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  char cVar4;
  CCharacter *pCVar5;
  CDoor *this_ptr;
  EWalkState EVar6;
  CEnemy_full_vtable *pCVar7;
  CGrave *this_ptr_00;
  char acVar8 [4];
  int iVar9;
  uint uVar10;
  CEnemy *pCVar11;
  EDeathState EVar12;
  int iVar13;
  SMotion *pSVar14;
  CPathMap *pCVar15;
  CDemonActor *pCVar16;
  uint *puVar17;
  char *pcVar18;
  float *pfVar19;
  char *pcVar20;
  float *pfVar21;
  byte bVar22;
  float10 fVar23;
  float afStackY_14ac [84];
  UActorVTable aUStackY_135c [3];
  float afStackY_1350 [72];
  UActorVTable aUStackY_1230 [3];
  float afStackY_1224 [754];
  CGore *this_ptr_01;
  CVector3f *pCVar24;
  CBoundingBox3D *out_box;
  CVector3f *pCVar25;
  CEnemy *in_stack_fffff9bc;
  float fVar26;
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
  float fStack_494;
  CVector3f CStack_488;
  float fStack_47c;
  float afStack_478 [4];
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  uint uStack_434;
  float fStack_430;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  uint uStack_410;
  CVector3f CStack_404;
  float fStack_3f8;
  float afStack_3f4 [4];
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d4;
  CVector3f CStack_3c8;
  char acStack_3bc [4];
  float afStack_3b8 [5];
  float fStack_3a4;
  float afStack_3a0 [2];
  char acStack_398 [4];
  float afStack_394 [4];
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  CDemonActor *pCStack_374;
  UActorVTable UStack_370;
  float fStack_36c;
  byte auStack_368 [8];
  float fStack_360;
  CVector3f CStack_35c;
  float fStack_350;
  float afStack_34c [4];
  float fStack_33c;
  CVector3f CStack_338;
  float fStack_32c;
  float afStack_328 [2];
  char acStack_320 [4];
  float afStack_31c [2];
  char acStack_314 [12];
  float fStack_308;
  float afStack_304 [2];
  char acStack_2fc [8];
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  int iStack_2e4;
  float afStack_2e0 [2];
  CVector3f CStack_2d8;
  float fStack_2cc;
  float afStack_2c8 [5];
  float fStack_2b4;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float afStack_28c [2];
  int iStack_284;
  char acStack_278 [4];
  float afStack_274 [5];
  byte auStack_260 [8];
  float fStack_258;
  CVector3f CStack_254;
  CDemonActor *pCStack_248;
  UActorVTable UStack_244;
  CMotionList *pCStack_240;
  float fStack_23c;
  float afStack_238 [5];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  CVector3f CStack_218;
  float fStack_20c;
  float afStack_208 [4];
  float fStack_1f8;
  float fStack_1f4;
  CMotionController_vtable *pCStack_1f0;
  float afStack_1ec [4];
  float fStack_1dc;
  float fStack_1d0;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  CVector3f CStack_188;
  CVector3f CStack_17c;
  float fStack_170;
  float fStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  float fStack_134;
  float afStack_130 [5];
  float fStack_11c;
  float afStack_118 [5];
  float afStack_104 [3];
  float fStack_f8;
  float fStack_ec;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  double dStack_c8;
  double dStack_c0;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float *pfStack_a0;
  float fStack_9c;
  float *pfStack_98;
  float fStack_94;
  CLocation *pCStack_90;
  CCharacter *pCStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  char *pcStack_48;
  CMotionController *pCStack_44;
  CVector3f *pCStack_40;
  CMotionController *pCStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar22 = 0;
  iVar9 = (*(((param_1->base).base.vtable._ue)->_ue).randomize)(param_1);
  if (iVar9 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0((uint)param_1[1].base.base.platform_position_delta.z);
    return;
  }
  if (((param_1->base).model.part_data.visibility_flags
       [*(int *)(param_1[1].base.base.create_event + 0x5c)] == 0) &&
     (EVar12 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base),
     EVar12 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(param_1->base).model.base,0x17,1);
  }
  pCStack_8c = (CCharacter *)(param_1->base).grabbed_by;
  if (pCStack_8c != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_8c->base).vtable._uc;
    core_skeleton_cpp_FUN_0054dcc0();
    pCVar25 = &CStack_188;
    CStack_188.x = fStack_2b4;
    *(float *)((int)&CStack_188 + (uint)bVar22 * -8 + 4) = afStack_2c8[(uint)bVar22 * -2 + 6];
    *(float *)((int)&CStack_188 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
         afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
    iVar9 = (*(pCStack_14->_uc).attractActorToward)(pCStack_8c,(CDemonActor *)param_1,pCVar25);
    if (iVar9 != 0) {
      return;
    }
    (param_1->base).grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < (float)param_1[1].base.base.standing_platform) {
    param_1[1].base.base.standing_platform =
         (CPlatform *)((float)param_1[1].base.base.standing_platform - param_2);
  }
  pfStack_a0 = afStack_518;
  fStack_a4 = param_2 * param_1->speed * param_1[1].base.base.platform_orientation_delta.z;
  pfStack_98 = afStack_4e8;
  pCStack_3c = &(param_1->base).model.base;
LAB_0045511e:
  if (0.0 < fStack_a4) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_3c,&fStack_a4);
    if (uVar10 < 0xb) {
      if (uVar10 < 5) {
        if (uVar10 == 2) {
          iVar9 = *(int *)(param_1[1].base.base.actor_name + 0x10);
          if (iVar9 != 0) {
            pCVar5 = &param_1[1].base;
            (pCVar5->base).actor_name[0x10] = '\0';
            (pCVar5->base).actor_name[0x11] = '\0';
            (pCVar5->base).actor_name[0x12] = '\0';
            (pCVar5->base).actor_name[0x13] = '\0';
            iVar13 = unkafter_demnfolk_cpp_FUN_004580a0();
            if (-1 < iVar13) {
              core_charactr_cpp_FUN_004319d0(param_1,iVar13,iVar9);
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1);
            }
          }
        }
        else {
LAB_0045515b:
          core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,uVar10);
        }
        goto LAB_0045511e;
      }
      if (uVar10 < 6) {
        fStack_28 = 1.4013e-45;
        if (param_1->victim != (CCharacter *)0x0) {
          fStack_2f4 = 0x3FA66666;
          acStack_2fc[0] = '\0';
          acStack_2fc[1] = '\0';
          acStack_2fc[2] = '\0';
          acStack_2fc[3] = '\0';
          acStack_2fc[4] = '\0';
          acStack_2fc[5] = '\0';
          acStack_2fc[6] = '\0';
          acStack_2fc[7] = '\0';
          core_actor_cpp_FUN_00408b80();
          fStack_380 = fStack_290;
          afStack_394[(uint)bVar22 * -2 + 6] = afStack_28c[(uint)bVar22 * -2];
          afStack_394[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
               afStack_28c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          pCVar5 = param_1->victim;
          fStack_1c4 = fStack_380 - (pCVar5->base).location.position.x;
          fStack_1c0 = fStack_37c - (pCVar5->base).location.position.y;
          fStack_1bc = fStack_378 - (pCVar5->base).location.position.z;
          afStack_1ec[1] = fStack_1c4;
          afStack_1ec[(uint)bVar22 * -2 + 2] = afStack_1ec[(uint)bVar22 * -2 + 0xb];
          afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 3] =
               afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xc];
          afStack_1ec[2] = 0.0;
          if (SQRT(afStack_1ec[3] * afStack_1ec[3] + afStack_1ec[1] * afStack_1ec[1]) <= 1.0) {
            if (fStack_28 != 0.0) {
              acStack_314[0] = '\0';
              acStack_314[1] = '\0';
              acStack_314[2] = '\0';
              acStack_314[3] = '\0';
              acStack_314[8] = '\0';
              acStack_314[9] = '\0';
              acStack_314[10] = '\0';
              acStack_314[0xb] = '\0';
              acStack_314[4] = '\0';
              acStack_314[5] = '\0';
              acStack_314[6] = -0x80;
              acStack_314[7] = '@';
              core_actor_cpp_FUN_00408b80();
              CStack_404.x = fStack_ec;
              *(float *)((int)&CStack_404 + (uint)bVar22 * -8 + 4) =
                   afStack_118[(uint)bVar22 * -2 + 0xc];
              *(float *)((int)&CStack_404 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
                   afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
              puVar17 = (uint *)((int)param_1->victim + (uint)bVar22 * -8 + 0x24);
              CStack_14c.x = (param_1->victim->base).location.position.x;
              *(uint *)((int)&CStack_14c + (uint)bVar22 * -8 + 4) = *puVar17;
              *(uint *)((int)&CStack_14c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
                   puVar17[(uint)bVar22 * -2 + 1];
              CStack_14c.y = CStack_404.y;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->victim->base)
              ;
              iVar9 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                (g_CDemonSetPtr,&CStack_404,&CStack_14c);
              if (iVar9 != 0) {
                fStack_28 = 0.0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            }
            if ((fStack_28 == 0.0) ||
               (iVar9 = (*(((param_1->victim->base).vtable._uc)->_uc).getGrabbed)
                                  (param_1->victim,(CDemonActor *)param_1,0), iVar9 != 0)) {
              if (fStack_28 == 0.0) {
                unkafter_demnfolk_cpp_FUN_00458fb0();
              }
              goto LAB_0045511e;
            }
          }
        }
        unkafter_demnfolk_cpp_FUN_00458fb0();
        goto LAB_0045511e;
      }
      if (uVar10 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,uVar10);
        goto LAB_0045511e;
      }
      if (param_1->victim != (CCharacter *)0x0) {
        core_skeleton_cpp_FUN_0054dbd0();
        fStack_1b8 = fStack_164;
        afStack_1ec[(uint)bVar22 * -2 + 0xe] =
             *(float *)((int)&CStack_17c + ((uint)bVar22 * -2 + 6) * 4 + 4);
        afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xf] =
             *(float *)((int)&CStack_17c + ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 7) * 4 + 4);
        core_actor_cpp_FUN_00408b80();
        CStack_338.x = fStack_170;
        *(uint *)((int)&CStack_338 + (uint)bVar22 * -8 + 4) =
             *(uint *)((int)&CStack_17c + ((uint)bVar22 * -2 + 3) * 4 + 4);
        *(uint *)((int)&CStack_338 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_17c + ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 4) * 4 + 4)
        ;
        if (*(int *)(param_1[1].base.base.create_event + 0x58) < 0) {
          fVar26 = CStack_338.x - (param_1->victim->base).location.position.x;
          fVar3 = CStack_338.z - (param_1->victim->base).location.position.z;
          if ((float)_DAT_005ba722 < SQRT(fVar3 * fVar3 + fVar26 * fVar26)) {
            unkafter_demnfolk_cpp_FUN_00458fb0();
            goto LAB_0045511e;
          }
        }
        else {
          pCVar11 = (CEnemy *)
                    (*(((param_1->victim->base).vtable._uc)->_uc).getGrabber)(param_1->victim);
          if (pCVar11 != param_1) {
            in_stack_fffff9bc = param_1;
            unkafter_demnfolk_cpp_FUN_00458fb0();
            goto LAB_0045511e;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_610);
        pCStack_14 = (CCharacter_full_vtable *)
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
        SStack_610.damage_amount =
             (float)pCStack_14 * param_1[1].base.base.platform_orientation_delta.z;
        SStack_610.attacker = (CDemonActor *)param_1;
        SStack_610.wielder = (CDemonActor *)param_1;
        (*(((param_1->victim->base).vtable._uc)->_uc).processDamage)(param_1->victim,&SStack_610);
        dStack_c0 = (double)SStack_610.damage_amount;
        if (0.0 < dStack_c0) {
          fVar23 = (float10)SStack_610.damage_amount * (float10)_DAT_005ba6f2 *
                   (float10)_DAT_005ba6fa;
          fVar26 = 0.0;
          round();
          fStack_54 = (float)(int)ROUND(fVar23);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                    (g_CGorePtr,&CStack_338,(CVector3f *)0x0,(int)fStack_54,(EBloodType)fVar26);
        }
        in_stack_fffff9bc = (CEnemy *)0x455583;
        EVar12 = (*(((param_1->victim->base).vtable._uc)->_uc).getDeathState)(param_1->victim);
        if (0 < (int)EVar12) {
          (*(((param_1->victim->base).vtable._uc)->_uc).releaseFromGrab)(param_1->victim);
          unkafter_demnfolk_cpp_FUN_00458fb0();
        }
        in_stack_fffff9c4 = (char *)param_1;
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"ghoul-eat-?.wav");
        goto LAB_0045511e;
      }
      unkafter_demnfolk_cpp_FUN_00458fb0();
    }
    else if (uVar10 < 0xc) {
      iVar9 = unkafter_demnfolk_cpp_FUN_004580a0();
      if (iVar9 < 0) {
        _DAT_01d71de0 = "..\\core\\demnfolk.cpp";
        _DAT_01d71de4 = 0x21f;
        core_main_c_FUN_004e4330();
      }
      if ((param_1->base).carry_hands[iVar9].carry_actor != (CDemonActor *)0x0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s lugging %s\n");
        CStack_218.x = 0.0;
        CStack_218.y = 6.0;
        CStack_218.z = 17.0;
        (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                  (&param_1->base,iVar9,&CStack_218);
        in_stack_fffff9c4 = "demn_taunt__???.wav";
        in_stack_fffff9bc = (CEnemy *)0x4556a2;
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar10 < 0xd) {
      fStack_b0 = (float)unkafter_demnfolk_cpp_FUN_004580a0();
      if ((int)fStack_b0 < 0) {
        _DAT_01d71de0 = "..\\core\\demnfolk.cpp";
        _DAT_01d71de4 = 0x236;
        core_main_c_FUN_004e4330();
      }
      pcStack_48 = (param_1->base).base.actor_name + (int)fStack_b0 * 0x78;
      if (*(int *)(pcStack_48 + 0x25b0) != 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s tossing %s\n");
        CStack_3c8.x = 0.0;
        CStack_3c8.y = 0.0;
        CStack_3c8.z = 1.0;
        if (param_1->victim != (CCharacter *)0x0) {
          out_box = (CBoundingBox3D *)0x4557f4;
          (**(code **)(*(int *)(*(int *)(pcStack_48 + 0x25b0) + 0x154) + 0x1c))();
          pfVar19 = afStack_584;
          pfVar21 = &fStack_524;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar21 = *pfVar19;
            pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
            pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
          }
          auStack_368._0_4_ = fStack_524 + *pfStack_a0;
          auStack_368._4_4_ = fStack_520 + pfStack_a0[1];
          fStack_360 = fStack_51c + pfStack_a0[2];
          fStack_224 = fStack_524 + *pfStack_a0;
          afStack_238[(uint)bVar22 * -2 + 6] = *(float *)(auStack_368 + (uint)bVar22 * -8 + 4);
          pcVar18 = pcStack_48;
          afStack_238[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
               *(float *)(auStack_368 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
          pfVar19 = afStack_118 + 5;
          fStack_428 = fStack_224 * _DAT_005ba6ea;
          fStack_424 = fStack_220 * _DAT_005ba6ea;
          fStack_420 = fStack_21c * _DAT_005ba6ea;
          afStack_104[0] = fStack_224 * _DAT_005ba6ea;
          afStack_118[(uint)bVar22 * -2 + 6] = afStack_478[(uint)bVar22 * -2 + 0x15];
          afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
               afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x16];
          core_actor_cpp_FUN_00408b80(*(uint *)(pcVar18 + 0x25b0),pfVar19);
          fStack_2a8 = fStack_3d4;
          afStack_2c8[(uint)bVar22 * -2 + 9] = afStack_3f4[(uint)bVar22 * -2 + 9];
          afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
               afStack_3f4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
          (*((param_1->victim->base).vtable._ub)->getBoundingBox)(&param_1->victim->base,out_box);
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
          afStack_478[(uint)bVar22 * -2 + 9] = afStack_208[(uint)bVar22 * -2];
          afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
               afStack_208[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          acVar8 = (char  [4])(fStack_458 * _DAT_005ba6ea);
          acStack_278[0] = acVar8[0];
          acStack_278[1] = acVar8[1];
          acStack_278[2] = acVar8[2];
          acStack_278[3] = acVar8[3];
          afStack_274[0] = fStack_454 * _DAT_005ba6ea;
          afStack_274[1] = fStack_450 * _DAT_005ba6ea;
          acStack_320[0] = acVar8[0];
          acStack_320[1] = acVar8[1];
          acStack_320[2] = acVar8[2];
          acStack_320[3] = acVar8[3];
          afStack_31c[(uint)bVar22 * -2] = afStack_274[(uint)bVar22 * -2];
          afStack_31c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               afStack_274[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          core_actor_cpp_FUN_00408b80();
          fStack_2cc = afStack_274[2];
          afStack_2c8[(uint)bVar22 * -2] = afStack_274[(uint)bVar22 * -2 + 3];
          afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               afStack_274[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
          fStack_3a4 = fStack_2cc - fStack_2a8;
          afStack_3a0[0] = afStack_2c8[0] - fStack_2a4;
          afStack_3a0[1] = afStack_2c8[1] - fStack_2a0;
          fStack_464 = fStack_2cc - fStack_2a8;
          afStack_478[(uint)bVar22 * -2 + 6] = afStack_3a0[(uint)bVar22 * -2];
          afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
               afStack_3a0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          fStack_68 = SQRT(fStack_45c * fStack_45c +
                           fStack_464 * fStack_464 + fStack_460 * fStack_460);
          if (0.0 < fStack_68) {
            core_actor_cpp_FUN_00408b40();
            fStack_134 = fStack_e0;
            afStack_130[(uint)bVar22 * -2] = afStack_118[(uint)bVar22 * -2 + 0xf];
            afStack_130[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
            fVar26 = 1.0 / fStack_68;
            fStack_4ac = fStack_134 * fVar26;
            fStack_4a8 = afStack_130[0] * fVar26;
            fStack_4a4 = afStack_130[1] * fVar26;
            CStack_17c.x = fStack_134 * fVar26;
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
        CStack_3c8.x = CStack_3c8.x * _DAT_005ba6ee;
        CStack_3c8.z = CStack_3c8.z * _DAT_005ba6ee;
        CStack_3c8.y = CStack_3c8.y * _DAT_005ba6ee + _DAT_005ba71a;
        (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                  (&param_1->base,(int)fStack_b0,&CStack_3c8);
        in_stack_fffff9c4 = "demn_taunt__???.wav";
        in_stack_fffff9bc = (CEnemy *)0x4557ab;
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar10 < 0xe) {
      this_ptr = *(CDoor **)(param_1[1].base.base.actor_name + 0x1c);
      if (this_ptr != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00465060(this_ptr,0.3);
        (**(code **)(*(int *)(*(int *)(param_1[1].base.base.actor_name + 0x1c) + 0x154) + 0x2c))();
        pCVar5 = &param_1[1].base;
        (pCVar5->base).actor_name[0x1c] = '\0';
        (pCVar5->base).actor_name[0x1d] = '\0';
        (pCVar5->base).actor_name[0x1e] = '\0';
        (pCVar5->base).actor_name[0x1f] = '\0';
      }
    }
    else {
      if (uVar10 < 0x65) goto LAB_0045515b;
      if (uVar10 < 0x66) {
        (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,"fall-?.wav");
      }
      else if (uVar10 == 0x29a) {
        core_skeleton_cpp_FUN_0054dbd0();
        afStack_238[2] = fStack_41c;
        afStack_238[(uint)bVar22 * -2 + 3] = afStack_478[(uint)bVar22 * -2 + 0x18];
        afStack_238[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
             afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x19];
        core_actor_cpp_FUN_00408b80();
        fVar26 = 0.0;
        iVar9 = 3;
        pCVar24 = (CVector3f *)0x0;
        pCVar25 = &CStack_140;
        CStack_140.x = fStack_494;
        *(float *)((int)&CStack_140 + (uint)bVar22 * -8 + 4) = afStack_4c0[(uint)bVar22 * -2 + 0xc];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_140 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                  (this_ptr_01,pCVar25,pCVar24,iVar9,(EBloodType)fVar26);
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
        (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,acStack_5d4);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,uVar10);
      }
    }
    goto LAB_0045511e;
  }
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850();
  if (((((param_1->base).model.part_data.visibility_flags
         [*(int *)(param_1[1].base.base.create_event + 0x54)] == 0) &&
       ((param_1->base).model.part_data.visibility_flags
        [*(int *)(param_1[1].base.base.create_event + 0x4c)] == 0)) ||
      ((param_1->base).model.part_data.visibility_flags
       [*(int *)(param_1[1].base.base.create_event + 0x60)] == 0)) &&
     ((0.0 <= param_1[1].base.base.platform_position_delta.x &&
      (fVar26 = param_1[1].base.base.platform_position_delta.x + param_2,
      param_1[1].base.base.platform_position_delta.x = fVar26, (float)_DAT_005ba68a <= fVar26)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffff9b4);
    (*(((param_1->base).base.vtable._uc)->_uc).processDamage)
              (&param_1->base,(SDamageInfo *)&stack0xfffff9b4);
    param_1[1].base.base.platform_position_delta.x = -1.0;
  }
  pCVar2 = &(param_1->base).model;
  pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  iVar9 = pSVar14->state_index;
  fStack_9c = 0.0;
  iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&param_1->base,param_2);
  if (iVar13 == 0) {
    fStack_30 = -1.0;
    fStack_a8 = 0.3;
    pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
    switch(pSVar14->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(param_2 * (float)_DAT_005ba6e2);
      if (iVar9 == 0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(param_1,param_2);
        if (iVar9 != 0) {
          unkafter_demnfolk_cpp_FUN_00458fb0();
        }
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        if (param_1->victim == (CCharacter *)0x0) {
          in_stack_fffff9bc = (CEnemy *)0x45657c;
          iVar9 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))()
          ;
          if (iVar9 == 0) break;
          g_CGamePtr->player_hit_flag = 1;
          param_1->victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        }
        if (param_1->victim != (CCharacter *)0x0) {
          unkafter_demnfolk_cpp_FUN_00458fb0();
          in_stack_fffff9bc = (CEnemy *)0x456532;
          iVar9 = sound_sndmain_cpp_FUN_00556700
                            ((uint)param_1[1].base.base.platform_position_delta.z);
          if (iVar9 == 0) {
            if (*(int *)(param_1[1].base.base.create_event + 0x18) == 0) {
              in_stack_fffff9bc = param_1;
              fVar26 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                        ((CDemonActor *)param_1,"demn_chase_???.wav");
              param_1[1].base.base.platform_position_delta.z = fVar26;
            }
            else {
              in_stack_fffff9bc = param_1;
              fVar26 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                        ((CDemonActor *)param_1,"demn_chase_???.wav");
              param_1[1].base.base.platform_position_delta.z = fVar26;
            }
          }
        }
      }
      else {
LAB_00456085:
        fVar26 = 1.4013e-45;
        iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->base).model.base,iVar9,(int)fVar26);
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      pCVar5 = param_1->victim;
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      if (param_1->victim == (CCharacter *)0x0) {
        in_stack_fffff9bc = (CEnemy *)0x45663f;
        iVar9 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
        if (iVar9 != 0) {
          g_CGamePtr->player_hit_flag = 1;
          param_1->victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        }
      }
      pCVar2 = &(param_1->base).model;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(param_1,param_2);
        if (iVar9 == 0) {
          fVar26 = 1.4013e-45;
          iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar2->base,iVar9,(int)fVar26);
        }
      }
      else {
        if (pCVar5 == (CCharacter *)0x0) {
          iVar9 = sound_sndmain_cpp_FUN_00556700
                            ((uint)param_1[1].base.base.platform_position_delta.z);
          if (iVar9 == 0) {
            if (*(int *)(param_1[1].base.base.create_event + 0x18) == 0) {
              pcVar18 = "demn_chase_???.wav";
            }
            else {
              pcVar18 = "demn_chase_???.wav";
            }
            fVar26 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                      ((CDemonActor *)param_1,pcVar18);
            param_1[1].base.base.platform_position_delta.z = fVar26;
          }
          goto LAB_004566b3;
        }
        if (param_1->victim != (CCharacter *)0x0) {
          pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_004fc930(&pCVar2->base);
          if ((float)_DAT_005ba6b2 < (float)pCStack_14) {
            pCVar5 = param_1->victim;
            fStack_158 = (pCVar5->base).location.position.x -
                         (param_1->base).base.location.position.x;
            fStack_154 = (pCVar5->base).location.position.y -
                         (param_1->base).base.location.position.y;
            fStack_150 = (pCVar5->base).location.position.z -
                         (param_1->base).base.location.position.z;
            afStack_3f4[2] = fStack_158;
            afStack_3f4[(uint)bVar22 * -2 + 3] =
                 *(float *)((int)&CStack_17c + ((uint)bVar22 * -2 + 9) * 4 + 4);
            afStack_3f4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                 *(float *)((int)&CStack_17c + ((uint)bVar22 * -2 + (uint)bVar22 * -2 + 10) * 4 + 4)
            ;
            if (afStack_2c8 + 0xb != afStack_3f4 + 2) {
              fStack_29c = afStack_3f4[2];
              fStack_298 = afStack_3f4[3];
              fStack_294 = fStack_3e4;
            }
            fStack_70 = SQRT(fStack_294 * fStack_294 +
                             fStack_29c * fStack_29c + fStack_298 * fStack_298);
            if ((fStack_70 < _DAT_005ba6ba) && (_DAT_005ba6be < fStack_70)) {
              iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
              if (iVar9 == 1) {
                (param_1->base).base.orient.vec.y =
                     (param_1->base).base.orient.vec.y + _DAT_005ba6c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(param_1->base).model.base,0xb,1);
              }
              else {
                unkafter_demnfolk_cpp_FUN_00458fb0();
              }
            }
          }
        }
        iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(param_2 * (float)_DAT_005ba6ca);
        if (iVar9 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,4,1);
        }
        fStack_80 = (float)(uint)((param_1->base).model.part_data.visibility_flags
                                  [*(int *)(param_1[1].base.base.create_event + 0x4c)] != 0);
        if ((param_1->base).model.part_data.visibility_flags
            [*(int *)(param_1[1].base.base.create_event + 0x54)] != 0) {
          fStack_80 = (float)((int)fStack_80 + 1);
        }
        iVar9 = core_demnfolk_cpp_FUN_00457740();
        if (iVar9 == 0) {
          fStack_7c = 0x3FA66666;
          fStack_78 = (float)unkafter_demnfolk_cpp_FUN_004580a0();
          if (((-1 < (int)fStack_78) &&
              (pCVar16 = (param_1->base).carry_hands[(int)fStack_78].carry_actor,
              pCVar16 != (CDemonActor *)0x0)) &&
             (*(int *)(param_1[1].base.base.actor_name + 0x14) == 1)) {
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
              in_stack_fffff9bc = (CEnemy *)0x456903;
              core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_35c);
              CStack_35c.x = fStack_590 - fStack_59c;
              CStack_35c.y = fStack_58c - fStack_598;
              CStack_35c.z = fStack_588 - fStack_594;
              fStack_1a0 = fStack_590 - fStack_59c;
              afStack_1ec[(uint)bVar22 * -2 + 0x14] =
                   *(float *)((int)&CStack_35c + (uint)bVar22 * -8 + 4);
              afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x15] =
                   *(float *)((int)&CStack_35c + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
              fStack_6c = fStack_198 * (float)_DAT_005ba69a + 1.0;
            }
            fStack_7c = fStack_6c;
          }
          fVar26 = 0.34906584;
          pCVar25 = (CVector3f *)0x3f8ccccd;
          afStack_3b8[2] = 0.0;
          afStack_3b8[4] = fStack_7c;
          afStack_3b8[3] = 0.0;
          pCVar15 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (&param_1->base,&(param_1->victim->base).location.position,pCVar15,
                             pCVar25,fVar26,(float)in_stack_fffff9bc);
          pCStack_44 = &(param_1->base).model.base;
          if (iVar9 < 0) {
            engine_console_cpp_FUN_00441ff0();
            in_stack_fffff9bc = (CEnemy *)0x1;
            iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (pCStack_44,iVar9,(int)in_stack_fffff9bc);
          }
          else if (iVar9 < 1) {
            in_stack_fffff9bc = *(CEnemy **)(param_1[1].base.base.actor_name + 0x14);
            fStack_64 = (float)unkafter_demnfolk_cpp_FUN_004580a0();
            pCVar5 = param_1->victim;
            fStack_47c = (param_1->base).base.location.position.x -
                         (pCVar5->base).location.position.x;
            afStack_478[0] =
                 (param_1->base).base.location.position.y - (pCVar5->base).location.position.y;
            afStack_478[1] =
                 (param_1->base).base.location.position.z - (pCVar5->base).location.position.z;
            fStack_4c4 = fStack_47c;
            afStack_4c0[(uint)bVar22 * -2] = afStack_478[(uint)bVar22 * -2];
            afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            if (SQRT(afStack_4c0[1] * afStack_4c0[1] +
                     fStack_4c4 * fStack_4c4 + afStack_4c0[0] * afStack_4c0[0]) <
                (float)_DAT_005ba6d2) {
              core_actor_cpp_FUN_00408bf0();
              in_stack_fffff9bc = (CEnemy *)acStack_398;
              acStack_398[0] = acStack_3bc[0];
              acStack_398[1] = acStack_3bc[1];
              acStack_398[2] = acStack_3bc[2];
              acStack_398[3] = acStack_3bc[3];
              afStack_394[(uint)bVar22 * -2] = afStack_3b8[(uint)bVar22 * -2];
              afStack_394[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                   afStack_3b8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
              uStack_434 = uStack_410;
              afStack_478[(uint)bVar22 * -2 + 0x12] = afStack_478[(uint)bVar22 * -2 + 0x1b];
              afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13] =
                   afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x1c];
              if (((ABS(fStack_430) < (float)_DAT_005ba6da) && (-1 < (int)fStack_64)) &&
                 (uVar10 = *(uint *)(param_1[1].base.base.actor_name + 0x14), 1 < uVar10)) {
                if (uVar10 < 3) {
                  if ((param_1->base).carry_hands[(int)fStack_64].carry_actor != (CDemonActor *)0x0)
                  {
                    engine_console_cpp_FUN_00441ff0();
                    in_stack_fffff9bc = (CEnemy *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              (pCStack_44,0x22,1);
                  }
                }
                else if ((uVar10 == 3) &&
                        ((param_1->base).carry_hands[(int)fStack_64].carry_actor !=
                         (CDemonActor *)0x0)) {
                  engine_console_cpp_FUN_00441ff0();
                  in_stack_fffff9bc = (CEnemy *)0x1;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_44,0x20,1);
                }
              }
            }
          }
          else if ((0 < (int)fStack_80) && (param_1->attack_cooldown <= 0.0)) {
            in_stack_fffff9bc = (CEnemy *)param_1->victim;
            pCVar16 = (*(((in_stack_fffff9bc->base).base.vtable._uc)->_uc).getGrabber)
                                ((CCharacter *)in_stack_fffff9bc);
            if (pCVar16 == (CDemonActor *)0x0) {
              if (((int)fStack_78 < 0) ||
                 ((param_1->base).carry_hands[(int)fStack_78].carry_actor == (CDemonActor *)0x0)) {
                in_stack_fffff9bc = (CEnemy *)&(param_1->base).model;
                EVar12 = (*(((param_1->victim->base).vtable._uc)->_uc).getDeathState)
                                   (param_1->victim);
                if (EVar12 == DEATH_STATE_ALIVE) {
                  in_stack_fffff9c4 = (char *)0x1;
                  fVar26 = 1.82169e-44;
                }
                else {
                  iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
                  if (iVar9 == 0) {
                    in_stack_fffff9c4 = (char *)0x1;
                    fVar26 = 6.02558e-44;
                  }
                  else {
                    in_stack_fffff9c4 = (char *)0x1;
                    fVar26 = 5.88545e-44;
                  }
                }
              }
              else {
                fVar26 = 1.4013e-45;
                in_stack_fffff9bc = (CEnemy *)0xc;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)in_stack_fffff9bc,(int)fVar26,(int)in_stack_fffff9c4);
              param_1->attack_cooldown = 0.8;
            }
          }
        }
      }
      break;
    case 8:
    case 9:
      pCVar2 = &(param_1->base).model;
      pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_004fc930(&pCVar2->base);
      if ((float)_DAT_005ba6b2 < (float)pCStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,4,1);
      }
      break;
    case 0xc:
      if (param_1->victim == (CCharacter *)0x0) {
LAB_00456ca5:
        unkafter_demnfolk_cpp_FUN_00458fb0();
      }
      else {
        iVar9 = unkafter_demnfolk_cpp_FUN_004580a0();
        if (((-1 < iVar9) &&
            (EVar12 = (*(((param_1->victim->base).vtable._uc)->_uc).getDeathState)(param_1->victim),
            (int)EVar12 < 1)) &&
           ((param_1->base).carry_hands[iVar9].carry_actor != (CDemonActor *)0x0)) {
          in_stack_fffff9bc = (CEnemy *)param_1->victim;
          pCVar16 = (*(((in_stack_fffff9bc->base).base.vtable._uc)->_uc).getGrabber)
                              ((CCharacter *)in_stack_fffff9bc);
          if (pCVar16 == (CDemonActor *)0x0) {
            pCVar16 = (param_1->base).carry_hands[iVar9].carry_actor;
            fStack_5c = 1.0;
            if (pCVar16 != (CDemonActor *)0x0) {
              in_stack_fffff9bc = (CEnemy *)0x456d60;
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
              afStack_118[2] = fStack_308;
              afStack_118[(uint)bVar22 * -2 + 3] = afStack_304[(uint)bVar22 * -2];
              afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
              afStack_2c8[2] = afStack_118[2];
              afStack_2c8[(uint)bVar22 * -2 + 3] = afStack_118[(uint)bVar22 * -2 + 3];
              afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
              fStack_44c = afStack_2c8[2];
              afStack_478[(uint)bVar22 * -2 + 0xc] = afStack_2c8[(uint)bVar22 * -2 + 3];
              afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd] =
                   afStack_2c8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
              afStack_478[2] = fStack_44c;
              afStack_478[(uint)bVar22 * -2 + 3] = afStack_478[(uint)bVar22 * -2 + 0xc];
              afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                   afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
              fStack_5c = fStack_468 * (float)_DAT_005ba69a + fStack_5c;
            }
            fStack_30 = fStack_5c;
            fStack_60 = core_motion_cpp_FUN_004fc930(&(param_1->base).model.base);
            dStack_c8 = (double)fStack_60;
            pCStack_14 = (CCharacter_full_vtable *)fStack_60;
            if ((1.0 <= dStack_c8) && (dStack_c8 <= _DAT_005ba6aa)) {
              fStack_9c = 1.4013e-45;
            }
            break;
          }
        }
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
        unkafter_demnfolk_cpp_FUN_00458fb0();
      }
      break;
    case 0xd:
      pCVar5 = param_1->victim;
      if ((pCVar5 == (CCharacter *)0x0) ||
         (EVar12 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5), 0 < (int)EVar12)) {
LAB_004566b3:
        unkafter_demnfolk_cpp_FUN_00458fb0();
      }
      else {
        in_stack_fffff9bc = (CEnemy *)param_1->victim;
        pCVar11 = (CEnemy *)
                  (*(((in_stack_fffff9bc->base).base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffff9bc);
        if (pCVar11 == (CEnemy *)0x0) {
          fStack_30 = 0x3FA66666;
          fStack_a8 = 3.0;
        }
        else if (pCVar11 != param_1) goto LAB_00456ca5;
      }
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_0054dbd0();
        auStack_260._0_4_ = fStack_f8;
        *(float *)(auStack_260 + (uint)bVar22 * -8 + 4) = afStack_118[(uint)bVar22 * -2 + 9];
        *(float *)(auStack_260 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
        core_actor_cpp_FUN_00408b80();
        fVar26 = 0.0;
        CStack_254.x = fStack_23c;
        *(float *)((int)&CStack_254 + (uint)bVar22 * -8 + 4) = afStack_238[(uint)bVar22 * -2];
        *(float *)((int)&CStack_254 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             afStack_238[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_254,(EBloodType)fVar26);
        param_1->pool_me = 1;
      }
      break;
    case 0x23:
      iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,(char *)&param_1[1].base.base.location);
      if ((iVar9 != 0) &&
         (fVar26 = param_1[1].base.base.platform_orientation_delta.x - param_2,
         param_1[1].base.base.platform_orientation_delta.x = fVar26, fVar26 < 0.0)) {
        pCStack_90 = &(param_1->base).base.location;
        fStack_94 = 0.0;
        fStack_38 = 0.0;
        param_1[1].base.base.platform_orientation_delta.x =
             param_1[1].base.base.platform_orientation_delta.x + 1.0;
        for (; (int)fStack_94 < g_CDemonSetPtr->character_count;
            fStack_94 = (float)((int)fStack_94 + 1)) {
          iVar9 = *(int *)((int)g_CDemonSetPtr->characters + (int)fStack_38);
          iVar13 = (**(code **)(*(int *)(iVar9 + 0x154) + 0xe4))();
          if (iVar13 != 0) {
            pCStack_248 = (CDemonActor *)(*(float *)(iVar9 + 0x20) - (pCStack_90->position).x);
            UStack_244 = (UActorVTable)(*(float *)(iVar9 + 0x24) - (pCStack_90->position).y);
            pCStack_240 = (CMotionList *)(*(float *)(iVar9 + 0x28) - (pCStack_90->position).z);
            pCStack_374 = pCStack_248;
            (&UStack_370)[(uint)bVar22 * -2] = (&UStack_244)[(uint)bVar22 * -2];
            (&UStack_370)[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 (&UStack_244)[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            if ((ABS((float)UStack_370) <= (float)_DAT_005ba72a) &&
               (UStack_370._ub = (CDemonActor_vtable *)0x0,
               SQRT(fStack_36c * fStack_36c + (float)pCStack_374 * (float)pCStack_374) <=
               param_1->guard_distance)) {
              engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(param_1->base).model.base,0x24,1);
              this_ptr_00 = *(CGrave **)(param_1[1].base.base.actor_name + 0x18);
              if (this_ptr_00 != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004cf580(this_ptr_00);
                pCVar5 = &param_1[1].base;
                (pCVar5->base).actor_name[0x18] = '\0';
                (pCVar5->base).actor_name[0x19] = '\0';
                (pCVar5->base).actor_name[0x1a] = '\0';
                (pCVar5->base).actor_name[0x1b] = '\0';
              }
              param_1->guard_distance = 100.0;
              break;
            }
          }
          fStack_38 = (float)((int)fStack_38 + 4);
        }
      }
      break;
    case 0x29:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      pCVar5 = param_1->victim;
      if ((pCVar5 != (CCharacter *)0x0) &&
         ((fVar26 = (param_1->base).base.location.position.x - (pCVar5->base).location.position.x,
          fVar3 = (param_1->base).base.location.position.z - (pCVar5->base).location.position.z,
          SQRT(fVar3 * fVar3 + fVar26 * fVar26) <= (float)_DAT_005ba6a2 &&
          (ABS((param_1->base).base.location.position.y - (pCVar5->base).location.position.y) <=
           (float)_DAT_005ba6aa)))) {
        fVar26 = 1.4013e-45;
        in_stack_fffff9bc = (CEnemy *)core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&pCVar2->base,(int)in_stack_fffff9bc,(int)fVar26);
      }
      break;
    case 0x2a:
    case 0x2b:
      iVar9 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
      if ((iVar9 == 0) &&
         ((*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2),
         param_1->victim != (CCharacter *)0x0)) goto LAB_00456085;
      break;
    case 0x2c:
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00534820
                (g_CDemonSetPtr,(CDemonActor *)param_1);
      break;
    case 0x2e:
      fVar26 = param_1[1].base.base.platform_orientation_delta.y - param_2;
      param_1[1].base.base.platform_orientation_delta.y = fVar26;
      if (fVar26 <= 0.0) {
        pCVar7 = (param_1->base).base.vtable._ue;
        param_1[1].base.base.platform_orientation_delta.y = 0.0;
        (*(pCVar7->_ue).updateVictim)(param_1,param_2);
        pCVar5 = param_1->victim;
        if (pCVar5 != (CCharacter *)0x0) {
          afStack_34c[2] =
               (param_1->base).base.location.position.x - (pCVar5->base).location.position.x;
          afStack_34c[3] =
               (param_1->base).base.location.position.y - (pCVar5->base).location.position.y;
          fStack_33c = (param_1->base).base.location.position.z - (pCVar5->base).location.position.z
          ;
          fStack_440 = afStack_34c[2];
          afStack_478[(uint)bVar22 * -2 + 0xf] = afStack_34c[(uint)bVar22 * -2 + 3];
          afStack_478[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10] =
               afStack_34c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
          if (&fStack_2f0 != afStack_478 + 0xe) {
            fStack_2f0 = fStack_440;
            fStack_2ec = fStack_43c;
            fStack_2e8 = fStack_438;
          }
          fStack_74 = fStack_2e8 * fStack_2e8 + fStack_2f0 * fStack_2f0 + fStack_2ec * fStack_2ec;
          fStack_24 = (float)(((int)fStack_74 >> 1) + _DAT_01d1a0a4);
          if (fStack_24 <= (float)_DAT_005ba692) {
            fStack_2c = (param_1->base).collision_cylinder_top;
            if (fStack_2c < (param_1->base).collision_cylinder_bottom) {
              fStack_2c = (param_1->base).model.bounding_box.max.y;
            }
            if (fStack_2c < (param_1->base).collision_cylinder_bottom) {
              fStack_2c = (param_1->base).collision_cylinder_bottom + (float)_DAT_005ba69a;
            }
            fVar26 = 0.0;
            do {
              fStack_1c = (float)(int)fVar26 * _DAT_005ba702 * _DAT_005ba706;
              pCStack_14 = (CCharacter_full_vtable *)fVar26;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              fcos((float10)fStack_1c);
              fVar23 = (float10)fsin((float10)fStack_1c);
              fStack_18 = (float)core_setcolid_cpp_FUN_0053de10
                                           (g_CDemonSetPtr,(param_1->base).base.location.position.x,
                                            (param_1->base).base.location.position.z,
                                            (float)(fVar23 * (float10)_DAT_005ba70a));
              in_stack_fffff9bc = (CEnemy *)0x45627a;
              pCStack_14 = (CCharacter_full_vtable *)fStack_18;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              if (fStack_18 < 1.0) break;
              fVar26 = (float)((int)fVar26 + 1);
            } while ((int)fVar26 < 4);
            if (3 < (int)fVar26) goto LAB_00456085;
            param_1[1].base.base.platform_orientation_delta.y = 3.0;
            param_1->victim = (CCharacter *)0x0;
          }
        }
      }
    }
    if ((0.0 <= fStack_30) && (param_1->victim != (CCharacter *)0x0)) {
      (param_1->base).walk_step_speed = fStack_a8 * param_1->speed * param_2;
      core_charactr_cpp_FUN_00434850();
      fVar26 = 0.7853982;
      pCVar25 = (CVector3f *)0x40400000;
      afStack_130[2] = 0.0;
      afStack_130[4] = fStack_30;
      afStack_130[3] = 0.0;
      pCVar15 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (&param_1->base,&(param_1->victim->base).location.position,pCVar15,pCVar25,
                         fVar26,(float)in_stack_fffff9bc);
      if (iVar9 != 1) {
        engine_console_cpp_FUN_00441ff0();
        unkafter_demnfolk_cpp_FUN_00458fb0();
        (param_1->base).turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_00455cd6;
  }
  EVar6 = (param_1->base).walk_state;
  if (EVar6 < 2) {
    if (EVar6 == WALK_STATE_WALKING) goto LAB_00455cbe;
LAB_00455f5f:
    iVar9 = 0;
  }
  else {
    if (2 < EVar6) {
      if (EVar6 == WALK_STATE_NO_PATH) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->base).model.base,2,1);
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
        goto LAB_00455cd6;
      }
      goto LAB_00455f5f;
    }
LAB_00455cbe:
    if (iVar9 == 4) goto LAB_00455cd6;
    iVar9 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(param_1->base).model.base,iVar9,1);
LAB_00455cd6:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                      (&(param_1->base).model.base);
  fStack_34 = (float)pSVar14->state_index;
  pCStack_40 = &(param_1->base).model.accumulated_root_motion;
  if (fStack_34 == 4.90454e-44) {
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCStack_40->x = (param_1->base).model.accumulated_root_motion.y;
  }
  else if (fStack_34 == 5.04467e-44) {
    core_actor_cpp_FUN_00408b00();
    pCVar1 = &(param_1->base).base.location;
    fStack_32c = fStack_194;
    afStack_328[(uint)bVar22 * -2] = afStack_1ec[(uint)bVar22 * -2 + 0x17];
    afStack_328[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
         afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x18];
    fVar26 = (param_1->base).base.location.position.y;
    (pCVar1->position).x = (pCVar1->position).x + fStack_32c;
    fVar3 = (param_1->base).base.location.position.z;
    (param_1->base).base.location.position.y = fVar26 + afStack_328[0];
    (param_1->base).base.location.position.z = fVar3 + afStack_328[1];
    pCStack_40->z = 0.0;
    pCStack_40->y = pCStack_40->z;
    pCStack_40->x = pCStack_40->y;
  }
  else {
    iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0(&param_1->base);
    if (iVar9 != 0) {
      pCVar5 = param_1->victim;
      if ((pCVar5 != (CCharacter *)0x0) &&
         (pCVar11 = (CEnemy *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
         pCVar11 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->victim->base);
      }
      core_charactr_cpp_FUN_0042c1e0();
      afStack_208[2] = (param_1->base).velocity.x * param_2;
      afStack_208[3] = (param_1->base).velocity.y * param_2;
      fStack_1f8 = (param_1->base).velocity.z * param_2;
      fStack_d4 = afStack_208[2];
      afStack_118[(uint)bVar22 * -2 + 0x12] = afStack_208[(uint)bVar22 * -2 + 3];
      afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13] =
           afStack_208[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
      pCVar25 = &(param_1->base).position_delta;
      fStack_4a0 = fStack_d4 + pCVar25->x;
      fStack_49c = fStack_d0 + (param_1->base).position_delta.y;
      fStack_498 = fStack_cc + (param_1->base).position_delta.z;
      afStack_4c0[2] = fStack_4a0;
      afStack_4c0[(uint)bVar22 * -2 + 3] = afStack_4c0[(uint)bVar22 * -2 + 9];
      afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
           afStack_4c0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
      pCVar24 = &(param_1->base).model.accumulated_root_motion;
      fStack_1ac = afStack_4c0[2] + pCVar24->x;
      fStack_1a8 = afStack_4c0[3] + (param_1->base).model.accumulated_root_motion.y;
      fStack_1a4 = fStack_4b0 + (param_1->base).model.accumulated_root_motion.z;
      CStack_2d8.x = fStack_1ac;
      *(float *)((int)&CStack_2d8 + (uint)bVar22 * -8 + 4) = afStack_1ec[(uint)bVar22 * -2 + 0x11];
      *(float *)((int)&CStack_2d8 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x12];
      (param_1->base).position_delta.z = 0.0;
      (param_1->base).position_delta.y = (param_1->base).position_delta.z;
      pCVar25->x = (param_1->base).position_delta.y;
      (param_1->base).model.accumulated_root_motion.z = 0.0;
      (param_1->base).model.accumulated_root_motion.y =
           (param_1->base).model.accumulated_root_motion.z;
      pCVar24->x = (param_1->base).model.accumulated_root_motion.y;
      core_charactr_cpp_FUN_0042c230(&param_1->base,&CStack_2d8);
      if ((fStack_34 == 5.60519e-45) &&
         (fStack_50 = (float)core_actor_cpp_castToClassHash_FUN_0040c840(), fStack_4c = fStack_50,
         fStack_50 != 0.0)) {
        (**(code **)(*(int *)((int)fStack_50 + 0x154) + 0x1c))();
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
        afStack_394[2] = fStack_50c + fStack_500;
        afStack_394[(uint)bVar22 * -2 + 3] = afStack_34c[(uint)bVar22 * -2];
        afStack_394[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
             afStack_34c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
        fStack_1f4 = afStack_394[2] * _DAT_005ba6ea;
        pCStack_1f0 = (CMotionController_vtable *)(afStack_394[3] * _DAT_005ba6ea);
        afStack_1ec[0] = fStack_384 * _DAT_005ba6ea;
        fStack_3f8 = afStack_394[2] * _DAT_005ba6ea;
        afStack_3f4[(uint)bVar22 * -2] = (float)(&pCStack_1f0)[(uint)bVar22 * -2];
        afStack_3f4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
             afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2];
        core_actor_cpp_FUN_00408b80();
        iStack_2e4 = iStack_284;
        afStack_2e0[(uint)bVar22 * -2] = afStack_28c[(uint)bVar22 * -2 + 3];
        afStack_2e0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
             afStack_28c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
        core_actor_cpp_FUN_00408bf0();
        fStack_1dc = fStack_1d0;
        afStack_1ec[(uint)bVar22 * -2 + 5] = afStack_1ec[(uint)bVar22 * -2 + 8];
        afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 6] =
             afStack_1ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 9];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
        fStack_3e0 = fStack_11c;
        afStack_3f4[(uint)bVar22 * -2 + 6] = afStack_118[(uint)bVar22 * -2];
        afStack_3f4[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
             afStack_118[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
        if (ABS(fStack_3dc) < (float)_DAT_005ba712) {
          iVar9 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
          iVar13 = 0x27;
          if (iVar9 != 0) {
            iVar13 = 0x28;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,iVar13,1);
          *(float *)(param_1[1].base.base.actor_name + 0x1c) = fStack_50;
        }
      }
    }
  }
  fVar26 = fStack_34;
  core_charactr_cpp_FUN_0042cd30(&param_1->base);
  if (fVar26 != 4.90454e-44) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(param_1->base).model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&param_1->base,param_2);
  }
  if (param_1->pool_me == 0) {
    iVar9 = *(int *)(param_1[1].base.base.create_event + 0x5c);
    if ((param_1->base).model.part_data.visibility_flags[iVar9] == 0) {
      iVar13 = *(int *)(param_1[1].base.base.create_event + 0x44);
      fVar26 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)(param_1[1].base.base.create_event + 0x48));
      if ((param_1->base).model.part_data.visibility_flags
          [*(int *)(param_1[1].base.base.create_event + 0x48)] != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)(param_1[1].base.base.create_event + 0x4c));
      }
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)(param_1[1].base.base.create_event + 0x50));
      if ((param_1->base).model.part_data.visibility_flags
          [*(int *)(param_1[1].base.base.create_event + 0x50)] != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)(param_1[1].base.base.create_event + 0x54));
      }
      iVar13 = *(int *)(param_1[1].base.base.create_event + 0x1c);
      fVar26 = 0.7;
      iVar9 = *(int *)(param_1[1].base.base.create_event + 0x60);
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90(&param_1->base,iVar9,iVar13,fVar26);
    if ((*(int *)(param_1[1].base.base.create_event + 0x58) < 0) &&
       (iVar9 = *(int *)(param_1[1].base.base.create_event + 0x5c),
       (param_1->base).model.part_data.visibility_flags[iVar9] != 0)) {
      (param_1->base).model.part_data.visibility_flags[iVar9] = 0;
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)(param_1[1].base.base.create_event + 0x5c));
      (param_1->base).model.part_data.visibility_flags
      [*(int *)(param_1[1].base.base.create_event + 0x5c)] = 1;
    }
    core_charactr_cpp_FUN_0042fc90();
  }
  iVar9 = unkafter_demnfolk_cpp_FUN_004580a0();
  if (((fStack_9c != 0.0) && (-1 < iVar9)) &&
     (pCVar16 = (param_1->base).carry_hands[iVar9].carry_actor, pCVar16 != (CDemonActor *)0x0)) {
    (*((pCVar16->vtable)._ub)->processMeleeHit)(pCVar16,2);
    return;
  }
  return;
}
