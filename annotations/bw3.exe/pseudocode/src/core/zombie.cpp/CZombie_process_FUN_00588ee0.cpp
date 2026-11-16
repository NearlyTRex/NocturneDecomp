// Name: core_zombie.cpp_CZombie_process_FUN_00588ee0
// Address: 00588ee0
// Address Range: [[00588ee0, 0058af84]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_process_FUN_00588ee0(CZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_CZombie_process_FUN_00588ee0(CZombie *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  char cVar4;
  EWalkState EVar5;
  CEnemy_full_vtable *pCVar6;
  CCharacter_full_vtable *pCVar7;
  int iVar8;
  CMotionList *pCVar9;
  uint uVar10;
  CZombie *pCVar11;
  EDeathState EVar12;
  SMotion *pSVar13;
  int iVar14;
  CPathMap *pCVar15;
  CDemonActor *pCVar16;
  uint *puVar17;
  float *pfVar18;
  char *pcVar19;
  float *pfVar20;
  byte bVar21;
  float10 fVar22;
  float10 fVar23;
  double dVar24;
  float afStackY_1454 [6];
  UActorVTable aUStackY_143c [15];
  float afStackY_1400 [24];
  UActorVTable aUStackY_13a0 [6];
  float afStackY_1388 [30];
  UActorVTable aUStackY_1310 [3];
  float afStackY_1304 [18];
  UActorVTable aUStackY_12bc [12];
  float afStackY_128c [30];
  UActorVTable aUStackY_1214 [6];
  CDemonActor *apCStackY_11fc [6];
  float afStackY_11e4 [18];
  UActorVTable aUStackY_119c [12];
  float afStackY_116c [12];
  UActorVTable aUStackY_113c [9];
  float afStackY_1118 [9];
  UActorVTable aUStackY_10f4 [712];
  CGore *this_ptr_00;
  CCharacter *pCVar25;
  CVector3f *pCVar26;
  char *pcVar27;
  CBoundingBox3D *out_box;
  CVector3f *pCVar28;
  float fVar29;
  CZombie *in_stack_fffffa44;
  char *in_stack_fffffa4c;
  SDamageInfo SStack_588;
  char acStack_54c [32];
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float afStack_520 [3];
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float afStack_4fc [6];
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float afStack_4c0 [3];
  float afStack_4b4 [6];
  float afStack_49c [6];
  float afStack_484 [6];
  CVector3f CStack_46c;
  float fStack_460;
  float afStack_45c [3];
  UActorVTable UStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  CVector3f CStack_43c;
  CVector3f CStack_430;
  CVector3f CStack_424;
  CVector3f CStack_418;
  float fStack_40c;
  float afStack_408 [4];
  float fStack_3f8;
  CVector3f CStack_3f4;
  float fStack_3e8;
  float afStack_3e4 [4];
  float fStack_3d4;
  CVector3f CStack_3d0;
  CVector3f CStack_3c4;
  float fStack_3b8;
  UActorVTable UStack_3b4;
  float fStack_3b0;
  CVector3f CStack_3ac;
  CVector3f CStack_3a0;
  CVector3f CStack_394;
  float fStack_388;
  float afStack_384 [4];
  float fStack_374;
  CVector3f CStack_370;
  float fStack_364;
  float afStack_360 [5];
  CVector3f CStack_34c;
  CVector3f CStack_340;
  CVector3f CStack_334;
  float fStack_328;
  UActorVTable UStack_324;
  float fStack_320;
  CVector3f CStack_31c;
  float fStack_310;
  float afStack_30c [2];
  CVector3f CStack_304;
  float fStack_2f8;
  float afStack_2f4 [4];
  float fStack_2e4;
  CVector3f CStack_2e0;
  float fStack_2d4;
  UActorVTable UStack_2d0;
  float fStack_2cc;
  CVector3f CStack_2c8;
  uint uStack_2bc;
  uint uStack_2b8;
  float fStack_2b4;
  CVector3f CStack_2b0;
  CVector3f CStack_2a4;
  float fStack_298;
  float afStack_294 [2];
  CVector3f CStack_28c;
  CVector3f CStack_280;
  CVector3f CStack_274;
  float fStack_268;
  float afStack_264 [2];
  CVector3f CStack_25c;
  float fStack_250;
  UActorVTable UStack_24c;
  float fStack_248;
  float fStack_244;
  float afStack_240 [2];
  CVector3f CStack_238;
  float fStack_22c;
  UActorVTable UStack_228;
  float fStack_224;
  UOrientationVector UStack_220;
  float fStack_214;
  float fStack_210;
  CDemonActor *pCStack_20c;
  CVector3f CStack_208;
  float fStack_1fc;
  float afStack_1f8 [4];
  float fStack_1e8;
  CVector3f CStack_1e4;
  CVector3f CStack_1d8;
  float fStack_1cc;
  float afStack_1c8 [5];
  float fStack_1b4;
  UActorVTable UStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  CVector3f CStack_184;
  CVector3f CStack_178;
  float fStack_16c;
  float afStack_168 [2];
  CVector3f CStack_160;
  float fStack_154;
  UActorVTable UStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  CVector3f CStack_13c;
  float fStack_130;
  float afStack_12c [2];
  CVector3f CStack_124;
  uint uStack_118;
  uint uStack_114;
  float fStack_110;
  float fStack_10c;
  UActorVTable UStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  CVector3f CStack_e8;
  double dStack_dc;
  double dStack_d4;
  int iStack_c4;
  CDeformableModelInstance *pCStack_c0;
  char *pcStack_bc;
  float fStack_b0;
  float fStack_a8;
  int iStack_a4;
  int iStack_a0;
  float *pfStack_9c;
  float fStack_98;
  float fStack_94;
  float *pfStack_90;
  float fStack_8c;
  float fStack_88;
  int iStack_84;
  CLocation *pCStack_80;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  int iStack_60;
  float fStack_5c;
  int iStack_58;
  float fStack_54;
  CCharacter *pCStack_50;
  float fStack_4c;
  float fStack_48;
  CMotionController *pCStack_3c;
  CVector3f *pCStack_38;
  int iStack_34;
  int iStack_30;
  CDeformableModelInstance *pCStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar21 = 0;
  if ((0.0 < (this_ptr->base).base.bind_time) && ((this_ptr->base).base.bind_type == 0)) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
  }
  iVar8 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar8 == 0) {
    return;
  }
  fVar29 = 0.0;
  pcVar27 = "CHASE_2";
  iStack_78 = 0;
  pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                     (&(this_ptr->base).base.model.base);
  iVar8 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(pCVar9,pcVar27,(int)fVar29);
  if (iVar8 == 2) {
    iStack_78 = 1;
  }
  pCVar25 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCVar25 != (CCharacter *)0x0) {
    pCStack_14 = (pCVar25->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
              (&(this_ptr->base).base.model,0,&CStack_25c);
    pCVar7 = pCStack_14;
    pCVar28 = &CStack_28c;
    pCStack_50 = pCVar25;
    CStack_28c.x = CStack_25c.x;
    *(uint *)((int)&CStack_28c + (uint)bVar21 * -8 + 4) =
         *(uint *)((int)&CStack_25c + (uint)bVar21 * -8 + 4);
    pCVar11 = this_ptr;
    *(uint *)((int)&CStack_28c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
         *(uint *)((int)&CStack_25c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
    iVar8 = (*(pCVar7->_uc).attractActorToward)(pCVar25,(CDemonActor *)pCVar11,pCVar28);
    if (iVar8 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  pCStack_c0 = &(this_ptr->base).base.model;
  fStack_54 = delta_time * (this_ptr->base).speed;
  pfStack_9c = afStack_4c0;
  pfStack_90 = afStack_520;
LAB_00588fbb:
  if (0.0 < fStack_54) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_c0->base,&fStack_54);
    if (uVar10 < 0xb) {
      if (uVar10 < 5) {
        if (uVar10 == 2) {
          pCVar16 = this_ptr->pickup_target;
          if (pCVar16 != (CDemonActor *)0x0) {
            this_ptr->pickup_target = (CDemonActor *)0x0;
            iVar8 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50
                              (this_ptr,this_ptr->object_shape_class);
            if (-1 < iVar8) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                        ((CCharacter *)this_ptr,iVar8,pCVar16,0.2,(CMatrix3x4f *)0x0);
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n");
            }
          }
        }
        else {
          core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
        }
        goto LAB_00588fbb;
      }
      if (uVar10 < 6) {
        iStack_a0 = 1;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          fStack_98 = 0x3FA66666;
          CStack_2c8.x = 0.0;
          CStack_2c8.y = 0.0;
          CStack_2c8.z = 0x3FA66666;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,&CStack_2c8,&CStack_2e0);
          afStack_1f8[2] = CStack_2e0.x;
          afStack_1f8[(uint)bVar21 * -2 + 3] = *(float *)((int)&CStack_2e0 + (uint)bVar21 * -8 + 4);
          afStack_1f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
               *(float *)((int)&CStack_2e0 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
          pCVar25 = (this_ptr->base).victim;
          fStack_148 = afStack_1f8[2] - (pCVar25->base).location.position.x;
          fStack_144 = afStack_1f8[3] - (pCVar25->base).location.position.y;
          fStack_140 = fStack_1e8 - (pCVar25->base).location.position.z;
          fStack_1a8 = fStack_148;
          (&UStack_1b0)[(uint)bVar21 * -2 + 3] = (&UStack_150)[(uint)bVar21 * -2 + 3];
          (&UStack_1b0)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
               (&UStack_150)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
          uStack_1a4 = 0;
          if (SQRT(fStack_1a0 * fStack_1a0 + fStack_1a8 * fStack_1a8) <= 1.0) {
            CStack_13c.x = 0.0;
            CStack_13c.z = 0.0;
            CStack_13c.y = 4.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,&CStack_13c,&CStack_3d0);
            CStack_238.x = CStack_3d0.x;
            *(uint *)((int)&CStack_238 + (uint)bVar21 * -8 + 4) =
                 *(uint *)((int)&CStack_3d0 + (uint)bVar21 * -8 + 4);
            *(uint *)((int)&CStack_238 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                 *(uint *)((int)&CStack_3d0 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            fVar29 = CStack_238.y;
            pCVar25 = (this_ptr->base).victim;
            puVar17 = (uint *)((int)pCVar25 + (uint)bVar21 * -8 + 0x24);
            CStack_340.x = (pCVar25->base).location.position.x;
            *(uint *)((int)&CStack_340 + (uint)bVar21 * -8 + 4) = *puVar17;
            *(uint *)((int)&CStack_340 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                 puVar17[(uint)bVar21 * -2 + 1];
            CStack_340.y = fVar29;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                      (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
            iVar8 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                              (g_CDemonSetPtr,&CStack_238,&CStack_340);
            if (iVar8 != 0) {
              iStack_a0 = 0;
            }
            iVar8 = iStack_a0;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            if (((iVar8 == 0) ||
                (pCVar25 = (this_ptr->base).victim,
                iVar8 = (*(((pCVar25->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar25,(CDemonActor *)this_ptr,0), iVar8 != 0)) &&
               (iStack_a0 != 0)) goto LAB_00588fbb;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_c0->base,0,1);
        goto LAB_00588fbb;
      }
      if (uVar10 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
        goto LAB_00588fbb;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_c0,this_ptr->bone_indices[0],&CStack_e8);
        pCVar28 = &CStack_2b0;
        CStack_2b0.x = CStack_e8.x;
        *(uint *)((int)&CStack_2b0 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_e8 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_2b0 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_e8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar28,&CStack_394);
        CStack_178.x = CStack_394.x;
        *(uint *)((int)&CStack_178 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_394 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_178 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_394 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        if (this_ptr->part_indices[4] < 0) {
          pCVar25 = (this_ptr->base).victim;
          fVar29 = CStack_178.x - (pCVar25->base).location.position.x;
          fVar3 = CStack_178.z - (pCVar25->base).location.position.z;
          if ((float)_DAT_005d8737 < SQRT(fVar3 * fVar3 + fVar29 * fVar29)) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
            goto LAB_00588fbb;
          }
        }
        else {
          pCVar25 = (this_ptr->base).victim;
          pCVar11 = (CZombie *)(*(((pCVar25->base).vtable._uc)->_uc).getGrabber)(pCVar25);
          if (pCVar11 != this_ptr) {
            in_stack_fffffa44 = this_ptr;
            core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
            goto LAB_00588fbb;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_588);
        SStack_588.damage_amount = (this_ptr->base).attack_damage;
        SStack_588.attacker = (CDemonActor *)this_ptr;
        SStack_588.wielder = (CDemonActor *)this_ptr;
        pCVar25 = (this_ptr->base).victim;
        (*(((pCVar25->base).vtable._uc)->_uc).processDamage)(pCVar25,&SStack_588);
        dStack_dc = (double)SStack_588.damage_amount;
        if (0.0 < dStack_dc) {
          fVar29 = 8.134455e-39;
          dVar24 = round(dStack_dc * _DAT_005d8707 * _DAT_005d870f);
          iStack_c4 = (int)ROUND(dVar24);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                    (g_CGorePtr,&CStack_178,(CVector3f *)0x0,iStack_c4,(EBloodType)fVar29);
        }
        pCVar25 = (this_ptr->base).victim;
        EVar12 = (*(((pCVar25->base).vtable._uc)->_uc).getDeathState)(pCVar25);
        if (0 < (int)EVar12) {
          pCVar25 = (this_ptr->base).victim;
          (*(((pCVar25->base).vtable._uc)->_uc).releaseFromGrab)(pCVar25);
          core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
        }
        in_stack_fffffa4c = "ghoul-eat-?.wav";
        in_stack_fffffa44 = (CZombie *)0x5893f4;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_00588fbb;
      }
      core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
    }
    else if (uVar10 < 0xc) {
      iVar8 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50(this_ptr,2);
      if (iVar8 < 0) {
        _DAT_01d71de0 = "..\\core\\zombie.cpp";
        _DAT_01d71de4 = 0x21b;
        core_main_c_displayErrorAndQuit_FUN_004e4330(&DAT_005d8549);
      }
      if ((this_ptr->base).base.carry_hands[iVar8].carry_actor != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s lugging %s\n");
        CStack_3ac.y = 6.0;
        CStack_3ac.x = 0.0;
        CStack_3ac.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar8,&CStack_3ac);
        in_stack_fffffa4c = "zom-h0?.wav";
        in_stack_fffffa44 = (CZombie *)0x5894de;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar10 < 0x65) {
      if (uVar10 == 0xc) {
        iStack_7c = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50(this_ptr,3);
        if (iStack_7c < 0) {
          _DAT_01d71de0 = "..\\core\\zombie.cpp";
          _DAT_01d71de4 = 0x232;
          core_main_c_displayErrorAndQuit_FUN_004e4330(&DAT_005d857c);
        }
        pcStack_bc = (this_ptr->base).base.base.actor_name + iStack_7c * 0x78;
        if (*(int *)(pcStack_bc + 0x25b0) != 0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s tossing %s\n");
          CStack_208.x = 0.0;
          CStack_208.y = 0.0;
          CStack_208.z = 1.0;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            out_box = (CBoundingBox3D *)0x589638;
            (**(code **)(*(int *)(*(int *)(pcStack_bc + 0x25b0) + 0x154) + 0x1c))();
            pfVar18 = afStack_4b4;
            pfVar20 = &fStack_4cc;
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              *pfVar20 = *pfVar18;
              pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
              pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
            }
            fStack_19c = fStack_4cc + *pfStack_9c;
            fStack_198 = fStack_4c8 + pfStack_9c[1];
            fStack_194 = fStack_4c4 + pfStack_9c[2];
            fStack_448 = fStack_4cc + *pfStack_9c;
            (&UStack_450)[(uint)bVar21 * -2 + 3] = (&UStack_1b0)[(uint)bVar21 * -2 + 6];
            pcVar27 = pcStack_bc;
            (&UStack_450)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                 (&UStack_1b0)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
            pCVar28 = &CStack_124;
            UStack_220.vec.x = fStack_448 * _DAT_005d86ff;
            UStack_220.vec.y = fStack_444 * _DAT_005d86ff;
            UStack_220.vec.z = fStack_440 * _DAT_005d86ff;
            CStack_124.x = fStack_448 * _DAT_005d86ff;
            *(uint *)((int)&CStack_124 + (uint)bVar21 * -8 + 4) =
                 *(uint *)((int)&UStack_220 + (uint)bVar21 * -8 + 4);
            *(uint *)((int)&CStack_124 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                 *(uint *)((int)&UStack_220 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8)
            ;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      (*(CDemonActor **)(pcVar27 + 0x25b0),pCVar28,&CStack_184);
            fStack_244 = CStack_184.x;
            afStack_240[(uint)bVar21 * -2] = *(float *)((int)&CStack_184 + (uint)bVar21 * -8 + 4);
            afStack_240[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 *(float *)((int)&CStack_184 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            pCVar25 = (this_ptr->base).victim;
            (*((pCVar25->base).vtable._ub)->getBoundingBox)(&pCVar25->base,out_box);
            pfVar18 = afStack_4fc;
            pfVar20 = &fStack_52c;
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              *pfVar20 = *pfVar18;
              pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
              pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
            }
            fStack_2d4 = fStack_52c + *pfStack_90;
            UStack_2d0 = (UActorVTable)(fStack_528 + pfStack_90[1]);
            fStack_2cc = fStack_524 + pfStack_90[2];
            fStack_1b4 = fStack_52c + *pfStack_90;
            (&UStack_1b0)[(uint)bVar21 * -2] = (&UStack_2d0)[(uint)bVar21 * -2];
            (&UStack_1b0)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 (&UStack_2d0)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            fStack_16c = fStack_1b4 * _DAT_005d86ff;
            afStack_168[0] = (float)UStack_1b0 * _DAT_005d86ff;
            afStack_168[1] = fStack_1ac * _DAT_005d86ff;
            CStack_2a4.x = fStack_1b4 * _DAT_005d86ff;
            *(float *)((int)&CStack_2a4 + (uint)bVar21 * -8 + 4) = afStack_168[(uint)bVar21 * -2];
            *(float *)((int)&CStack_2a4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                 afStack_168[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      (&((this_ptr->base).victim)->base,&CStack_2a4,&CStack_1e4);
            afStack_2f4[2] = CStack_1e4.x;
            afStack_2f4[(uint)bVar21 * -2 + 3] =
                 *(float *)((int)&CStack_1e4 + (uint)bVar21 * -8 + 4);
            afStack_2f4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                 *(float *)((int)&CStack_1e4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            fStack_310 = afStack_2f4[2] - fStack_244;
            afStack_30c[0] = afStack_2f4[3] - afStack_240[0];
            afStack_30c[1] = fStack_2e4 - afStack_240[1];
            CStack_304.x = afStack_2f4[2] - fStack_244;
            *(float *)((int)&CStack_304 + (uint)bVar21 * -8 + 4) = afStack_30c[(uint)bVar21 * -2];
            *(float *)((int)&CStack_304 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
                 afStack_30c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            fStack_b0 = SQRT(CStack_304.z * CStack_304.z +
                             CStack_304.x * CStack_304.x + CStack_304.y * CStack_304.y);
            if (0.0 < fStack_b0) {
              core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
                        ((CDemonActor *)this_ptr,&CStack_304,&CStack_418);
              fStack_1cc = CStack_418.x;
              afStack_1c8[(uint)bVar21 * -2] = *(float *)((int)&CStack_418 + (uint)bVar21 * -8 + 4);
              afStack_1c8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   *(float *)((int)&CStack_418 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              fVar29 = 1.0 / fStack_b0;
              afStack_45c[2] = fStack_1cc * fVar29;
              UStack_450 = (UActorVTable)(afStack_1c8[0] * fVar29);
              fStack_44c = afStack_1c8[1] * fVar29;
              CStack_424.x = fStack_1cc * fVar29;
              *(UActorVTable *)((int)&CStack_424 + (uint)bVar21 * -8 + 4) =
                   (&UStack_450)[(uint)bVar21 * -2];
              *(UActorVTable *)((int)&CStack_424 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8)
                   = (&UStack_450)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              if (&CStack_208 != &CStack_424) {
                CStack_208.x = CStack_424.x;
                CStack_208.y = CStack_424.y;
                CStack_208.z = CStack_424.z;
              }
            }
          }
          CStack_208.x = CStack_208.x * _DAT_005d8703;
          CStack_208.z = CStack_208.z * _DAT_005d8703;
          CStack_208.y = CStack_208.y * _DAT_005d8703 + _DAT_005d8727;
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,iStack_7c,&CStack_208);
          in_stack_fffffa4c = "zom-h0?.wav";
          in_stack_fffffa44 = (CZombie *)0x5895ef;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"zom-h0?.wav");
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
      }
    }
    else if (uVar10 < 0x66) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"fall-?.wav");
    }
    else if (uVar10 == 0x29a) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                (pCStack_c0,this_ptr->bone_indices[0],&CStack_3f4);
      pCVar28 = &CStack_430;
      CStack_430.x = CStack_3f4.x;
      *(uint *)((int)&CStack_430 + (uint)bVar21 * -8 + 4) =
           *(uint *)((int)&CStack_3f4 + (uint)bVar21 * -8 + 4);
      *(uint *)((int)&CStack_430 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           *(uint *)((int)&CStack_3f4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar28,&CStack_43c);
      fVar29 = 0.0;
      iVar8 = 3;
      pCVar26 = (CVector3f *)0x0;
      pCVar28 = &CStack_46c;
      CStack_46c.x = CStack_43c.x;
      *(uint *)((int)&CStack_46c + (uint)bVar21 * -8 + 4) =
           *(uint *)((int)&CStack_43c + (uint)bVar21 * -8 + 4);
      this_ptr_00 = g_CGorePtr;
      *(uint *)((int)&CStack_46c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           *(uint *)((int)&CStack_43c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (this_ptr_00,pCVar28,pCVar26,iVar8,(EBloodType)fVar29);
      iVar8 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
      if (iVar8 == 0) {
        pcVar27 = "ghoul-dig-?.wav";
      }
      else {
        pcVar27 = "ghoul-eat-?.wav";
      }
      pcVar19 = acStack_54c;
      do {
        cVar4 = *pcVar27;
        *pcVar19 = cVar4;
        if (cVar4 == '\0') break;
        cVar4 = pcVar27[1];
        pcVar27 = pcVar27 + 2;
        pcVar19[1] = cVar4;
        pcVar19 = pcVar19 + 2;
      } while (cVar4 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_54c);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar10);
    }
    goto LAB_00588fbb;
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850();
  if (((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar29 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar29,
      (float)_DAT_005d86bf <= fVar29)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffa3c);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffffa3c);
    this_ptr->bleedout_timer = -1.0;
  }
  pCStack_2c = &(this_ptr->base).base.model;
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_2c->base);
  iVar8 = pSVar13->state_index;
  iStack_a4 = 0;
  iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  pCVar2 = pCStack_2c;
  if (iVar14 == 0) {
    fStack_28 = -1.0;
    fStack_a8 = 0.3;
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_2c->base);
    switch(pSVar13->state_index) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim == (CCharacter *)0x0) && (iStack_78 != 0)) {
        in_stack_fffffa44 = (CZombie *)0x58a516;
        iVar8 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
        if (iVar8 == 0) break;
        g_CGamePtr->player_hit_flag = 1;
        (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      }
      pCVar25 = (this_ptr->base).victim;
      if (pCVar25 != (CCharacter *)0x0) {
        fStack_190 = (pCVar25->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        fStack_18c = (pCVar25->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        fStack_188 = (pCVar25->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_328 = fStack_190;
        (&UStack_324)[(uint)bVar21 * -2] = (&UStack_1b0)[(uint)bVar21 * -2 + 9];
        (&UStack_324)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             (&UStack_1b0)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
        fStack_70 = fStack_320 * fStack_320 +
                    fStack_328 * fStack_328 + (float)UStack_324 * (float)UStack_324;
        fStack_74 = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
        fStack_6c = fStack_74;
        if (fStack_74 <= this_ptr->start_guard_dist) {
          fVar29 = (float)_DAT_005d86f7;
          this_ptr->start_guard_dist = (this_ptr->base).guard_distance;
          iVar8 = core_actor_cpp_randomChance_FUN_0040cf40(delta_time * fVar29);
          if (iVar8 != 0) {
            fVar29 = 0.0;
            pcVar27 = "pickass";
            pCVar2 = &(this_ptr->base).base.model;
            pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&pCVar2->base);
            iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                              (pCVar9,pcVar27,(int)fVar29);
            if (-1 < iVar8) {
              in_stack_fffffa44 = (CZombie *)0x11;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0x11,1);
              break;
            }
          }
          in_stack_fffffa44 = this_ptr;
          iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
          if (iVar8 != 0) {
            in_stack_fffffa44 = (CZombie *)0x58a49a;
            core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
          }
          if (0x3FA66666 + (float)_DAT_005d86df < fStack_74) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
            in_stack_fffffa44 = (CZombie *)0x58a4cc;
            iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
            if (iVar8 == 0) {
              if (this_ptr->is_female == 0) {
                in_stack_fffffa44 = this_ptr;
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"zom-a0?.wav");
                this_ptr->sfx_handles[1] = uVar10;
              }
              else {
                in_stack_fffffa44 = this_ptr;
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
                this_ptr->sfx_handles[1] = uVar10;
              }
            }
          }
        }
      }
      break;
    case 1:
    case 2:
    case 3:
      pCVar25 = (this_ptr->base).victim;
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim == (CCharacter *)0x0) && (iStack_78 != 0)) {
        in_stack_fffffa44 = (CZombie *)0x58a5bb;
        iVar8 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
        if (iVar8 != 0) {
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        }
      }
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        if (pCVar25 == (CCharacter *)0x0) {
          iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
          if (iVar8 == 0) {
            if (this_ptr->is_female == 0) {
              pcVar27 = "zom-a0?.wav";
            }
            else {
              pcVar27 = "f-zombie-alert?.wav";
            }
            uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,pcVar27);
            this_ptr->sfx_handles[1] = uVar10;
          }
          goto LAB_0058a628;
        }
        uStack_68 = (uint)((this_ptr->base).base.model.part_data.visibility_flags
                           [this_ptr->part_indices[1]] != 0);
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0)
        {
          uStack_68 = uStack_68 + 1;
        }
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        iVar8 = core_zombie_cpp_CZombie_processPickup_FUN_0058b3f0(this_ptr,delta_time);
        if (iVar8 == 0) {
          fStack_64 = 0x3FA66666;
          iStack_60 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50(this_ptr,1);
          if (((-1 < iStack_60) &&
              (pCVar16 = (this_ptr->base).base.carry_hands[iStack_60].carry_actor,
              pCVar16 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
            fStack_5c = 1.0;
            if (pCVar16 != (CDemonActor *)0x0) {
              (*((pCVar16->vtable)._ub)->getBoundingBox)
                        (pCVar16,(CBoundingBox3D *)in_stack_fffffa44);
              pfVar18 = afStack_49c;
              pfVar20 = &fStack_514;
              for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                *pfVar20 = *pfVar18;
                pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
                pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
              }
              in_stack_fffffa44 = (CZombie *)0x58a759;
              core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_1d8);
              CStack_1d8.x = fStack_508 - fStack_514;
              CStack_1d8.y = fStack_504 - fStack_510;
              CStack_1d8.z = fStack_500 - fStack_50c;
              fStack_460 = fStack_508 - fStack_514;
              afStack_45c[(uint)bVar21 * -2] = *(float *)((int)&CStack_1d8 + (uint)bVar21 * -8 + 4);
              afStack_45c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   *(float *)((int)&CStack_1d8 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8);
              fStack_5c = afStack_45c[1] * (float)_DAT_005d86cf + 1.0;
            }
            fStack_64 = fStack_5c;
          }
          fVar29 = 0.34906584;
          pCVar28 = (CVector3f *)0x3f8ccccd;
          uStack_118 = 0;
          fStack_110 = fStack_64;
          uStack_114 = 0;
          pCVar25 = (this_ptr->base).victim;
          pCVar15 = (*((pCVar25->base).vtable._ub)->getPathMap)(&pCVar25->base);
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar15,pCVar28,
                             fVar29,(float)in_stack_fffffa44);
          pCStack_3c = &(this_ptr->base).base.model.base;
          if (iVar8 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            in_stack_fffffa44 = (CZombie *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0,1);
          }
          else if (iVar8 < 1) {
            in_stack_fffffa44 = (CZombie *)this_ptr->object_shape_class;
            iStack_58 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50
                                  (this_ptr,(int)in_stack_fffffa44);
            pCVar25 = (this_ptr->base).victim;
            fStack_2f8 = (this_ptr->base).base.base.location.position.x -
                         (pCVar25->base).location.position.x;
            afStack_2f4[0] =
                 (this_ptr->base).base.base.location.position.y -
                 (pCVar25->base).location.position.y;
            afStack_2f4[1] =
                 (this_ptr->base).base.base.location.position.z -
                 (pCVar25->base).location.position.z;
            fStack_388 = fStack_2f8;
            afStack_384[(uint)bVar21 * -2] = afStack_2f4[(uint)bVar21 * -2];
            afStack_384[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 afStack_2f4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            if (SQRT(afStack_384[1] * afStack_384[1] +
                     fStack_388 * fStack_388 + afStack_384[0] * afStack_384[0]) <
                (float)_DAT_005d86e7) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        ((CDemonActor *)this_ptr,&(pCVar25->base).location.position,&CStack_274);
              in_stack_fffffa44 = (CZombie *)(afStack_360 + 2);
              afStack_360[2] = CStack_274.x;
              afStack_360[(uint)bVar21 * -2 + 3] =
                   *(float *)((int)&CStack_274 + (uint)bVar21 * -8 + 4);
              afStack_360[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                   *(float *)((int)&CStack_274 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                        ((CVector3f *)in_stack_fffffa44,&CStack_31c);
              fStack_3e8 = CStack_31c.x;
              afStack_3e4[(uint)bVar21 * -2] = *(float *)((int)&CStack_31c + (uint)bVar21 * -8 + 4);
              afStack_3e4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   *(float *)((int)&CStack_31c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              if (((ABS(afStack_3e4[0]) < (float)_DAT_005d86ef) && (-1 < iStack_58)) &&
                 (uVar10 = this_ptr->object_shape_class, 1 < uVar10)) {
                if (uVar10 < 3) {
                  if ((this_ptr->base).base.carry_hands[iStack_58].carry_actor != (CDemonActor *)0x0
                     ) {
                    engine_console_cpp_CConsole_printf_FUN_00441ff0
                              (g_CConsolePtr,"%s lugging\n");
                    in_stack_fffffa44 = (CZombie *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0xe,1)
                    ;
                  }
                }
                else if ((uVar10 == 3) &&
                        ((this_ptr->base).base.carry_hands[iStack_58].carry_actor !=
                         (CDemonActor *)0x0)) {
                  engine_console_cpp_CConsole_printf_FUN_00441ff0
                            (g_CConsolePtr,"%s tossing\n");
                  in_stack_fffffa44 = (CZombie *)0x1;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0xc,1);
                }
              }
            }
          }
          else if ((0 < (int)uStack_68) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            in_stack_fffffa44 = (CZombie *)(this_ptr->base).victim;
            pCVar16 = (*(((in_stack_fffffa44->base).base.base.vtable._uc)->_uc).getGrabber)
                                ((CCharacter *)in_stack_fffffa44);
            if (pCVar16 == (CDemonActor *)0x0) {
              if ((iStack_60 < 0) ||
                 ((this_ptr->base).base.carry_hands[iStack_60].carry_actor == (CDemonActor *)0x0)) {
                if ((iStack_78 == 0) ||
                   (pCVar25 = (this_ptr->base).victim,
                   EVar12 = (*(((pCVar25->base).vtable._uc)->_uc).getDeathState)(pCVar25),
                   EVar12 == DEATH_STATE_ALIVE)) {
                  in_stack_fffffa4c = (char *)0x1;
                  fVar29 = 7.00649e-45;
                  in_stack_fffffa44 = (CZombie *)&(this_ptr->base).base.model;
                }
                else {
                  iVar8 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
                  in_stack_fffffa44 = (CZombie *)&(this_ptr->base).base.model;
                  if (iVar8 == 0) {
                    in_stack_fffffa4c = (char *)0x1;
                    fVar29 = 2.8026e-44;
                  }
                  else {
                    in_stack_fffffa4c = (char *)0x1;
                    fVar29 = 2.66247e-44;
                  }
                }
              }
              else {
                fVar29 = 1.4013e-45;
                in_stack_fffffa44 = (CZombie *)0x4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)in_stack_fffffa44,(int)fVar29,(int)in_stack_fffffa4c);
              (this_ptr->base).attack_cooldown = 0.8;
            }
          }
        }
      }
      break;
    case 4:
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
LAB_0058aaf1:
        core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
      }
      else {
        iVar8 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50(this_ptr,1);
        if (((-1 < iVar8) &&
            (pCVar25 = (this_ptr->base).victim,
            EVar12 = (*(((pCVar25->base).vtable._uc)->_uc).getDeathState)(pCVar25), (int)EVar12 < 1)
            ) && ((this_ptr->base).base.carry_hands[iVar8].carry_actor != (CDemonActor *)0x0)) {
          in_stack_fffffa44 = (CZombie *)(this_ptr->base).victim;
          pCVar16 = (*(((in_stack_fffffa44->base).base.base.vtable._uc)->_uc).getGrabber)
                              ((CCharacter *)in_stack_fffffa44);
          if (pCVar16 == (CDemonActor *)0x0) {
            pCVar16 = (this_ptr->base).base.carry_hands[iVar8].carry_actor;
            fStack_48 = 1.0;
            if (pCVar16 != (CDemonActor *)0x0) {
              in_stack_fffffa44 = (CZombie *)0x58abac;
              (*((pCVar16->vtable)._ub)->getBoundingBox)
                        (pCVar16,(CBoundingBox3D *)in_stack_fffffa4c);
              pfVar18 = afStack_484;
              pfVar20 = &fStack_4e4;
              for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                *pfVar20 = *pfVar18;
                pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
                pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_3a0);
              CStack_3a0.x = fStack_4d8 - fStack_4e4;
              CStack_3a0.y = fStack_4d4 - fStack_4e0;
              CStack_3a0.z = fStack_4d0 - fStack_4dc;
              fStack_1fc = fStack_4d8 - fStack_4e4;
              afStack_1f8[(uint)bVar21 * -2] = *(float *)((int)&CStack_3a0 + (uint)bVar21 * -8 + 4);
              afStack_1f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   *(float *)((int)&CStack_3a0 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8);
              afStack_1c8[2] = fStack_1fc;
              afStack_1c8[(uint)bVar21 * -2 + 3] = afStack_1f8[(uint)bVar21 * -2];
              afStack_1c8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                   afStack_1f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              fStack_130 = afStack_1c8[2];
              afStack_12c[(uint)bVar21 * -2] = afStack_1c8[(uint)bVar21 * -2 + 3];
              afStack_12c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_1c8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
              fStack_364 = fStack_130;
              afStack_360[(uint)bVar21 * -2] = afStack_12c[(uint)bVar21 * -2];
              afStack_360[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_12c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              fStack_40c = fStack_364;
              afStack_408[(uint)bVar21 * -2] = afStack_360[(uint)bVar21 * -2];
              afStack_408[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_360[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
              fStack_48 = afStack_408[1] * (float)_DAT_005d86cf + fStack_48;
            }
            fStack_28 = fStack_48;
            fStack_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  (&(this_ptr->base).base.model.base);
            dStack_d4 = (double)fStack_4c;
            pCStack_14 = (CCharacter_full_vtable *)fStack_4c;
            if ((1.0 <= dStack_d4) && (dStack_d4 <= _DAT_005d86df)) {
              iStack_a4 = 1;
            }
            break;
          }
        }
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s gave up swing\n");
        core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
      }
      break;
    case 5:
      pCVar25 = (this_ptr->base).victim;
      if ((pCVar25 == (CCharacter *)0x0) ||
         (EVar12 = (*(((pCVar25->base).vtable._uc)->_uc).getDeathState)(pCVar25), 0 < (int)EVar12))
      {
LAB_0058a628:
        core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
      }
      else {
        in_stack_fffffa44 = (CZombie *)(this_ptr->base).victim;
        pCVar11 = (CZombie *)
                  (*(((in_stack_fffffa44->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffa44);
        if (pCVar11 == (CZombie *)0x0) {
          fStack_28 = 0x3FA66666;
          fStack_a8 = 3.0;
        }
        else if (pCVar11 != this_ptr) goto LAB_0058aaf1;
      }
      break;
    case 9:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCVar2,0,&CStack_160);
        pCVar28 = &CStack_34c;
        CStack_34c.x = CStack_160.x;
        *(uint *)((int)&CStack_34c + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_160 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_34c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_160 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar28,&CStack_280);
        fVar29 = 0.0;
        CStack_370.x = CStack_280.x;
        *(uint *)((int)&CStack_370 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_280 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_370 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_280 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_370,(EBloodType)fVar29);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 0xf:
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,this_ptr->rise_from_grave_condition);
      if ((iVar8 != 0) &&
         (fVar29 = this_ptr->rise_delay - delta_time, this_ptr->rise_delay = fVar29, fVar29 < 0.0))
      {
        pCStack_80 = &(this_ptr->base).base.base.location;
        iStack_84 = 0;
        iStack_34 = 0;
        this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
        for (; iStack_84 < g_CDemonSetPtr->character_count; iStack_84 = iStack_84 + 1) {
          iVar8 = *(int *)((int)g_CDemonSetPtr->characters + iStack_34);
          iVar14 = (**(code **)(*(int *)(iVar8 + 0x154) + 0xe4))();
          if (iVar14 != 0) {
            fStack_298 = *(float *)(iVar8 + 0x20) - (pCStack_80->position).x;
            afStack_294[0] = *(float *)(iVar8 + 0x24) - (pCStack_80->position).y;
            afStack_294[1] = *(float *)(iVar8 + 0x28) - (pCStack_80->position).z;
            fStack_268 = fStack_298;
            afStack_264[(uint)bVar21 * -2] = afStack_294[(uint)bVar21 * -2];
            afStack_264[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 afStack_294[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            if ((ABS(afStack_264[0]) <= (float)_DAT_005d872f) &&
               (afStack_264[0] = 0.0,
               SQRT(afStack_264[1] * afStack_264[1] + fStack_268 * fStack_268) <=
               (this_ptr->base).guard_distance)) {
              engine_console_cpp_CConsole_printf_FUN_00441ff0
                        (g_CConsolePtr,"%s rising from the grave\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,0x10,1);
              if ((CGrave *)this_ptr->grave_actor != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004cf580((CGrave *)this_ptr->grave_actor);
                this_ptr->grave_actor = (CDemonActor *)0x0;
              }
              (this_ptr->base).guard_distance = 100.0;
              break;
            }
          }
          iStack_34 = iStack_34 + 4;
        }
      }
      break;
    case 0x12:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar25 = (this_ptr->base).victim;
      if (((pCVar25 != (CCharacter *)0x0) &&
          (fVar29 = (this_ptr->base).base.base.location.position.x -
                    (pCVar25->base).location.position.x,
          fVar3 = (this_ptr->base).base.base.location.position.z -
                  (pCVar25->base).location.position.z,
          SQRT(fVar3 * fVar3 + fVar29 * fVar29) <= (float)_DAT_005d86d7)) &&
         (ABS((this_ptr->base).base.base.location.position.y - (pCVar25->base).location.position.y)
          <= (float)_DAT_005d86df)) {
        in_stack_fffffa44 = (CZombie *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
      }
      break;
    case 0x13:
    case 0x14:
      iVar8 = (**(code **)(*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x154) + 0x10c))();
      if ((iVar8 == 0) &&
         ((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
         , (this_ptr->base).victim != (CCharacter *)0x0)) {
LAB_00589ecd:
        in_stack_fffffa44 = (CZombie *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      break;
    case 0x15:
      fVar29 = this_ptr->buried_timer - delta_time;
      this_ptr->buried_timer = fVar29;
      if (fVar29 <= 0.0) {
        pCVar6 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->buried_timer = 0.0;
        (*(pCVar6->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar25 = (this_ptr->base).victim;
        if (pCVar25 != (CCharacter *)0x0) {
          fStack_f4 = (this_ptr->base).base.base.location.position.x -
                      (pCVar25->base).location.position.x;
          fStack_f0 = (this_ptr->base).base.base.location.position.y -
                      (pCVar25->base).location.position.y;
          fStack_ec = (this_ptr->base).base.base.location.position.z -
                      (pCVar25->base).location.position.z;
          fStack_22c = fStack_f4;
          (&UStack_228)[(uint)bVar21 * -2] = (&UStack_108)[(uint)bVar21 * -2 + 6];
          (&UStack_228)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               (&UStack_108)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
          if (&fStack_250 != &fStack_22c) {
            fStack_250 = fStack_22c;
            UStack_24c = UStack_228;
            fStack_248 = fStack_224;
          }
          fStack_20 = fStack_248 * fStack_248 +
                      fStack_250 * fStack_250 + (float)UStack_24c * (float)UStack_24c;
          fStack_1c = (float)(((int)fStack_20 >> 1) + _DAT_01d1a0a4);
          if (fStack_1c <= (float)_DAT_005d86c7) {
            fStack_24 = (this_ptr->base).base.collision_cylinder_top;
            if (fStack_24 < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_24 = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (fStack_24 < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_24 = (this_ptr->base).base.collision_cylinder_bottom + (float)_DAT_005d86cf;
            }
            iVar8 = 0;
            do {
              fStack_18 = (float)iVar8 * _DAT_005d8717 * _DAT_005d871b;
              pCStack_14 = (CCharacter_full_vtable *)iVar8;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar22 = (float10)fcos((float10)fStack_18);
              fVar23 = (float10)fsin((float10)fStack_18);
              fStack_94 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_0053de10
                                    (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                     (this_ptr->base).base.base.location.position.z,
                                     (float)(fVar23 * (float10)_DAT_005d871f),
                                     (float)(fVar22 * (float10)_DAT_005d871f),
                                     (this_ptr->base).base.collision_cylinder_radius,
                                     (this_ptr->base).base.base.location.position.y +
                                     (this_ptr->base).base.collision_cylinder_bottom,
                                     (this_ptr->base).base.base.location.position.y + fStack_24);
              in_stack_fffffa44 = (CZombie *)0x58a0ab;
              pCStack_14 = (CCharacter_full_vtable *)fStack_94;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              if (fStack_94 < 1.0) break;
              iVar8 = iVar8 + 1;
            } while (iVar8 < 4);
            if (3 < iVar8) goto LAB_00589ecd;
            this_ptr->buried_timer = 3.0;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
        }
      }
      break;
    case 0x16:
      iVar8 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_154 = *(float *)(iVar8 + 0x20) - (this_ptr->base).base.base.location.position.x;
      UStack_150 = (UActorVTable)
                   (*(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y);
      fStack_14c = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z;
      fStack_100 = fStack_154;
      (&UStack_108)[(uint)bVar21 * -2 + 3] = (&UStack_150)[(uint)bVar21 * -2];
      (&UStack_108)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
           (&UStack_150)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
      fStack_8c = fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc;
      fStack_88 = (float)(((int)fStack_8c >> 1) + _DAT_01d1a0a4);
      if (fStack_88 < this_ptr->start_guard_dist) {
        this_ptr->start_guard_dist = (this_ptr->base).guard_distance;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_2c->base,0x17,1);
      }
    }
    if ((0.0 <= fStack_28) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
      (this_ptr->base).base.walk_step_speed = fStack_a8 * (this_ptr->base).speed * delta_time;
      core_charactr_cpp_FUN_00434850();
      fVar29 = 0.7853982;
      pCVar28 = (CVector3f *)0x40400000;
      uStack_2bc = 0;
      fStack_2b4 = fStack_28;
      uStack_2b8 = 0;
      pCVar25 = (this_ptr->base).victim;
      pCVar15 = (*((pCVar25->base).vtable._ub)->getPathMap)(&pCVar25->base);
      iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar15,pCVar28,fVar29,(float)in_stack_fffffa44);
      if (iVar8 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"%s giving up attack\n")
        ;
        core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
  }
  else {
    EVar5 = (this_ptr->base).base.walk_state;
    if (EVar5 < 2) {
      if (EVar5 == WALK_STATE_WALKING) {
LAB_00589ad4:
        if (iVar8 != 2) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_0058cc20(this_ptr);
        }
      }
      else {
LAB_00589d98:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
    }
    else {
      if (EVar5 < WALK_STATE_NO_PATH) goto LAB_00589ad4;
      if (EVar5 != WALK_STATE_NO_PATH) goto LAB_00589d98;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441ff0
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                      (&(this_ptr->base).base.model.base);
  iVar8 = pSVar13->state_index;
  iStack_30 = iVar8;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
  pCStack_38 = &(this_ptr->base).base.model.accumulated_root_motion;
  if (iVar8 == 0xf) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  }
  else {
    if (iVar8 != 0x10) {
      iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
      if (iVar8 != 0) {
        pCVar25 = (this_ptr->base).victim;
        if ((pCVar25 != (CCharacter *)0x0) &&
           (pCVar11 = (CZombie *)(*(((pCVar25->base).vtable._uc)->_uc).getGrabber)(pCVar25),
           pCVar11 == this_ptr)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                    (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
        }
        core_charactr_cpp_FUN_0042c1e0();
        fStack_10c = (this_ptr->base).base.velocity.x * delta_time;
        UStack_108 = (UActorVTable)((this_ptr->base).base.velocity.y * delta_time);
        fStack_104 = (this_ptr->base).base.velocity.z * delta_time;
        fStack_3b8 = fStack_10c;
        (&UStack_3b4)[(uint)bVar21 * -2] = (&UStack_108)[(uint)bVar21 * -2];
        (&UStack_3b4)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             (&UStack_108)[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
        pCVar28 = &(this_ptr->base).base.position_delta;
        afStack_384[2] = fStack_3b8 + pCVar28->x;
        afStack_384[3] = (float)UStack_3b4 + (this_ptr->base).base.position_delta.y;
        fStack_374 = fStack_3b0 + (this_ptr->base).base.position_delta.z;
        afStack_3e4[2] = afStack_384[2];
        afStack_3e4[(uint)bVar21 * -2 + 3] = afStack_384[(uint)bVar21 * -2 + 3];
        afStack_3e4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
             afStack_384[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
        pCVar26 = &(this_ptr->base).base.model.accumulated_root_motion;
        fStack_214 = afStack_3e4[2] + pCVar26->x;
        fStack_210 = afStack_3e4[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
        pCStack_20c = (CDemonActor *)
                      (fStack_3d4 + (this_ptr->base).base.model.accumulated_root_motion.z);
        CStack_3c4.x = fStack_214;
        *(float *)((int)&CStack_3c4 + (uint)bVar21 * -8 + 4) = (&fStack_210)[(uint)bVar21 * -2];
        *(CDemonActor **)((int)&CStack_3c4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             (&pCStack_20c)[(uint)bVar21 * -2 + (uint)bVar21 * -2];
        (this_ptr->base).base.position_delta.z = 0.0;
        (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
        pCVar28->x = (this_ptr->base).base.position_delta.y;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        pCVar26->x = (this_ptr->base).base.model.accumulated_root_motion.y;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_3c4)
        ;
      }
      goto LAB_00589b68;
    }
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              ((CDemonActor *)this_ptr,pCStack_38,&CStack_334);
    pCVar1 = &(this_ptr->base).base.base.location;
    afStack_408[2] = CStack_334.x;
    afStack_408[(uint)bVar21 * -2 + 3] = *(float *)((int)&CStack_334 + (uint)bVar21 * -8 + 4);
    afStack_408[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
         *(float *)((int)&CStack_334 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
    fVar29 = (this_ptr->base).base.base.location.position.y;
    (pCVar1->position).x = (pCVar1->position).x + afStack_408[2];
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar29 + afStack_408[3];
    (this_ptr->base).base.base.location.position.z = fVar3 + fStack_3f8;
    pCStack_38->z = 0.0;
  }
  pCStack_38->y = pCStack_38->z;
  pCStack_38->x = pCStack_38->y;
LAB_00589b68:
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  if (iStack_30 != 0xf) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar8 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar8] == 0) {
      iVar14 = this_ptr->bone_indices[10];
      fVar29 = 0.5;
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
      fVar29 = 0.7;
      iVar8 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
              ((CCharacter *)this_ptr,iVar8,iVar14,fVar29);
    if ((this_ptr->part_indices[4] < 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042fdc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10],0.2);
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042fc90((CCharacter *)this_ptr);
  }
  iVar8 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50(this_ptr,1);
  if (((iStack_a4 != 0) && (-1 < iVar8)) &&
     (pCVar16 = (this_ptr->base).base.carry_hands[iVar8].carry_actor, pCVar16 != (CDemonActor *)0x0)
     ) {
    (*((pCVar16->vtable)._ub)->processMeleeHit)(pCVar16,2);
    return;
  }
  return;
}
