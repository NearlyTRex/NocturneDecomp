// Name: core_carved.cpp_CCarved_process_FUN_00428ae0
// Address: 00428ae0
// Address Range: [[00428ae0, 0042a4ed]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_process_FUN_00428ae0(CCarved *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_carved_cpp_CCarved_process_FUN_00428ae0(CCarved *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  char cVar2;
  CCharacter *pCVar3;
  EWalkState EVar4;
  CDemonActor_vtable *pCVar5;
  float fVar6;
  CEventList *this_ptr_01;
  int iVar7;
  uint uVar8;
  CCarved *pCVar9;
  float fVar10;
  EDeathState EVar11;
  int iVar12;
  CPathMap *pCVar13;
  CDemonActor *pCVar14;
  SMotion *pSVar15;
  uint *puVar16;
  char *pcVar17;
  float *pfVar18;
  char *pcVar19;
  float *pfVar20;
  byte bVar21;
  float10 fVar22;
  float afStackY_1354 [925];
  CVector3f *pCVar23;
  CGore *this_ptr_02;
  CBoundingBox3D *out_box;
  EBloodType EVar24;
  CCarved *in_stack_fffffb34;
  char *in_stack_fffffb3c;
  SDamageInfo SStack_494;
  char acStack_458 [32];
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float afStack_3fc [3];
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float afStack_3e4 [3];
  float afStack_3d8 [6];
  float afStack_3c0 [6];
  float afStack_3a8 [6];
  float afStack_390 [6];
  uint uStack_378;
  uint uStack_374;
  float fStack_370;
  float fStack_36c;
  float afStack_368 [2];
  CVector3f CStack_360;
  float fStack_354;
  float afStack_350 [5];
  uint uStack_33c;
  uint auStack_338 [5];
  CVector3f CStack_324;
  CVector3f CStack_318;
  float fStack_30c;
  float afStack_308 [4];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  CVector3f CStack_2dc;
  CVector3f CStack_2d0;
  float fStack_2c4;
  float afStack_2c0 [4];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_294;
  CVector3f CStack_288;
  uint uStack_27c;
  float afStack_278 [5];
  float fStack_264;
  CVector3f CStack_258;
  uint uStack_24c;
  float afStack_248 [5];
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint uStack_1e0;
  uint uStack_1d4;
  CVector3f CStack_1c8;
  CVector3f CStack_1bc;
  uint uStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  float fStack_198;
  uint uStack_18c;
  uint uStack_188;
  float fStack_184;
  float fStack_180;
  float afStack_17c [6];
  float afStack_164 [2];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [5];
  float fStack_138;
  CVector3f CStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f0 [3];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [5];
  double dStack_84;
  double dStack_7c;
  int iStack_6c;
  CCharacter *pCStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  CCarved *pCStack_3c;
  float fStack_38;
  uint uStack_34;
  int iStack_30;
  float fStack_2c;
  float *pfStack_28;
  CMotionController *pCStack_24;
  float *pfStack_20;
  char *pcStack_1c;
  int iStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar21 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] == 0) &&
     (EVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar11 == DEATH_STATE_ALIVE)) {
    iVar12 = 1;
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar7 + 0x13,iVar12);
  }
  pCStack_68 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCStack_68 != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_68->base).vtable._uc;
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model);
    pCVar23 = &CStack_1c8;
    CStack_1c8.x = fStack_198;
    *(float *)((int)&CStack_1c8 + (uint)bVar21 * -8 + 4) = afStack_1ac[(uint)bVar21 * -2 + 6];
    *(float *)((int)&CStack_1c8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
         afStack_1ac[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
    iVar7 = (*(pCStack_14->_uc).attractActorToward)(pCStack_68,(CDemonActor *)this_ptr,pCVar23);
    if (iVar7 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  pfStack_28 = afStack_3e4;
  fStack_60 = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pfStack_20 = afStack_3fc;
  pCStack_24 = &(this_ptr->base).base.model.base;
LAB_00428b77:
  if (0.0 < fStack_60) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_24,&fStack_60);
    if (uVar8 < 0xb) {
      if (uVar8 < 5) {
        if (uVar8 == 2) {
          pCVar14 = this_ptr->pickup_target;
          if (pCVar14 != (CDemonActor *)0x0) {
            this_ptr->pickup_target = (CDemonActor *)0x0;
            iVar7 = core_carved_cpp_FUN_0042b290(this_ptr);
            if (-1 < iVar7) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0
                        ((CCharacter *)this_ptr,iVar7,(int)pCVar14,0x3e4ccccd,0);
              engine_console_cpp_CConsole_printf_FUN_00445430
                        (g_CConsolePtr,"%s picked up %s using hand %d\n");
            }
          }
        }
        else {
LAB_00428bb4:
          core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar8);
        }
        goto LAB_00428b77;
      }
      if (uVar8 < 6) {
        iStack_18 = 1;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          afStack_350[4] = 0x3FB9999A;
          afStack_350[2] = 0.0;
          afStack_350[3] = 0.0;
          core_actor_cpp_FUN_00408b40(this_ptr);
          fStack_2ac = fStack_294;
          afStack_2c0[(uint)bVar21 * -2 + 6] = afStack_2c0[(uint)bVar21 * -2 + 0xc];
          afStack_2c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
               afStack_2c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd];
          pCVar3 = (this_ptr->base).victim;
          fStack_1ec = fStack_2ac - (pCVar3->base).location.position.x;
          fStack_1e8 = fStack_2a8 - (pCVar3->base).location.position.y;
          fStack_1e4 = fStack_2a4 - (pCVar3->base).location.position.z;
          afStack_98[2] = fStack_1ec;
          afStack_98[(uint)bVar21 * -2 + 3] = afStack_248[(uint)bVar21 * -2 + 0x18];
          afStack_98[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
               afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x19];
          afStack_98[3] = 0.0;
          if (SQRT(afStack_98[4] * afStack_98[4] + afStack_98[2] * afStack_98[2]) <= 1.0) {
            if (iStack_18 != 0) {
              afStack_17c[2] = 0.0;
              afStack_17c[3] = 4.0;
              afStack_17c[4] = 0.0;
              core_actor_cpp_FUN_00408b40(this_ptr);
              CStack_a8.x = afStack_14c[2];
              *(float *)((int)&CStack_a8 + (uint)bVar21 * -8 + 4) =
                   afStack_14c[(uint)bVar21 * -2 + 3];
              *(float *)((int)&CStack_a8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                   afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
              fVar10 = CStack_a8.y;
              pCVar3 = (this_ptr->base).victim;
              puVar16 = (uint *)((int)pCVar3 + (uint)bVar21 * -8 + 0x24);
              CStack_15c.x = (pCVar3->base).location.position.x;
              *(uint *)((int)&CStack_15c + (uint)bVar21 * -8 + 4) = *puVar16;
              *(uint *)((int)&CStack_15c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                   puVar16[(uint)bVar21 * -2 + 1];
              CStack_15c.y = fVar10;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                        (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
              iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                (g_CDemonSetPtr,&CStack_a8,&CStack_15c);
              if (iVar7 != 0) {
                iStack_18 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            }
            if ((iStack_18 == 0) ||
               (pCVar3 = (this_ptr->base).victim,
               iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar3,(CDemonActor *)this_ptr,0), iVar7 != 0)) {
              if (iStack_18 == 0) {
                core_carved_cpp_FUN_0042be20();
              }
              goto LAB_00428b77;
            }
          }
        }
        core_carved_cpp_FUN_0042be20();
        goto LAB_00428b77;
      }
      if (uVar8 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar8);
        goto LAB_00428b77;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_skeleton_cpp_FUN_00569040(pCStack_24);
        uStack_33c = auStack_338[2];
        auStack_338[(uint)bVar21 * -2] = auStack_338[(uint)bVar21 * -2 + 3];
        auStack_338[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             auStack_338[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr);
        CStack_2d0.x = fStack_264;
        *(float *)((int)&CStack_2d0 + (uint)bVar21 * -8 + 4) = afStack_278[(uint)bVar21 * -2 + 6];
        *(float *)((int)&CStack_2d0 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
             afStack_278[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
        if (this_ptr->part_indices[4] < 0) {
          pCVar3 = (this_ptr->base).victim;
          fVar10 = CStack_2d0.x - (pCVar3->base).location.position.x;
          fVar6 = CStack_2d0.z - (pCVar3->base).location.position.z;
          if ((float)_DAT_005d548d < SQRT(fVar6 * fVar6 + fVar10 * fVar10)) {
            core_carved_cpp_FUN_0042be20();
            goto LAB_00428b77;
          }
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          pCVar9 = (CCarved *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
          if (pCVar9 != this_ptr) {
            in_stack_fffffb34 = this_ptr;
            core_carved_cpp_FUN_0042be20();
            goto LAB_00428b77;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffb30);
        fVar10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,25.0);
        pCVar3 = (this_ptr->base).victim;
        pCStack_14 = (CCharacter_full_vtable *)fVar10;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,(SDamageInfo *)&stack0xfffffb30);
        dStack_84 = (double)fVar10;
        if (0.0 < dStack_84) {
          fVar22 = (float10)fVar10 * (float10)_DAT_005d54c5 * (float10)_DAT_005d54cd;
          fVar10 = 0.0;
          round();
          iStack_6c = (int)ROUND(fVar22);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                    (g_CGorePtr,&CStack_2d0,(CVector3f *)0x0,iStack_6c,(EBloodType)fVar10);
        }
        pCVar3 = (this_ptr->base).victim;
        in_stack_fffffb34 = (CCarved *)0x428fd8;
        EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (0 < (int)EVar11) {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_carved_cpp_FUN_0042be20();
        }
        in_stack_fffffb3c = (char *)this_ptr;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_00428b77;
      }
      core_carved_cpp_FUN_0042be20();
    }
    else if (uVar8 < 0xc) {
      iVar7 = core_carved_cpp_FUN_0042b290(this_ptr);
      if (iVar7 < 0) {
        _DAT_01d1d400 = "..\\core\\carved.cpp";
        _DAT_01d1d404 = 0x1de;
        core_main_c_FUN_005030e0();
      }
      if ((this_ptr->base).base.carry_hands[iVar7].carry_actor != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s lugging %s\n");
        CStack_288.z = 17.0;
        CStack_288.x = 0.0;
        CStack_288.y = 6.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar7,&CStack_288);
        in_stack_fffffb3c = "carved-groan?.wav";
        in_stack_fffffb34 = (CCarved *)0x4290f4;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"carved-groan?.wav");
      }
    }
    else if (uVar8 < 0xd) {
      iStack_30 = core_carved_cpp_FUN_0042b290(this_ptr);
      if (iStack_30 < 0) {
        _DAT_01d1d400 = "..\\core\\carved.cpp";
        _DAT_01d1d404 = 0x1f5;
        core_main_c_FUN_005030e0();
      }
      pcStack_1c = (this_ptr->base).base.base.actor_name + iStack_30 * 0x78;
      if (*(int *)(pcStack_1c + 0x25b0) != 0) {
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s tossing %s\n");
        CStack_1bc.x = 0.0;
        CStack_1bc.y = 0.0;
        CStack_1bc.z = 1.0;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          out_box = (CBoundingBox3D *)0x429245;
          (**(code **)(*(int *)(*(int *)(pcStack_1c + 0x25b0) + 0x154) + 0x1c))();
          pfVar18 = afStack_3a8;
          pfVar20 = &fStack_3f0;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar20 = *pfVar18;
            pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
            pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
          }
          fStack_e4 = fStack_3f0 + *pfStack_28;
          fStack_e0 = fStack_3ec + pfStack_28[1];
          fStack_dc = fStack_3e8 + pfStack_28[2];
          fStack_c0 = fStack_3f0 + *pfStack_28;
          afStack_14c[(uint)bVar21 * -2 + 0x24] = afStack_14c[(uint)bVar21 * -2 + 0x1b];
          pcVar17 = pcStack_1c;
          afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x25] =
               afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x1c];
          pfVar18 = afStack_14c + 0x17;
          fStack_150 = fStack_c0 * _DAT_005d54bd;
          afStack_14c[0] = fStack_bc * _DAT_005d54bd;
          afStack_14c[1] = fStack_b8 * _DAT_005d54bd;
          afStack_f0[0] = fStack_c0 * _DAT_005d54bd;
          afStack_14c[(uint)bVar21 * -2 + 0x18] = afStack_14c[(uint)bVar21 * -2];
          afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x19] =
               afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          core_actor_cpp_FUN_00408b40(*(uint *)(pcVar17 + 0x25b0),pfVar18);
          afStack_308[2] = fStack_fc;
          afStack_308[(uint)bVar21 * -2 + 3] = afStack_14c[(uint)bVar21 * -2 + 0x15];
          afStack_308[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
               afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x16];
          pCVar3 = (this_ptr->base).victim;
          (*((pCVar3->base).vtable._ub)->getBoundingBox)(&pCVar3->base,out_box);
          pfVar18 = afStack_3c0;
          pfVar20 = &fStack_408;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar20 = *pfVar18;
            pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
            pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
          }
          fStack_9c = fStack_408 + *pfStack_20;
          afStack_98[0] = fStack_404 + pfStack_20[1];
          afStack_98[1] = fStack_400 + pfStack_20[2];
          fStack_2e8 = fStack_408 + *pfStack_20;
          afStack_308[(uint)bVar21 * -2 + 9] = afStack_98[(uint)bVar21 * -2];
          afStack_308[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] =
               afStack_98[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          fStack_228 = fStack_2e8 * _DAT_005d54bd;
          fStack_224 = fStack_2e4 * _DAT_005d54bd;
          fStack_220 = fStack_2e0 * _DAT_005d54bd;
          fStack_2a0 = fStack_2e8 * _DAT_005d54bd;
          afStack_2c0[(uint)bVar21 * -2 + 9] = afStack_248[(uint)bVar21 * -2 + 9];
          afStack_2c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] =
               afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
          core_actor_cpp_FUN_00408b40((this_ptr->base).victim);
          fStack_108 = fStack_30c;
          afStack_14c[(uint)bVar21 * -2 + 0x12] = afStack_308[(uint)bVar21 * -2];
          afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x13] =
               afStack_308[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          fStack_2c4 = fStack_108 - afStack_308[2];
          afStack_2c0[0] = fStack_104 - afStack_308[3];
          afStack_2c0[1] = fStack_100 - fStack_2f8;
          afStack_17c[5] = fStack_108 - afStack_308[2];
          afStack_164[(uint)bVar21 * -2] = afStack_2c0[(uint)bVar21 * -2];
          afStack_164[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               afStack_2c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          fStack_2c = SQRT(afStack_164[1] * afStack_164[1] +
                           afStack_17c[5] * afStack_17c[5] + afStack_164[0] * afStack_164[0]);
          if (0.0 < fStack_2c) {
            core_actor_cpp_FUN_00408b00(this_ptr);
            fStack_21c = fStack_354;
            afStack_248[(uint)bVar21 * -2 + 0xc] = afStack_350[(uint)bVar21 * -2];
            afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd] =
                 afStack_350[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            fVar10 = 1.0 / fStack_2c;
            fStack_1f8 = fStack_21c * fVar10;
            fStack_1f4 = fStack_218 * fVar10;
            fStack_1f0 = fStack_214 * fVar10;
            CStack_12c.x = fStack_21c * fVar10;
            afStack_14c[(uint)bVar21 * -2 + 9] = afStack_248[(uint)bVar21 * -2 + 0x15];
            afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] =
                 afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x16];
            if (&CStack_1bc != (CVector3f *)(afStack_14c + 8)) {
              CStack_1bc.x = CStack_12c.x;
              CStack_1bc.y = CStack_12c.y;
              CStack_1bc.z = CStack_12c.z;
            }
          }
        }
        CStack_1bc.x = CStack_1bc.x * _DAT_005d54c1;
        CStack_1bc.z = CStack_1bc.z * _DAT_005d54c1;
        CStack_1bc.y = CStack_1bc.y * _DAT_005d54c1 + _DAT_005d54d5;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iStack_30,&CStack_1bc);
        in_stack_fffffb3c = "carved-groan?.wav";
        in_stack_fffffb34 = (CCarved *)0x4291fc;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"carved-groan?.wav");
      }
    }
    else if (uVar8 < 0xe) {
      if (this_ptr->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00478820(this_ptr->target_door,0.3);
        (*((this_ptr->target_door->base).vtable._ub)->playSound)
                  (&this_ptr->target_door->base,"zombie-bang-door?.wav");
        this_ptr->target_door = (CDoor *)0x0;
      }
    }
    else {
      if (uVar8 < 0x65) goto LAB_00428bb4;
      if (uVar8 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar8 == 0x29a) {
        core_skeleton_cpp_FUN_00569040(pCStack_24);
        uStack_1b0 = uStack_210;
        afStack_1ac[(uint)bVar21 * -2] = afStack_248[(uint)bVar21 * -2 + 0xf];
        afStack_1ac[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(this_ptr);
        EVar24 = BLOOD_TYPE_RED;
        iVar7 = 3;
        pCVar23 = (CVector3f *)0x0;
        CStack_324.x = fStack_2f4;
        *(float *)((int)&CStack_324 + (uint)bVar21 * -8 + 4) = afStack_308[(uint)bVar21 * -2 + 6];
        *(float *)((int)&CStack_324 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             afStack_308[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                  (g_CGorePtr,&CStack_324,pCVar23,iVar7,EVar24);
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar7 == 0) {
          pcVar17 = "ghoul-dig-?.wav";
        }
        else {
          pcVar17 = "ghoul-eat-?.wav";
        }
        pcVar19 = acStack_458;
        do {
          cVar2 = *pcVar17;
          *pcVar19 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar17[1];
          pcVar17 = pcVar17 + 2;
          pcVar19[1] = cVar2;
          pcVar19 = pcVar19 + 2;
        } while (cVar2 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_458);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar8);
      }
    }
    goto LAB_00428b77;
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr);
  if (((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar10 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar10,
      (float)_DAT_005d5485 <= fVar10)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_494);
    SStack_494.damage_amount = 9999.9;
    SStack_494.attacker = (CDemonActor *)this_ptr;
    SStack_494.wielder = (CDemonActor *)this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_494);
    this_ptr->bleedout_timer = -1.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  iStack_54 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 != 0) {
    EVar4 = (this_ptr->base).base.walk_state;
    if (EVar4 < 2) {
      if (EVar4 != WALK_STATE_WALKING) {
LAB_00429a81:
        iVar12 = 1;
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,iVar7,iVar12);
        goto LAB_004296f2;
      }
    }
    else if (2 < EVar4) {
      if (EVar4 == WALK_STATE_NO_PATH) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        goto LAB_004296f2;
      }
      goto LAB_00429a81;
    }
    core_carved_cpp_FUN_0042be20();
    goto LAB_004296f2;
  }
  fStack_38 = -1.0;
  fStack_58 = 0.3;
  pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  switch(pSVar15->state_index) {
  case 0:
  case 1:
  case 2:
    iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(delta_time * (float)_DAT_005d54b5);
    if (iVar7 == 0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar7 != 0) {
        core_carved_cpp_FUN_0042be20();
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        in_stack_fffffb34 = (CCarved *)0x429cee;
        iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))();
        if (iVar7 == 0) break;
        g_CGamePtr->player_hit_flag = 1;
        (this_ptr->base).victim = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_carved_cpp_FUN_0042be20();
        in_stack_fffffb34 = (CCarved *)0x429c8a;
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
        if (iVar7 == 0) {
          in_stack_fffffb34 = this_ptr;
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"carved-groan?.wav");
          this_ptr->sfx_handles[1] = uVar8;
        }
      }
    }
    else {
      iVar12 = 1;
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar7,iVar12);
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    this_ptr->groan_timer = this_ptr->groan_timer - delta_time;
    if ((this_ptr->groan_timer <= 0.0) &&
       (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]), iVar7 == 0))
    {
      pCStack_14 = (CCharacter_full_vtable *)
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(3.0,6.0);
      pCVar5 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->groan_timer = (float)pCStack_14;
      uVar8 = (*pCVar5->playSound)((CDemonActor *)this_ptr,"carved-groan?.wav");
      this_ptr->sfx_handles[1] = uVar8;
    }
    pCVar3 = (this_ptr->base).victim;
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if (((this_ptr->base).victim == (CCharacter *)0x0) &&
       (iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x154) + 0x10c))(),
       iVar7 != 0)) {
      g_CGamePtr->player_hit_flag = 1;
      (this_ptr->base).victim = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    }
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      in_stack_fffffb34 = this_ptr;
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        fVar10 = 1.4013e-45;
        in_stack_fffffb34 = (CCarved *)core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,(int)in_stack_fffffb34,(int)fVar10);
      }
    }
    else if (pCVar3 == (CCharacter *)0x0) {
      iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
      if (iVar7 == 0) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"carved-groan?.wav");
        this_ptr->sfx_handles[1] = uVar8;
      }
      in_stack_fffffb34 = (CCarved *)0x429e04;
      core_carved_cpp_FUN_0042be20();
    }
    else {
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0x32);
      if (iVar7 == 1) {
        core_carved_cpp_FUN_0042be20();
      }
      uStack_34 = (uint)((this_ptr->base).base.model.part_data.visibility_flags
                         [this_ptr->part_indices[1]] != 0);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        uStack_34 = uStack_34 + 1;
      }
      in_stack_fffffb34 = this_ptr;
      iVar7 = core_carved_cpp_FUN_0042a930();
      if (iVar7 == 0) {
        fStack_40 = 0x3FB9999A;
        iStack_4c = core_carved_cpp_FUN_0042b290();
        if (((-1 < iStack_4c) &&
            (pCVar14 = (this_ptr->base).base.carry_hands[iStack_4c].carry_actor,
            pCVar14 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
          fStack_50 = 1.0;
          if (pCVar14 != (CDemonActor *)0x0) {
            (*((pCVar14->vtable)._ub)->getBoundingBox)(pCVar14,(CBoundingBox3D *)in_stack_fffffb3c);
            pfVar18 = afStack_3d8;
            pfVar20 = &fStack_420;
            for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar20 = *pfVar18;
              pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
              pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
            }
            in_stack_fffffb3c = (char *)0x429f70;
            core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_318);
            CStack_318.x = fStack_414 - fStack_420;
            CStack_318.y = fStack_410 - fStack_41c;
            CStack_318.z = fStack_40c - fStack_418;
            afStack_2c0[2] = fStack_414 - fStack_420;
            afStack_2c0[(uint)bVar21 * -2 + 3] =
                 *(float *)((int)&CStack_318 + (uint)bVar21 * -8 + 4);
            afStack_2c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                 *(float *)((int)&CStack_318 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8);
            fStack_50 = fStack_2b0 * (float)_DAT_005d5495 + 1.0;
          }
          fStack_40 = fStack_50;
        }
        fVar10 = 0.6981317;
        in_stack_fffffb34 = (CCarved *)0x3f666666;
        uStack_18c = 0;
        fStack_184 = fStack_40;
        uStack_188 = 0;
        pCVar3 = (this_ptr->base).victim;
        pCVar13 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar13,
                           (CVector3f *)in_stack_fffffb34,fVar10,(float)in_stack_fffffb3c);
        pCStack_3c = (CCarved *)&(this_ptr->base).base.model;
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          fVar10 = 1.4013e-45;
          iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
          in_stack_fffffb34 = pCStack_3c;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCStack_3c,iVar7,(int)fVar10);
        }
        else if (iVar7 < 1) {
          in_stack_fffffb34 = (CCarved *)0x42a112;
          iStack_48 = core_carved_cpp_FUN_0042b290();
          pCVar3 = (this_ptr->base).victim;
          fStack_d8 = (this_ptr->base).base.base.location.position.x -
                      (pCVar3->base).location.position.x;
          fStack_d4 = (this_ptr->base).base.base.location.position.y -
                      (pCVar3->base).location.position.y;
          fStack_d0 = (this_ptr->base).base.base.location.position.z -
                      (pCVar3->base).location.position.z;
          fStack_120 = fStack_d8;
          afStack_14c[(uint)bVar21 * -2 + 0xc] = afStack_14c[(uint)bVar21 * -2 + 0x1e];
          afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xd] =
               afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x1f];
          if (SQRT(fStack_118 * fStack_118 + fStack_120 * fStack_120 + fStack_11c * fStack_11c) <
              (float)_DAT_005d54a5) {
            in_stack_fffffb34 = (CCarved *)0x42a191;
            core_actor_cpp_FUN_00408bb0();
            uStack_27c = uStack_1e0;
            afStack_278[(uint)bVar21 * -2] = afStack_248[(uint)bVar21 * -2 + 0x1b];
            afStack_278[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x1c];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            afStack_278[2] = (float)uStack_1d4;
            afStack_278[(uint)bVar21 * -2 + 3] = afStack_248[(uint)bVar21 * -2 + 0x1e];
            afStack_278[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                 afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x1f];
            if ((((ABS(afStack_278[3]) < (float)_DAT_005d54ad) && (-1 < iStack_48)) &&
                ((uVar8 = this_ptr->object_shape_class, 1 < uVar8 && ((2 < uVar8 && (uVar8 == 3)))))
                ) && ((this_ptr->base).base.carry_hands[iStack_48].carry_actor != (CDemonActor *)0x0
                     )) {
              engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s tossing\n");
              in_stack_fffffb34 = pCStack_3c;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)pCStack_3c,0x1a,1);
            }
          }
        }
        else if (((0 < (int)uStack_34) && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                (pCVar3 = (this_ptr->base).victim,
                pCVar14 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                pCVar14 == (CDemonActor *)0x0)) {
          pCVar3 = (this_ptr->base).victim;
          EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
          if (EVar11 == DEATH_STATE_ALIVE) {
            if ((iStack_4c < 0) ||
               ((this_ptr->base).base.carry_hands[iStack_4c].carry_actor == (CDemonActor *)0x0)) {
              fVar10 = 1.68156e-44;
              pCVar9 = (CCarved *)&(this_ptr->base).base.model;
            }
            else {
              fVar10 = 1.54143e-44;
              pCVar9 = pCStack_3c;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)pCVar9,(int)fVar10,1);
          }
          (this_ptr->base).attack_cooldown = 0.8;
        }
      }
    }
    break;
  case 0xb:
    if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_0042a30b;
    iVar7 = core_carved_cpp_FUN_0042b290(this_ptr);
    if (((-1 < iVar7) &&
        (pCVar3 = (this_ptr->base).victim,
        EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), (int)EVar11 < 1)) &&
       ((this_ptr->base).base.carry_hands[iVar7].carry_actor != (CDemonActor *)0x0)) {
      in_stack_fffffb34 = (CCarved *)(this_ptr->base).victim;
      pCVar14 = (*(((in_stack_fffffb34->base).base.base.vtable._uc)->_uc).getGrabber)
                          ((CCharacter *)in_stack_fffffb34);
      if (pCVar14 == (CDemonActor *)0x0) {
        pCVar14 = (this_ptr->base).base.carry_hands[iVar7].carry_actor;
        fStack_44 = 1.0;
        if (pCVar14 != (CDemonActor *)0x0) {
          in_stack_fffffb34 = (CCarved *)0x42a3cf;
          (*((pCVar14->vtable)._ub)->getBoundingBox)(pCVar14,(CBoundingBox3D *)in_stack_fffffb3c);
          pfVar18 = afStack_390;
          pfVar20 = &fStack_438;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar20 = *pfVar18;
            pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
            pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
          }
          core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_360);
          CStack_360.x = fStack_42c - fStack_438;
          CStack_360.y = fStack_428 - fStack_434;
          CStack_360.z = fStack_424 - fStack_430;
          fStack_cc = fStack_42c - fStack_438;
          afStack_14c[(uint)bVar21 * -2 + 0x21] =
               *(float *)((int)&CStack_360 + (uint)bVar21 * -8 + 4);
          afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x22] =
               *(float *)((int)&CStack_360 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8);
          fStack_44 = fStack_c4 * (float)_DAT_005d5495 + 1.0;
        }
        fStack_38 = fStack_44;
        fStack_5c = core_motion_cpp_FUN_00525020(&(this_ptr->base).base.model.base);
        dStack_7c = (double)fStack_5c;
        pCStack_14 = (CCharacter_full_vtable *)fStack_5c;
        if ((1.0 <= dStack_7c) && (dStack_7c <= _DAT_005d549d)) {
          iStack_54 = 1;
        }
        break;
      }
    }
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s gave up swing\n");
    core_carved_cpp_FUN_0042be20();
    break;
  case 0xc:
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), (int)EVar11 < 1)) {
      in_stack_fffffb34 = (CCarved *)(this_ptr->base).victim;
      pCVar9 = (CCarved *)
               (*(((in_stack_fffffb34->base).base.base.vtable._uc)->_uc).getGrabber)
                         ((CCharacter *)in_stack_fffffb34);
      if (pCVar9 == (CCarved *)0x0) {
        fStack_58 = 3.0;
        fStack_38 = 0x3FB9999A;
      }
      else if (pCVar9 != this_ptr) {
        in_stack_fffffb34 = (CCarved *)0x42a327;
        core_carved_cpp_FUN_0042be20();
      }
      pCVar3 = (this_ptr->base).victim;
      fStack_234 = (this_ptr->base).base.base.location.position.x -
                   (pCVar3->base).location.position.x;
      fStack_230 = (this_ptr->base).base.base.location.position.y -
                   (pCVar3->base).location.position.y;
      fStack_22c = (this_ptr->base).base.base.location.position.z -
                   (pCVar3->base).location.position.z;
      fStack_36c = fStack_234;
      afStack_368[(uint)bVar21 * -2] = afStack_248[(uint)bVar21 * -2 + 6];
      afStack_368[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
      if (SQRT(afStack_368[1] * afStack_368[1] +
               fStack_36c * fStack_36c + afStack_368[0] * afStack_368[0]) <= (float)_DAT_005d548d)
      break;
    }
LAB_0042a30b:
    core_carved_cpp_FUN_0042be20();
    break;
  case 0x16:
    if (((this_ptr->base).pool_me == 0) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      core_skeleton_cpp_FUN_00569040(this_ptr_00);
      uStack_24c = afStack_248[2];
      afStack_248[(uint)bVar21 * -2] = afStack_248[(uint)bVar21 * -2 + 3];
      afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr);
      EVar24 = BLOOD_TYPE_RED;
      pCVar23 = &CStack_258;
      CStack_258.x = fStack_138;
      *(float *)((int)&CStack_258 + (uint)bVar21 * -8 + 4) = afStack_14c[(uint)bVar21 * -2 + 6];
      this_ptr_02 = g_CGorePtr;
      *(float *)((int)&CStack_258 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
      core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_02,pCVar23,EVar24);
      this_ptr_01 = 0x01C51D80;
      (this_ptr->base).pool_me = 1;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(this_ptr_01,"CarvedDead");
    }
  }
  if ((0.0 <= fStack_38) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
    (this_ptr->base).base.walk_step_speed = fStack_58 * (this_ptr->base).speed * delta_time;
    core_charactr_cpp_FUN_00435320(this_ptr);
    uStack_378 = 0;
    uStack_374 = 0;
    fVar10 = 0.7853982;
    fStack_370 = fStack_38;
    pCVar23 = (CVector3f *)0x40400000;
    pCVar3 = (this_ptr->base).victim;
    pCVar13 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
    iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,
                       pCVar13,pCVar23,fVar10,(float)in_stack_fffffb34);
    if (iVar7 != 1) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s giving up attack\n");
      core_carved_cpp_FUN_0042be20();
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
    }
  }
