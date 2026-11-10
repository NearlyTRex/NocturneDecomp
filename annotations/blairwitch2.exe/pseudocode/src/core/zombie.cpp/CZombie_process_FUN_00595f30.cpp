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
  byte *puVar1;
  CDeformableModelInstance *this_ptr_00;
  byte *puVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  CCharacter *pCVar6;
  EWalkState EVar7;
  CEnemy_full_vtable *pCVar8;
  int iVar9;
  CMotionList *pCVar10;
  uint uVar11;
  CZombie *pCVar12;
  float fVar13;
  EDeathState EVar14;
  int iVar15;
  CPathMap *pCVar16;
  CDemonActor *pCVar17;
  uint *puVar18;
  float *pfVar19;
  char *pcVar20;
  float *pfVar21;
  byte bVar22;
  float10 fVar23;
  float10 fVar24;
  float afStackY_1488 [914];
  CGore *pCVar25;
  CVector3f *direction;
  char *pcVar26;
  CBoundingBox3D *out_box;
  CVector3f *pCVar27;
  int *piVar28;
  CZombie *in_stack_fffff9d8;
  EBloodType EVar29;
  char *in_stack_fffff9e0;
  SDamageInfo aSStack_5ec [4];
  uint uStack_5e8;
  CZombie *pCStack_5b8;
  CZombie *pCStack_5b4;
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
  uint uStack_47c;
  float fStack_478;
  float fStack_470;
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
  byte auStack_410 [8];
  float afStack_408 [4];
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float afStack_3e8 [2];
  int iStack_3e0;
  float afStack_3dc [2];
  int iStack_3d4;
  float afStack_3d0 [5];
  CVector3f CStack_3bc;
  CVector3f CStack_3b0;
  CVector3f CStack_3a4;
  uint uStack_398;
  float afStack_394 [4];
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  CVector3f CStack_368;
  float fStack_35c;
  float afStack_358 [4];
  float fStack_348;
  float fStack_344;
  float fStack_33c;
  float fStack_338;
  float fStack_32c;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  int iStack_308;
  float afStack_304 [5];
  float fStack_2f0;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float afStack_2d8 [3];
  CVector3f CStack_2cc;
  uint uStack_2c0;
  uint uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float afStack_2b0 [2];
  CVector3f CStack_2a8;
  float fStack_29c;
  float afStack_298 [5];
  float fStack_284;
  float fStack_278;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float afStack_238 [4];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [4];
  float fStack_1ec;
  uint uStack_1e8;
  uint uStack_1dc;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [8];
  float fStack_188;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint uStack_158;
  int iStack_14c;
  float afStack_148 [2];
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  uint uStack_110;
  float afStack_10c [5];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [3];
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
  float *pfStack_84;
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
  uint *puStack_34;
  CMotionController *pCStack_30;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar22 = 0;
  iVar9 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  iVar9 = 0;
  pcVar26 = "CHASE_2";
  iStack_54 = 0;
  pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                      ((CMotionController *)&(this_ptr->base).base.model);
  iVar9 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(pCVar10,pcVar26,iVar9);
  if (iVar9 == 0x16) {
    iStack_54 = 1;
  }
  pCStack_70 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCStack_70 != (CCharacter *)0x0) {
    pCStack_14 = (pCStack_70->base).vtable._uc;
    core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,0);
    pCVar27 = &CStack_2cc;
    CStack_2cc.x = fStack_29c;
    *(float *)((int)&CStack_2cc + (uint)bVar22 * -8 + 4) = afStack_298[(uint)bVar22 * -2];
    *(float *)((int)&CStack_2cc + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
         afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
    iVar9 = (*(pCStack_14->_uc).attractActorToward)(pCStack_70,(CDemonActor *)this_ptr,pCVar27);
    if (iVar9 != 0) {
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
  pCStack_30 = (CMotionController *)&(this_ptr->base).base.model;
LAB_00595fe0:
  if (0.0 < fStack_9c) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&fStack_9c);
    if (uVar11 < 0xb) {
      if (4 < uVar11) {
        if (5 < uVar11) {
          if (uVar11 == 10) {
            if ((this_ptr->base).victim == (CCharacter *)0x0) {
              core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
              goto LAB_00595fe0;
            }
            core_skeleton_cpp_FUN_005469a0(pCStack_30,this_ptr->bone_indices[0]);
            piVar28 = &iStack_14c;
            iStack_14c = iStack_3d4;
            afStack_148[(uint)bVar22 * -2] = afStack_3d0[(uint)bVar22 * -2];
            afStack_148[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_3d0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
            core_actor_cpp_FUN_00408d70(this_ptr,piVar28);
            CStack_1b8.x = afStack_3d0[2];
            *(float *)((int)&CStack_1b8 + (uint)bVar22 * -8 + 4) =
                 afStack_3d0[(uint)bVar22 * -2 + 3];
            *(float *)((int)&CStack_1b8 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8) =
                 afStack_3d0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
            if (this_ptr->part_indices[4] < 0) {
              pCVar6 = (this_ptr->base).victim;
              fVar13 = CStack_1b8.x - *(float *)&(pCVar6->base).field_0x20;
              fVar3 = CStack_1b8.z - *(float *)&(pCVar6->base).field_0x28;
              if ((float)_DAT_005ef1ba < SQRT(fVar3 * fVar3 + fVar13 * fVar13)) {
                core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
                goto LAB_00595fe0;
              }
            }
            else {
              pCVar6 = (this_ptr->base).victim;
              pCVar12 = (CZombie *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6);
              if (pCVar12 != this_ptr) {
                in_stack_fffff9d8 = this_ptr;
                core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
                goto LAB_00595fe0;
              }
            }
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffff9d8);
            fVar13 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,25.0);
            pCVar6 = (this_ptr->base).victim;
            pCStack_14 = (CCharacter_full_vtable *)fVar13;
            (*(((pCVar6->base).vtable._uc)->_uc).processDamage)
                      (pCVar6,(SDamageInfo *)&stack0xfffff9d8);
            dStack_b8 = (double)fVar13;
            if (0.0 < dStack_b8) {
              fVar23 = (float10)fVar13 * (float10)_DAT_005ef182 * (float10)_DAT_005ef18a;
              EVar29 = BLOOD_TYPE_RED;
              round();
              iStack_3c = (int)ROUND(fVar23);
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,&CStack_1b8,(CVector3f *)0x0,iStack_3c,EVar29);
            }
            pCVar6 = (this_ptr->base).victim;
            in_stack_fffff9d8 = (CZombie *)0x5963f2;
            EVar14 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6);
            if (0 < (int)EVar14) {
              pCVar6 = (this_ptr->base).victim;
              (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
              core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
            }
            in_stack_fffff9e0 = (char *)this_ptr;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
            goto LAB_00595fe0;
          }
          core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar11);
          goto LAB_00595fe0;
        }
        iStack_50 = 1;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          fStack_3f0 = 0x3FA66666;
          fStack_3f8 = 0.0;
          fStack_3f4 = 0.0;
          core_actor_cpp_FUN_00408d70(this_ptr,afStack_408 + 4);
          fStack_380 = fStack_464;
          afStack_394[(uint)bVar22 * -2 + 6] = afStack_49c[(uint)bVar22 * -2 + 0xf];
          afStack_394[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
               afStack_49c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
          pCVar6 = (this_ptr->base).victim;
          fStack_f8 = fStack_380 - *(float *)&(pCVar6->base).field_0x20;
          fStack_f4 = fStack_37c - *(float *)&(pCVar6->base).field_0x24;
          fStack_f0 = fStack_378 - *(float *)&(pCVar6->base).field_0x28;
          afStack_454[2] = fStack_f8;
          afStack_454[(uint)bVar22 * -2 + 3] = afStack_10c[(uint)bVar22 * -2 + 6];
          afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
               afStack_10c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
          afStack_454[3] = 0.0;
          if (SQRT(afStack_454[4] * afStack_454[4] + afStack_454[2] * afStack_454[2]) <= 1.0) {
            if (iStack_50 != 0) {
              afStack_2d8[0] = 0.0;
              afStack_2d8[2] = 0.0;
              afStack_2d8[1] = 4.0;
              core_actor_cpp_FUN_00408d70(this_ptr,afStack_304 + 0xb);
              CStack_3a4.x = fStack_200;
              *(float *)((int)&CStack_3a4 + (uint)bVar22 * -8 + 4) = afStack_1fc[(uint)bVar22 * -2];
              *(float *)((int)&CStack_3a4 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
                   afStack_1fc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
              pCVar6 = (this_ptr->base).victim;
              puVar18 = (uint *)((int)pCVar6 + (uint)bVar22 * -8 + 0x24);
              CStack_20c.x = *(float *)&(pCVar6->base).field_0x20;
              *(uint *)((int)&CStack_20c + (uint)bVar22 * -8 + 4) = *puVar18;
              *(uint *)((int)&CStack_20c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
                   puVar18[(uint)bVar22 * -2 + 1];
              CStack_20c.y = CStack_3a4.y;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
              iVar9 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                (g_CDemonSetPtr,&CStack_3a4,&CStack_20c);
              if (iVar9 != 0) {
                iStack_50 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            }
            if ((iStack_50 == 0) ||
               (pCVar6 = (this_ptr->base).victim,
               iVar9 = (*(((pCVar6->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar6,(CDemonActor *)this_ptr,0), iVar9 != 0)) {
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
      if (uVar11 == 2) {
        pCVar17 = this_ptr->pickup_target;
        if (pCVar17 != (CDemonActor *)0x0) {
          this_ptr->pickup_target = (CDemonActor *)0x0;
          iVar9 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40
                            (this_ptr,this_ptr->object_shape_class);
          if (-1 < iVar9) {
            core_charactr_cpp_FUN_00428b10(this_ptr,iVar9,pCVar17,0x3e4ccccd,0);
            engine_console_cpp_FUN_00436710
                      (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,pCVar17,iVar9);
          }
        }
      }
      else {
LAB_0059601d:
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar11);
      }
    }
    else if (uVar11 < 0xc) {
      iVar9 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,2);
      if (iVar9 < 0) {
        _DAT_01d046a0 = "..\\core\\zombie.cpp";
        _DAT_01d046a4 = 0x1ef;
        core_main_c_FUN_004e4500(&DAT_005eefb4);
      }
      iVar15 = *(int *)((this_ptr->base).base.carry_hands + iVar9 * 0x78 + 8);
      if (iVar15 != 0) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s lugging %s\n",this_ptr,iVar15);
        CStack_3b0.x = 0.0;
        CStack_3b0.y = 6.0;
        CStack_3b0.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar9,&CStack_3b0);
        in_stack_fffff9e0 = "zom-h0?.wav";
        in_stack_fffff9d8 = (CZombie *)0x596511;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar11 < 0xd) {
      iStack_ac = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,3);
      if (iStack_ac < 0) {
        _DAT_01d046a0 = "..\\core\\zombie.cpp";
        _DAT_01d046a4 = 0x206;
        core_main_c_FUN_004e4500(&DAT_005eefe7);
      }
      pcStack_a8 = (this_ptr->base).base.base.actor_name + iStack_ac * 0x78;
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
          pfVar19 = afStack_530;
          pfVar21 = &fStack_578;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar21 = *pfVar19;
            pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
            pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
          }
          fStack_260 = fStack_578 + *pfStack_6c;
          fStack_25c = fStack_574 + pfStack_6c[1];
          fStack_258 = fStack_570 + pfStack_6c[2];
          fStack_1d0 = fStack_578 + *pfStack_6c;
          afStack_1fc[(uint)bVar22 * -2 + 0xc] = afStack_298[(uint)bVar22 * -2 + 0xf];
          pcVar26 = pcStack_a8;
          afStack_1fc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd] =
               afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
          pfVar19 = afStack_298 + 2;
          fStack_218 = fStack_1d0 * _DAT_005ef17a;
          fStack_214 = fStack_1cc * _DAT_005ef17a;
          fStack_210 = fStack_1c8 * _DAT_005ef17a;
          afStack_298[2] = fStack_1d0 * _DAT_005ef17a;
          afStack_298[(uint)bVar22 * -2 + 3] = afStack_238[(uint)bVar22 * -2 + 9];
          afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
               afStack_238[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
          core_actor_cpp_FUN_00408d70(*(uint *)(pcVar26 + 0x2620),pfVar19);
          fStack_23c = fStack_3ec;
          afStack_238[(uint)bVar22 * -2] = afStack_3e8[(uint)bVar22 * -2];
          afStack_238[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               afStack_3e8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          pCVar6 = (this_ptr->base).victim;
          (*((pCVar6->base).vtable._ub)->getBoundingBox)(&pCVar6->base,out_box);
          pfVar19 = afStack_590;
          pfVar21 = &fStack_518;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar21 = *pfVar19;
            pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
            pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
          }
          fStack_1ac = fStack_518 + *pfStack_64;
          afStack_1a8[0] = fStack_514 + pfStack_64[1];
          afStack_1a8[1] = fStack_510 + pfStack_64[2];
          fStack_128 = fStack_518 + *pfStack_64;
          afStack_124[(uint)bVar22 * -2] = afStack_1a8[(uint)bVar22 * -2];
          afStack_124[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
               afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          fStack_164 = fStack_128 * _DAT_005ef17a;
          fStack_160 = afStack_124[0] * _DAT_005ef17a;
          fStack_15c = afStack_124[1] * _DAT_005ef17a;
          auStack_410._0_4_ = fStack_128 * _DAT_005ef17a;
          *(float *)(auStack_410 + (uint)bVar22 * -8 + 4) = afStack_1a8[(uint)bVar22 * -2 + 0x12];
          *(float *)(auStack_410 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
               afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13];
          core_actor_cpp_FUN_00408d70((this_ptr->base).victim,auStack_410);
          afStack_394[2] = fStack_338;
          afStack_394[(uint)bVar22 * -2 + 3] = afStack_358[(uint)bVar22 * -2 + 9];
          afStack_394[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
               afStack_358[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
          fStack_1c4 = afStack_394[2] - fStack_23c;
          fStack_1c0 = afStack_394[3] - afStack_238[0];
          fStack_1bc = fStack_384 - afStack_238[1];
          fStack_314 = afStack_394[2] - fStack_23c;
          afStack_358[(uint)bVar22 * -2 + 0x12] = afStack_1fc[(uint)bVar22 * -2 + 0xf];
          afStack_358[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13] =
               afStack_1fc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
          fStack_60 = SQRT(fStack_30c * fStack_30c +
                           fStack_314 * fStack_314 + fStack_310 * fStack_310);
          if (0.0 < fStack_60) {
            core_actor_cpp_FUN_00408d30(this_ptr,afStack_358 + 0x11);
            fStack_4a0 = fStack_470;
            afStack_49c[(uint)bVar22 * -2] = afStack_49c[(uint)bVar22 * -2 + 0xc];
            afStack_49c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                 afStack_49c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
            fVar13 = 1.0 / fStack_60;
            fStack_35c = fStack_4a0 * fVar13;
            afStack_358[0] = afStack_49c[0] * fVar13;
            afStack_358[1] = afStack_49c[1] * fVar13;
            CStack_434.x = fStack_4a0 * fVar13;
            afStack_43c[(uint)bVar22 * -2 + 3] = afStack_358[(uint)bVar22 * -2];
            afStack_43c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                 afStack_358[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
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
                  ((CCharacter *)this_ptr,iStack_ac,&CStack_368);
        in_stack_fffff9e0 = "zom-h0?.wav";
        in_stack_fffff9d8 = (CZombie *)0x59661a;
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar11 < 0xe) {
      if (this_ptr->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00460310(this_ptr->target_door,0.3);
        (*((this_ptr->target_door->base).vtable._ub)->playSound)
                  (&this_ptr->target_door->base,"zombie-bang-door?.wav");
        this_ptr->target_door = (CDoor *)0x0;
      }
    }
    else {
      if (uVar11 < 0x65) goto LAB_0059601d;
      if (uVar11 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar11 == 0x29a) {
        core_skeleton_cpp_FUN_005469a0(pCStack_30,this_ptr->bone_indices[0]);
        pfVar19 = afStack_1a8 + 2;
        afStack_1a8[2] = afStack_1a8[5];
        afStack_1a8[(uint)bVar22 * -2 + 3] = afStack_1a8[(uint)bVar22 * -2 + 6];
        afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
             afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar19);
        EVar29 = BLOOD_TYPE_RED;
        iVar9 = 3;
        direction = (CVector3f *)0x0;
        pCVar27 = &CStack_134;
        CStack_134.x = fStack_41c;
        *(float *)((int)&CStack_134 + (uint)bVar22 * -8 + 4) = afStack_43c[(uint)bVar22 * -2 + 9];
        pCVar25 = g_CGorePtr;
        *(float *)((int)&CStack_134 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             afStack_43c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850(pCVar25,pCVar27,direction,iVar9,EVar29);
        iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
        if (iVar9 == 0) {
          pcVar26 = "ghoul-dig-?.wav";
        }
        else {
          pcVar26 = "ghoul-eat-?.wav";
        }
        pcVar20 = acStack_5b0;
        do {
          cVar5 = *pcVar26;
          *pcVar20 = cVar5;
          if (cVar5 == '\0') break;
          cVar5 = pcVar26[1];
          pcVar26 = pcVar26 + 2;
          pcVar20[1] = cVar5;
          pcVar20 = pcVar20 + 2;
        } while (cVar5 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_5b0);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar11);
      }
    }
    goto LAB_00595fe0;
  }
  fVar13 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar13);
  if ((((*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) == 0)
       && (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[1] * 4) == 0)
       ) || (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[6] * 4) ==
             0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar13 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar13,
      (float)_DAT_005ef13a <= fVar13)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_5ec);
    uStack_5e8 = 0x461c3f9a;
    pCStack_5b8 = this_ptr;
    pCStack_5b4 = this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,aSStack_5ec);
    this_ptr->bleedout_timer = -1.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  iVar9 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar9 = *(int *)(iVar9 + 0x24);
  iStack_a0 = 0;
  iVar15 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar15 == 0) {
    fStack_98 = -1.0;
    fStack_20 = 0.3;
    iVar9 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    uVar11 = *(uint *)(iVar9 + 0x24);
    if (uVar11 < 8) {
      if (uVar11 == 0) {
        iVar9 = core_actor_cpp_randomChance_FUN_0040d060(delta_time * (float)_DAT_005ef172);
        if (iVar9 != 0) {
          iVar9 = 0;
          pcVar26 = "pickass";
          pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                              ((CMotionController *)&(this_ptr->base).base.model);
          iVar9 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar10,pcVar26,iVar9);
          if (-1 < iVar9) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,0x10,1);
            goto LAB_00596e2a;
          }
        }
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar9 != 0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (iStack_54 != 0)) {
          in_stack_fffff9d8 = (CZombie *)0x59743e;
          iVar9 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))()
          ;
          if (iVar9 == 0) goto LAB_00596e2a;
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
        }
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
          in_stack_fffff9d8 = (CZombie *)0x5973d8;
          iVar9 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
          if (iVar9 == 0) {
            if (this_ptr->is_female == 0) {
              in_stack_fffff9d8 = this_ptr;
              uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"zom-a0?.wav");
              this_ptr->sfx_handles[1] = uVar11;
            }
            else {
              in_stack_fffff9d8 = this_ptr;
              uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
              this_ptr->sfx_handles[1] = uVar11;
            }
          }
        }
      }
      else if (uVar11 < 2) {
        pCVar6 = (this_ptr->base).victim;
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (iStack_54 != 0)) {
          in_stack_fffff9d8 = (CZombie *)0x5974d1;
          iVar9 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))()
          ;
          if (iVar9 != 0) {
            g_CGamePtr->player_hit_flag = 1;
            (this_ptr->base).victim = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
          }
        }
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar9 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,0,1);
          }
        }
        else if (pCVar6 == (CCharacter *)0x0) {
          iVar9 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
          if (iVar9 == 0) {
            if (this_ptr->is_female == 0) {
              pcVar26 = "zom-a0?.wav";
            }
            else {
              pcVar26 = "f-zombie-alert?.wav";
            }
            uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,pcVar26);
            this_ptr->sfx_handles[1] = uVar11;
          }
