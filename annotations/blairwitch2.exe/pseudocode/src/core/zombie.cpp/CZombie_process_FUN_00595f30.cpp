// Name: core_zombie.cpp_CZombie_process_FUN_00595f30
// Address: 00595f30
// Address Range: [[00595f30, 00598097]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_process_FUN_00595f30(CZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00597c7b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_CZombie_process_FUN_00595f30(CZombie *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  char cVar3;
  CCharacter *pCVar4;
  EWalkState EVar5;
  CEnemy_full_vtable *pCVar6;
  CDoor *this_ptr_01;
  int iVar7;
  CMotionList *pCVar8;
  uint uVar9;
  CZombie *pCVar10;
  float fVar11;
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
  float afStackY_1488 [105];
  CDemonActor *apCStackY_12e4 [6];
  float afStackY_12cc [45];
  void *apvStackY_1218 [3];
  float afStackY_120c [21];
  CDemonActor *apCStackY_11b8 [3];
  float afStackY_11ac [731];
  CGore *pCVar25;
  CVector3f *pCVar26;
  char *pcVar27;
  CBoundingBox3D *out_box;
  CVector3f *pCVar28;
  CZombie *in_stack_fffff9d8;
  EBloodType EVar29;
  char *in_stack_fffff9e0;
  SDamageInfo SStack_5ec;
  char acStack_5b0 [32];
  float afStack_590 [6];
  float fStack_578;
  float fStack_574;
  float fStack_570;
  float afStack_56c [3];
  float afStack_560 [6];
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float afStack_530 [6];
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float afStack_50c [3];
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float afStack_4e8 [6];
  float afStack_4d0 [6];
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float afStack_49c [4];
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  CVector3f CStack_470;
  CVector3f CStack_464;
  CVector3f CStack_458;
  float fStack_44c;
  float afStack_448 [5];
  CVector3f CStack_434;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  CVector3f CStack_41c;
  CVector3f CStack_410;
  float fStack_404;
  float afStack_400 [2];
  CVector3f CStack_3f8;
  CVector3f CStack_3ec;
  float fStack_3e0;
  float afStack_3dc [2];
  CVector3f CStack_3d4;
  CVector3f CStack_3c8;
  CVector3f CStack_3bc;
  CVector3f CStack_3b0;
  CVector3f CStack_3a4;
  CVector3f CStack_398;
  float fStack_38c;
  float afStack_388 [4];
  float fStack_378;
  void *pvStack_374;
  float afStack_370 [2];
  CVector3f CStack_368;
  float fStack_35c;
  float afStack_358 [4];
  float fStack_348;
  float fStack_344;
  float afStack_340 [2];
  CVector3f CStack_338;
  CVector3f CStack_32c;
  float fStack_320;
  float afStack_31c [2];
  CVector3f CStack_314;
  CVector3f CStack_308;
  float fStack_2fc;
  CDemonActor *apCStack_2f8 [2];
  float fStack_2f0;
  float fStack_2e4;
  float afStack_2e0 [2];
  CVector3f CStack_2d8;
  CVector3f CStack_2cc;
  uint uStack_2c0;
  uint uStack_2bc;
  float fStack_2b8;
  CVector3f CStack_2b4;
  CVector3f CStack_2a8;
  CVector3f CStack_29c;
  CVector3f CStack_290;
  float fStack_284;
  float afStack_280 [5];
  void *pvStack_26c;
  void *pvStack_268;
  float afStack_264 [4];
  float fStack_254;
  CDemonActor *pCStack_250;
  float fStack_24c;
  void *pvStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float afStack_238 [4];
  void *pvStack_228;
  float fStack_224;
  float afStack_220 [4];
  float fStack_210;
  CVector3f CStack_20c;
  CVector3f CStack_200;
  float fStack_1f4;
  float afStack_1f0 [2];
  CVector3f CStack_1e8;
  CVector3f CStack_1dc;
  float fStack_1d0;
  float fStack_1cc;
  CDemonActor *pCStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [2];
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [2];
  CVector3f CStack_1a0;
  CVector3f CStack_194;
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [5];
  float fStack_164;
  SMotionTransition *pSStack_160;
  float fStack_15c;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  float fStack_f8;
  float afStack_f4 [2];
  CVector3f CStack_ec;
  uint uStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [2];
  double dStack_c8;
  double dStack_b8;
  int iStack_ac;
  char *pcStack_a8;
  int iStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_88;
  CLocation *pCStack_84;
  uint uStack_7c;
  float fStack_78;
  int iStack_74;
  CCharacter *pCStack_70;
  float *pfStack_6c;
  float fStack_68;
  float *pfStack_64;
  float fStack_60;
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  CDoor *pCStack_44;
  CDoor *pCStack_40;
  int iStack_3c;
  CZombie *pCStack_38;
  CVector3f *pCStack_34;
  CDeformableModelInstance *pCStack_30;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar21 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = 0;
  pcVar27 = "CHASE_2";
  iStack_54 = 0;
  pCVar8 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                     (&(this_ptr->base).base.model.base);
  iVar7 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(pCVar8,pcVar27,iVar7);
  if (iVar7 == 0x16) {
    iStack_54 = 1;
  }
  pCStack_70 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCStack_70 != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_70->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
              (&(this_ptr->base).base.model,0,&CStack_29c);
    pCVar28 = &CStack_2cc;
    CStack_2cc.x = CStack_29c.x;
    *(uint *)((int)&CStack_2cc + (uint)bVar21 * -8 + 4) =
         *(uint *)((int)&CStack_29c + (uint)bVar21 * -8 + 4);
    *(uint *)((int)&CStack_2cc + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
         *(uint *)((int)&CStack_29c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
    iVar7 = (*(pCStack_14->_uc).attractActorToward)(pCStack_70,(CDemonActor *)this_ptr,pCVar28);
    if (iVar7 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  pfStack_6c = afStack_56c;
  fStack_9c = delta_time * (this_ptr->base).speed;
  pfStack_64 = afStack_50c;
  pCStack_30 = &(this_ptr->base).base.model;
LAB_00595fe0:
  if (0.0 < fStack_9c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCStack_30->base,&fStack_9c);
    if (uVar9 < 0xb) {
      if (4 < uVar9) {
        if (5 < uVar9) {
          if (uVar9 == 10) {
            if ((this_ptr->base).victim == (CCharacter *)0x0) {
              core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
              goto LAB_00595fe0;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                      (pCStack_30,this_ptr->bone_indices[0],&CStack_3d4);
            pCVar28 = &CStack_14c;
            CStack_14c.x = CStack_3d4.x;
            *(uint *)((int)&CStack_14c + (uint)bVar21 * -8 + 4) =
                 *(uint *)((int)&CStack_3d4 + (uint)bVar21 * -8 + 4);
            *(uint *)((int)&CStack_14c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                 *(uint *)((int)&CStack_3d4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar28,&CStack_3c8);
            CStack_1b8.x = CStack_3c8.x;
            *(uint *)((int)&CStack_1b8 + (uint)bVar21 * -8 + 4) =
                 *(uint *)((int)&CStack_3c8 + (uint)bVar21 * -8 + 4);
            *(uint *)((int)&CStack_1b8 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
                 *(uint *)((int)&CStack_3c8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            if (this_ptr->part_indices[4] < 0) {
              pCVar4 = (this_ptr->base).victim;
              fVar11 = CStack_1b8.x - (pCVar4->base).location.position.x;
              fVar2 = CStack_1b8.z - (pCVar4->base).location.position.z;
              if ((float)_DAT_005ef1ba < SQRT(fVar2 * fVar2 + fVar11 * fVar11)) {
                core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
                goto LAB_00595fe0;
              }
            }
            else {
              pCVar4 = (this_ptr->base).victim;
              pCVar10 = (CZombie *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4);
              if (pCVar10 != this_ptr) {
                in_stack_fffff9d8 = this_ptr;
                core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
                goto LAB_00595fe0;
              }
            }
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffff9d8);
            fVar11 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,25.0);
            pCVar4 = (this_ptr->base).victim;
            pCStack_14 = (CCharacter_full_vtable *)fVar11;
            (*(((pCVar4->base).vtable._uc)->_uc).processDamage)
                      (pCVar4,(SDamageInfo *)&stack0xfffff9d8);
            dStack_b8 = (double)fVar11;
            if (0.0 < dStack_b8) {
              EVar29 = 0x5963c0;
              dVar24 = round(dStack_b8 * _DAT_005ef182 * _DAT_005ef18a);
              iStack_3c = (int)ROUND(dVar24);
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,&CStack_1b8,(CVector3f *)0x0,iStack_3c,EVar29);
            }
            pCVar4 = (this_ptr->base).victim;
            EVar12 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
            if (0 < (int)EVar12) {
              pCVar4 = (this_ptr->base).victim;
              (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
              core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
            }
            in_stack_fffff9e0 = "ghoul-eat-?.wav";
            in_stack_fffff9d8 = (CZombie *)0x596427;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
            goto LAB_00595fe0;
          }
          core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar9);
          goto LAB_00595fe0;
        }
        iStack_50 = 1;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          CStack_3f8.z = 0x3FA66666;
          CStack_3f8.x = 0.0;
          CStack_3f8.y = 0.0;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,&CStack_3f8,&CStack_464);
          afStack_388[2] = CStack_464.x;
          afStack_388[(uint)bVar21 * -2 + 3] = *(float *)((int)&CStack_464 + (uint)bVar21 * -8 + 4);
          afStack_388[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
               *(float *)((int)&CStack_464 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
          pCVar4 = (this_ptr->base).victim;
          fStack_f8 = afStack_388[2] - (pCVar4->base).location.position.x;
          afStack_f4[0] = afStack_388[3] - (pCVar4->base).location.position.y;
          afStack_f4[1] = fStack_378 - (pCVar4->base).location.position.z;
          fStack_44c = fStack_f8;
          afStack_448[(uint)bVar21 * -2] = afStack_f4[(uint)bVar21 * -2];
          afStack_448[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               afStack_f4[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          afStack_448[0] = 0.0;
          if (SQRT(afStack_448[1] * afStack_448[1] + fStack_44c * fStack_44c) <= 1.0) {
            if (iStack_50 != 0) {
              CStack_2d8.x = 0.0;
              CStack_2d8.z = 0.0;
              CStack_2d8.y = 4.0;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,&CStack_2d8,&CStack_200);
              CStack_3a4.x = CStack_200.x;
              *(uint *)((int)&CStack_3a4 + (uint)bVar21 * -8 + 4) =
                   *(uint *)((int)&CStack_200 + (uint)bVar21 * -8 + 4);
              *(uint *)((int)&CStack_3a4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                   *(uint *)((int)&CStack_200 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
              pCVar4 = (this_ptr->base).victim;
              puVar17 = (uint *)((int)pCVar4 + (uint)bVar21 * -8 + 0x24);
              CStack_20c.x = (pCVar4->base).location.position.x;
              *(uint *)((int)&CStack_20c + (uint)bVar21 * -8 + 4) = *puVar17;
              *(uint *)((int)&CStack_20c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
                   puVar17[(uint)bVar21 * -2 + 1];
              CStack_20c.y = CStack_3a4.y;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
              iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                (g_CDemonSetPtr,&CStack_3a4,&CStack_20c);
              if (iVar7 != 0) {
                iStack_50 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            }
            if ((iStack_50 == 0) ||
               (pCVar4 = (this_ptr->base).victim,
               iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar4,(CDemonActor *)this_ptr,0), iVar7 != 0)) {
              if (iStack_50 == 0) {
                core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
              }
              goto LAB_00595fe0;
            }
          }
        }
        core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        goto LAB_00595fe0;
      }
      if (uVar9 == 2) {
        pCVar16 = this_ptr->pickup_target;
        if (pCVar16 != (CDemonActor *)0x0) {
          this_ptr->pickup_target = (CDemonActor *)0x0;
          iVar7 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40
                            (this_ptr,this_ptr->object_shape_class);
          if (-1 < iVar7) {
            core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
                      ((CCharacter *)this_ptr,iVar7,pCVar16,0.2,(CMatrix3x4f *)0x0);
            engine_console_cpp_CConsole_printf_FUN_00436710
                      (g_CConsolePtr,"%s picked up %s using hand %d\n");
          }
        }
      }
      else {
LAB_0059601d:
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar9);
      }
    }
    else if (uVar9 < 0xc) {
      iVar7 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,2);
      if (iVar7 < 0) {
        _DAT_01d046a0 = "..\\core\\zombie.cpp";
        _DAT_01d046a4 = 0x1ef;
        core_main_c_displayErrorAndQuit_FUN_004e4500(&DAT_005eefb4);
      }
      if ((this_ptr->base).base.carry_hands[iVar7].carry_actor != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s lugging %s\n");
        CStack_3b0.x = 0.0;
        CStack_3b0.y = 6.0;
        CStack_3b0.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar7,&CStack_3b0);
        in_stack_fffff9e0 = "zom-h0?.wav";
        in_stack_fffff9d8 = (CZombie *)0x596511;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar9 < 0xd) {
      iStack_ac = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,3);
      if (iStack_ac < 0) {
        _DAT_01d046a0 = "..\\core\\zombie.cpp";
        _DAT_01d046a4 = 0x206;
        core_main_c_displayErrorAndQuit_FUN_004e4500(&DAT_005eefe7);
      }
      pcStack_a8 = (this_ptr->base).base.base.actor_name + iStack_ac * 0x78;
      if (*(int *)(pcStack_a8 + 0x2620) != 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s tossing %s\n");
        CStack_368.x = 0.0;
        CStack_368.y = 0.0;
        CStack_368.z = 1.0;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          out_box = (CBoundingBox3D *)0x596663;
          (**(code **)(*(int *)(*(int *)(pcStack_a8 + 0x2620) + 0x2b0) + 0x24))
                    (*(int *)(pcStack_a8 + 0x2620));
          pfVar18 = afStack_530;
          pfVar20 = &fStack_578;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar20 = *pfVar18;
            pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
            pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
          }
          afStack_264[1] = fStack_578 + *pfStack_6c;
          afStack_264[2] = fStack_574 + pfStack_6c[1];
          afStack_264[3] = fStack_570 + pfStack_6c[2];
          fStack_1d0 = fStack_578 + *pfStack_6c;
          (&fStack_1cc)[(uint)bVar21 * -2] = afStack_264[(uint)bVar21 * -2 + 2];
          pcVar27 = pcStack_a8;
          (&pCStack_1c8)[(uint)bVar21 * -2 + (uint)bVar21 * -2] =
               (CDemonActor *)afStack_264[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 3];
          pCVar28 = &CStack_290;
          afStack_220[2] = fStack_1d0 * _DAT_005ef17a;
          afStack_220[3] = fStack_1cc * _DAT_005ef17a;
          fStack_210 = (float)pCStack_1c8 * _DAT_005ef17a;
          CStack_290.x = fStack_1d0 * _DAT_005ef17a;
          *(float *)((int)&CStack_290 + (uint)bVar21 * -8 + 4) = afStack_220[(uint)bVar21 * -2 + 3];
          *(float *)((int)&CStack_290 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
               afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    (*(CDemonActor **)(pcVar27 + 0x2620),pCVar28,&CStack_3ec);
          fStack_23c = CStack_3ec.x;
          afStack_238[(uint)bVar21 * -2] = *(float *)((int)&CStack_3ec + (uint)bVar21 * -8 + 4);
          afStack_238[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               *(float *)((int)&CStack_3ec + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
          pCVar4 = (this_ptr->base).victim;
          (*((pCVar4->base).vtable._ub)->getBoundingBox)(&pCVar4->base,out_box);
          pfVar18 = afStack_590;
          pfVar20 = &fStack_518;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar20 = *pfVar18;
            pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
            pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
          }
          fStack_1ac = fStack_518 + *pfStack_64;
          afStack_1a8[0] = fStack_514 + pfStack_64[1];
          afStack_1a8[1] = fStack_510 + pfStack_64[2];
          fStack_128 = fStack_518 + *pfStack_64;
          afStack_124[(uint)bVar21 * -2] = afStack_1a8[(uint)bVar21 * -2];
          afStack_124[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               afStack_1a8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          fStack_164 = fStack_128 * _DAT_005ef17a;
          pSStack_160 = (SMotionTransition *)(afStack_124[0] * _DAT_005ef17a);
          fStack_15c = afStack_124[1] * _DAT_005ef17a;
          CStack_410.x = fStack_128 * _DAT_005ef17a;
          *(SMotionTransition **)((int)&CStack_410 + (uint)bVar21 * -8 + 4) =
               (&pSStack_160)[(uint)bVar21 * -2];
          *(float *)((int)&CStack_410 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
               (&fStack_15c)[(uint)bVar21 * -2 + (uint)bVar21 * -2];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    (&((this_ptr->base).victim)->base,&CStack_410,&CStack_338);
          fStack_38c = CStack_338.x;
          afStack_388[(uint)bVar21 * -2] = *(float *)((int)&CStack_338 + (uint)bVar21 * -8 + 4);
          afStack_388[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               *(float *)((int)&CStack_338 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
          fStack_1c4 = fStack_38c - fStack_23c;
          afStack_1c0[0] = afStack_388[0] - afStack_238[0];
          afStack_1c0[1] = afStack_388[1] - afStack_238[1];
          CStack_314.x = fStack_38c - fStack_23c;
          *(float *)((int)&CStack_314 + (uint)bVar21 * -8 + 4) = afStack_1c0[(uint)bVar21 * -2];
          *(float *)((int)&CStack_314 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
               afStack_1c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
          fStack_60 = SQRT(CStack_314.z * CStack_314.z +
                           CStack_314.x * CStack_314.x + CStack_314.y * CStack_314.y);
          if (0.0 < fStack_60) {
            core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
                      ((CDemonActor *)this_ptr,&CStack_314,&CStack_470);
            fStack_4a0 = CStack_470.x;
            afStack_49c[(uint)bVar21 * -2] = *(float *)((int)&CStack_470 + (uint)bVar21 * -8 + 4);
            afStack_49c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                 *(float *)((int)&CStack_470 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
            fVar11 = 1.0 / fStack_60;
            fStack_35c = fStack_4a0 * fVar11;
            afStack_358[0] = afStack_49c[0] * fVar11;
            afStack_358[1] = afStack_49c[1] * fVar11;
            CStack_434.x = fStack_4a0 * fVar11;
            *(float *)((int)&CStack_434 + (uint)bVar21 * -8 + 4) = afStack_358[(uint)bVar21 * -2];
            *(float *)((int)&CStack_434 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8) =
                 afStack_358[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
            if (&CStack_368 != (CVector3f *)(afStack_448 + 5)) {
              CStack_368.x = CStack_434.x;
              CStack_368.y = CStack_434.y;
              CStack_368.z = CStack_434.z;
            }
          }
        }
        CStack_368.x = CStack_368.x * _DAT_005ef17e;
        CStack_368.z = CStack_368.z * _DAT_005ef17e;
        CStack_368.y = CStack_368.y * _DAT_005ef17e + _DAT_005ef1b2;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iStack_ac,&CStack_368);
        in_stack_fffff9e0 = "zom-h0?.wav";
        in_stack_fffff9d8 = (CZombie *)0x59661a;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar9 < 0xe) {
      if (this_ptr->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00460310(this_ptr->target_door,0.3);
        (*((this_ptr->target_door->base).vtable._ub)->playSound)
                  (&this_ptr->target_door->base,"zombie-bang-door?.wav");
        this_ptr->target_door = (CDoor *)0x0;
      }
    }
    else {
      if (uVar9 < 0x65) goto LAB_0059601d;
      if (uVar9 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar9 == 0x29a) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCStack_30,this_ptr->bone_indices[0],&CStack_194);
        pCVar28 = &CStack_1a0;
        CStack_1a0.x = CStack_194.x;
        *(uint *)((int)&CStack_1a0 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_194 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_1a0 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_194 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr,pCVar28,&CStack_41c);
        EVar29 = BLOOD_TYPE_RED;
        iVar7 = 3;
        pCVar26 = (CVector3f *)0x0;
        pCVar28 = &CStack_134;
        CStack_134.x = CStack_41c.x;
        *(uint *)((int)&CStack_134 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_41c + (uint)bVar21 * -8 + 4);
        pCVar25 = g_CGorePtr;
        *(uint *)((int)&CStack_134 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_41c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(pCVar25,pCVar28,pCVar26,iVar7,EVar29);
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
        if (iVar7 == 0) {
          pcVar27 = "ghoul-dig-?.wav";
        }
        else {
          pcVar27 = "ghoul-eat-?.wav";
        }
        pcVar19 = acStack_5b0;
        do {
          cVar3 = *pcVar27;
          *pcVar19 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar27[1];
          pcVar27 = pcVar27 + 2;
          pcVar19[1] = cVar3;
          pcVar19 = pcVar19 + 2;
        } while (cVar3 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_5b0);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar9);
      }
    }
    goto LAB_00595fe0;
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0
            ((CCharacter *)this_ptr,delta_time * fVar11);
  if (((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar11 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar11,
      (float)_DAT_005ef13a <= fVar11)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_5ec);
    SStack_5ec.damage_amount = 9999.9;
    SStack_5ec.attacker = (CDemonActor *)this_ptr;
    SStack_5ec.wielder = (CDemonActor *)this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_5ec);
    this_ptr->bleedout_timer = -1.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
  iVar7 = pSVar13->state_index;
  iStack_a0 = 0;
  iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar14 == 0) {
    fStack_98 = -1.0;
    fStack_20 = 0.3;
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    uVar9 = pSVar13->state_index;
    if (uVar9 < 8) {
      if (uVar9 == 0) {
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(delta_time * (float)_DAT_005ef172);
        if (iVar7 != 0) {
          iVar7 = 0;
          pcVar27 = "pickass";
          pCVar8 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                             (&(this_ptr->base).base.model.base);
          iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar8,pcVar27,iVar7);
          if (-1 < iVar7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0x10,1);
            goto LAB_00596e2a;
          }
        }
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar7 != 0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (iStack_54 != 0)) {
          in_stack_fffff9d8 = (CZombie *)0x59743e;
          iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))()
          ;
          if (iVar7 == 0) goto LAB_00596e2a;
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
        }
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
          in_stack_fffff9d8 = (CZombie *)0x5973d8;
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
          if (iVar7 == 0) {
            if (this_ptr->is_female == 0) {
              in_stack_fffff9d8 = this_ptr;
              uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"zom-a0?.wav");
              this_ptr->sfx_handles[1] = uVar9;
            }
            else {
              in_stack_fffff9d8 = this_ptr;
              uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
              this_ptr->sfx_handles[1] = uVar9;
            }
          }
        }
      }
      else if (uVar9 < 2) {
        pCVar4 = (this_ptr->base).victim;
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (iStack_54 != 0)) {
          in_stack_fffff9d8 = (CZombie *)0x5974d1;
          iVar7 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))()
          ;
          if (iVar7 != 0) {
            g_CGamePtr->player_hit_flag = 1;
            (this_ptr->base).victim = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
          }
        }
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
        else if (pCVar4 == (CCharacter *)0x0) {
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
          if (iVar7 == 0) {
            if (this_ptr->is_female == 0) {
              pcVar27 = "zom-a0?.wav";
            }
            else {
              pcVar27 = "f-zombie-alert?.wav";
            }
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,pcVar27);
            this_ptr->sfx_handles[1] = uVar9;
          }
LAB_0059753e:
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
        else {
          uStack_7c = (uint)((this_ptr->base).base.model.part_data.visibility_flags
                             [this_ptr->part_indices[1]] != 0);
          if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0
             ) {
            uStack_7c = uStack_7c + 1;
          }
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          iVar7 = core_zombie_cpp_CZombie_processPickup_FUN_005984e0(this_ptr,delta_time);
          if (iVar7 == 0) {
            fStack_78 = 0x3FA66666;
            iStack_74 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
            if (((-1 < iStack_74) &&
                (pCVar16 = (this_ptr->base).base.carry_hands[iStack_74].carry_actor,
                pCVar16 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
              fStack_68 = 1.0;
              if (pCVar16 != (CDemonActor *)0x0) {
                (*((pCVar16->vtable)._ub)->getBoundingBox)
                          (pCVar16,(CBoundingBox3D *)in_stack_fffff9d8);
                pfVar18 = afStack_4d0;
                pfVar20 = &fStack_548;
                for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *pfVar20 = *pfVar18;
                  pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
                  pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
                }
                in_stack_fffff9d8 = (CZombie *)0x59766f;
                core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_3bc);
                CStack_3bc.x = fStack_53c - fStack_548;
                CStack_3bc.y = fStack_538 - fStack_544;
                CStack_3bc.z = fStack_534 - fStack_540;
                afStack_238[2] = fStack_53c - fStack_548;
                afStack_238[(uint)bVar21 * -2 + 3] =
                     *(float *)((int)&CStack_3bc + (uint)bVar21 * -8 + 4);
                (&pvStack_228)[(uint)bVar21 * -2 + (uint)bVar21 * -2] =
                     *(void **)((int)&CStack_3bc + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8);
                fStack_68 = (float)pvStack_228 * (float)_DAT_005ef14a + 1.0;
              }
              fStack_78 = fStack_68;
            }
            fVar11 = 0.34906584;
            pCVar28 = (CVector3f *)0x3f8ccccd;
            uStack_2c0 = 0;
            fStack_2b8 = fStack_78;
            uStack_2bc = 0;
            pCVar4 = (this_ptr->base).victim;
            pCVar15 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
            iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar15,pCVar28,
                               fVar11,(float)in_stack_fffff9d8);
            pCStack_38 = (CZombie *)&(this_ptr->base).base.model;
            if (iVar7 < 0) {
              engine_console_cpp_CConsole_printf_FUN_00436710
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n");
              in_stack_fffff9d8 = (CZombie *)0x1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_38,0,1);
            }
            else if (iVar7 < 1) {
              in_stack_fffff9d8 = (CZombie *)this_ptr->object_shape_class;
              iStack_5c = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40
                                    (this_ptr,(int)in_stack_fffff9d8);
              pCVar4 = (this_ptr->base).victim;
              afStack_49c[2] =
                   (this_ptr->base).base.base.location.position.x -
                   (pCVar4->base).location.position.x;
              afStack_49c[3] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar4->base).location.position.y;
              fStack_48c = (this_ptr->base).base.base.location.position.z -
                           (pCVar4->base).location.position.z;
              fStack_224 = afStack_49c[2];
              afStack_220[(uint)bVar21 * -2] = afStack_49c[(uint)bVar21 * -2 + 3];
              afStack_220[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                   afStack_49c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
              if (SQRT(afStack_220[1] * afStack_220[1] +
                       fStack_224 * fStack_224 + afStack_220[0] * afStack_220[0]) <
                  (float)_DAT_005ef162) {
                core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                          ((CDemonActor *)this_ptr,&(pCVar4->base).location.position,&CStack_458);
                in_stack_fffff9d8 = (CZombie *)(afStack_448 + 2);
                afStack_448[2] = CStack_458.x;
                afStack_448[(uint)bVar21 * -2 + 3] =
                     *(float *)((int)&CStack_458 + (uint)bVar21 * -8 + 4);
                afStack_448[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                     *(float *)((int)&CStack_458 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                          ((CVector3f *)in_stack_fffff9d8,&CStack_398);
                fStack_47c = CStack_398.x;
                afStack_49c[(uint)bVar21 * -2 + 9] =
                     *(float *)((int)&CStack_398 + (uint)bVar21 * -8 + 4);
                afStack_49c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10] =
                     *(float *)((int)&CStack_398 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
                if (((ABS(fStack_478) < (float)_DAT_005ef16a) && (-1 < iStack_5c)) &&
                   (uVar9 = this_ptr->object_shape_class, 1 < uVar9)) {
                  if (uVar9 < 3) {
                    if ((this_ptr->base).base.carry_hands[iStack_5c].carry_actor !=
                        (CDemonActor *)0x0) {
                      engine_console_cpp_CConsole_printf_FUN_00436710
                                (g_CConsolePtr,"%s lugging\n");
                      in_stack_fffff9d8 = (CZombie *)0x1;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)pCStack_38,0xd,1);
                    }
                  }
                  else if ((uVar9 == 3) &&
                          ((this_ptr->base).base.carry_hands[iStack_5c].carry_actor !=
                           (CDemonActor *)0x0)) {
                    engine_console_cpp_CConsole_printf_FUN_00436710
                              (g_CConsolePtr,"%s tossing\n");
                    in_stack_fffff9d8 = (CZombie *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)pCStack_38,0xb,1);
                  }
                }
              }
            }
            else if ((0 < (int)uStack_7c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
              pCVar16 = (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                                  ((CCharacter *)in_stack_fffff9d8);
              if (pCVar16 == (CDemonActor *)0x0) {
                if ((iStack_74 < 0) ||
                   ((this_ptr->base).base.carry_hands[iStack_74].carry_actor == (CDemonActor *)0x0))
                {
                  if ((iStack_54 == 0) ||
                     (pCVar4 = (this_ptr->base).victim,
                     EVar12 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
                     EVar12 == DEATH_STATE_ALIVE)) {
                    in_stack_fffff9e0 = (char *)0x1;
                    fVar11 = 4.2039e-45;
                    in_stack_fffff9d8 = (CZombie *)&(this_ptr->base).base.model;
                  }
                  else {
                    iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
                    in_stack_fffff9d8 = (CZombie *)&(this_ptr->base).base.model;
                    if (iVar7 == 0) {
                      in_stack_fffff9e0 = (char *)0x1;
                      fVar11 = 3.50325e-44;
                    }
                    else {
                      in_stack_fffff9e0 = (char *)0x1;
                      fVar11 = 3.36312e-44;
                    }
                  }
                }
                else {
                  fVar11 = 1.4013e-45;
                  in_stack_fffff9d8 = pCStack_38;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffff9d8,(int)fVar11,(int)in_stack_fffff9e0
                          );
                (this_ptr->base).attack_cooldown = 0.8;
              }
            }
          }
        }
      }
      else if (uVar9 < 3) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