LAB_004296f2:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar9 = (CCarved *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar9 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700(this_ptr);
    fStack_b4 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_b0 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_ac = (this_ptr->base).base.velocity.z * delta_time;
    fStack_180 = fStack_b4;
    afStack_17c[(uint)bVar21 * -2] = afStack_14c[(uint)bVar21 * -2 + 0x27];
    afStack_17c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
         afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x28];
    pCVar23 = &(this_ptr->base).base.position_delta;
    fStack_114 = fStack_180 + pCVar23->x;
    fStack_110 = afStack_17c[0] + (this_ptr->base).base.position_delta.y;
    fStack_10c = afStack_17c[1] + (this_ptr->base).base.position_delta.z;
    fStack_204 = fStack_114;
    afStack_248[(uint)bVar21 * -2 + 0x12] = afStack_14c[(uint)bVar21 * -2 + 0xf];
    afStack_248[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x13] =
         afStack_14c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0x10];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_1ac[2] = fStack_204 + pCVar1->x;
    afStack_1ac[3] = fStack_200 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_19c = fStack_1fc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_2dc.x = afStack_1ac[2];
    *(float *)((int)&CStack_2dc + (uint)bVar21 * -8 + 4) = afStack_1ac[(uint)bVar21 * -2 + 3];
    *(float *)((int)&CStack_2dc + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
         afStack_1ac[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar23->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar10 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar10;
    pCVar1->x = fVar10;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_2dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if ((this_ptr->base).pool_me == 0) {
    iVar7 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar7] == 0) {
      iVar12 = this_ptr->bone_indices[10];
      fVar10 = 0.5;
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
      iVar12 = this_ptr->bone_indices[0];
      fVar10 = 0.7;
      iVar7 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
              ((CCharacter *)this_ptr,iVar7,iVar12,fVar10);
    core_charactr_cpp_FUN_00430960();
  }
  iVar7 = iStack_54;
  iVar12 = core_carved_cpp_FUN_0042b290(this_ptr);
  if (((iVar7 != 0) && (-1 < iVar12)) &&
     (pCVar14 = (this_ptr->base).base.carry_hands[iVar12].carry_actor, pCVar14 != (CDemonActor *)0x0
     )) {
    (*((pCVar14->vtable)._ub)->processMeleeHit)(pCVar14,2);
    return;
  }
  return;
}
