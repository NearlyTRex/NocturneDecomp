// Name: core_demnfolk.cpp_CDemnfolk_process_FUN_00459100
// Address: 00459100
// Address Range: [[00459100, 0045b110]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_process_FUN_00459100(CDemnfolk *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_demnfolk_cpp_CDemnfolk_process_FUN_00459100(CDemnfolk *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  EWalkState EVar5;
  CEnemy_full_vtable *pCVar6;
  CCharacter *pCVar7;
  char *pcVar8;
  CCharacter_full_vtable *pCVar9;
  int iVar10;
  uint uVar11;
  CDemnfolk *pCVar12;
  EDeathState EVar13;
  SMotion *pSVar14;
  int iVar15;
  CPathMap *pCVar16;
  CDemonActor *pCVar17;
  uint *puVar18;
  uint *puVar19;
  byte bVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_1430 [950];
  CCharacter *pCVar23;
  float *pfVar24;
  CVector3f *pCVar25;
  CBoundingBox3D *out_box;
  EBloodType EVar26;
  CDemnfolk *in_stack_fffffac0;
  CCharacter *in_stack_fffffac4;
  float fVar27;
  CDemnfolk *in_stack_fffffac8;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  uint uStack_448;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  CVector3f CStack_424;
  float fStack_418;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  uint uStack_3f4;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  CVector3f CStack_3dc;
  uint uStack_3d0;
  float afStack_3cc [4];
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_388;
  uint uStack_37c;
  float fStack_378;
  float fStack_370;
  CVector3f CStack_364;
  float fStack_358;
  float afStack_354 [4];
  float fStack_344;
  CVector3f CStack_340;
  float fStack_334;
  float afStack_330 [2];
  CVector3f CStack_328;
  float fStack_31c;
  float afStack_318 [6];
  float afStack_300 [5];
  CVector3f CStack_2ec;
  float fStack_2e0;
  float afStack_2dc [4];
  float fStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float afStack_2b8 [5];
  CVector3f CStack_2a4;
  float fStack_298;
  float afStack_294 [4];
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  uint uStack_274;
  uint uStack_270;
  float fStack_26c;
  CVector3f CStack_268;
  float fStack_25c;
  float afStack_258 [5];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  uint uStack_238;
  uint uStack_234;
  float fStack_230;
  float fStack_22c;
  float afStack_228 [3];
  CPlatform *pCStack_21c;
  float afStack_218 [4];
  float fStack_208;
  CVector3f CStack_1fc;
  float fStack_1f0;
  float afStack_1ec [4];
  float fStack_1dc;
  float fStack_1d8;
  float afStack_1d4 [2];
  byte auStack_1cc [8];
  float fStack_1c4;
  UOrientationVector UStack_1c0;
  CVector3f CStack_1b4;
  float fStack_1a8;
  float afStack_1a4 [5];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  CVector3f CStack_178;
  float fStack_16c;
  float afStack_168 [4];
  float fStack_158;
  float fStack_154;
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float afStack_12c [5];
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d0;
  double dStack_c4;
  double dStack_b4;
  float fStack_a8;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float *pfStack_84;
  int iStack_80;
  CLocation *pCStack_7c;
  int iStack_74;
  uint uStack_70;
  float fStack_6c;
  int iStack_68;
  char *pcStack_64;
  float *pfStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  CCharacter *pCStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_34;
  CMotionController *pCStack_30;
  CVector3f *pCStack_2c;
  CMotionController *pCStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar20 = 0;
  iVar10 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] == 0) &&
     (EVar13 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar13 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0x18,1);
  }
  pCStack_50 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCStack_50 != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_50->base).vtable._uc;
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model);
    pCVar9 = pCStack_14;
    pCVar23 = pCStack_50;
    pCVar25 = &CStack_2a4;
    CStack_2a4.x = fStack_1a8;
    *(float *)((int)&CStack_2a4 + (uint)bVar20 * -8 + 4) = afStack_1a4[(uint)bVar20 * -2];
    pCVar12 = this_ptr;
    *(float *)((int)&CStack_2a4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
         afStack_1a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    iVar10 = (*(pCVar9->_uc).attractActorToward)(pCVar23,(CDemonActor *)pCVar12,pCVar25);
    if (iVar10 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[3]);
  if (iVar10 != 0) {
    if (g_CGamePtr->slow_motion_mode == 1) {
      fVar27 = (1.0 - g_CGamePtr->slow_motion_timer) * (float)_DAT_005d801b + (float)_DAT_005d801b;
      uVar11 = this_ptr->sfx_handles[3];
      fStack_a8 = fVar27;
    }
    else {
      uVar11 = this_ptr->sfx_handles[3];
      fVar27 = 1.0;
    }
    sound_sndmain_cpp_setSfxBaseFrequency_FUN_00573980(uVar11,fVar27);
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  pfStack_60 = (float *)&stack0xfffffbac;
  fStack_9c = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pfStack_84 = (float *)&stack0xfffffb04;
  pCStack_28 = &(this_ptr->base).base.model.base;
LAB_004591e5:
  if (0.0 < fStack_9c) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_28,&fStack_9c);
    if (uVar11 < 0xb) {
      if (uVar11 < 5) {
        if (uVar11 == 2) {
          pCVar17 = this_ptr->pickup_target;
          if (pCVar17 != (CDemonActor *)0x0) {
            this_ptr->pickup_target = (CDemonActor *)0x0;
            iVar10 = core_demnfolk_cpp_FUN_0045bec0(this_ptr);
            if (-1 < iVar10) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0
                        ((CCharacter *)this_ptr,iVar10,(int)pCVar17,0x3e4ccccd,0);
              engine_console_cpp_CConsole_printf_FUN_00445430
                        (g_CConsolePtr,"%s picked up %s using hand %d\n");
            }
          }
        }
        else {
          core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar11);
        }
        goto LAB_004591e5;
      }
      if (uVar11 < 6) {
        iStack_94 = 1;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          fStack_26c = 0x3FA66666;
          uStack_274 = 0;
          uStack_270 = 0;
          core_actor_cpp_FUN_00408b40(this_ptr);
          fStack_40c = fStack_208;
          *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 0xf) * 4) =
               afStack_218[(uint)bVar20 * -2 + 5];
          *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x10) * 4) =
               afStack_218[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 6];
          pCVar23 = (this_ptr->base).victim;
          fStack_280 = fStack_40c - (pCVar23->base).location.position.x;
          fStack_27c = fStack_408 - (pCVar23->base).location.position.y;
          fStack_278 = fStack_404 - (pCVar23->base).location.position.z;
          fStack_118 = fStack_280;
          afStack_12c[(uint)bVar20 * -2 + 6] = afStack_294[(uint)bVar20 * -2 + 6];
          afStack_12c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
               afStack_294[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
          uStack_114 = 0;
          if (SQRT(fStack_110 * fStack_110 + fStack_118 * fStack_118) <= 1.0) {
            afStack_318[2] = 0.0;
            afStack_318[4] = 0.0;
            afStack_318[3] = 4.0;
            core_actor_cpp_FUN_00408b40(this_ptr);
            CStack_3dc.x = fStack_2e0;
            *(float *)((int)&CStack_3dc + (uint)bVar20 * -8 + 4) = afStack_2dc[(uint)bVar20 * -2];
            *(float *)((int)&CStack_3dc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 afStack_2dc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pCVar23 = (this_ptr->base).victim;
            puVar18 = (uint *)((int)pCVar23 + (uint)bVar20 * -8 + 0x24);
            CStack_1b4.x = (pCVar23->base).location.position.x;
            *(uint *)((int)&CStack_1b4 + (uint)bVar20 * -8 + 4) = *puVar18;
            *(uint *)((int)&CStack_1b4 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 puVar18[(uint)bVar20 * -2 + 1];
            CStack_1b4.y = CStack_3dc.y;
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                      (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
            iVar10 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                               (g_CDemonSetPtr,&CStack_3dc,&CStack_1b4);
            if (iVar10 != 0) {
              iStack_94 = 0;
            }
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            if ((iStack_94 == 0) ||
               (pCVar23 = (this_ptr->base).victim,
               iVar10 = (*(((pCVar23->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar23,(CDemonActor *)this_ptr,0), iVar10 != 0)) {
              if (iStack_94 == 0) {
                core_demnfolk_cpp_FUN_0045d060();
              }
              goto LAB_004591e5;
            }
          }
        }
        core_demnfolk_cpp_FUN_0045d060();
        goto LAB_004591e5;
      }
      if (uVar11 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar11);
        goto LAB_004591e5;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_skeleton_cpp_FUN_00569040(pCStack_28);
        uStack_dc = uStack_448;
        afStack_fc[(uint)bVar20 * -2 + 9] = *(float *)(&stack0xfffffbbc + (uint)bVar20 * -8);
        afStack_fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
             *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 1) * 4);
        core_actor_cpp_FUN_00408b40(this_ptr);
        CStack_340.x = fStack_418;
        *(uint *)((int)&CStack_340 + (uint)bVar20 * -8 + 4) =
             *(uint *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 0xc) * 4);
        *(uint *)((int)&CStack_340 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8) =
             *(uint *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd) * 4);
        if (this_ptr->part_indices[4] < 0) {
          pCVar23 = (this_ptr->base).victim;
          fVar27 = CStack_340.x - (pCVar23->base).location.position.x;
          fVar4 = CStack_340.z - (pCVar23->base).location.position.z;
          if ((float)_DAT_005d80a3 < SQRT(fVar4 * fVar4 + fVar27 * fVar27)) {
            core_demnfolk_cpp_FUN_0045d060();
            goto LAB_004591e5;
          }
        }
        else {
          pCVar23 = (this_ptr->base).victim;
          pCVar12 = (CDemnfolk *)(*(((pCVar23->base).vtable._uc)->_uc).getGrabber)(pCVar23);
          if (pCVar12 != this_ptr) {
            in_stack_fffffac0 = this_ptr;
            core_demnfolk_cpp_FUN_0045d060();
            goto LAB_004591e5;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffabc);
        pCStack_14 = (CCharacter_full_vtable *)
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,20.0);
        fVar27 = (float)pCStack_14 * this_ptr->difficulty_speed_scale;
        pCVar23 = (this_ptr->base).victim;
        (*(((pCVar23->base).vtable._uc)->_uc).processDamage)
                  (pCVar23,(SDamageInfo *)&stack0xfffffabc);
        dStack_b4 = (double)fVar27;
        if (0.0 < dStack_b4) {
          fVar21 = (float10)fVar27 * (float10)_DAT_005d807b * (float10)_DAT_005d8083;
          fVar27 = 0.0;
          round();
          iStack_34 = (int)ROUND(fVar21);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                    (g_CGorePtr,&CStack_340,(CVector3f *)0x0,iStack_34,(EBloodType)fVar27);
        }
        in_stack_fffffac4 = (this_ptr->base).victim;
        in_stack_fffffac0 = (CDemnfolk *)0x459652;
        EVar13 = (*(((in_stack_fffffac4->base).vtable._uc)->_uc).getDeathState)(in_stack_fffffac4);
        if (0 < (int)EVar13) {
          pCVar23 = (this_ptr->base).victim;
          in_stack_fffffac4 = (CCharacter *)0x45966c;
          (*(((pCVar23->base).vtable._uc)->_uc).releaseFromGrab)(pCVar23);
          in_stack_fffffac8 = (CDemnfolk *)0x459675;
          core_demnfolk_cpp_FUN_0045d060();
        }
        iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[2]);
        if (iVar10 == 0) {
          (*(((this_ptr->base).base.base.vtable._uh)->_uh).canReachPickup)
                    ((CHero *)this_ptr,(CDemonActor *)in_stack_fffffac0,(int)in_stack_fffffac4,
                     (float *)in_stack_fffffac8);
        }
        goto LAB_004591e5;
      }
      core_demnfolk_cpp_FUN_0045d060();
    }
    else if (uVar11 < 0xc) {
      iVar10 = core_demnfolk_cpp_FUN_0045bec0(this_ptr);
      if (iVar10 < 0) {
        _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
        _DAT_01d1d404 = 0x24a;
        core_main_c_FUN_005030e0();
      }
      if ((this_ptr->base).base.carry_hands[iVar10].carry_actor != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s lugging %s\n");
        CStack_1fc.x = 0.0;
        CStack_1fc.y = 6.0;
        CStack_1fc.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar10,&CStack_1fc);
        in_stack_fffffac4 = (CCharacter *)0x459783;
        in_stack_fffffac8 = this_ptr;
        (*(((this_ptr->base).base.base.vtable._uh)->_uh).isWeaponDrawn)((CHero *)this_ptr);
      }
    }
    else if (uVar11 < 0x65) {
      if (uVar11 == 0xc) {
        iStack_74 = core_demnfolk_cpp_FUN_0045bec0(this_ptr);
        if (iStack_74 < 0) {
          _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
          _DAT_01d1d404 = 0x261;
          core_main_c_FUN_005030e0();
        }
        pcStack_64 = (this_ptr->base).base.base.actor_name + iStack_74 * 0x78;
        if (*(int *)(pcStack_64 + 0x25b0) != 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s tossing %s\n");
          CStack_2ec.x = 0.0;
          CStack_2ec.y = 0.0;
          CStack_2ec.z = 1.0;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            out_box = (CBoundingBox3D *)0x4598d2;
            (**(code **)(*(int *)(*(int *)(pcStack_64 + 0x25b0) + 0x154) + 0x1c))();
            puVar18 = (uint *)&stack0xfffffb40;
            puVar19 = &stack0xfffffba0;
            for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar19 = *puVar18;
              puVar18 = puVar18 + (uint)bVar20 * -2 + 1;
              puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
            }
            fStack_244 = fStack_460 + *pfStack_60;
            fStack_240 = fStack_45c + pfStack_60[1];
            fStack_23c = fStack_458 + pfStack_60[2];
            fStack_430 = fStack_460 + *pfStack_60;
            *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 6) * 4) =
                 afStack_258[(uint)bVar20 * -2 + 6];
            pcVar8 = pcStack_64;
            *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 7) * 4) =
                 afStack_258[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
            pfVar24 = afStack_218 + 1;
            fStack_3ac = fStack_430 * _DAT_005d8073;
            fStack_3a8 = fStack_42c * _DAT_005d8073;
            fStack_3a4 = fStack_428 * _DAT_005d8073;
            afStack_218[1] = fStack_430 * _DAT_005d8073;
            afStack_218[(uint)bVar20 * -2 + 2] = afStack_3cc[(uint)bVar20 * -2 + 9];
            afStack_218[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 3] =
                 afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
            core_actor_cpp_FUN_00408b40(*(uint *)(pcVar8 + 0x25b0),pfVar24);
            fStack_31c = fStack_25c;
            afStack_318[(uint)bVar20 * -2] = afStack_258[(uint)bVar20 * -2];
            afStack_318[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_258[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pCVar23 = (this_ptr->base).victim;
            (*((pCVar23->base).vtable._ub)->getBoundingBox)(&pCVar23->base,out_box);
            puVar18 = (uint *)&stack0xfffffb10;
            puVar19 = &stack0xfffffaf8;
            for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar19 = *puVar18;
              puVar18 = puVar18 + (uint)bVar20 * -2 + 1;
              puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
            }
            fStack_3e8 = fStack_508 + *pfStack_84;
            fStack_3e4 = fStack_504 + pfStack_84[1];
            fStack_3e0 = fStack_500 + pfStack_84[2];
            afStack_354[2] = fStack_508 + *pfStack_84;
            afStack_354[(uint)bVar20 * -2 + 3] =
                 *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 0x18) * 4);
            afStack_354[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                 *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x19) * 4);
            fStack_184 = afStack_354[2] * _DAT_005d8073;
            fStack_180 = afStack_354[3] * _DAT_005d8073;
            fStack_17c = fStack_344 * _DAT_005d8073;
            afStack_258[2] = afStack_354[2] * _DAT_005d8073;
            afStack_258[(uint)bVar20 * -2 + 3] = afStack_1a4[(uint)bVar20 * -2 + 9];
            afStack_258[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                 afStack_1a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
            core_actor_cpp_FUN_00408b40((this_ptr->base).victim);
            fStack_43c = fStack_154;
            *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 3) * 4) =
                 afStack_168[(uint)bVar20 * -2 + 6];
            *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 4) * 4) =
                 afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
            fStack_e8 = fStack_43c - fStack_31c;
            fStack_e4 = fStack_438 - afStack_318[0];
            fStack_e0 = fStack_434 - afStack_318[1];
            afStack_168[2] = fStack_43c - fStack_31c;
            afStack_168[(uint)bVar20 * -2 + 3] = afStack_fc[(uint)bVar20 * -2 + 6];
            afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                 afStack_fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
            fStack_a0 = SQRT(fStack_158 * fStack_158 +
                             afStack_168[2] * afStack_168[2] + afStack_168[3] * afStack_168[3]);
            if (0.0 < fStack_a0) {
              core_actor_cpp_FUN_00408b00(this_ptr);
              afStack_3cc[2] = fStack_388;
              afStack_3cc[(uint)bVar20 * -2 + 3] = afStack_3cc[(uint)bVar20 * -2 + 0x12];
              afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                   afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x13];
              fVar27 = 1.0 / fStack_a0;
              fStack_2bc = afStack_3cc[2] * fVar27;
              afStack_2b8[0] = afStack_3cc[3] * fVar27;
              afStack_2b8[1] = fStack_3bc * fVar27;
              CStack_424.x = afStack_3cc[2] * fVar27;
              *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 9) * 4) =
                   afStack_2b8[(uint)bVar20 * -2];
              *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 10) * 4) =
                   afStack_2b8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              if (&CStack_2ec != &CStack_424) {
                CStack_2ec.x = CStack_424.x;
                CStack_2ec.y = CStack_424.y;
                CStack_2ec.z = CStack_424.z;
              }
            }
          }
          CStack_2ec.x = CStack_2ec.x * _DAT_005d8077;
          CStack_2ec.z = CStack_2ec.z * _DAT_005d8077;
          CStack_2ec.y = CStack_2ec.y * _DAT_005d8077 + _DAT_005d809b;
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,iStack_74,&CStack_2ec);
          in_stack_fffffac4 = (CCharacter *)0x45988a;
          in_stack_fffffac8 = this_ptr;
          (*(((this_ptr->base).base.base.vtable._uh)->_uh).isWeaponDrawn)((CHero *)this_ptr);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar11);
      }
    }
    else if (uVar11 < 0x66) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"fall-?.wav");
    }
    else if (uVar11 == 0x29a) {
      core_skeleton_cpp_FUN_00569040(pCStack_28);
      uStack_3d0 = uStack_148;
      afStack_3cc[(uint)bVar20 * -2] = afStack_168[(uint)bVar20 * -2 + 9];
      afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
           afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
      core_actor_cpp_FUN_00408b40(this_ptr);
      EVar26 = BLOOD_TYPE_RED;
      iVar10 = 3;
      pCVar25 = (CVector3f *)0x0;
      CStack_328.x = fStack_3b8;
      *(float *)((int)&CStack_328 + (uint)bVar20 * -8 + 4) = afStack_3cc[(uint)bVar20 * -2 + 6];
      *(float *)((int)&CStack_328 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060(g_CGorePtr,&CStack_328,pCVar25,iVar10,EVar26)
      ;
      (*(((this_ptr->base).base.base.vtable._uh)->_uh).canReachPickup)
                ((CHero *)this_ptr,(CDemonActor *)in_stack_fffffac0,(int)in_stack_fffffac4,
                 (float *)in_stack_fffffac8);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar11);
    }
    goto LAB_004591e5;
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr);
  if ((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0) &&
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0x18,1);
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base);
  iVar10 = pSVar14->state_index;
  iStack_a4 = 0;
  iVar15 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar15 == 0) {
    fStack_1c = -1.0;
    fStack_98 = 0.3;
    pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base);
    switch(pSVar14->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(delta_time * (float)_DAT_005d806b);
      if (iVar10 == 0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar10 != 0) {
          core_demnfolk_cpp_FUN_0045d060();
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          in_stack_fffffac0 = (CDemnfolk *)0x45a550;
          iVar10 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))
                             ();
          if (iVar10 == 0) break;
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        }
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_demnfolk_cpp_FUN_0045d060();
          in_stack_fffffac0 = (CDemnfolk *)0x45a517;
          iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
          if (iVar10 == 0) {
            in_stack_fffffac0 = (CDemnfolk *)0x45a52f;
            (*(((this_ptr->base).base.base.vtable._uh)->_uh).isWeaponDrawn)((CHero *)this_ptr);
          }
        }
      }
      else {
LAB_0045a07d:
        iVar15 = 1;
        iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,iVar10,iVar15);
      }
      break;
    case 4:
    case 6:
    case 7:
    case 8:
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.3);
      if (iVar10 != 0) {
        (*(((this_ptr->base).base.base.vtable._uh)->_uh).isWeaponDrawn)((CHero *)this_ptr);
      }
      pCVar23 = (this_ptr->base).victim;
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        in_stack_fffffac0 = (CDemnfolk *)0x45a617;
        iVar10 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))();
        if (iVar10 != 0) {
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        }
      }
      pCVar7 = (this_ptr->base).victim;
      pCVar2 = &(this_ptr->base).base.model;
      if (pCVar7 == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar10 == 0) {
          iVar15 = 1;
          iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar2->base,iVar10,iVar15);
        }
      }
      else {
        if (pCVar23 == (CCharacter *)0x0) {
          iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
          if (iVar10 == 0) {
            (*(((this_ptr->base).base.base.vtable._uh)->_uh).isWeaponDrawn)((CHero *)this_ptr);
          }
          goto LAB_0045a676;
        }
        if (pCVar7 != (CCharacter *)0x0) {
          pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00525020(&pCVar2->base);
          if ((float)_DAT_005d803b < (float)pCStack_14) {
            pCVar23 = (this_ptr->base).victim;
            fStack_190 = (pCVar23->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            fStack_18c = (pCVar23->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_188 = (pCVar23->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            auStack_1cc._0_4_ = fStack_190;
            afStack_1d4[(uint)bVar20 * -2 + 3] = afStack_1a4[(uint)bVar20 * -2 + 6];
            afStack_1d4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                 afStack_1a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
            if (&UStack_1c0 != (UOrientationVector *)(afStack_1d4 + 2)) {
              UStack_1c0.vec.x = (float)auStack_1cc._0_4_;
              UStack_1c0.vec.y = (float)auStack_1cc._4_4_;
              UStack_1c0.vec.z = fStack_1c4;
            }
            fStack_5c = SQRT(UStack_1c0.vec.z * UStack_1c0.vec.z +
                             UStack_1c0.vec.x * UStack_1c0.vec.x +
                             UStack_1c0.vec.y * UStack_1c0.vec.y);
            if ((fStack_5c < _DAT_005d8043) && (_DAT_005d8047 < fStack_5c)) {
              iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
              if (iVar10 == 1) {
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + _DAT_005d804b;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,0xc,1);
              }
              else {
                core_demnfolk_cpp_FUN_0045d060();
              }
            }
          }
        }
        iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(delta_time * (float)_DAT_005d8053);
        if (iVar10 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,4,1);
        }
        uStack_70 = (uint)((this_ptr->base).base.model.part_data.visibility_flags
                           [this_ptr->part_indices[1]] != 0);
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0)
        {
          uStack_70 = uStack_70 + 1;
        }
        iVar10 = core_demnfolk_cpp_FUN_0045b560(this_ptr);
        if (iVar10 == 0) {
          fStack_6c = 0x3FA66666;
          iStack_68 = core_demnfolk_cpp_FUN_0045bec0(this_ptr);
          if (((-1 < iStack_68) &&
              (pCVar17 = (this_ptr->base).base.carry_hands[iStack_68].carry_actor,
              pCVar17 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
            fStack_58 = 1.0;
            if (pCVar17 != (CDemonActor *)0x0) {
              (*((pCVar17->vtable)._ub)->getBoundingBox)
                        (pCVar17,(CBoundingBox3D *)in_stack_fffffac0);
              puVar18 = (uint *)&stack0xfffffb28;
              puVar19 = &stack0xfffffb88;
              for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar19 = *puVar18;
                puVar18 = puVar18 + (uint)bVar20 * -2 + 1;
                puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
              }
              in_stack_fffffac0 = (CDemnfolk *)0x45a8bf;
              core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_364);
              CStack_364.x = fStack_46c - fStack_478;
              CStack_364.y = fStack_468 - fStack_474;
              CStack_364.z = fStack_464 - fStack_470;
              fStack_298 = fStack_46c - fStack_478;
              afStack_294[(uint)bVar20 * -2] = *(float *)((int)&CStack_364 + (uint)bVar20 * -8 + 4);
              afStack_294[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   *(float *)((int)&CStack_364 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8);
              fStack_58 = afStack_294[1] * (float)_DAT_005d801b + 1.0;
            }
            fStack_6c = fStack_58;
          }
          fVar27 = 0.34906584;
          pCVar25 = (CVector3f *)0x3f8ccccd;
          uStack_2c8 = 0;
          fStack_2c0 = fStack_6c;
          uStack_2c4 = 0;
          pCVar23 = (this_ptr->base).victim;
          pCVar16 = (*((pCVar23->base).vtable._ub)->getPathMap)(&pCVar23->base);
          iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                             ((CCharacter *)this_ptr,
                              &(((this_ptr->base).victim)->base).location.position,pCVar16,pCVar25,
                              fVar27,(float)in_stack_fffffac0);
          pCStack_30 = &(this_ptr->base).base.model.base;
          if (iVar10 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00445430
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            in_stack_fffffac0 = (CDemnfolk *)0x1;
            iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (pCStack_30,iVar10,(int)in_stack_fffffac0);
          }
          else if (iVar10 < 1) {
            in_stack_fffffac0 = (CDemnfolk *)this_ptr->object_shape_class;
            iStack_54 = core_demnfolk_cpp_FUN_0045bec0();
            pCVar23 = (this_ptr->base).victim;
            fStack_334 = (this_ptr->base).base.base.location.position.x -
                         (pCVar23->base).location.position.x;
            afStack_330[0] =
                 (this_ptr->base).base.base.location.position.y -
                 (pCVar23->base).location.position.y;
            afStack_330[1] =
                 (this_ptr->base).base.base.location.position.z -
                 (pCVar23->base).location.position.z;
            fStack_1d8 = fStack_334;
            afStack_1d4[(uint)bVar20 * -2] = afStack_330[(uint)bVar20 * -2];
            afStack_1d4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_330[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            if (SQRT(afStack_1d4[1] * afStack_1d4[1] +
                     fStack_1d8 * fStack_1d8 + afStack_1d4[0] * afStack_1d4[0]) <
                (float)_DAT_005d805b) {
              core_actor_cpp_FUN_00408bb0();
              in_stack_fffffac0 = (CDemnfolk *)(afStack_300 + 2);
              afStack_300[2] = afStack_2b8[2];
              afStack_300[(uint)bVar20 * -2 + 3] = afStack_2b8[(uint)bVar20 * -2 + 3];
              afStack_300[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                   afStack_2b8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
              uStack_37c = afStack_12c[2];
              afStack_3cc[(uint)bVar20 * -2 + 0x15] = afStack_12c[(uint)bVar20 * -2 + 3];
              afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x16] =
                   afStack_12c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
              if (((ABS(fStack_378) < (float)_DAT_005d8063) && (-1 < iStack_54)) &&
                 (uVar11 = this_ptr->object_shape_class, 1 < uVar11)) {
                if (uVar11 < 3) {
                  if ((this_ptr->base).base.carry_hands[iStack_54].carry_actor != (CDemonActor *)0x0
                     ) {
                    engine_console_cpp_CConsole_printf_FUN_00445430
                              (g_CConsolePtr,"%s lugging\n");
                    in_stack_fffffac0 = (CDemnfolk *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              (pCStack_30,0x23,1);
                  }
                }
                else if ((uVar11 == 3) &&
                        ((this_ptr->base).base.carry_hands[iStack_54].carry_actor !=
                         (CDemonActor *)0x0)) {
                  engine_console_cpp_CConsole_printf_FUN_00445430
                            (g_CConsolePtr,"%s tossing\n");
                  in_stack_fffffac0 = (CDemnfolk *)0x1;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,0x21,1);
                }
              }
            }
          }
          else if ((0 < (int)uStack_70) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            in_stack_fffffac0 = (CDemnfolk *)(this_ptr->base).victim;
            pCVar17 = (*(((in_stack_fffffac0->base).base.base.vtable._uc)->_uc).getGrabber)
                                ((CCharacter *)in_stack_fffffac0);
            if (pCVar17 == (CDemonActor *)0x0) {
              if ((iStack_68 < 0) ||
                 ((this_ptr->base).base.carry_hands[iStack_68].carry_actor == (CDemonActor *)0x0)) {
                pCVar23 = (this_ptr->base).victim;
                in_stack_fffffac0 = (CDemnfolk *)&(this_ptr->base).base.model;
                EVar13 = (*(((pCVar23->base).vtable._uc)->_uc).getDeathState)(pCVar23);
                if (EVar13 == DEATH_STATE_ALIVE) {
                  in_stack_fffffac8 = (CDemnfolk *)0x1;
                  fVar27 = 1.96182e-44;
                }
                else {
                  iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
                  if (iVar10 == 0) {
                    in_stack_fffffac8 = (CDemnfolk *)0x1;
                    fVar27 = 6.16571e-44;
                  }
                  else {
                    in_stack_fffffac8 = (CDemnfolk *)0x1;
                    fVar27 = 6.02558e-44;
                  }
                }
              }
              else {
                fVar27 = 1.4013e-45;
                in_stack_fffffac0 = (CDemnfolk *)0xd;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)in_stack_fffffac0,(int)fVar27,(int)in_stack_fffffac8);
              (this_ptr->base).attack_cooldown = 0.8;
            }
          }
        }
      }
      break;
    case 5:
    case 9:
    case 10:
      pCVar2 = &(this_ptr->base).base.model;
      pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00525020(&pCVar2->base);
      if ((float)_DAT_005d803b < (float)pCStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,4,1);
      }
      break;
    case 0xd:
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
LAB_0045ac61:
        core_demnfolk_cpp_FUN_0045d060();
      }
      else {
        iVar10 = core_demnfolk_cpp_FUN_0045bec0(this_ptr);
        if (((-1 < iVar10) &&
            (pCVar23 = (this_ptr->base).victim,
            EVar13 = (*(((pCVar23->base).vtable._uc)->_uc).getDeathState)(pCVar23), (int)EVar13 < 1)
            ) && ((this_ptr->base).base.carry_hands[iVar10].carry_actor != (CDemonActor *)0x0)) {
          in_stack_fffffac0 = (CDemnfolk *)(this_ptr->base).victim;
          pCVar17 = (*(((in_stack_fffffac0->base).base.base.vtable._uc)->_uc).getGrabber)
                              ((CCharacter *)in_stack_fffffac0);
          if (pCVar17 == (CDemonActor *)0x0) {
            pCVar17 = (this_ptr->base).base.carry_hands[iVar10].carry_actor;
            fStack_48 = 1.0;
            if (pCVar17 != (CDemonActor *)0x0) {
              in_stack_fffffac0 = (CDemnfolk *)0x45ad1c;
              (*((pCVar17->vtable)._ub)->getBoundingBox)
                        (pCVar17,(CBoundingBox3D *)in_stack_fffffac8);
              puVar18 = (uint *)&stack0xfffffb70;
              puVar19 = &stack0xfffffb58;
              for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar19 = *puVar18;
                puVar18 = puVar18 + (uint)bVar20 * -2 + 1;
                puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_268);
              CStack_268.x = fStack_49c - fStack_4a8;
              CStack_268.y = fStack_498 - fStack_4a4;
              CStack_268.z = fStack_494 - fStack_4a0;
              fStack_22c = fStack_49c - fStack_4a8;
              afStack_228[(uint)bVar20 * -2] = *(float *)((int)&CStack_268 + (uint)bVar20 * -8 + 4);
              afStack_228[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   *(float *)((int)&CStack_268 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8);
              afStack_1a4[2] = fStack_22c;
              afStack_1a4[(uint)bVar20 * -2 + 3] = afStack_228[(uint)bVar20 * -2];
              afStack_1a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                   afStack_228[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              fStack_16c = afStack_1a4[2];
              afStack_168[(uint)bVar20 * -2] = afStack_1a4[(uint)bVar20 * -2 + 3];
              afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   afStack_1a4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
              fStack_370 = fStack_16c;
              afStack_3cc[(uint)bVar20 * -2 + 0x18] = afStack_168[(uint)bVar20 * -2];
              afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x19] =
                   afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              fStack_1f0 = fStack_370;
              afStack_1ec[(uint)bVar20 * -2] = afStack_3cc[(uint)bVar20 * -2 + 0x18];
              afStack_1ec[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x19];
              fStack_48 = afStack_1ec[1] * (float)_DAT_005d801b + fStack_48;
            }
            fStack_1c = fStack_48;
            fStack_4c = core_motion_cpp_FUN_00525020(&(this_ptr->base).base.model.base);
            dStack_c4 = (double)fStack_4c;
            pCStack_14 = (CCharacter_full_vtable *)fStack_4c;
            if ((1.0 <= dStack_c4) && (dStack_c4 <= _DAT_005d8033)) {
              iStack_a4 = 1;
            }
            break;
          }
        }
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s gave up swing\n");
        core_demnfolk_cpp_FUN_0045d060();
      }
      break;
    case 0xe:
      pCVar23 = (this_ptr->base).victim;
      if ((pCVar23 == (CCharacter *)0x0) ||
         (EVar13 = (*(((pCVar23->base).vtable._uc)->_uc).getDeathState)(pCVar23), 0 < (int)EVar13))
      {
LAB_0045a676:
        core_demnfolk_cpp_FUN_0045d060();
      }
      else {
        in_stack_fffffac0 = (CDemnfolk *)(this_ptr->base).victim;
        pCVar12 = (CDemnfolk *)
                  (*(((in_stack_fffffac0->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffac0);
        if (pCVar12 == (CDemnfolk *)0x0) {
          fStack_1c = 0x3FA66666;
          fStack_98 = 3.0;
        }
        else if (pCVar12 != this_ptr) goto LAB_0045ac61;
      }
      break;
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(&(this_ptr->base).base.model);
        uStack_3f4 = uStack_d0;
        *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 0x15) * 4) =
             afStack_fc[(uint)bVar20 * -2 + 0xc];
        *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x16) * 4) =
             afStack_fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
        core_actor_cpp_FUN_00408b40(this_ptr);
        EVar26 = BLOOD_TYPE_RED;
        CStack_178.x = fStack_130;
        *(float *)((int)&CStack_178 + (uint)bVar20 * -8 + 4) = afStack_12c[(uint)bVar20 * -2];
        *(float *)((int)&CStack_178 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             afStack_12c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_178,EVar26);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 0x24:
      iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                         (0x01C51D80,this_ptr->rise_from_grave_condition);
      if ((iVar10 != 0) &&
         (fVar27 = this_ptr->rise_delay - delta_time, this_ptr->rise_delay = fVar27, fVar27 < 0.0))
      {
        pCStack_7c = &(this_ptr->base).base.base.location;
        iStack_80 = 0;
        iStack_24 = 0;
        this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
        for (; iStack_80 < g_CDemonSetPtr->character_count; iStack_80 = iStack_80 + 1) {
          iVar10 = *(int *)((int)g_CDemonSetPtr->characters + iStack_24);
          iVar15 = (**(code **)(*(int *)(iVar10 + 0x154) + 0xe4))(iVar10);
          if (iVar15 != 0) {
            afStack_228[2] = *(float *)(iVar10 + 0x20) - (pCStack_7c->position).x;
            pCStack_21c = (CPlatform *)(*(float *)(iVar10 + 0x24) - (pCStack_7c->position).y);
            afStack_218[0] = *(float *)(iVar10 + 0x28) - (pCStack_7c->position).z;
            fStack_100 = afStack_228[2];
            afStack_fc[(uint)bVar20 * -2] = (float)(&pCStack_21c)[(uint)bVar20 * -2];
            afStack_fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_218[(uint)bVar20 * -2 + (uint)bVar20 * -2];
            if ((ABS(afStack_fc[0]) <= (float)_DAT_005d80ab) &&
               (afStack_fc[0] = 0.0,
               SQRT(afStack_fc[1] * afStack_fc[1] + fStack_100 * fStack_100) <=
               (this_ptr->base).guard_distance)) {
              engine_console_cpp_CConsole_printf_FUN_00445430
                        (g_CConsolePtr,"%s rising from the grave\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,0x25,1);
              if ((CGrave *)this_ptr->grave_actor != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0((CGrave *)this_ptr->grave_actor);
                this_ptr->grave_actor = (CDemonActor *)0x0;
              }
              (this_ptr->base).guard_distance = 100.0;
              break;
            }
          }
          iStack_24 = iStack_24 + 4;
        }
      }
      break;
    case 0x2a:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar23 = (this_ptr->base).victim;
      if ((pCVar23 != (CCharacter *)0x0) &&
         ((fVar27 = (this_ptr->base).base.base.location.position.x -
                    (pCVar23->base).location.position.x,
          fVar4 = (this_ptr->base).base.base.location.position.z -
                  (pCVar23->base).location.position.z,
          SQRT(fVar4 * fVar4 + fVar27 * fVar27) <= (float)_DAT_005d802b &&
          (ABS((this_ptr->base).base.base.location.position.y - (pCVar23->base).location.position.y)
           <= (float)_DAT_005d8033)))) {
        fVar27 = 1.4013e-45;
        in_stack_fffffac0 = (CDemnfolk *)core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&pCVar2->base,(int)in_stack_fffffac0,(int)fVar27);
      }
      break;
    case 0x2b:
    case 0x2c:
      iVar10 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))();
      if ((iVar10 == 0) &&
         ((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
         , (this_ptr->base).victim != (CCharacter *)0x0)) goto LAB_0045a07d;
      break;
    case 0x2d:
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060
                (g_CDemonSetPtr,(CDemonActor *)this_ptr);
      break;
    case 0x2f:
      fVar27 = this_ptr->buried_timer - delta_time;
      this_ptr->buried_timer = fVar27;
      if (fVar27 <= 0.0) {
        pCVar6 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->buried_timer = 0.0;
        (*(pCVar6->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar23 = (this_ptr->base).victim;
        if (pCVar23 != (CCharacter *)0x0) {
          afStack_294[2] =
               (this_ptr->base).base.base.location.position.x - (pCVar23->base).location.position.x;
          afStack_294[3] =
               (this_ptr->base).base.base.location.position.y - (pCVar23->base).location.position.y;
          fStack_284 = (this_ptr->base).base.base.location.position.z -
                       (pCVar23->base).location.position.z;
          fStack_358 = afStack_294[2];
          afStack_354[(uint)bVar20 * -2] = afStack_294[(uint)bVar20 * -2 + 3];
          afStack_354[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_294[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
          if (afStack_168 + 0xb != &fStack_358) {
            fStack_13c = fStack_358;
            fStack_138 = afStack_354[0];
            fStack_134 = afStack_354[1];
          }
          fStack_90 = fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138;
          fStack_8c = (float)(((int)fStack_90 >> 1) + _DAT_01cc804c);
          if (fStack_8c <= (float)_DAT_005d8023) {
            fStack_18 = (this_ptr->base).base.collision_cylinder_top;
            if (fStack_18 < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_18 = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (fStack_18 < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_18 = (this_ptr->base).base.collision_cylinder_bottom + (float)_DAT_005d801b;
            }
            iVar10 = 0;
            do {
              fStack_88 = (float)iVar10 * _DAT_005d808b * _DAT_005d808f;
              pCStack_14 = (CCharacter_full_vtable *)iVar10;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar21 = (float10)fcos((float10)fStack_88);
              fVar22 = (float10)fsin((float10)fStack_88);
              fStack_44 = (float)core_setcolid_cpp_FUN_00558450
                                           (g_CDemonSetPtr,
                                            (this_ptr->base).base.base.location.position.x,
                                            (this_ptr->base).base.base.location.position.z,
                                            (float)(fVar22 * (float10)_DAT_005d8093),
                                            (float)(fVar21 * (float10)_DAT_005d8093));
              in_stack_fffffac0 = (CDemnfolk *)0x45a272;
              pCStack_14 = (CCharacter_full_vtable *)fStack_44;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              if (fStack_44 < 1.0) break;
              iVar10 = iVar10 + 1;
            } while (iVar10 < 4);
            if (3 < iVar10) goto LAB_0045a07d;
            this_ptr->buried_timer = 3.0;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
        }
      }
    }
    if ((0.0 <= fStack_1c) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
      (this_ptr->base).base.walk_step_speed = fStack_98 * (this_ptr->base).speed * delta_time;
      core_charactr_cpp_FUN_00435320(this_ptr);
      fVar27 = 0.7853982;
      pCVar25 = (CVector3f *)0x40400000;
      uStack_238 = 0;
      fStack_230 = fStack_1c;
      uStack_234 = 0;
      pCVar23 = (this_ptr->base).victim;
      pCVar16 = (*((pCVar23->base).vtable._ub)->getPathMap)(&pCVar23->base);
      iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                         ((CCharacter *)this_ptr,
                          &(((this_ptr->base).victim)->base).location.position,pCVar16,pCVar25,
                          fVar27,(float)in_stack_fffffac0);
      if (iVar10 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s giving up attack\n")
        ;
        core_demnfolk_cpp_FUN_0045d060();
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_00459d36;
  }
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) goto LAB_00459d1e;
LAB_00459f57:
    iVar10 = 0;
  }
  else {
    if (2 < EVar5) {
      if (EVar5 == WALK_STATE_NO_PATH) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,2,1);
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        goto LAB_00459d36;
      }
      goto LAB_00459f57;
    }
LAB_00459d1e:
    if (iVar10 == 4) goto LAB_00459d36;
    iVar10 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,iVar10,1);
LAB_00459d36:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                      (&(this_ptr->base).base.model.base);
  iStack_20 = pSVar14->state_index;
  pCStack_2c = &(this_ptr->base).base.model.accumulated_root_motion;
  if (iStack_20 == 0x24) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCStack_2c->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  else if (iStack_20 == 0x25) {
    core_actor_cpp_FUN_00408ac0(this_ptr);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_400 = fStack_394;
    *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + 0x12) * 4) =
         afStack_3cc[(uint)bVar20 * -2 + 0xf];
    *(float *)(&stack0xfffffbbc + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x13) * 4) =
         afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x10];
    fVar27 = (this_ptr->base).base.base.location.position.y;
    (pCVar1->position).x = (pCVar1->position).x + fStack_400;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar27 + fStack_3fc;
    (this_ptr->base).base.base.location.position.z = fVar4 + fStack_3f8;
    pCStack_2c->z = 0.0;
    pCStack_2c->y = pCStack_2c->z;
    pCStack_2c->x = pCStack_2c->y;
  }
  else {
    iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
    if (iVar10 != 0) {
      pCVar23 = (this_ptr->base).victim;
      if ((pCVar23 != (CCharacter *)0x0) &&
         (pCVar12 = (CDemnfolk *)(*(((pCVar23->base).vtable._uc)->_uc).getGrabber)(pCVar23),
         pCVar12 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      core_charactr_cpp_FUN_0042d700(this_ptr);
      afStack_318[5] = (this_ptr->base).base.velocity.x * delta_time;
      afStack_300[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_300[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_3a0 = afStack_318[5];
      afStack_3cc[(uint)bVar20 * -2 + 0xc] = afStack_300[(uint)bVar20 * -2];
      afStack_3cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd] =
           afStack_300[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      pCVar25 = &(this_ptr->base).base.position_delta;
      afStack_2dc[2] = fStack_3a0 + pCVar25->x;
      afStack_2dc[3] = fStack_39c + (this_ptr->base).base.position_delta.y;
      fStack_2cc = fStack_398 + (this_ptr->base).base.position_delta.z;
      afStack_fc[2] = afStack_2dc[2];
      afStack_fc[(uint)bVar20 * -2 + 3] = afStack_2dc[(uint)bVar20 * -2 + 3];
      afStack_fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           afStack_2dc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
      afStack_1ec[2] = afStack_fc[2] + pCVar3->x;
      afStack_1ec[3] = afStack_fc[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
      fStack_1dc = fStack_ec + (this_ptr->base).base.model.accumulated_root_motion.z;
      CStack_10c.x = afStack_1ec[2];
      *(float *)((int)&CStack_10c + (uint)bVar20 * -8 + 4) = afStack_1ec[(uint)bVar20 * -2 + 3];
      *(float *)((int)&CStack_10c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_1ec[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar25->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar27 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar27;
      pCVar3->x = fVar27;
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_10c);
    }
  }
  iVar10 = iStack_20;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  if (iVar10 != 0x24) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar10 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar10] == 0) {
      iVar15 = this_ptr->bone_indices[10];
      fVar27 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[0],this_ptr->bone_indices[5]);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[1],this_ptr->bone_indices[3])
        ;
      }
      core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[2],this_ptr->bone_indices[6]);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[3],this_ptr->bone_indices[4])
        ;
      }
      iVar15 = this_ptr->bone_indices[0];
      fVar27 = 0.7;
      iVar10 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
              ((CCharacter *)this_ptr,iVar10,iVar15,fVar27);
    if ((this_ptr->part_indices[4] < 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 0;
      core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10]);
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 1;
    }
    core_charactr_cpp_FUN_00430960();
  }
  iVar10 = core_demnfolk_cpp_FUN_0045bec0(this_ptr);
  if (((iStack_a4 != 0) && (-1 < iVar10)) &&
     (pCVar17 = (this_ptr->base).base.carry_hands[iVar10].carry_actor, pCVar17 != (CDemonActor *)0x0
     )) {
    (*((pCVar17->vtable)._ub)->processMeleeHit)(pCVar17,2);
    return;
  }
  return;
}
