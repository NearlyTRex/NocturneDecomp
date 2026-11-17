// Name: core_carved.cpp_CCarved_process_FUN_00425da0
// Address: 00425da0
// Address Range: [[00425da0, 0042777d]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_process_FUN_00425da0(CCarved *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_carved_cpp_CCarved_process_FUN_00425da0(CCarved *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  char cVar1;
  CCharacter *pCVar2;
  EWalkState EVar3;
  float fVar4;
  CEventList *this_ptr_01;
  int iVar5;
  uint uVar6;
  CCarved *pCVar7;
  EDeathState EVar8;
  CPathMap *path_map;
  CDemonActor *pCVar9;
  SMotion *pSVar10;
  uint *puVar11;
  char *pcVar12;
  float *pfVar13;
  char *pcVar14;
  float *pfVar15;
  byte bVar16;
  double dVar17;
  float afStackY_1354 [926];
  CGore *pCVar18;
  CVector3f *pCVar19;
  CBoundingBox3D *out_box;
  int bone_index;
  CVector3f *pCVar20;
  CPathMap *in_stack_fffffb38;
  float fVar21;
  char *in_stack_fffffb40;
  CBoundingBox3D *in_stack_fffffb44;
  CMotionController *this_ptr_02;
  SDamageInfo SStack_494;
  char acStack_458 [32];
  float afStack_438 [6];
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float afStack_3e4 [3];
  float afStack_3d8 [6];
  float afStack_3c0 [6];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float afStack_39c [3];
  float afStack_390 [6];
  uint uStack_378;
  uint uStack_374;
  float fStack_370;
  CVector3f CStack_36c;
  float fStack_360;
  float afStack_35c [2];
  CVector3f CStack_354;
  CVector3f CStack_348;
  CVector3f CStack_33c;
  float fStack_330;
  float afStack_32c [2];
  CVector3f CStack_324;
  CVector3f CStack_318;
  CVector3f CStack_30c;
  CVector3f CStack_300;
  CVector3f CStack_2f4;
  CVector3f CStack_2e8;
  float fStack_2dc;
  float afStack_2d8 [2];
  CVector3f CStack_2d0;
  float fStack_2c4;
  float afStack_2c0 [4];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  CVector3f CStack_294;
  CVector3f CStack_288;
  CVector3f CStack_27c;
  CVector3f CStack_270;
  float fStack_264;
  float afStack_260 [2];
  CVector3f CStack_258;
  CVector3f CStack_24c;
  CVector3f CStack_240;
  CVector3f CStack_234;
  uint uStack_228;
  uint uStack_224;
  float fStack_220;
  float fStack_21c;
  float afStack_218 [4];
  float fStack_208;
  CVector3f CStack_204;
  float fStack_1f8;
  float afStack_1f4 [4];
  float fStack_1e4;
  CVector3f CStack_1e0;
  float fStack_1d4;
  float afStack_1d0 [2];
  CVector3f CStack_1c8;
  CVector3f CStack_1bc;
  float fStack_1b0;
  float afStack_1ac [2];
  CVector3f CStack_1a4;
  float fStack_198;
  float afStack_194 [2];
  CVector3f CStack_18c;
  CVector3f CStack_180;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [4];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [2];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [5];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  double dStack_84;
  double dStack_7c;
  int iStack_6c;
  float fStack_68;
  CCharacter *pCStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  CMotionController *pCStack_3c;
  uint uStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  float *pfStack_28;
  CDeformableModelInstance *pCStack_24;
  float *pfStack_20;
  char *pcStack_1c;
  int iStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar16 = 0;
  iVar5 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar5 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[1]);
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] == 0) &&
     (EVar8 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar8 == DEATH_STATE_ALIVE)) {
    fVar21 = 1.4013e-45;
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar5 + 0x13,(int)fVar21);
  }
  pCStack_64 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCStack_64 != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_64->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
              (&(this_ptr->base).base.model,0,&CStack_18c);
    pCVar20 = &CStack_1bc;
    CStack_1bc.x = CStack_18c.x;
    *(uint *)((int)&CStack_1bc + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_18c + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_1bc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_18c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    iVar5 = (*(pCStack_14->_uc).attractActorToward)(pCStack_64,(CDemonActor *)this_ptr,pCVar20);
    if (iVar5 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  pfStack_28 = afStack_39c;
  fStack_68 = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pfStack_20 = afStack_3e4;
  pCStack_24 = &(this_ptr->base).base.model;
LAB_00425e3e:
  if (0.0 < fStack_68) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_24->base,&fStack_68);
    if (uVar6 < 0xb) {
      if (uVar6 < 5) {
        if (uVar6 == 2) {
          pCVar9 = this_ptr->pickup_target;
          if (pCVar9 != (CDemonActor *)0x0) {
            this_ptr->pickup_target = (CDemonActor *)0x0;
            iVar5 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_00428520
                              (this_ptr,this_ptr->object_shape_class);
            if (-1 < iVar5) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                        ((CCharacter *)this_ptr,iVar5,pCVar9,0.2,(CMatrix3x4f *)0x0);
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n");
            }
          }
        }
        else {
LAB_00425e7b:
          core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar6);
        }
        goto LAB_00425e3e;
      }
      if (uVar6 < 6) {
        iStack_18 = 1;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          CStack_33c.z = (float)g_INT_005dcf48;
          CStack_33c.x = 0.0;
          CStack_33c.y = 0.0;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,&CStack_33c,&CStack_288);
          fStack_2a0 = CStack_288.x;
          afStack_2c0[(uint)bVar16 * -2 + 9] = *(float *)((int)&CStack_288 + (uint)bVar16 * -8 + 4);
          afStack_2c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
               *(float *)((int)&CStack_288 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          pCVar2 = (this_ptr->base).victim;
          fStack_360 = fStack_2a0 - (pCVar2->base).location.position.x;
          afStack_35c[0] = fStack_29c - (pCVar2->base).location.position.y;
          afStack_35c[1] = fStack_298 - (pCVar2->base).location.position.z;
          afStack_e0[2] = fStack_360;
          afStack_e0[(uint)bVar16 * -2 + 3] = afStack_35c[(uint)bVar16 * -2];
          afStack_e0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
               afStack_35c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          afStack_e0[3] = 0.0;
          if (SQRT(afStack_e0[4] * afStack_e0[4] + afStack_e0[2] * afStack_e0[2]) <= 1.0) {
            if (iStack_18 != 0) {
              CStack_108.x = 0.0;
              CStack_108.z = 0.0;
              CStack_108.y = 4.0;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)this_ptr,&CStack_108,&CStack_174);
              CStack_c0.x = CStack_174.x;
              *(uint *)((int)&CStack_c0 + (uint)bVar16 * -8 + 4) =
                   *(uint *)((int)&CStack_174 + (uint)bVar16 * -8 + 4);
              *(uint *)((int)&CStack_c0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                   *(uint *)((int)&CStack_174 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
              pCVar2 = (this_ptr->base).victim;
              puVar11 = (uint *)((int)pCVar2 + (uint)bVar16 * -8 + 0x24);
              CStack_144.x = (pCVar2->base).location.position.x;
              *(uint *)((int)&CStack_144 + (uint)bVar16 * -8 + 4) = *puVar11;
              *(uint *)((int)&CStack_144 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                   puVar11[(uint)bVar16 * -2 + 1];
              CStack_144.y = CStack_c0.y;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
              iVar5 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                (g_CDemonSetPtr,&CStack_c0,&CStack_144);
              if (iVar5 != 0) {
                iStack_18 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            }
            if ((iStack_18 == 0) ||
               (pCVar2 = (this_ptr->base).victim,
               iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar2,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
              if (iStack_18 == 0) {
                core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
              }
              goto LAB_00425e3e;
            }
          }
        }
        core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
        goto LAB_00425e3e;
      }
      if (uVar6 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar6);
        goto LAB_00425e3e;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_24,this_ptr->bone_indices[0],&CStack_324);
        pCVar20 = &CStack_36c;
        CStack_36c.x = CStack_324.x;
        *(uint *)((int)&CStack_36c + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_324 + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&CStack_36c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_324 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar20,&CStack_354);
        CStack_30c.x = CStack_354.x;
        *(uint *)((int)&CStack_30c + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_354 + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&CStack_30c + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_354 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        if (this_ptr->part_indices[4] < 0) {
          pCVar2 = (this_ptr->base).victim;
          fVar21 = CStack_30c.x - (pCVar2->base).location.position.x;
          fVar4 = CStack_30c.z - (pCVar2->base).location.position.z;
          if ((float)1.5 < SQRT(fVar4 * fVar4 + fVar21 * fVar21)) {
            core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
            goto LAB_00425e3e;
          }
        }
        else {
          pCVar2 = (this_ptr->base).victim;
          pCVar7 = (CCarved *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
          if (pCVar7 != this_ptr) {
            in_stack_fffffb38 = (CPathMap *)this_ptr;
            core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
            goto LAB_00425e3e;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_494);
        SStack_494.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,25.0);
        SStack_494.attacker = (CDemonActor *)this_ptr;
        SStack_494.wielder = (CDemonActor *)this_ptr;
        pCVar2 = (this_ptr->base).victim;
        pCStack_14 = (CCharacter_full_vtable *)SStack_494.damage_amount;
        (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&SStack_494);
        dStack_7c = (double)SStack_494.damage_amount;
        if (0.0 < dStack_7c) {
          fVar21 = 6.096434e-39;
          dVar17 = round(dStack_7c * 2.5 * 0.25);
          iStack_6c = (int)ROUND(dVar17);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                    (g_CGorePtr,&CStack_30c,(CVector3f *)0x0,iStack_6c,(EBloodType)fVar21);
        }
        pCVar2 = (this_ptr->base).victim;
        EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
        if (0 < (int)EVar8) {
          pCVar2 = (this_ptr->base).victim;
          (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
          core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
        }
        in_stack_fffffb40 = "ghoul-eat-?.wav";
        in_stack_fffffb38 = (CPathMap *)0x4262c8;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_00425e3e;
      }
      core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
    }
    else if (uVar6 < 0xc) {
      iVar5 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_00428520(this_ptr,2);
      if (iVar5 < 0) {
        g_CHAR_PTR_01d71de0 = "..\\core\\carved.cpp";
        g_INT_01d71de4 = 0x1e6;
        core_main_c_displayErrorAndQuit_FUN_004e4330("WTF!");
      }
      if ((this_ptr->base).base.carry_hands[iVar5].carry_actor != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s lugging %s\n");
        CStack_2e8.x = 0.0;
        CStack_2e8.y = 6.0;
        CStack_2e8.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar5,&CStack_2e8);
        in_stack_fffffb40 = "demn_taunt__???.wav";
        in_stack_fffffb38 = (CPathMap *)0x4263b2;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"demn_taunt__???.wav");
      }
    }
    else if (uVar6 < 0xd) {
      iStack_30 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_00428520(this_ptr,3);
      if (iStack_30 < 0) {
        g_CHAR_PTR_01d71de0 = "..\\core\\carved.cpp";
        g_INT_01d71de4 = 0x1fd;
        core_main_c_displayErrorAndQuit_FUN_004e4330("WTF!");
      }
      pcStack_1c = (this_ptr->base).base.base.actor_name + iStack_30 * 0x78;
      if (*(int *)(pcStack_1c + 0x25b0) != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s tossing %s\n");
        CStack_1a4.x = 0.0;
        CStack_1a4.y = 0.0;
        CStack_1a4.z = 1.0;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          out_box = (CBoundingBox3D *)0x426503;
          (**(code **)(*(int *)(*(int *)(pcStack_1c + 0x25b0) + 0x154) + 0x1c))();
          pfVar13 = afStack_3d8;
          pfVar15 = &fStack_3a8;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pfVar15 = *pfVar13;
            pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
            pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
          }
          afStack_164[2] = fStack_3a8 + *pfStack_28;
          afStack_164[3] = fStack_3a4 + pfStack_28[1];
          fStack_154 = fStack_3a0 + pfStack_28[2];
          fStack_cc = fStack_3a8 + *pfStack_28;
          afStack_e0[(uint)bVar16 * -2 + 6] = afStack_164[(uint)bVar16 * -2 + 3];
          pcVar12 = pcStack_1c;
          afStack_e0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
               afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
          pCVar20 = &CStack_1e0;
          fStack_150 = fStack_cc * 0.5f;
          fStack_14c = fStack_c8 * 0.5f;
          fStack_148 = fStack_c4 * 0.5f;
          CStack_1e0.x = fStack_cc * 0.5f;
          *(float *)((int)&CStack_1e0 + (uint)bVar16 * -8 + 4) = afStack_164[(uint)bVar16 * -2 + 6];
          *(float *)((int)&CStack_1e0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (*(CDemonActor **)(pcVar12 + 0x25b0),pCVar20,&CStack_f0);
          fStack_fc = CStack_f0.x;
          afStack_f8[(uint)bVar16 * -2] = *(float *)((int)&CStack_f0 + (uint)bVar16 * -8 + 4);
          afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               *(float *)((int)&CStack_f0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          pCVar2 = (this_ptr->base).victim;
          (*((pCVar2->base).vtable._ub)->getBoundingBox)(&pCVar2->base,out_box);
          pfVar13 = afStack_390;
          pfVar15 = &fStack_3f0;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pfVar15 = *pfVar13;
            pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
            pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
          }
          fStack_90 = fStack_3f0 + *pfStack_20;
          afStack_8c[0] = fStack_3ec + pfStack_20[1];
          afStack_8c[1] = fStack_3e8 + pfStack_20[2];
          fStack_2dc = fStack_3f0 + *pfStack_20;
          afStack_2d8[(uint)bVar16 * -2] = afStack_8c[(uint)bVar16 * -2];
          afStack_2d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_8c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          fStack_21c = fStack_2dc * 0.5f;
          afStack_218[0] = afStack_2d8[0] * 0.5f;
          afStack_218[1] = afStack_2d8[1] * 0.5f;
          CStack_294.x = fStack_2dc * 0.5f;
          *(float *)((int)&CStack_294 + (uint)bVar16 * -8 + 4) = afStack_218[(uint)bVar16 * -2];
          *(float *)((int)&CStack_294 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               afStack_218[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (&((this_ptr->base).victim)->base,&CStack_294,&CStack_300);
          fStack_138 = CStack_300.x;
          afStack_134[(uint)bVar16 * -2] = *(float *)((int)&CStack_300 + (uint)bVar16 * -8 + 4);
          afStack_134[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               *(float *)((int)&CStack_300 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          afStack_2c0[2] = fStack_138 - fStack_fc;
          afStack_2c0[3] = afStack_134[0] - afStack_f8[0];
          fStack_2b0 = afStack_134[1] - afStack_f8[1];
          CStack_27c.x = fStack_138 - fStack_fc;
          *(float *)((int)&CStack_27c + (uint)bVar16 * -8 + 4) = afStack_2c0[(uint)bVar16 * -2 + 3];
          *(float *)((int)&CStack_27c + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8) =
               afStack_2c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
          fStack_2c = SQRT(CStack_27c.z * CStack_27c.z +
                           CStack_27c.x * CStack_27c.x + CStack_27c.y * CStack_27c.y);
          if (0.0 < fStack_2c) {
            core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
                      ((CDemonActor *)this_ptr,&CStack_27c,&CStack_2f4);
            afStack_218[2] = CStack_2f4.x;
            afStack_218[(uint)bVar16 * -2 + 3] =
                 *(float *)((int)&CStack_2f4 + (uint)bVar16 * -8 + 4);
            afStack_218[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                 *(float *)((int)&CStack_2f4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            fVar21 = 1.0 / fStack_2c;
            afStack_1f4[2] = afStack_218[2] * fVar21;
            afStack_1f4[3] = afStack_218[3] * fVar21;
            fStack_1e4 = fStack_208 * fVar21;
            CStack_120.x = afStack_218[2] * fVar21;
            *(float *)((int)&CStack_120 + (uint)bVar16 * -8 + 4) =
                 afStack_1f4[(uint)bVar16 * -2 + 3];
            *(float *)((int)&CStack_120 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 1) * 4 + 4) =
                 afStack_1f4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
            if (&CStack_1a4 != &CStack_120) {
              CStack_1a4.x = CStack_120.x;
              CStack_1a4.y = CStack_120.y;
              CStack_1a4.z = CStack_120.z;
            }
          }
        }
        CStack_1a4.x = CStack_1a4.x * 27.0f;
        CStack_1a4.z = CStack_1a4.z * 27.0f;
        CStack_1a4.y = CStack_1a4.y * 27.0f + 5.0f;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iStack_30,&CStack_1a4);
        in_stack_fffffb40 = "demn_taunt__???.wav";
        in_stack_fffffb38 = (CPathMap *)0x4264bb;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"demn_taunt__???.wav");
      }
    }
    else if (uVar6 < 0xe) {
      if (this_ptr->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00465060(this_ptr->target_door,0.3);
        (*((this_ptr->target_door->base).vtable._ub)->playSound)
                  (&this_ptr->target_door->base,"zombie-bang-door?.wav");
        this_ptr->target_door = (CDoor *)0x0;
      }
    }
    else {
      if (uVar6 < 0x65) goto LAB_00425e7b;
      if (uVar6 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar6 == 0x29a) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_24,this_ptr->bone_indices[0],&CStack_9c);
        pCVar20 = &CStack_a8;
        CStack_a8.x = CStack_9c.x;
        *(uint *)((int)&CStack_a8 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_9c + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&CStack_a8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_9c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar20,&CStack_270);
        fVar21 = 0.0;
        iVar5 = 3;
        pCVar19 = (CVector3f *)0x0;
        pCVar20 = &CStack_318;
        CStack_318.x = CStack_270.x;
        *(uint *)((int)&CStack_318 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_270 + (uint)bVar16 * -8 + 4);
        pCVar18 = g_CGorePtr;
        *(uint *)((int)&CStack_318 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_270 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                  (pCVar18,pCVar20,pCVar19,iVar5,(EBloodType)fVar21);
        iVar5 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
        if (iVar5 == 0) {
          pcVar12 = "ghoul-dig-?.wav";
        }
        else {
          pcVar12 = "ghoul-eat-?.wav";
        }
        pcVar14 = acStack_458;
        do {
          cVar1 = *pcVar12;
          *pcVar14 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar14[1] = cVar1;
          pcVar14 = pcVar14 + 2;
        } while (cVar1 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_458);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar6);
      }
    }
    goto LAB_00425e3e;
  }
  fVar21 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar21);
  if (((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar21 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar21,
      (float)6 <= fVar21)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffb30);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffffb30);
    this_ptr->bleedout_timer = -1.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  iStack_48 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 != 0) {
    EVar3 = (this_ptr->base).base.walk_state;
    if (EVar3 < 2) {
      if (EVar3 != WALK_STATE_WALKING) {
LAB_00426d3d:
        fVar21 = 1.4013e-45;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,iVar5,(int)fVar21);
        goto LAB_004269b6;
      }
    }
    else if (2 < EVar3) {
      if (EVar3 == WALK_STATE_NO_PATH) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        goto LAB_004269b6;
      }
      goto LAB_00426d3d;
    }
    core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
    goto LAB_004269b6;
  }
  fStack_34 = -1.0;
  fStack_40 = 0.3;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  switch(pSVar10->state_index) {
  case 0:
  case 1:
  case 2:
    iVar5 = core_actor_cpp_randomChance_FUN_0040cf40(delta_time * (float)0.125);
    if (iVar5 == 0) {
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      if (iVar5 != 0) {
        core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        in_stack_fffffb38 = (CPathMap *)0x426fb7;
        EVar8 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                  getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
        if (EVar8 == DEATH_STATE_ALIVE) break;
        g_CGamePtr->player_hit_flag = 1;
        (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
        if (iVar5 == 0) {
          if (this_ptr->is_female == 0) {
            in_stack_fffffb38 = (CPathMap *)0x426ff7;
            uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"demn_chase_???.wav");
            this_ptr->sfx_handles[1] = uVar6;
          }
          else {
            in_stack_fffffb38 = (CPathMap *)0x426f6d;
            uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"demn_chase_???.wav");
            this_ptr->sfx_handles[1] = uVar6;
          }
        }
      }
    }
    else {
      fVar21 = 1.4013e-45;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,iVar5,(int)fVar21);
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
    pCVar2 = (this_ptr->base).victim;
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      in_stack_fffffb38 = (CPathMap *)0x427044;
      EVar8 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
      if (EVar8 != DEATH_STATE_ALIVE) {
        g_CGamePtr->player_hit_flag = 1;
        (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
      }
    }
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      in_stack_fffffb38 = (CPathMap *)0x4270cb;
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        fVar21 = 1.4013e-45;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        in_stack_fffffb38 = (CPathMap *)&(this_ptr->base).base.model;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)in_stack_fffffb38,iVar5,(int)fVar21);
      }
    }
    else if (pCVar2 == (CCharacter *)0x0) {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
      if (iVar5 == 0) {
        if (this_ptr->is_female == 0) {
          pcVar12 = "demn_chase_???.wav";
        }
        else {
          pcVar12 = "demn_chase_???.wav";
        }
        in_stack_fffffb38 = (CPathMap *)0x4270a8;
        uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,pcVar12);
        this_ptr->sfx_handles[1] = uVar6;
      }
      core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
    }
    else {
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0x32);
      if (iVar5 == 1) {
        core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
      }
      uStack_38 = (uint)((this_ptr->base).base.model.part_data.visibility_flags
                         [this_ptr->part_indices[1]] != 0);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        uStack_38 = uStack_38 + 1;
      }
      in_stack_fffffb38 = (CPathMap *)0x427155;
      iVar5 = core_carved_cpp_CCarved_processPickup_FUN_00427bc0(this_ptr,delta_time);
      if (iVar5 == 0) {
        fStack_58 = (float)g_INT_005dcf48;
        iStack_50 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_00428520(this_ptr,1);
        if (((-1 < iStack_50) &&
            (pCVar9 = (this_ptr->base).base.carry_hands[iStack_50].carry_actor,
            pCVar9 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
          fStack_54 = 1.0;
          if (pCVar9 != (CDemonActor *)0x0) {
            (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,in_stack_fffffb44);
            pfVar13 = afStack_438;
            pfVar15 = &fStack_408;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pfVar15 = *pfVar13;
              pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
              pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
            }
            in_stack_fffffb44 = (CBoundingBox3D *)0x4271ef;
            core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_204);
            CStack_204.x = fStack_3fc - fStack_408;
            CStack_204.y = fStack_3f8 - fStack_404;
            CStack_204.z = fStack_3f4 - fStack_400;
            fStack_2ac = fStack_3fc - fStack_408;
            afStack_2c0[(uint)bVar16 * -2 + 6] =
                 *(float *)((int)&CStack_204 + (uint)bVar16 * -8 + 4);
            afStack_2c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
                 *(float *)((int)&CStack_204 + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8);
            fStack_54 = fStack_2a4 * (float)0.5 + 1.0;
          }
          fStack_58 = fStack_54;
        }
        fVar21 = 0.6981317;
        pCVar20 = (CVector3f *)0x3f666666;
        uStack_228 = 0;
        fStack_220 = fStack_58;
        uStack_224 = 0;
        pCVar2 = (this_ptr->base).victim;
        in_stack_fffffb38 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,in_stack_fffffb38,
                           pCVar20,fVar21,(float)in_stack_fffffb44);
        pCStack_3c = &(this_ptr->base).base.model.base;
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          fVar21 = 1.4013e-45;
          iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
          in_stack_fffffb38 = (CPathMap *)0x42736c;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (pCStack_3c,iVar5,(int)fVar21);
        }
        else if (iVar5 < 1) {
          iStack_4c = core_carved_cpp_CCarved_getPickupHandIndex_FUN_00428520
                                (this_ptr,this_ptr->object_shape_class);
          pCVar2 = (this_ptr->base).victim;
          fStack_1b0 = (this_ptr->base).base.base.location.position.x -
                       (pCVar2->base).location.position.x;
          afStack_1ac[0] =
               (this_ptr->base).base.base.location.position.y - (pCVar2->base).location.position.y;
          afStack_1ac[1] =
               (this_ptr->base).base.base.location.position.z - (pCVar2->base).location.position.z;
          fStack_114 = fStack_1b0;
          *(float *)((int)&CStack_120 + ((uint)bVar16 * -2 + 3) * 4 + 4) =
               afStack_1ac[(uint)bVar16 * -2];
          *(float *)((int)&CStack_120 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 4) * 4 + 4) =
               afStack_1ac[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          if (SQRT(fStack_10c * fStack_10c + fStack_114 * fStack_114 + fStack_110 * fStack_110) <
              (float)20) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      ((CDemonActor *)this_ptr,&(pCVar2->base).location.position,&CStack_258);
            CStack_180.x = CStack_258.x;
            *(uint *)((int)&CStack_180 + (uint)bVar16 * -8 + 4) =
                 *(uint *)((int)&CStack_258 + (uint)bVar16 * -8 + 4);
            *(uint *)((int)&CStack_180 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                 *(uint *)((int)&CStack_258 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                      (&CStack_180,&CStack_1c8);
            fStack_264 = CStack_1c8.x;
            afStack_260[(uint)bVar16 * -2] = *(float *)((int)&CStack_1c8 + (uint)bVar16 * -8 + 4);
            afStack_260[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 *(float *)((int)&CStack_1c8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            if (((((ABS(afStack_260[0]) < (float)0.261799387791667) && (-1 < iStack_4c)) &&
                 (uVar6 = this_ptr->object_shape_class, 1 < uVar6)) && ((2 < uVar6 && (uVar6 == 3)))
                ) && ((this_ptr->base).base.carry_hands[iStack_4c].carry_actor != (CDemonActor *)0x0
                     )) {
              engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s tossing\n");
              in_stack_fffffb38 = (CPathMap *)0x4274c8;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0x1a,1);
            }
          }
        }
        else if (((0 < (int)uStack_38) && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                (pCVar2 = (this_ptr->base).victim,
                pCVar9 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
                pCVar9 == (CDemonActor *)0x0)) {
          pCVar2 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
          if (EVar8 == DEATH_STATE_ALIVE) {
            if ((iStack_50 < 0) ||
               ((this_ptr->base).base.carry_hands[iStack_50].carry_actor == (CDemonActor *)0x0)) {
              fVar21 = 1.68156e-44;
              this_ptr_02 = &(this_ptr->base).base.model.base;
            }
            else {
              fVar21 = 1.54143e-44;
              this_ptr_02 = pCStack_3c;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (this_ptr_02,(int)fVar21,1);
          }
          (this_ptr->base).attack_cooldown = 0.8;
        }
      }
    }
    break;
  case 0xb:
    if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_00427596;
    iVar5 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_00428520(this_ptr,1);
    if (((-1 < iVar5) &&
        (pCVar2 = (this_ptr->base).victim,
        EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2), (int)EVar8 < 1)) &&
       ((this_ptr->base).base.carry_hands[iVar5].carry_actor != (CDemonActor *)0x0)) {
      in_stack_fffffb38 = (CPathMap *)(this_ptr->base).victim;
      pCVar9 = (**(code **)((int)(&((UOrientationVector *)in_stack_fffffb38->height_cache)->vec)
                                 [0x18].y + 0xf4))((CCharacter *)in_stack_fffffb38);
      if (pCVar9 == (CDemonActor *)0x0) {
        pCVar9 = (this_ptr->base).base.carry_hands[iVar5].carry_actor;
        fStack_44 = 1.0;
        if (pCVar9 != (CDemonActor *)0x0) {
          in_stack_fffffb38 = (CPathMap *)0x42765a;
          (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,(CBoundingBox3D *)in_stack_fffffb40);
          pfVar13 = afStack_3c0;
          pfVar15 = &fStack_420;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pfVar15 = *pfVar13;
            pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
            pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
          }
          core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_348);
          CStack_348.x = fStack_414 - fStack_420;
          CStack_348.y = fStack_410 - fStack_41c;
          CStack_348.z = fStack_40c - fStack_418;
          fStack_1d4 = fStack_414 - fStack_420;
          afStack_1d0[(uint)bVar16 * -2] = *(float *)((int)&CStack_348 + (uint)bVar16 * -8 + 4);
          afStack_1d0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               *(float *)((int)&CStack_348 + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8);
          fStack_44 = afStack_1d0[1] * (float)0.5 + 1.0;
        }
        fStack_34 = fStack_44;
        fStack_5c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                              (&(this_ptr->base).base.model.base);
        dStack_84 = (double)fStack_5c;
        pCStack_14 = (CCharacter_full_vtable *)fStack_5c;
        if ((1.0 <= dStack_84) && (dStack_84 <= 2)) {
          iStack_48 = 1;
        }
        break;
      }
    }
    engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s gave up swing\n");
    core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
    break;
  case 0xc:
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2), (int)EVar8 < 1)) {
      in_stack_fffffb38 = (CPathMap *)(this_ptr->base).victim;
      pCVar7 = (CCarved *)
               (**(code **)((int)(&((UOrientationVector *)in_stack_fffffb38->height_cache)->vec)
                                 [0x18].y + 0xf4))((CCharacter *)in_stack_fffffb38);
      if (pCVar7 == (CCarved *)0x0) {
        fStack_40 = 3.0;
        fStack_34 = (float)g_INT_005dcf48;
      }
      else if (pCVar7 != this_ptr) {
        in_stack_fffffb38 = (CPathMap *)0x4275b2;
        core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
      }
      pCVar2 = (this_ptr->base).victim;
      fStack_330 = (this_ptr->base).base.base.location.position.x -
                   (pCVar2->base).location.position.x;
      afStack_32c[0] =
           (this_ptr->base).base.base.location.position.y - (pCVar2->base).location.position.y;
      afStack_32c[1] =
           (this_ptr->base).base.base.location.position.z - (pCVar2->base).location.position.z;
      fStack_2c4 = fStack_330;
      afStack_2c0[(uint)bVar16 * -2] = afStack_32c[(uint)bVar16 * -2];
      afStack_2c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_32c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      if (SQRT(afStack_2c0[1] * afStack_2c0[1] +
               fStack_2c4 * fStack_2c4 + afStack_2c0[0] * afStack_2c0[0]) <=
          (float)1.5) break;
    }