LAB_0059753e:
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
        else {
          uStack_7c = (uint)(*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                                     this_ptr->part_indices[1] * 4) != 0);
          if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) !=
              0) {
            uStack_7c = uStack_7c + 1;
          }
          *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
          *(uint *)&(this_ptr->base).base.model.field_0x2258 =
               *(uint *)&(this_ptr->base).base.model.field_0x225c;
          *(uint *)&(this_ptr->base).base.model.field_0x2254 =
               *(uint *)&(this_ptr->base).base.model.field_0x2258;
          iVar9 = core_zombie_cpp_CZombie_processPickup_FUN_005984e0(this_ptr,delta_time);
          if (iVar9 == 0) {
            fStack_78 = 0x3FA66666;
            iStack_74 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
            if (((-1 < iStack_74) &&
                (iVar9 = *(int *)((this_ptr->base).base.carry_hands + iStack_74 * 0x78 + 8),
                iVar9 != 0)) && (this_ptr->object_shape_class == 1)) {
              fStack_68 = 1.0;
              if (iVar9 != 0) {
                (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x24))(iVar9);
                pfVar19 = afStack_4d0;
                pfVar21 = &fStack_548;
                for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *pfVar21 = *pfVar19;
                  pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
                  pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
                }
                core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_3bc);
                CStack_3bc.x = fStack_53c - fStack_548;
                CStack_3bc.y = fStack_538 - fStack_544;
                CStack_3bc.z = fStack_534 - fStack_540;
                afStack_238[2] = fStack_53c - fStack_548;
                afStack_238[(uint)bVar22 * -2 + 3] =
                     *(float *)((int)&CStack_3bc + (uint)bVar22 * -8 + 4);
                afStack_238[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                     *(float *)((int)&CStack_3bc + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
                fStack_68 = fStack_228 * (float)_DAT_005ef14a + 1.0;
              }
              fStack_78 = fStack_68;
            }
            fVar13 = 0.34906584;
            pCVar27 = (CVector3f *)0x3f8ccccd;
            uStack_2c0 = 0;
            fStack_2b8 = fStack_78;
            uStack_2bc = 0;
            pCVar6 = (this_ptr->base).victim;
            pCVar16 = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
            iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,
                               (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar16,
                               pCVar27,fVar13,(float)in_stack_fffff9d8);
            pCStack_38 = (CZombie *)&(this_ptr->base).base.model;
            if (iVar9 < 0) {
              engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n");
              in_stack_fffff9d8 = (CZombie *)0x1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_38,0,1);
            }
            else if (iVar9 < 1) {
              in_stack_fffff9d8 = (CZombie *)this_ptr->object_shape_class;
              iStack_5c = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40
                                    (this_ptr,(int)in_stack_fffff9d8);
              pCVar6 = (this_ptr->base).victim;
              afStack_49c[2] =
                   *(float *)&(this_ptr->base).base.base.field_0x20 -
                   *(float *)&(pCVar6->base).field_0x20;
              afStack_49c[3] =
                   *(float *)&(this_ptr->base).base.base.field_0x24 -
                   *(float *)&(pCVar6->base).field_0x24;
              fStack_48c = *(float *)&(this_ptr->base).base.base.field_0x28 -
                           *(float *)&(pCVar6->base).field_0x28;
              fStack_224 = afStack_49c[2];
              afStack_238[(uint)bVar22 * -2 + 6] = afStack_49c[(uint)bVar22 * -2 + 3];
              afStack_238[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                   afStack_49c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
              if (SQRT(fStack_21c * fStack_21c + fStack_224 * fStack_224 + fStack_220 * fStack_220)
                  < (float)_DAT_005ef162) {
                core_actor_cpp_FUN_00408de0(this_ptr);
                in_stack_fffff9d8 = (CZombie *)acStack_440;
                acStack_440[0] = acStack_458[0];
                acStack_440[1] = acStack_458[1];
                acStack_440[2] = acStack_458[2];
                acStack_440[3] = acStack_458[3];
                afStack_43c[(uint)bVar22 * -2] = afStack_454[(uint)bVar22 * -2];
                afStack_43c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
                     afStack_454[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
                uStack_47c = uStack_398;
                afStack_49c[(uint)bVar22 * -2 + 9] = afStack_394[(uint)bVar22 * -2];
                afStack_49c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
                     afStack_394[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
                if (((ABS(fStack_478) < (float)_DAT_005ef16a) && (-1 < iStack_5c)) &&
                   (uVar11 = this_ptr->object_shape_class, 1 < uVar11)) {
                  if (uVar11 < 3) {
                    if (*(int *)((this_ptr->base).base.carry_hands + iStack_5c * 0x78 + 8) != 0) {
                      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s lugging\n");
                      in_stack_fffff9d8 = (CZombie *)0x1;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)pCStack_38,0xd,1);
                    }
                  }
                  else if ((uVar11 == 3) &&
                          (*(int *)((this_ptr->base).base.carry_hands + iStack_5c * 0x78 + 8) != 0))
                  {
                    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s tossing\n");
                    in_stack_fffff9d8 = (CZombie *)0x1;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)pCStack_38,0xb,1);
                  }
                }
              }
            }
            else if ((0 < (int)uStack_7c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
              pCVar17 = (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                                  ((CCharacter *)in_stack_fffff9d8);
              if (pCVar17 == (CDemonActor *)0x0) {
                if ((iStack_74 < 0) ||
                   (*(int *)((this_ptr->base).base.carry_hands + iStack_74 * 0x78 + 8) == 0)) {
                  if ((iStack_54 == 0) ||
                     (pCVar6 = (this_ptr->base).victim,
                     EVar14 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6),
                     EVar14 == DEATH_STATE_ALIVE)) {
                    in_stack_fffff9e0 = (char *)0x1;
                    iVar9 = 3;
                    in_stack_fffff9d8 = (CZombie *)&(this_ptr->base).base.model;
                  }
                  else {
                    iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
                    in_stack_fffff9d8 = (CZombie *)&(this_ptr->base).base.model;
                    if (iVar9 == 0) {
                      in_stack_fffff9e0 = (char *)0x1;
                      iVar9 = 0x19;
                    }
                    else {
                      in_stack_fffff9e0 = (char *)0x1;
                      iVar9 = 0x18;
                    }
                  }
                }
                else {
                  iVar9 = 1;
                  in_stack_fffff9d8 = pCStack_38;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffff9d8,iVar9,(int)in_stack_fffff9e0);
                (this_ptr->base).attack_cooldown = 0.8;
              }
            }
          }
        }
      }
      else if (uVar11 < 3) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