LAB_00597a00:
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
        else {
          iVar7 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
          if (((-1 < iVar7) &&
              (pCVar4 = (this_ptr->base).victim,
              EVar12 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4), (int)EVar12 < 1)
              ) && ((this_ptr->base).base.carry_hands[iVar7].carry_actor != (CDemonActor *)0x0)) {
            in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
            pCVar16 = (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                                ((CCharacter *)in_stack_fffff9d8);
            if (pCVar16 == (CDemonActor *)0x0) {
              pCVar16 = (this_ptr->base).base.carry_hands[iVar7].carry_actor;
              fStack_24 = 1.0;
              if (pCVar16 != (CDemonActor *)0x0) {
                in_stack_fffff9d8 = (CZombie *)0x597ab9;
                (*((pCVar16->vtable)._ub)->getBoundingBox)
                          (pCVar16,(CBoundingBox3D *)in_stack_fffff9e0);
                pfVar18 = afStack_4e8;
                pfVar20 = &fStack_500;
                for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *pfVar20 = *pfVar18;
                  pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
                  pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
                }
                core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_2a8);
                CStack_2a8.x = fStack_4f4 - fStack_500;
                CStack_2a8.y = fStack_4f0 - fStack_4fc;
                CStack_2a8.z = fStack_4ec - fStack_4f8;
                fStack_284 = fStack_4f4 - fStack_500;
                afStack_280[(uint)bVar21 * -2] =
                     *(float *)((int)&CStack_2a8 + (uint)bVar21 * -8 + 4);
                afStack_280[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                     *(float *)((int)&CStack_2a8 + ((uint)bVar21 * -2 + (uint)bVar21 * -2) * 4 + 8);
                fStack_2f0 = fStack_284;
                apCStack_2f8[(uint)bVar21 * -2 + 3] = (CDemonActor *)afStack_280[(uint)bVar21 * -2];
                apCStack_2f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                     (CDemonActor *)afStack_280[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
                fStack_2fc = fStack_2f0;
                apCStack_2f8[(uint)bVar21 * -2] = apCStack_2f8[(uint)bVar21 * -2 + 3];
                apCStack_2f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                     apCStack_2f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
                afStack_280[2] = fStack_2fc;
                afStack_280[(uint)bVar21 * -2 + 3] = (float)apCStack_2f8[(uint)bVar21 * -2];
                afStack_280[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                     (float)apCStack_2f8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
                fStack_344 = afStack_280[2];
                afStack_340[(uint)bVar21 * -2] = afStack_280[(uint)bVar21 * -2 + 3];
                afStack_340[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
                     afStack_280[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
                fStack_24 = afStack_340[1] * (float)_DAT_005ef14a + fStack_24;
              }
              fStack_98 = fStack_24;
              fStack_58 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                    (&(this_ptr->base).base.model.base);
              dStack_c8 = (double)fStack_58;
              pCStack_14 = (CCharacter_full_vtable *)fStack_58;
              if ((1.0 <= dStack_c8) && (dStack_c8 <= _DAT_005ef15a)) {
                iStack_a0 = 1;
              }
              goto LAB_00596e2a;
            }
          }
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s gave up swing\n");
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
      }
      else if (uVar9 == 3) {
        pCVar4 = (this_ptr->base).victim;
        if ((pCVar4 == (CCharacter *)0x0) ||
           (EVar12 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4), 0 < (int)EVar12))
        goto LAB_0059753e;
        in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
        pCVar10 = (CZombie *)
                  (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffff9d8);
        if (pCVar10 == (CZombie *)0x0) {
          fStack_98 = 0x3FA66666;
          fStack_20 = 3.0;
        }
        else if (pCVar10 != this_ptr) goto LAB_00597a00;
      }
    }
    else if (uVar9 < 9) {
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (this_ptr_00,0,&CStack_104);
        pCVar28 = &CStack_ec;
        CStack_ec.x = CStack_104.x;
        *(uint *)((int)&CStack_ec + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_104 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_ec + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_104 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr,pCVar28,&CStack_188);
        EVar29 = BLOOD_TYPE_RED;
        pCVar28 = &CStack_140;
        CStack_140.x = CStack_188.x;
        *(uint *)((int)&CStack_140 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_188 + (uint)bVar21 * -8 + 4);
        pCVar25 = g_CGorePtr;
        *(uint *)((int)&CStack_140 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_188 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(pCVar25,pCVar28,EVar29);
        (this_ptr->base).pool_me = 1;
      }
    }
    else {
      pCVar1 = &(this_ptr->base).base.base.location;
      if (uVar9 < 0x18) {
        if (0xd < uVar9) {
          if (uVar9 < 0xf) {
            iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                              (0x01C38BC0,this_ptr->rise_from_grave_condition);
            if ((iVar7 != 0) &&
               (fVar11 = this_ptr->rise_delay - delta_time, this_ptr->rise_delay = fVar11,
               fVar11 < 0.0)) {
              iStack_88 = 0;
              iStack_2c = 0;
              this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
              pCStack_84 = pCVar1;
              for (; iStack_88 < g_CDemonSetPtr->character_count; iStack_88 = iStack_88 + 1) {
                iVar7 = *(int *)((int)g_CDemonSetPtr->characters + iStack_2c);
                iVar14 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xec))(iVar7,this_ptr);
                if (iVar14 != 0) {
                  fStack_428 = *(float *)(iVar7 + 0x20) - (pCStack_84->position).x;
                  fStack_424 = *(float *)(iVar7 + 0x24) - (pCStack_84->position).y;
                  fStack_420 = *(float *)(iVar7 + 0x28) - (pCStack_84->position).z;
                  afStack_178[2] = fStack_428;
                  afStack_178[(uint)bVar21 * -2 + 3] =
                       *(float *)((int)&CStack_434 + ((uint)bVar21 * -2 + 2) * 4 + 8);
                  afStack_178[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
                       *(float *)((int)&CStack_434 +
                                 ((uint)bVar21 * -2 + (uint)bVar21 * -2 + 3) * 4 + 8);
                  if ((ABS(afStack_178[3]) <= (float)_DAT_005ef1aa) &&
                     (afStack_178[3] = 0.0,
                     SQRT(afStack_178[4] * afStack_178[4] + afStack_178[2] * afStack_178[2]) <=
                     (this_ptr->base).guard_distance)) {
                    engine_console_cpp_CConsole_printf_FUN_00436710
                              (g_CConsolePtr,"%s rising from the grave\n");
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              (&(this_ptr->base).base.model.base,0xf,1);
                    if ((CGrave *)this_ptr->grave_actor != (CGrave *)0x0) {
                      core_grave_cpp_CGrave_startAnimation_FUN_004ca3e0
                                ((CGrave *)this_ptr->grave_actor);
                      this_ptr->grave_actor = (CDemonActor *)0x0;
                    }
                    (this_ptr->base).guard_distance = 100.0;
                    break;
                  }
                }
                iStack_2c = iStack_2c + 4;
              }
            }
          }
          else if (uVar9 == 0x14) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar4 = (this_ptr->base).victim;
            if (((pCVar4 != (CCharacter *)0x0) &&
                (fVar11 = (pCVar1->position).x - (pCVar4->base).location.position.x,
                fVar2 = (this_ptr->base).base.base.location.position.z -
                        (pCVar4->base).location.position.z,
                SQRT(fVar2 * fVar2 + fVar11 * fVar11) <= (float)_DAT_005ef152)) &&
               (ABS((this_ptr->base).base.base.location.position.y -
                    (pCVar4->base).location.position.y) <= (float)_DAT_005ef15a)) {
              in_stack_fffff9d8 = (CZombie *)0x0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1)
              ;
            }
          }
        }
      }
      else if ((uVar9 < 0x19) || (uVar9 < 0x1a)) {
        iVar7 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x114))(iVar7);
        if ((iVar7 == 0) &&
           ((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time), (this_ptr->base).victim != (CCharacter *)0x0)) {
LAB_00596f17:
          in_stack_fffff9d8 = (CZombie *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else if ((uVar9 == 0x1c) &&
              (fVar11 = this_ptr->buried_timer - delta_time, this_ptr->buried_timer = fVar11,
              fVar11 <= 0.0)) {
        pCVar6 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->buried_timer = 0.0;
        (*(pCVar6->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 != (CCharacter *)0x0) {
          pvStack_26c = (void *)((pCVar1->position).x - (pCVar4->base).location.position.x);
          pvStack_268 = (void *)((this_ptr->base).base.base.location.position.y -
                                (pCVar4->base).location.position.y);
          afStack_264[0] =
               (this_ptr->base).base.base.location.position.z - (pCVar4->base).location.position.z;
          pvStack_374 = pvStack_26c;
          afStack_370[(uint)bVar21 * -2] = (float)(&pvStack_268)[(uint)bVar21 * -2];
          afStack_370[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
               afStack_264[(uint)bVar21 * -2 + (uint)bVar21 * -2];
          if (&pvStack_248 != &pvStack_374) {
            pvStack_248 = pvStack_374;
            fStack_244 = afStack_370[0];
            fStack_240 = afStack_370[1];
          }
          fStack_18 = fStack_240 * fStack_240 +
                      (float)pvStack_248 * (float)pvStack_248 + fStack_244 * fStack_244;
          fStack_94 = (float)(((int)fStack_18 >> 1) + _DAT_01caf5b4);
          if (fStack_94 <= (float)_DAT_005ef142) {
            fStack_1c = (this_ptr->base).base.collision_cylinder_top;
            if (fStack_1c < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_1c = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (fStack_1c < (this_ptr->base).base.collision_cylinder_bottom) {
              fStack_1c = (this_ptr->base).base.collision_cylinder_bottom + (float)_DAT_005ef14a;
            }
            iVar7 = 0;
            do {
              fStack_90 = (float)iVar7 * _DAT_005ef192 * _DAT_005ef196;
              pCStack_14 = (CCharacter_full_vtable *)iVar7;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar22 = (float10)fcos((float10)fStack_90);
              fVar23 = (float10)fsin((float10)fStack_90);
              fStack_8c = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00537030
                                    (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                     (this_ptr->base).base.base.location.position.z,
                                     (float)(fVar23 * (float10)_DAT_005ef19a),
                                     (float)(fVar22 * (float10)_DAT_005ef19a),
                                     (this_ptr->base).base.collision_cylinder_radius,
                                     (this_ptr->base).base.base.location.position.y +
                                     (this_ptr->base).base.collision_cylinder_bottom,
                                     (this_ptr->base).base.base.location.position.y + fStack_1c);
              in_stack_fffff9d8 = (CZombie *)0x5970de;
              pCStack_14 = (CCharacter_full_vtable *)fStack_8c;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              if (fStack_8c < 1.0) break;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 4);
            if (3 < iVar7) goto LAB_00596f17;
            this_ptr->buried_timer = 3.0;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
        }
      }
    }
LAB_00596e2a:
    if ((0.0 <= fStack_98) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar11 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed = fStack_20 * (this_ptr->base).speed * delta_time;
      core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0
                ((CCharacter *)this_ptr,delta_time * fVar11);
      fVar11 = 0.7853982;
      pCVar28 = (CVector3f *)0x40400000;
      uStack_e0 = 0;
      fStack_d8 = fStack_98;
      uStack_dc = 0;
      pCVar4 = (this_ptr->base).victim;
      pCVar15 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar15,pCVar28,fVar11,(float)in_stack_fffff9d8);
      if (iVar7 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s giving up attack\n")
        ;
        in_stack_fffff9d8 = this_ptr;
        core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_00596b5f;
  }
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_00596b39:
      if (iVar7 != 1) {
        core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
      }
    }
    else {
LAB_00596dee:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0,1);
    }
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_00596b39;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_00596dee;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00596b5f:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                      (&(this_ptr->base).base.model.base);
  iStack_28 = pSVar13->state_index;
  pCStack_34 = &(this_ptr->base).base.model.accumulated_root_motion;
  if (iStack_28 == 0xe) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCStack_34->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  else if (iStack_28 == 0xf) {
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,pCStack_34,&CStack_32c);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_1f4 = CStack_32c.x;
    afStack_1f0[(uint)bVar21 * -2] = *(float *)((int)&CStack_32c + (uint)bVar21 * -8 + 4);
    afStack_1f0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
         *(float *)((int)&CStack_32c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
    fVar11 = (this_ptr->base).base.base.location.position.y;
    (pCVar1->position).x = (pCVar1->position).x + fStack_1f4;
    fVar2 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar11 + afStack_1f0[0];
    (this_ptr->base).base.base.location.position.z = fVar2 + afStack_1f0[1];
    pCStack_34->z = 0.0;
    pCStack_34->y = pCStack_34->z;
    pCStack_34->x = pCStack_34->y;
  }
  else {
    iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
    if (iVar7 != 0) {
      pCVar4 = (this_ptr->base).victim;
      if ((pCVar4 != (CCharacter *)0x0) &&
         (pCVar10 = (CZombie *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
         pCVar10 == this_ptr)) {
        in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,(CDemonActor *)in_stack_fffff9d8);
      }
      core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
      fStack_254 = (this_ptr->base).base.velocity.x * delta_time;
      pCStack_250 = (CDemonActor *)((this_ptr->base).base.velocity.y * delta_time);
      fStack_24c = (this_ptr->base).base.velocity.z * delta_time;
      fStack_d4 = fStack_254;
      afStack_d0[(uint)bVar21 * -2] = (float)(&pCStack_250)[(uint)bVar21 * -2];
      afStack_d0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           (&fStack_24c)[(uint)bVar21 * -2 + (uint)bVar21 * -2];
      pCVar28 = &(this_ptr->base).base.position_delta;
      afStack_358[2] = fStack_d4 + pCVar28->x;
      afStack_358[3] = afStack_d0[0] + (this_ptr->base).base.position_delta.y;
      fStack_348 = afStack_d0[1] + (this_ptr->base).base.position_delta.z;
      fStack_17c = afStack_358[2];
      afStack_178[(uint)bVar21 * -2] = afStack_358[(uint)bVar21 * -2 + 3];
      afStack_178[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           afStack_358[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
      pCVar26 = &(this_ptr->base).base.model.accumulated_root_motion;
      fStack_320 = fStack_17c + pCVar26->x;
      afStack_31c[0] = afStack_178[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
      afStack_31c[1] = afStack_178[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
      CStack_11c.x = fStack_320;
      *(float *)((int)&CStack_11c + (uint)bVar21 * -8 + 4) = afStack_31c[(uint)bVar21 * -2];
      *(float *)((int)&CStack_11c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           afStack_31c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar28->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar11 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar11;
      pCVar26->x = fVar11;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_11c);
      if ((iStack_28 == 1) &&
         (pCStack_44 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                          (DAT_007bdc98,g_CDoorClassInfo.name_hash),
         pCStack_40 = pCStack_44, pCStack_44 != (CDoor *)0x0)) {
        (*((pCStack_44->base).vtable._ub)->getBoundingBox)
                  ((CDemonActor *)pCStack_44,(CBoundingBox3D *)in_stack_fffff9d8);
        pfVar18 = afStack_560;
        pfVar20 = &fStack_4b8;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar20 = *pfVar18;
          pfVar18 = pfVar18 + (uint)bVar21 * -2 + 1;
          pfVar20 = pfVar20 + (uint)bVar21 * -2 + 1;
        }
        fStack_404 = fStack_4b8 + fStack_4ac;
        afStack_400[0] = fStack_4b4 + fStack_4a8;
        afStack_400[1] = fStack_4b0 + fStack_4a4;
        fStack_2e4 = fStack_4b8 + fStack_4ac;
        afStack_2e0[(uint)bVar21 * -2] = afStack_400[(uint)bVar21 * -2];
        this_ptr_01 = pCStack_40;
        afStack_2e0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             afStack_400[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
        pCVar28 = &CStack_2b4;
        fStack_488 = fStack_2e4 * _DAT_005ef17a;
        fStack_484 = afStack_2e0[0] * _DAT_005ef17a;
        fStack_480 = afStack_2e0[1] * _DAT_005ef17a;
        CStack_2b4.x = fStack_2e4 * _DAT_005ef17a;
        *(float *)((int)&CStack_2b4 + (uint)bVar21 * -8 + 4) = afStack_49c[(uint)bVar21 * -2 + 6];
        *(float *)((int)&CStack_2b4 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             afStack_49c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  (&this_ptr_01->base,pCVar28,&CStack_1dc);
        pCVar28 = &CStack_110;
        CStack_110.x = CStack_1dc.x;
        *(uint *)((int)&CStack_110 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_1dc + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_110 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_1dc + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,pCVar28,&CStack_1e8);
        CStack_158.x = CStack_1e8.x;
        *(uint *)((int)&CStack_158 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&CStack_1e8 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&CStack_158 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&CStack_1e8 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_158,&CStack_308);
        fStack_3e0 = CStack_308.x;
        afStack_3dc[(uint)bVar21 * -2] = *(float *)((int)&CStack_308 + (uint)bVar21 * -8 + 4);
        afStack_3dc[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
             *(float *)((int)&CStack_308 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        if (ABS(afStack_3dc[0]) < (float)_DAT_005ef1a2) {
          iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
          iVar14 = 0x12;
          if (iVar7 != 0) {
            iVar14 = 0x13;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar14,1);
          this_ptr->target_door = pCStack_44;
        }
      }
    }
  }
  iVar7 = iStack_28;
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (iVar7 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar7 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar7] == 0) {
      iVar14 = this_ptr->bone_indices[10];
      fVar11 = 0.5;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],this_ptr->bone_indices[5],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],this_ptr->bone_indices[3],0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],this_ptr->bone_indices[6],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],this_ptr->bone_indices[4],0.2);
      }
      iVar14 = this_ptr->bone_indices[0];
      fVar11 = 0.7;
      iVar7 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
              ((CCharacter *)this_ptr,iVar7,iVar14,fVar11);
    if ((this_ptr->part_indices[4] < 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10],0.2);
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_00426f30((CCharacter *)this_ptr);
  }
  iVar7 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
  if (((iStack_a0 != 0) && (-1 < iVar7)) &&
     (pCVar16 = (this_ptr->base).base.carry_hands[iVar7].carry_actor, pCVar16 != (CDemonActor *)0x0)
     ) {
    (*((pCVar16->vtable)._ub)->processMeleeHit)(pCVar16,2);
    return;
  }
  return;
}