LAB_00427596:
    core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
    break;
  case 0x16:
    if (((this_ptr->base).pool_me == 0) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                (this_ptr_00,0,&CStack_234);
      pCVar20 = &CStack_240;
      CStack_240.x = CStack_234.x;
      *(uint *)((int)&CStack_240 + (uint)bVar16 * -8 + 4) =
           *(uint *)((int)&CStack_234 + (uint)bVar16 * -8 + 4);
      *(uint *)((int)&CStack_240 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           *(uint *)((int)&CStack_234 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar20,&CStack_12c);
      fVar21 = 0.0;
      pCVar20 = &CStack_24c;
      CStack_24c.x = CStack_12c.x;
      *(uint *)((int)&CStack_24c + (uint)bVar16 * -8 + 4) =
           *(uint *)((int)&CStack_12c + (uint)bVar16 * -8 + 4);
      pCVar18 = g_CGorePtr;
      *(uint *)((int)&CStack_24c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           *(uint *)((int)&CStack_12c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004cec40(pCVar18,pCVar20,(EBloodType)fVar21);
      this_ptr_01 = g_CEventList_PTR_005fba60;
      (this_ptr->base).pool_me = 1;
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(this_ptr_01,"CarvedDead");
    }
  }
  if ((0.0 <= fStack_34) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
    fVar21 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = fStack_40 * (this_ptr->base).speed * delta_time;
    core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
              ((CCharacter *)this_ptr,delta_time * fVar21);
    fVar21 = 0.7853982;
    pCVar20 = (CVector3f *)0x40400000;
    uStack_378 = 0;
    fStack_370 = fStack_34;
    uStack_374 = 0;
    pCVar2 = (this_ptr->base).victim;
    path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
    iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,
                       path_map,pCVar20,fVar21,(float)in_stack_fffffb38);
    if (iVar5 != 1) {
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s giving up attack\n");
      core_carved_cpp_CCarved_resetChaseState_FUN_00429090(this_ptr);
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
    }
  }
LAB_004269b6:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar7 = (CCarved *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_168 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_164[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_164[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_1f8 = fStack_168;
    afStack_1f4[(uint)bVar16 * -2] = afStack_164[(uint)bVar16 * -2];
    afStack_1f4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    pCVar20 = &(this_ptr->base).base.position_delta;
    fStack_b4 = fStack_1f8 + pCVar20->x;
    afStack_b0[0] = afStack_1f4[0] + (this_ptr->base).base.position_delta.y;
    afStack_b0[1] = afStack_1f4[1] + (this_ptr->base).base.position_delta.z;
    fStack_e4 = fStack_b4;
    afStack_e0[(uint)bVar16 * -2] = afStack_b0[(uint)bVar16 * -2];
    afStack_e0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    pCVar19 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_198 = fStack_e4 + pCVar19->x;
    afStack_194[0] = afStack_e0[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_194[1] = afStack_e0[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_2d0.x = fStack_198;
    *(float *)((int)&CStack_2d0 + (uint)bVar16 * -8 + 4) = afStack_194[(uint)bVar16 * -2];
    *(float *)((int)&CStack_2d0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_194[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar20->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar19->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_2d0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if ((this_ptr->base).pool_me == 0) {
    iVar5 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar5] == 0) {
      bone_index = this_ptr->bone_indices[10];
      fVar21 = 0.5;
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
      bone_index = this_ptr->bone_indices[0];
      fVar21 = 0.7;
      iVar5 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
              ((CCharacter *)this_ptr,iVar5,bone_index,fVar21);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042fc90((CCharacter *)this_ptr);
  }
  iVar5 = core_carved_cpp_CCarved_getPickupHandIndex_FUN_00428520(this_ptr,1);
  if (((iStack_48 != 0) && (-1 < iVar5)) &&
     (pCVar9 = (this_ptr->base).base.carry_hands[iVar5].carry_actor, pCVar9 != (CDemonActor *)0x0))
  {
    (*((pCVar9->vtable)._ub)->processMeleeHit)(pCVar9,2);
    return;
  }
  return;
}