LAB_00597a00:
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
        else {
          iVar9 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
          if (((-1 < iVar9) &&
              (pCVar6 = (this_ptr->base).victim,
              EVar14 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6), (int)EVar14 < 1)
              ) && (*(int *)((this_ptr->base).base.carry_hands + iVar9 * 0x78 + 8) != 0)) {
            in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
            pCVar17 = (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                                ((CCharacter *)in_stack_fffff9d8);
            if (pCVar17 == (CDemonActor *)0x0) {
              iVar9 = *(int *)((this_ptr->base).base.carry_hands + iVar9 * 0x78 + 8);
              fStack_24 = 1.0;
              if (iVar9 != 0) {
                (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x24))();
                pfVar19 = afStack_4e8;
                pfVar21 = &fStack_500;
                for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *pfVar21 = *pfVar19;
                  pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
                  pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
                }
                core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_2a8);
                CStack_2a8.x = fStack_4f4 - fStack_500;
                CStack_2a8.y = fStack_4f0 - fStack_4fc;
                CStack_2a8.z = fStack_4ec - fStack_4f8;
                fStack_284 = fStack_4f4 - fStack_500;
                afStack_298[(uint)bVar22 * -2 + 6] =
                     *(float *)((int)&CStack_2a8 + (uint)bVar22 * -8 + 4);
                afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                     *(float *)((int)&CStack_2a8 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
                fStack_2f0 = fStack_284;
                afStack_304[(uint)bVar22 * -2 + 6] = afStack_298[(uint)bVar22 * -2 + 6];
                afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                     afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
                afStack_304[2] = fStack_2f0;
                afStack_304[(uint)bVar22 * -2 + 3] = afStack_304[(uint)bVar22 * -2 + 6];
                afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
                     afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
                fStack_278 = afStack_304[2];
                afStack_298[(uint)bVar22 * -2 + 9] = afStack_304[(uint)bVar22 * -2 + 3];
                afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
                     afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
                fStack_344 = fStack_278;
                afStack_358[(uint)bVar22 * -2 + 6] = afStack_298[(uint)bVar22 * -2 + 9];
                afStack_358[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                     afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
                fStack_24 = fStack_33c * (float)_DAT_005ef14a + fStack_24;
              }
              fStack_98 = fStack_24;
              in_stack_fffff9d8 = (CZombie *)0x597b78;
              fStack_58 = core_motion_cpp_FUN_00503e60
                                    ((CMotionController *)&(this_ptr->base).base.model);
              dStack_c8 = (double)fStack_58;
              pCStack_14 = (CCharacter_full_vtable *)fStack_58;
              if ((1.0 <= dStack_c8) && (dStack_c8 <= _DAT_005ef15a)) {
                iStack_a0 = 1;
              }
              goto LAB_00596e2a;
            }
          }
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up swing\n",this_ptr);
          core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        }
      }
      else if (uVar11 == 3) {
        pCVar6 = (this_ptr->base).victim;
        if ((pCVar6 == (CCharacter *)0x0) ||
           (EVar14 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6), 0 < (int)EVar14))
        goto LAB_0059753e;
        in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
        pCVar12 = (CZombie *)
                  (*(((in_stack_fffff9d8->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffff9d8);
        if (pCVar12 == (CZombie *)0x0) {
          fStack_98 = 0x3FA66666;
          fStack_20 = 3.0;
        }
        else if (pCVar12 != this_ptr) goto LAB_00597a00;
      }
    }
    else if (uVar11 < 9) {
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,0);
        pfVar19 = afStack_10c + 8;
        afStack_ec[0] = afStack_10c[2];
        afStack_10c[(uint)bVar22 * -2 + 9] = afStack_10c[(uint)bVar22 * -2 + 3];
        afStack_10c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
             afStack_10c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar19);
        EVar29 = BLOOD_TYPE_RED;
        pCVar27 = &CStack_140;
        CStack_140.x = fStack_188;
        *(float *)((int)&CStack_140 + (uint)bVar22 * -8 + 4) = afStack_1a8[(uint)bVar22 * -2 + 9];
        pCVar25 = g_CGorePtr;
        *(float *)((int)&CStack_140 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
             afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(pCVar25,pCVar27,EVar29);
        (this_ptr->base).pool_me = 1;
      }
    }
    else {
      puVar1 = &(this_ptr->base).base.base.field_0x20;
      if (uVar11 < 0x18) {
        if (0xd < uVar11) {
          if (uVar11 < 0xf) {
            iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                              (0x01C38BC0,this_ptr->rise_from_grave_condition);
            if ((iVar9 != 0) &&
               (fVar13 = this_ptr->rise_delay - delta_time, this_ptr->rise_delay = fVar13,
               fVar13 < 0.0)) {
              iStack_88 = 0;
              iStack_2c = 0;
              this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
              pfStack_84 = (float *)puVar1;
              for (; iStack_88 < g_CDemonSetPtr->character_count; iStack_88 = iStack_88 + 1) {
                iVar9 = *(int *)((int)g_CDemonSetPtr->characters + iStack_2c);
                iVar15 = (**(code **)(*(int *)(iVar9 + 0x2b0) + 0xec))(iVar9,this_ptr);
                if (iVar15 != 0) {
                  fStack_428 = *(float *)(iVar9 + 0x20) - *pfStack_84;
                  fStack_424 = *(float *)(iVar9 + 0x24) - pfStack_84[1];
                  fStack_420 = *(float *)(iVar9 + 0x28) - pfStack_84[2];
                  fStack_170 = fStack_428;
                  afStack_1a8[(uint)bVar22 * -2 + 0xf] = afStack_43c[(uint)bVar22 * -2 + 6];
                  afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10] =
                       afStack_43c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
                  if ((ABS(fStack_16c) <= (float)_DAT_005ef1aa) &&
                     (fStack_16c = 0.0,
                     SQRT(fStack_168 * fStack_168 + fStack_170 * fStack_170) <=
                     (this_ptr->base).guard_distance)) {
                    engine_console_cpp_FUN_00436710
                              (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)&(this_ptr->base).base.model,0xf,1);
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
          else if (uVar11 == 0x14) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar6 = (this_ptr->base).victim;
            if (((pCVar6 != (CCharacter *)0x0) &&
                (fVar13 = *(float *)puVar1 - *(float *)&(pCVar6->base).field_0x20,
                fVar3 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                        *(float *)&(pCVar6->base).field_0x28,
                SQRT(fVar3 * fVar3 + fVar13 * fVar13) <= (float)_DAT_005ef152)) &&
               (ABS(*(float *)&(this_ptr->base).base.base.field_0x24 -
                    *(float *)&(pCVar6->base).field_0x24) <= (float)_DAT_005ef15a)) {
              in_stack_fffff9d8 = (CZombie *)0x0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)this_ptr_00,0,1);
            }
          }
        }
      }
      else if ((uVar11 < 0x19) || (uVar11 < 0x1a)) {
        iVar9 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar9 = (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x114))(iVar9);
        if ((iVar9 == 0) &&
           ((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time), (this_ptr->base).victim != (CCharacter *)0x0)) {
LAB_00596f17:
          in_stack_fffff9d8 = (CZombie *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0,1);
        }
      }
      else if ((uVar11 == 0x1c) &&
              (fVar13 = this_ptr->buried_timer - delta_time, this_ptr->buried_timer = fVar13,
              fVar13 <= 0.0)) {
        pCVar8 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->buried_timer = 0.0;
        (*(pCVar8->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar6 = (this_ptr->base).victim;
        if (pCVar6 != (CCharacter *)0x0) {
          fStack_26c = *(float *)puVar1 - *(float *)&(pCVar6->base).field_0x20;
          fStack_268 = *(float *)&(this_ptr->base).base.base.field_0x24 -
                       *(float *)&(pCVar6->base).field_0x24;
          fStack_264 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                       *(float *)&(pCVar6->base).field_0x28;
          fStack_374 = fStack_26c;
          afStack_394[(uint)bVar22 * -2 + 9] = afStack_298[(uint)bVar22 * -2 + 0xc];
          afStack_394[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
               afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
          if (afStack_298 + 0x14 != afStack_394 + 8) {
            fStack_248 = fStack_374;
            fStack_244 = fStack_370;
            fStack_240 = fStack_36c;
          }
          fStack_18 = fStack_240 * fStack_240 + fStack_248 * fStack_248 + fStack_244 * fStack_244;
          fStack_94 = (float)(((int)fStack_18 >> 1) + _DAT_01caf5b4);
          if (fStack_94 <= (float)_DAT_005ef142) {
            fStack_1c = *(float *)&(this_ptr->base).base.field_0x3444;
            if (fStack_1c < *(float *)&(this_ptr->base).base.field_0x3440) {
              fStack_1c = *(float *)&(this_ptr->base).base.model.field_0x2248;
            }
            if (fStack_1c < *(float *)&(this_ptr->base).base.field_0x3440) {
              fStack_1c = *(float *)&(this_ptr->base).base.field_0x3440 + (float)_DAT_005ef14a;
            }
            iVar9 = 0;
            do {
              fStack_90 = (float)iVar9 * _DAT_005ef192 * _DAT_005ef196;
              pCStack_14 = (CCharacter_full_vtable *)iVar9;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar23 = (float10)fcos((float10)fStack_90);
              fVar24 = (float10)fsin((float10)fStack_90);
              fStack_8c = (float)core_setcolid_cpp_FUN_00537030
                                           (g_CDemonSetPtr,
                                            *(uint *)&(this_ptr->base).base.base.field_0x20,
                                            *(uint *)&(this_ptr->base).base.base.field_0x28,
                                            (float)(fVar24 * (float10)_DAT_005ef19a),
                                            (float)(fVar23 * (float10)_DAT_005ef19a),
                                            *(uint *)&(this_ptr->base).base.field_0x3434);
              in_stack_fffff9d8 = (CZombie *)0x5970de;
              pCStack_14 = (CCharacter_full_vtable *)fStack_8c;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              if (fStack_8c < 1.0) break;
              iVar9 = iVar9 + 1;
            } while (iVar9 < 4);
            if (3 < iVar9) goto LAB_00596f17;
            this_ptr->buried_timer = 3.0;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
        }
      }
    }
LAB_00596e2a:
    if ((0.0 <= fStack_98) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar13 = (this_ptr->base).speed;
      *(float *)&(this_ptr->base).base.field_0x2594 =
           fStack_20 * (this_ptr->base).speed * delta_time;
      core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar13);
      fVar13 = 0.7853982;
      pCVar27 = (CVector3f *)0x40400000;
      uStack_e0 = 0;
      fStack_d8 = fStack_98;
      uStack_dc = 0;
      pCVar6 = (this_ptr->base).victim;
      pCVar16 = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,
                         (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar16,pCVar27,
                         fVar13,(float)in_stack_fffff9d8);
      if (iVar9 != 1) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s giving up attack\n");
        in_stack_fffff9d8 = this_ptr;
        core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
        *(uint *)&(this_ptr->base).base.field_0x2578 = 0;
      }
    }
    goto LAB_00596b5f;
  }
  EVar7 = (this_ptr->base).base.walk_state;
  if (EVar7 < 2) {
    if (EVar7 == WALK_STATE_WALKING) {
LAB_00596b39:
      if (iVar9 != 1) {
        core_zombie_cpp_CZombie_resetChaseState_FUN_00599d00(this_ptr);
      }
    }
    else {
LAB_00596dee:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0,1);
    }
  }
  else {
    if (EVar7 < WALK_STATE_NO_PATH) goto LAB_00596b39;
    if (EVar7 != WALK_STATE_NO_PATH) goto LAB_00596dee;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
LAB_00596b5f:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar9 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  iStack_28 = *(int *)(iVar9 + 0x24);
  puStack_34 = (uint *)&(this_ptr->base).base.model.field_0x2254;
  if (iStack_28 == 0xe) {
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *puStack_34 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
  }
  else if (iStack_28 == 0xf) {
    core_actor_cpp_FUN_00408cf0(this_ptr,puStack_34);
    puVar1 = &(this_ptr->base).base.base.field_0x20;
    afStack_1fc[2] = fStack_32c;
    afStack_1fc[(uint)bVar22 * -2 + 3] = afStack_358[(uint)bVar22 * -2 + 0xc];
    afStack_1fc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
         afStack_358[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd];
    fVar13 = *(float *)&(this_ptr->base).base.base.field_0x24;
    *(float *)puVar1 = *(float *)puVar1 + afStack_1fc[2];
    fVar3 = *(float *)&(this_ptr->base).base.base.field_0x28;
    *(float *)&(this_ptr->base).base.base.field_0x24 = fVar13 + afStack_1fc[3];
    *(float *)&(this_ptr->base).base.base.field_0x28 = fVar3 + fStack_1ec;
    puStack_34[2] = 0;
    puStack_34[1] = puStack_34[2];
    *puStack_34 = puStack_34[1];
  }
  else {
    iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
    if (iVar9 != 0) {
      pCVar6 = (this_ptr->base).victim;
      if ((pCVar6 != (CCharacter *)0x0) &&
         (pCVar12 = (CZombie *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
         pCVar12 == this_ptr)) {
        in_stack_fffff9d8 = (CZombie *)(this_ptr->base).victim;
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,(CDemonActor *)in_stack_fffff9d8);
      }
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_254 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
      fStack_250 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
      fStack_24c = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
      fStack_d4 = fStack_254;
      afStack_d0[(uint)bVar22 * -2] = afStack_298[(uint)bVar22 * -2 + 0x12];
      afStack_d0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
           afStack_298[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x13];
      puVar1 = &(this_ptr->base).base.field_0x257c;
      afStack_358[2] = fStack_d4 + *(float *)puVar1;
      afStack_358[3] = afStack_d0[0] + *(float *)&(this_ptr->base).base.field_0x2580;
      fStack_348 = afStack_d0[1] + *(float *)&(this_ptr->base).base.field_0x2584;
      fStack_17c = afStack_358[2];
      afStack_1a8[(uint)bVar22 * -2 + 0xc] = afStack_358[(uint)bVar22 * -2 + 3];
      afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xd] =
           afStack_358[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
      puVar2 = &(this_ptr->base).base.model.field_0x2254;
      fStack_320 = fStack_17c + *(float *)puVar2;
      fStack_31c = fStack_178 + *(float *)&(this_ptr->base).base.model.field_0x2258;
      fStack_318 = fStack_174 + *(float *)&(this_ptr->base).base.model.field_0x225c;
      CStack_11c.x = fStack_320;
      *(float *)((int)&CStack_11c + (uint)bVar22 * -8 + 4) = afStack_358[(uint)bVar22 * -2 + 0xf];
      *(float *)((int)&CStack_11c + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8) =
           afStack_358[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x10];
      *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
      *(uint *)&(this_ptr->base).base.field_0x2580 =
           *(uint *)&(this_ptr->base).base.field_0x2584;
      *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
      *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
      uVar4 = *(uint *)&(this_ptr->base).base.model.field_0x225c;
      *(uint *)&(this_ptr->base).base.model.field_0x2258 = uVar4;
      *(uint *)puVar2 = uVar4;
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_11c);
      if ((iStack_28 == 1) &&
         (pCStack_44 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                          (DAT_007bdc98,g_CDoorClassInfo.name_hash),
         pCStack_40 = pCStack_44, pCStack_44 != (CDoor *)0x0)) {
        (*((pCStack_44->base).vtable._ub)->getBoundingBox)
                  ((CDemonActor *)pCStack_44,(CBoundingBox3D *)in_stack_fffff9d8);
        pfVar19 = afStack_560;
        pfVar21 = &fStack_4b8;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar21 = *pfVar19;
          pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
          pfVar21 = pfVar21 + (uint)bVar22 * -2 + 1;
        }
        afStack_408[1] = fStack_4b8 + fStack_4ac;
        afStack_408[2] = fStack_4b4 + fStack_4a8;
        afStack_408[3] = fStack_4b0 + fStack_4a4;
        fStack_2e4 = fStack_4b8 + fStack_4ac;
        afStack_304[(uint)bVar22 * -2 + 9] = afStack_408[(uint)bVar22 * -2 + 2];
        afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10] =
             afStack_408[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 3];
        fStack_488 = fStack_2e4 * _DAT_005ef17a;
        fStack_484 = fStack_2e0 * _DAT_005ef17a;
        fStack_480 = fStack_2dc * _DAT_005ef17a;
        fStack_2b4 = fStack_2e4 * _DAT_005ef17a;
        afStack_2b0[(uint)bVar22 * -2] = afStack_49c[(uint)bVar22 * -2 + 6];
        afStack_2b0[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
             afStack_49c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
        core_actor_cpp_FUN_00408d70();
        uStack_110 = uStack_1dc;
        afStack_10c[(uint)bVar22 * -2] = afStack_1fc[(uint)bVar22 * -2 + 9];
        afStack_10c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
             afStack_1fc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
        core_actor_cpp_FUN_00408de0();
        uStack_158 = uStack_1e8;
        afStack_1a8[(uint)bVar22 * -2 + 0x15] = afStack_1fc[(uint)bVar22 * -2 + 6];
        afStack_1a8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0x16] =
             afStack_1fc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
        iStack_3e0 = iStack_308;
        afStack_3dc[(uint)bVar22 * -2] = afStack_304[(uint)bVar22 * -2];
        afStack_3dc[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
             afStack_304[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
        if (ABS(afStack_3dc[0]) < (float)_DAT_005ef1a2) {
          iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
          iVar15 = 0x12;
          if (iVar9 != 0) {
            iVar15 = 0x13;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,iVar15,1);
          this_ptr->target_door = pCStack_44;
        }
      }
    }
  }
  iVar9 = iStack_28;
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (iVar9 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar9 = this_ptr->part_indices[5];
    if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar9 * 4) == 0) {
      iVar15 = this_ptr->bone_indices[10];
      fVar13 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00427060
                (this_ptr,this_ptr->part_indices[0],this_ptr->bone_indices[5],0x3e4ccccd);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) != 0)
      {
        core_charactr_cpp_FUN_00427060
                  (this_ptr,this_ptr->part_indices[1],this_ptr->bone_indices[3],0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00427060
                (this_ptr,this_ptr->part_indices[2],this_ptr->bone_indices[6],0x3e4ccccd);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[2] * 4) != 0)
      {
        core_charactr_cpp_FUN_00427060
                  (this_ptr,this_ptr->part_indices[3],this_ptr->bone_indices[4],0x3e4ccccd);
      }
      iVar15 = this_ptr->bone_indices[0];
      fVar13 = 0.7;
      iVar9 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
              ((CCharacter *)this_ptr,iVar9,iVar15,fVar13);
    if ((this_ptr->part_indices[4] < 0) &&
       (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[5] * 4) != 0)) {
      *(uint *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[5] * 4) = 0
      ;
      core_charactr_cpp_FUN_00427060
                (this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10],0x3e4ccccd);
      *(uint *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[5] * 4) = 1
      ;
    }
    core_charactr_cpp_FUN_00426f30(this_ptr);
  }
  iVar9 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(this_ptr,1);
  if (((iStack_a0 != 0) && (-1 < iVar9)) &&
     (iVar9 = *(int *)((this_ptr->base).base.carry_hands + iVar9 * 0x78 + 8), iVar9 != 0)) {
    (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x80))(iVar9,2);
    return;
  }
  return;
}
