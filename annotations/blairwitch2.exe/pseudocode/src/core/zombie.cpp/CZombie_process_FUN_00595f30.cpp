// Name: core_zombie.cpp_CZombie_process_FUN_00595f30
// Address: 00595f30
// Address Range: [[00595f30, 00598097]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_process_FUN_00595f30(CZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00597c7b) */
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
  int iVar7;
  CMotionList *pCVar8;
  uint uVar9;
  CZombie *pCVar10;
  float fVar11;
  EDeathState EVar12;
  int iVar13;
  CPathMap *pCVar14;
  CDemonActor *pCVar15;
  uint *puVar16;
  float *pfVar17;
  char *pcVar18;
  float *pfVar19;
  byte bVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_1488 [105];
  CDemonActor *apCStackY_12e4 [6];
  float afStackY_12cc [12];
  CDemonActor *apCStackY_129c [3];
  float afStackY_1290 [30];
  void *apvStackY_1218 [3];
  float afStackY_120c [21];
  CDemonActor *apCStackY_11b8 [3];
  float afStackY_11ac [9];
  void *apvStackY_1188 [6];
  float afStackY_1170 [716];
  CGore *pCVar23;
  CVector3f *pCVar24;
  char *pcVar25;
  CBoundingBox3D *out_box;
  CVector3f *pCVar26;
  void **ppvVar27;
  EBloodType EVar28;
  CZombie *in_stack_fffff9d8;
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
  float afStack_49c [2];
  void *pvStack_494;
  float afStack_490 [4];
  float fStack_480;
  char acStack_47c [4];
  float afStack_478 [5];
  float fStack_464;
  char acStack_458 [4];
  float afStack_454 [5];
  char acStack_440 [4];
  float afStack_43c [2];
  CVector3f CStack_434;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  byte auStack_410 [12];
  float fStack_404;
  float afStack_400 [5];
  float fStack_3ec;
  float afStack_3e8 [5];
  int iStack_3d4;
  float afStack_3d0 [5];
  CVector3f CStack_3bc;
  CVector3f CStack_3b0;
  CVector3f CStack_3a4;
  char acStack_398 [4];
  float afStack_394 [4];
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  void *pvStack_374;
  float afStack_370 [2];
  CVector3f CStack_368;
  float fStack_35c;
  float afStack_358 [4];
  float fStack_348;
  CDemonActor *pCStack_344;
  float afStack_340 [5];
  float fStack_32c;
  char acStack_320 [4];
  float afStack_31c [4];
  float fStack_30c;
  byte auStack_308 [8];
  float fStack_300;
  CDemonActor *pCStack_2fc;
  CDemonActor *apCStack_2f8 [5];
  float fStack_2e4;
  float afStack_2e0 [2];
  CDemonActor *pCStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  CVector3f CStack_2cc;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  CDemonActor *apCStack_2b0 [2];
  CVector3f CStack_2a8;
  float fStack_29c;
  float afStack_298 [5];
  CDemonActor *pCStack_284;
  float afStack_280 [2];
  CDemonActor *pCStack_278;
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
  void *apvStack_228 [2];
  float afStack_220 [4];
  float fStack_210;
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [4];
  float fStack_1ec;
  int iStack_1e8;
  float afStack_1e4 [5];
  float fStack_1d0;
  float fStack_1cc;
  CDemonActor *pCStack_1c8;
  float fStack_1c4;
  float afStack_1c0 [2];
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [2];
  void *pvStack_1a0;
  void *apvStack_19c [5];
  float fStack_188;
  float afStack_184 [4];
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  SMotionTransition *pSStack_160;
  float fStack_15c;
  int iStack_158;
  float afStack_154 [5];
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [5];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [2];
  double dStack_c8;
  double dStack_b8;
  float fStack_ac;
  char *pcStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CLocation *pCStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CCharacter *pCStack_70;
  float *pfStack_6c;
  float fStack_68;
  float *pfStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CDoor *pCStack_44;
  CDoor *pCStack_40;
  float fStack_3c;
  CZombie *pCStack_38;
  CVector3f *pCStack_34;
  CMotionController *pCStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar20 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = 0;
  pcVar25 = "CHASE_2";
  fStack_54 = 0.0;
  pCVar8 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                     (&(this_ptr->base).base.model.base);
  iVar7 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(pCVar8,pcVar25,iVar7);
  if (iVar7 == 0x16) {
    fStack_54 = 1.4013e-45;
  }
  pCStack_70 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCStack_70 != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_70->base).vtable._uc;
    core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,0);
    pCVar26 = &CStack_2cc;
    CStack_2cc.x = fStack_29c;
    *(float *)((int)&CStack_2cc + (uint)bVar20 * -8 + 4) = afStack_298[(uint)bVar20 * -2];
    *(float *)((int)&CStack_2cc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
         afStack_298[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    iVar7 = (*(pCStack_14->_uc).attractActorToward)(pCStack_70,(CDemonActor *)this_ptr,pCVar26);
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
  pCStack_30 = &(this_ptr->base).base.model.base;
LAB_00595fe0:
  if (0.0 < fStack_9c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&fStack_9c);
    if (uVar9 < 0xb) {
      if (4 < uVar9) {
        if (5 < uVar9) {
          if (uVar9 == 10) {
            if ((this_ptr->base).victim == (CCharacter *)0x0) {
              core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
              goto LAB_00595fe0;
            }
            core_skeleton_cpp_FUN_005469a0(pCStack_30,this_ptr->bone_indices[0]);
            pfVar17 = afStack_154 + 2;
            afStack_154[2] = (float)iStack_3d4;
            afStack_154[(uint)bVar20 * -2 + 3] = afStack_3d0[(uint)bVar20 * -2];
            afStack_154[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                 afStack_3d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            core_actor_cpp_FUN_00408d70(this_ptr,pfVar17);
            CStack_1b8.x = afStack_3d0[2];
            *(float *)((int)&CStack_1b8 + (uint)bVar20 * -8 + 4) =
                 afStack_3d0[(uint)bVar20 * -2 + 3];
            *(float *)((int)&CStack_1b8 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8) =
                 afStack_3d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
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
              fVar21 = (float10)fVar11 * (float10)_DAT_005ef182 * (float10)_DAT_005ef18a;
              fVar11 = 0.0;
              round();
              fStack_3c = (float)(int)ROUND(fVar21);
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,&CStack_1b8,(CVector3f *)0x0,(int)fStack_3c,(EBloodType)fVar11);
            }
            pCVar4 = (this_ptr->base).victim;
            in_stack_fffff9d8 = (CZombie *)0x5963f2;
            EVar12 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
            if (0 < (int)EVar12) {
              pCVar4 = (this_ptr->base).victim;
              (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
              core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
            }
            in_stack_fffff9e0 = (char *)this_ptr;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
            goto LAB_00595fe0;
          }
          core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar9);
          goto LAB_00595fe0;
        }
        fStack_50 = 1.4013e-45;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          afStack_400[4] = 0x3FA66666;
          afStack_400[2] = 0.0;
          afStack_400[3] = 0.0;
          core_actor_cpp_FUN_00408d70(this_ptr,afStack_400 + 2);
          fStack_380 = fStack_464;
          afStack_394[(uint)bVar20 * -2 + 6] = afStack_478[(uint)bVar20 * -2 + 6];
          afStack_394[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
               afStack_478[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
          pCVar4 = (this_ptr->base).victim;
          fStack_f8 = fStack_380 - (pCVar4->base).location.position.x;
          fStack_f4 = fStack_37c - (pCVar4->base).location.position.y;
          fStack_f0 = fStack_378 - (pCVar4->base).location.position.z;
          afStack_454[2] = fStack_f8;
          afStack_454[(uint)bVar20 * -2 + 3] = afStack_10c[(uint)bVar20 * -2 + 6];
          afStack_454[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_10c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
          afStack_454[3] = 0.0;
          if (SQRT(afStack_454[4] * afStack_454[4] + afStack_454[2] * afStack_454[2]) <= 1.0) {
            if (fStack_50 != 0.0) {
              pCStack_2d8 = (CDemonActor *)0x0;
              iStack_2d0 = 0;
              iStack_2d4 = 0x40800000;
              core_actor_cpp_FUN_00408d70(this_ptr,&pCStack_2d8);
              CStack_3a4.x = fStack_200;
              *(float *)(acStack_398 + (uint)bVar20 * -8 + -8) = afStack_1fc[(uint)bVar20 * -2];
              *(float *)(acStack_398 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + -4) =
                   afStack_1fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              pCVar4 = (this_ptr->base).victim;
              puVar16 = (uint *)((int)pCVar4 + (uint)bVar20 * -8 + 0x24);
              CStack_20c.x = (pCVar4->base).location.position.x;
              *(uint *)((int)&CStack_20c + (uint)bVar20 * -8 + 4) = *puVar16;
              *(uint *)((int)&CStack_20c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   puVar16[(uint)bVar20 * -2 + 1];
              CStack_20c.y = CStack_3a4.y;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
              iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                (g_CDemonSetPtr,&CStack_3a4,&CStack_20c);
              if (iVar7 != 0) {
                fStack_50 = 0.0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            }
            if ((fStack_50 == 0.0) ||
               (pCVar4 = (this_ptr->base).victim,
               iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar4,(CDemonActor *)this_ptr,0), iVar7 != 0)) {
              if (fStack_50 == 0.0) {
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
        pCVar15 = this_ptr->pickup_target;
        if (pCVar15 != (CDemonActor *)0x0) {
          this_ptr->pickup_target = (CDemonActor *)0x0;
          iVar7 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40
                            (this_ptr,this_ptr->object_shape_class);
          if (-1 < iVar7) {
            core_charactr_cpp_FUN_00428b10(this_ptr,iVar7,pCVar15,0x3e4ccccd,0);
            engine_console_cpp_FUN_00436710
                      (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,pCVar15,iVar7);
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
        core_main_c_FUN_004e4500(&DAT_005eefb4);
      }
      pCVar15 = (this_ptr->base).base.carry_hands[iVar7].carry_actor;
      if (pCVar15 != (CDemonActor *)0x0) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s lugging %s\n",this_ptr,pCVar15);
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
      fStack_ac = (float)core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,3);
      if ((int)fStack_ac < 0) {
        _DAT_01d046a0 = "..\\core\\zombie.cpp";
        _DAT_01d046a4 = 0x206;
        core_main_c_FUN_004e4500(&DAT_005eefe7);
      }
      pcStack_a8 = (this_ptr->base).base.base.actor_name + (int)fStack_ac * 0x78;
      if (*(int *)(pcStack_a8 + 0x2620) != 0) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"%s tossing %s\n",this_ptr,*(int *)(pcStack_a8 + 0x2620));
        CStack_368.x = 0.0;
        CStack_368.y = 0.0;
        CStack_368.z = 1.0;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          out_box = (CBoundingBox3D *)0x596663;
          (**(code **)(*(int *)(*(int *)(pcStack_a8 + 0x2620) + 0x2b0) + 0x24))
                    (*(int *)(pcStack_a8 + 0x2620));
          pfVar17 = afStack_530;
          pfVar19 = &fStack_578;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar19 = *pfVar17;
            pfVar17 = pfVar17 + (uint)bVar20 * -2 + 1;
            pfVar19 = pfVar19 + (uint)bVar20 * -2 + 1;
          }
          afStack_264[1] = fStack_578 + *pfStack_6c;
          afStack_264[2] = fStack_574 + pfStack_6c[1];
          afStack_264[3] = fStack_570 + pfStack_6c[2];
          fStack_1d0 = fStack_578 + *pfStack_6c;
          afStack_1e4[(uint)bVar20 * -2 + 6] = afStack_264[(uint)bVar20 * -2 + 2];
          pcVar25 = pcStack_a8;
          (&pCStack_1c8)[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
               (CDemonActor *)afStack_264[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 3];
          pfVar17 = afStack_298 + 2;
          afStack_220[2] = fStack_1d0 * _DAT_005ef17a;
          afStack_220[3] = fStack_1cc * _DAT_005ef17a;
          fStack_210 = (float)pCStack_1c8 * _DAT_005ef17a;
          afStack_298[2] = fStack_1d0 * _DAT_005ef17a;
          afStack_298[(uint)bVar20 * -2 + 3] = afStack_220[(uint)bVar20 * -2 + 3];
          afStack_298[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
          core_actor_cpp_FUN_00408d70(*(uint *)(pcVar25 + 0x2620),pfVar17);
          fStack_23c = fStack_3ec;
          afStack_238[(uint)bVar20 * -2] = afStack_3e8[(uint)bVar20 * -2];
          afStack_238[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_3e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pCVar4 = (this_ptr->base).victim;
          (*((pCVar4->base).vtable._ub)->getBoundingBox)(&pCVar4->base,out_box);
          pfVar17 = afStack_590;
          pfVar19 = &fStack_518;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar19 = *pfVar17;
            pfVar17 = pfVar17 + (uint)bVar20 * -2 + 1;
            pfVar19 = pfVar19 + (uint)bVar20 * -2 + 1;
          }
          fStack_1ac = fStack_518 + *pfStack_64;
          afStack_1a8[0] = fStack_514 + pfStack_64[1];
          afStack_1a8[1] = fStack_510 + pfStack_64[2];
          fStack_128 = fStack_518 + *pfStack_64;
          afStack_124[(uint)bVar20 * -2] = afStack_1a8[(uint)bVar20 * -2];
          afStack_124[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_1a8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          fStack_164 = fStack_128 * _DAT_005ef17a;
          pSStack_160 = (SMotionTransition *)(afStack_124[0] * _DAT_005ef17a);
          fStack_15c = afStack_124[1] * _DAT_005ef17a;
          auStack_410._0_4_ = fStack_128 * _DAT_005ef17a;
          *(SMotionTransition **)(auStack_410 + (uint)bVar20 * -8 + 4) =
               (&pSStack_160)[(uint)bVar20 * -2];
          *(float *)(auStack_410 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
               (&fStack_15c)[(uint)bVar20 * -2 + (uint)bVar20 * -2];
          core_actor_cpp_FUN_00408d70((this_ptr->base).victim,auStack_410);
          afStack_394[2] = afStack_340[2];
          afStack_394[(uint)bVar20 * -2 + 3] = afStack_340[(uint)bVar20 * -2 + 3];
          afStack_394[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_340[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
          fStack_1c4 = afStack_394[2] - fStack_23c;
          afStack_1c0[0] = afStack_394[3] - afStack_238[0];
          afStack_1c0[1] = fStack_384 - afStack_238[1];
          afStack_31c[2] = afStack_394[2] - fStack_23c;
          afStack_31c[(uint)bVar20 * -2 + 3] = afStack_1c0[(uint)bVar20 * -2];
          afStack_31c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_1c0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          fStack_60 = SQRT(fStack_30c * fStack_30c +
                           afStack_31c[2] * afStack_31c[2] + afStack_31c[3] * afStack_31c[3]);
          if (0.0 < fStack_60) {
            core_actor_cpp_FUN_00408d30(this_ptr,afStack_31c + 2);
            fStack_4a0 = afStack_478[2];
            afStack_49c[(uint)bVar20 * -2] = afStack_478[(uint)bVar20 * -2 + 3];
            afStack_49c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_478[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
            fVar11 = 1.0 / fStack_60;
            fStack_35c = fStack_4a0 * fVar11;
            afStack_358[0] = afStack_49c[0] * fVar11;
            afStack_358[1] = afStack_49c[1] * fVar11;
            CStack_434.x = fStack_4a0 * fVar11;
            *(float *)((int)&CStack_434 + (uint)bVar20 * -8 + 4) = afStack_358[(uint)bVar20 * -2];
            *(float *)((int)&CStack_434 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8) =
                 afStack_358[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            if (&CStack_368 != (CVector3f *)(afStack_43c + 2)) {
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
                  ((CCharacter *)this_ptr,(int)fStack_ac,&CStack_368);
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
        core_skeleton_cpp_FUN_005469a0(pCStack_30,this_ptr->bone_indices[0]);
        ppvVar27 = &pvStack_1a0;
        pvStack_1a0 = apvStack_19c[2];
        apvStack_19c[(uint)bVar20 * -2] = apvStack_19c[(uint)bVar20 * -2 + 3];
        apvStack_19c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
             apvStack_19c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,ppvVar27);
        EVar28 = BLOOD_TYPE_RED;
        iVar7 = 3;
        pCVar24 = (CVector3f *)0x0;
        pCVar26 = &CStack_134;
        CStack_134.x = fStack_41c;
        *(uint *)((int)&CStack_134 + (uint)bVar20 * -8 + 4) =
             *(uint *)((int)&CStack_434 + ((uint)bVar20 * -2 + 5) * 4 + 8);
        pCVar23 = g_CGorePtr;
        *(uint *)((int)&CStack_134 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             *(uint *)((int)&CStack_434 + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 6) * 4 + 8)
        ;
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(pCVar23,pCVar26,pCVar24,iVar7,EVar28);
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
        if (iVar7 == 0) {
          pcVar25 = "ghoul-dig-?.wav";
        }
        else {
          pcVar25 = "ghoul-eat-?.wav";
        }
        pcVar18 = acStack_5b0;
        do {
          cVar3 = *pcVar25;
          *pcVar18 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar25[1];
          pcVar25 = pcVar25 + 2;
          pcVar18[1] = cVar3;
          pcVar18 = pcVar18 + 2;
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
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
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
  iVar7 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar7 = *(int *)(iVar7 + 0x24);
  fStack_a0 = 0.0;
  iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar13 == 0) {
    fStack_98 = -1.0;
    fStack_20 = 0.3;
    iVar7 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    uVar9 = *(uint *)(iVar7 + 0x24);
    if (uVar9 < 8) {
      if (uVar9 == 0) {
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(delta_time * (float)_DAT_005ef172);
        if (iVar7 != 0) {
          iVar7 = 0;
          pcVar25 = "pickass";
          pCVar8 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                             (&(this_ptr->base).base.model.base);
          iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar8,pcVar25,iVar7);
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
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (fStack_54 != 0.0)) {
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
          iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
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
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (fStack_54 != 0.0)) {
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
          iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
          if (iVar7 == 0) {
            if (this_ptr->is_female == 0) {
              pcVar25 = "zom-a0?.wav";
            }
            else {
              pcVar25 = "f-zombie-alert?.wav";
            }
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,pcVar25);
            this_ptr->sfx_handles[1] = uVar9;
          }
LAB_0059753e:
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
        else {
          fStack_7c = (float)(uint)((this_ptr->base).base.model.part_data.visibility_flags
                                    [this_ptr->part_indices[1]] != 0);
          if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0
             ) {
            fStack_7c = (float)((int)fStack_7c + 1);
          }
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          iVar7 = core_zombie_cpp_CZombie_processPickup_FUN_005984e0(this_ptr,delta_time);
          if (iVar7 == 0) {
            fStack_78 = 0x3FA66666;
            fStack_74 = (float)core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
            if (((-1 < (int)fStack_74) &&
                (pCVar15 = (this_ptr->base).base.carry_hands[(int)fStack_74].carry_actor,
                pCVar15 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
              fStack_68 = 1.0;
              if (pCVar15 != (CDemonActor *)0x0) {
                (*((pCVar15->vtable)._ub)->getBoundingBox)
                          (pCVar15,(CBoundingBox3D *)in_stack_fffff9d8);
                pfVar17 = afStack_4d0;
                pfVar19 = &fStack_548;
                for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *pfVar19 = *pfVar17;
                  pfVar17 = pfVar17 + (uint)bVar20 * -2 + 1;
                  pfVar19 = pfVar19 + (uint)bVar20 * -2 + 1;
                }
                in_stack_fffff9d8 = (CZombie *)0x59766f;
                core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_3bc);
                CStack_3bc.x = fStack_53c - fStack_548;
                CStack_3bc.y = fStack_538 - fStack_544;
                CStack_3bc.z = fStack_534 - fStack_540;
                afStack_238[2] = fStack_53c - fStack_548;
                afStack_238[(uint)bVar20 * -2 + 3] =
                     *(float *)((int)&CStack_3bc + (uint)bVar20 * -8 + 4);
                apvStack_228[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
                     *(void **)((int)&CStack_3bc + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8);
                fStack_68 = (float)apvStack_228[0] * (float)_DAT_005ef14a + 1.0;
              }
              fStack_78 = fStack_68;
            }
            fVar11 = 0.34906584;
            pCVar26 = (CVector3f *)0x3f8ccccd;
            fStack_2c0 = 0.0;
            fStack_2b8 = fStack_78;
            fStack_2bc = 0.0;
            pCVar4 = (this_ptr->base).victim;
            pCVar14 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
            iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar14,pCVar26,
                               fVar11,(float)in_stack_fffff9d8);
            pCStack_38 = (CZombie *)&(this_ptr->base).base.model;
            if (iVar7 < 0) {
              engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n");
              in_stack_fffff9d8 = (CZombie *)0x1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_38,0,1);
            }
            else if (iVar7 < 1) {
              in_stack_fffff9d8 = (CZombie *)this_ptr->object_shape_class;
              fStack_5c = (float)core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40
                                           (this_ptr,(int)in_stack_fffff9d8);
              pCVar4 = (this_ptr->base).victim;
              pvStack_494 = (void *)((this_ptr->base).base.base.location.position.x -
                                    (pCVar4->base).location.position.x);
              afStack_490[0] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar4->base).location.position.y;
              afStack_490[1] =
                   (this_ptr->base).base.base.location.position.z -
                   (pCVar4->base).location.position.z;
              apvStack_228[1] = pvStack_494;
              afStack_220[(uint)bVar20 * -2] = afStack_490[(uint)bVar20 * -2];
              afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   afStack_490[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              if (SQRT(afStack_220[1] * afStack_220[1] +
                       (float)apvStack_228[1] * (float)apvStack_228[1] +
                       afStack_220[0] * afStack_220[0]) < (float)_DAT_005ef162) {
                core_actor_cpp_FUN_00408de0(this_ptr);
                in_stack_fffff9d8 = (CZombie *)acStack_440;
                acStack_440[0] = acStack_458[0];
                acStack_440[1] = acStack_458[1];
                acStack_440[2] = acStack_458[2];
                acStack_440[3] = acStack_458[3];
                afStack_43c[(uint)bVar20 * -2] = afStack_454[(uint)bVar20 * -2];
                afStack_43c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                     afStack_454[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
                acStack_47c[0] = acStack_398[0];
                acStack_47c[1] = acStack_398[1];
                acStack_47c[2] = acStack_398[2];
                acStack_47c[3] = acStack_398[3];
                afStack_478[(uint)bVar20 * -2] = afStack_394[(uint)bVar20 * -2];
                afStack_478[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                     afStack_394[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                if (((ABS(afStack_478[0]) < (float)_DAT_005ef16a) && (-1 < (int)fStack_5c)) &&
                   (uVar9 = this_ptr->object_shape_class, 1 < uVar9)) {
                  if (uVar9 < 3) {
                    if ((this_ptr->base).base.carry_hands[(int)fStack_5c].carry_actor !=
                        (CDemonActor *)0x0) {
                      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s lugging\n");
                      in_stack_fffff9d8 = (CZombie *)0x1;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)pCStack_38,0xd,1);
                    }
                  }
                  else if ((uVar9 == 3) &&
                          ((this_ptr->base).base.carry_hands[(int)fStack_5c].carry_actor !=
                           (CDemonActor *)0x0)) {
                    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s tossing\n");
                    in_stack_fffff9d8 = (CZombie *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)pCStack_38,0xb,1);
                  }
                }
              }
            }
            else if ((0 < (int)fStack_7c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
              pCVar15 = (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                                  ((CCharacter *)in_stack_fffff9d8);
              if (pCVar15 == (CDemonActor *)0x0) {
                if (((int)fStack_74 < 0) ||
                   ((this_ptr->base).base.carry_hands[(int)fStack_74].carry_actor ==
                    (CDemonActor *)0x0)) {
                  if ((fStack_54 == 0.0) ||
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
            pCVar15 = (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                                ((CCharacter *)in_stack_fffff9d8);
            if (pCVar15 == (CDemonActor *)0x0) {
              pCVar15 = (this_ptr->base).base.carry_hands[iVar7].carry_actor;
              fStack_24 = 1.0;
              if (pCVar15 != (CDemonActor *)0x0) {
                in_stack_fffff9d8 = (CZombie *)0x597ab9;
                (*((pCVar15->vtable)._ub)->getBoundingBox)
                          (pCVar15,(CBoundingBox3D *)in_stack_fffff9e0);
                pfVar17 = afStack_4e8;
                pfVar19 = &fStack_500;
                for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *pfVar19 = *pfVar17;
                  pfVar17 = pfVar17 + (uint)bVar20 * -2 + 1;
                  pfVar19 = pfVar19 + (uint)bVar20 * -2 + 1;
                }
                core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_2a8);
                CStack_2a8.x = fStack_4f4 - fStack_500;
                CStack_2a8.y = fStack_4f0 - fStack_4fc;
                CStack_2a8.z = fStack_4ec - fStack_4f8;
                pCStack_284 = (CDemonActor *)(fStack_4f4 - fStack_500);
                afStack_280[(uint)bVar20 * -2] =
                     *(float *)((int)&CStack_2a8 + (uint)bVar20 * -8 + 4);
                afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                     *(float *)((int)&CStack_2a8 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8);
                apCStack_2f8[2] = pCStack_284;
                apCStack_2f8[(uint)bVar20 * -2 + 3] = (CDemonActor *)afStack_280[(uint)bVar20 * -2];
                apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                     (CDemonActor *)afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                pCStack_2fc = apCStack_2f8[2];
                apCStack_2f8[(uint)bVar20 * -2] = apCStack_2f8[(uint)bVar20 * -2 + 3];
                apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                     apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
                pCStack_278 = pCStack_2fc;
                afStack_280[(uint)bVar20 * -2 + 3] = (float)apCStack_2f8[(uint)bVar20 * -2];
                afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
                     (float)apCStack_2f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
                pCStack_344 = pCStack_278;
                afStack_340[(uint)bVar20 * -2] = afStack_280[(uint)bVar20 * -2 + 3];
                afStack_340[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                     afStack_280[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
                fStack_24 = afStack_340[1] * (float)_DAT_005ef14a + fStack_24;
              }
              fStack_98 = fStack_24;
              fStack_58 = core_motion_cpp_FUN_00503e60(&(this_ptr->base).base.model.base);
              dStack_c8 = (double)fStack_58;
              pCStack_14 = (CCharacter_full_vtable *)fStack_58;
              if ((1.0 <= dStack_c8) && (dStack_c8 <= _DAT_005ef15a)) {
                fStack_a0 = 1.4013e-45;
              }
              goto LAB_00596e2a;
            }
          }
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up swing\n",this_ptr);
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
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,0);
        pfVar17 = afStack_10c + 8;
        afStack_ec[0] = afStack_10c[2];
        afStack_10c[(uint)bVar20 * -2 + 9] = afStack_10c[(uint)bVar20 * -2 + 3];
        afStack_10c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
             afStack_10c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar17);
        EVar28 = BLOOD_TYPE_RED;
        pCVar26 = &CStack_140;
        CStack_140.x = fStack_188;
        *(float *)((int)&CStack_140 + (uint)bVar20 * -8 + 4) = afStack_184[(uint)bVar20 * -2];
        pCVar23 = g_CGorePtr;
        *(float *)((int)&CStack_140 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             afStack_184[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(pCVar23,pCVar26,EVar28);
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
              fStack_88 = 0.0;
              fStack_2c = 0.0;
              this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
              pCStack_84 = pCVar1;
              for (; (int)fStack_88 < g_CDemonSetPtr->character_count;
                  fStack_88 = (float)((int)fStack_88 + 1)) {
                iVar7 = *(int *)((int)g_CDemonSetPtr->characters + (int)fStack_2c);
                iVar13 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xec))(iVar7,this_ptr);
                if (iVar13 != 0) {
                  fStack_428 = *(float *)(iVar7 + 0x20) - (pCStack_84->position).x;
                  fStack_424 = *(float *)(iVar7 + 0x24) - (pCStack_84->position).y;
                  fStack_420 = *(float *)(iVar7 + 0x28) - (pCStack_84->position).z;
                  fStack_170 = fStack_428;
                  afStack_184[(uint)bVar20 * -2 + 6] =
                       *(float *)((int)&CStack_434 + ((uint)bVar20 * -2 + 2) * 4 + 8);
                  afStack_184[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
                       *(float *)((int)&CStack_434 +
                                 ((uint)bVar20 * -2 + (uint)bVar20 * -2 + 3) * 4 + 8);
                  if ((ABS(fStack_16c) <= (float)_DAT_005ef1aa) &&
                     (fStack_16c = 0.0,
                     SQRT(fStack_168 * fStack_168 + fStack_170 * fStack_170) <=
                     (this_ptr->base).guard_distance)) {
                    engine_console_cpp_FUN_00436710
                              (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
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
                fStack_2c = (float)((int)fStack_2c + 4);
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
          afStack_370[(uint)bVar20 * -2] = (float)(&pvStack_268)[(uint)bVar20 * -2];
          afStack_370[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_264[(uint)bVar20 * -2 + (uint)bVar20 * -2];
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
            fVar11 = 0.0;
            do {
              fStack_90 = (float)(int)fVar11 * _DAT_005ef192 * _DAT_005ef196;
              pCStack_14 = (CCharacter_full_vtable *)fVar11;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar21 = (float10)fcos((float10)fStack_90);
              fVar22 = (float10)fsin((float10)fStack_90);
              fStack_8c = (float)core_setcolid_cpp_FUN_00537030
                                           (g_CDemonSetPtr,
                                            (this_ptr->base).base.base.location.position.x,
                                            (this_ptr->base).base.base.location.position.z,
                                            (float)(fVar22 * (float10)_DAT_005ef19a),
                                            (float)(fVar21 * (float10)_DAT_005ef19a),
                                            (this_ptr->base).base.collision_cylinder_radius);
              in_stack_fffff9d8 = (CZombie *)0x5970de;
              pCStack_14 = (CCharacter_full_vtable *)fStack_8c;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              if (fStack_8c < 1.0) break;
              fVar11 = (float)((int)fVar11 + 1);
            } while ((int)fVar11 < 4);
            if (3 < (int)fVar11) goto LAB_00596f17;
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
      core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
      fVar11 = 0.7853982;
      pCVar26 = (CVector3f *)0x40400000;
      fStack_e0 = 0.0;
      fStack_d8 = fStack_98;
      fStack_dc = 0.0;
      pCVar4 = (this_ptr->base).victim;
      pCVar14 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar14,pCVar26,fVar11,(float)in_stack_fffff9d8);
      if (iVar7 != 1) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s giving up attack\n");
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
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
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
  iVar7 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  fStack_28 = *(float *)(iVar7 + 0x24);
  pCStack_34 = &(this_ptr->base).base.model.accumulated_root_motion;
  if (fStack_28 == 1.96182e-44) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCStack_34->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  else if (fStack_28 == 2.10195e-44) {
    core_actor_cpp_FUN_00408cf0(this_ptr,pCStack_34);
    pCVar1 = &(this_ptr->base).base.base.location;
    afStack_1fc[2] = fStack_32c;
    afStack_1fc[(uint)bVar20 * -2 + 3] = afStack_340[(uint)bVar20 * -2 + 6];
    afStack_1fc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
         afStack_340[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
    fVar11 = (this_ptr->base).base.base.location.position.y;
    (pCVar1->position).x = (pCVar1->position).x + afStack_1fc[2];
    fVar2 = (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.base.location.position.y = fVar11 + afStack_1fc[3];
    (this_ptr->base).base.base.location.position.z = fVar2 + fStack_1ec;
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
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_254 = (this_ptr->base).base.velocity.x * delta_time;
      pCStack_250 = (CDemonActor *)((this_ptr->base).base.velocity.y * delta_time);
      fStack_24c = (this_ptr->base).base.velocity.z * delta_time;
      fStack_d4 = fStack_254;
      afStack_d0[(uint)bVar20 * -2] = (float)(&pCStack_250)[(uint)bVar20 * -2];
      afStack_d0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
           (&fStack_24c)[(uint)bVar20 * -2 + (uint)bVar20 * -2];
      pCVar26 = &(this_ptr->base).base.position_delta;
      afStack_358[2] = fStack_d4 + pCVar26->x;
      afStack_358[3] = afStack_d0[0] + (this_ptr->base).base.position_delta.y;
      fStack_348 = afStack_d0[1] + (this_ptr->base).base.position_delta.z;
      afStack_184[2] = afStack_358[2];
      afStack_184[(uint)bVar20 * -2 + 3] = afStack_358[(uint)bVar20 * -2 + 3];
      afStack_184[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           afStack_358[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      pCVar24 = &(this_ptr->base).base.model.accumulated_root_motion;
      CStack_11c.x = afStack_184[2] + pCVar24->x;
      acStack_320[0] = SUB41(CStack_11c.x,0);
      acStack_320[1] = SUB41(CStack_11c.x,1);
      acStack_320[2] = SUB41(CStack_11c.x,2);
      acStack_320[3] = SUB41(CStack_11c.x,3);
      afStack_31c[0] = afStack_184[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
      afStack_31c[1] = fStack_174 + (this_ptr->base).base.model.accumulated_root_motion.z;
      *(float *)((int)&CStack_11c + (uint)bVar20 * -8 + 4) = afStack_31c[(uint)bVar20 * -2];
      *(float *)((int)&CStack_11c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           afStack_31c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar26->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar11 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar11;
      pCVar24->x = fVar11;
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_11c);
      if ((fStack_28 == 1.4013e-45) &&
         (pCStack_44 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                          (DAT_007bdc98,g_CDoorClassInfo.name_hash),
         pCStack_40 = pCStack_44, pCStack_44 != (CDoor *)0x0)) {
        (*((pCStack_44->base).vtable._ub)->getBoundingBox)
                  ((CDemonActor *)pCStack_44,(CBoundingBox3D *)in_stack_fffff9d8);
        pfVar17 = afStack_560;
        pfVar19 = &fStack_4b8;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar19 = *pfVar17;
          pfVar17 = pfVar17 + (uint)bVar20 * -2 + 1;
          pfVar19 = pfVar19 + (uint)bVar20 * -2 + 1;
        }
        fStack_404 = fStack_4b8 + fStack_4ac;
        afStack_400[0] = fStack_4b4 + fStack_4a8;
        afStack_400[1] = fStack_4b0 + fStack_4a4;
        fStack_2e4 = fStack_4b8 + fStack_4ac;
        afStack_2e0[(uint)bVar20 * -2] = afStack_400[(uint)bVar20 * -2];
        afStack_2e0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
             afStack_400[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
        afStack_490[2] = fStack_2e4 * _DAT_005ef17a;
        afStack_490[3] = afStack_2e0[0] * _DAT_005ef17a;
        fStack_480 = afStack_2e0[1] * _DAT_005ef17a;
        fStack_2b4 = fStack_2e4 * _DAT_005ef17a;
        apCStack_2b0[(uint)bVar20 * -2] = (CDemonActor *)afStack_490[(uint)bVar20 * -2 + 3];
        apCStack_2b0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
             (CDemonActor *)afStack_490[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
        core_actor_cpp_FUN_00408d70();
        fStack_110 = afStack_1e4[2];
        afStack_10c[(uint)bVar20 * -2] = afStack_1e4[(uint)bVar20 * -2 + 3];
        afStack_10c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
             afStack_1e4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
        core_actor_cpp_FUN_00408de0();
        iStack_158 = iStack_1e8;
        afStack_154[(uint)bVar20 * -2] = afStack_1e4[(uint)bVar20 * -2];
        afStack_154[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
             afStack_1e4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
        afStack_3e8[2] = (float)auStack_308._0_4_;
        afStack_3e8[(uint)bVar20 * -2 + 3] = *(float *)(auStack_308 + (uint)bVar20 * -8 + 4);
        afStack_3e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
             *(float *)(auStack_308 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
        if (ABS(afStack_3e8[3]) < (float)_DAT_005ef1a2) {
          iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
          iVar13 = 0x12;
          if (iVar7 != 0) {
            iVar13 = 0x13;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar13,1);
          this_ptr->target_door = pCStack_44;
        }
      }
    }
  }
  fVar11 = fStack_28;
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (fVar11 != 1.96182e-44) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar7 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar7] == 0) {
      iVar13 = this_ptr->bone_indices[10];
      fVar11 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00427060
                (this_ptr,this_ptr->part_indices[0],this_ptr->bone_indices[5],0x3e4ccccd);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_FUN_00427060
                  (this_ptr,this_ptr->part_indices[1],this_ptr->bone_indices[3],0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00427060
                (this_ptr,this_ptr->part_indices[2],this_ptr->bone_indices[6],0x3e4ccccd);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_FUN_00427060
                  (this_ptr,this_ptr->part_indices[3],this_ptr->bone_indices[4],0x3e4ccccd);
      }
      iVar13 = this_ptr->bone_indices[0];
      fVar11 = 0.7;
      iVar7 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
              ((CCharacter *)this_ptr,iVar7,iVar13,fVar11);
    if ((this_ptr->part_indices[4] < 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 0;
      core_charactr_cpp_FUN_00427060
                (this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10],0x3e4ccccd);
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 1;
    }
    core_charactr_cpp_FUN_00426f30(this_ptr);
  }
  iVar7 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
  if (((fStack_a0 != 0.0) && (-1 < iVar7)) &&
     (pCVar15 = (this_ptr->base).base.carry_hands[iVar7].carry_actor, pCVar15 != (CDemonActor *)0x0)
     ) {
    (*((pCVar15->vtable)._ub)->processMeleeHit)(pCVar15,2);
    return;
  }
  return;
}
