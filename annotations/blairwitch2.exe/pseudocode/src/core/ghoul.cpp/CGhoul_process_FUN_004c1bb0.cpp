// Name: core_ghoul.cpp_CGhoul_process_FUN_004c1bb0
// Address: 004c1bb0
// Address Range: [[004c1bb0, 004c397a]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c1bb0(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004c1bb0(CGhoul *this_ptr,float delta_time)

{
  byte *puVar1;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  EWalkState EVar3;
  CDemonActor_vtable *pCVar4;
  CGame *pCVar5;
  int iVar6;
  CGhoul *pCVar7;
  EDeathState EVar8;
  CPathMap *pCVar9;
  CMotionController *this_ptr_01;
  CDemonActor *pCVar10;
  CGhoul *pCVar11;
  uint uVar12;
  byte *puVar13;
  uint *puVar14;
  float *pfVar15;
  char *pcVar16;
  uint *puVar17;
  char *pcVar18;
  char cVar19;
  byte bVar20;
  float10 fVar21;
  float10 fVar22;
  UActorVTable aUStackY_135c [48];
  float afStackY_129c [9];
  UActorVTable aUStackY_1278 [27];
  float afStackY_120c [9];
  UActorVTable aUStackY_11e8 [3];
  float afStackY_11dc [3];
  UActorVTable aUStackY_11d0 [39];
  float afStackY_1134 [6];
  UActorVTable aUStackY_111c [776];
  UActorVTable *pUVar23;
  CVector3f *pCVar24;
  CVector3f *pCVar25;
  CGore *this_ptr_02;
  float fVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar26;
  char *in_stack_fffffb24;
  float fVar30;
  CCharacter *in_stack_fffffb2c;
  CCharacter *pCVar31;
  EBloodType EVar32;
  SDamageInfo aSStack_478 [4];
  float fStack_474;
  uint uStack_444;
  uint uStack_440;
  SDamageInfo aSStack_43c [4];
  float fStack_438;
  uint uStack_408;
  uint uStack_404;
  SDamageInfo aSStack_400 [4];
  float fStack_3fc;
  UActorVTable UStack_3e4;
  float fStack_3e0;
  UActorVTable UStack_3dc;
  CGhoul *pCStack_3cc;
  CGhoul *pCStack_3c8;
  char acStack_3c4 [32];
  uint auStack_3a4 [6];
  uint uStack_38c;
  float fStack_388;
  float fStack_37c;
  float fStack_374;
  UActorVTable aUStack_370 [5];
  uint uStack_35c;
  uint uStack_358;
  float fStack_354;
  float fStack_350;
  UActorVTable UStack_34c;
  float fStack_348;
  uint uStack_344;
  uint uStack_340;
  float fStack_33c;
  CVector3f CStack_338;
  uint uStack_32c;
  UActorVTable aUStack_328 [5];
  CVector3f CStack_314;
  uint uStack_308;
  UActorVTable aUStack_304 [2];
  float fStack_2fc;
  UActorVTable aUStack_2f0 [3];
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  uint uStack_2d8;
  CVector3f CStack_2cc;
  CVector3f CStack_2c0;
  float fStack_2b4;
  float afStack_2b0 [4];
  float fStack_2a0;
  CVector3f CStack_29c;
  uint uStack_290;
  UActorVTable aUStack_28c [2];
  CVector3f CStack_284;
  float fStack_278;
  UActorVTable UStack_274;
  float fStack_270;
  UActorVTable aUStack_26c [3];
  UActorVTable aUStack_260 [3];
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  uint uStack_248;
  uint uStack_23c;
  CVector3f CStack_230;
  float fStack_224;
  float afStack_220 [5];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  CVector3f CStack_200;
  float fStack_1f4;
  float afStack_1f0 [2];
  CVector3f CStack_1e8;
  float fStack_1dc;
  UActorVTable UStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  UActorVTable UStack_1c8;
  float fStack_1c4;
  UActorVTable UStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1ac;
  uint uStack_1a0;
  float fStack_194;
  UActorVTable UStack_188;
  uint uStack_17c;
  uint uStack_178;
  float fStack_174;
  float fStack_170;
  UActorVTable aUStack_16c [2];
  float fStack_164;
  float fStack_15c;
  float fStack_158;
  char acStack_14c [4];
  float afStack_148 [3];
  UActorVTable UStack_13c;
  float fStack_138;
  float fStack_134;
  UActorVTable UStack_130;
  float fStack_12c;
  uint uStack_128;
  byte auStack_11c [8];
  UActorVTable UStack_114;
  float fStack_110;
  UActorVTable UStack_10c;
  float fStack_108;
  UActorVTable UStack_104;
  float fStack_f8;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  UActorVTable UStack_d4;
  float fStack_d0;
  UActorVTable UStack_cc;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_a8;
  double dStack_a0;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  CGhoul *pCStack_18;
  float fStack_14;
  
  bVar20 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_70 = delta_time * (this_ptr->base).speed;
  pCStack_18 = (CGhoul *)&(this_ptr->base).base.model;
switchD_004c2644_caseD_e:
  if (0.0 < fStack_70) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCStack_18,&fStack_70);
    switch(iVar6) {
    case 5:
      pCVar31 = (this_ptr->base).victim;
      iStack_1c = 1;
      if ((pCVar31 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar31->base).vtable._uc)->_uc).getDeathState)(pCVar31),
         EVar8 == DEATH_STATE_ALIVE)) {
        in_stack_fffffb24 = (char *)(this_ptr->base).victim;
        pCVar10 = (*(((((CGhoul *)in_stack_fffffb24)->base).base.base.vtable._uc)->_uc).getGrabber)
                            ((CCharacter *)in_stack_fffffb24);
        if ((pCVar10 == (CDemonActor *)0x0) &&
           (pCVar31 = (this_ptr->base).victim, in_stack_fffffb24 = (char *)this_ptr,
           iVar6 = (*(((pCVar31->base).vtable._uc)->_uc).canBeGrabbed)
                             (pCVar31,(CDemonActor *)this_ptr,0), iVar6 != 0)) {
          fStack_64 = 0x40200000;
          uStack_344 = 0;
          uStack_340 = 0;
          fStack_33c = 0x40200000;
          in_stack_fffffb2c = (CCharacter *)0x4c210b;
          core_actor_cpp_FUN_00408d70();
          fStack_2b4 = fStack_1f4;
          afStack_2b0[(uint)bVar20 * -2] = afStack_1f0[(uint)bVar20 * -2];
          afStack_2b0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_1f0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pCVar31 = (this_ptr->base).victim;
          fVar30 = fStack_2b4 - *(float *)&(pCVar31->base).field_0x20;
          fVar27 = afStack_2b0[1] - *(float *)&(pCVar31->base).field_0x28;
          if (1.0 < SQRT(fVar27 * fVar27 + fVar30 * fVar30)) {
            iStack_1c = 0;
          }
          pCVar31 = (this_ptr->base).victim;
          if ((ABS(afStack_2b0[0] - *(float *)&(pCVar31->base).field_0x24) <= (float)_DAT_005d90f7)
             && (((iStack_1c == 0 ||
                  (iVar6 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabbed)
                                     (pCVar31,(CDemonActor *)this_ptr,0),
                  in_stack_fffffb2c = pCVar31, iVar6 != 0)) && (iStack_1c != 0)))) break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)pCStack_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
      break;
    case 10:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCStack_18,1,1);
      }
      else {
        pCVar7 = (CGhoul *)(*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar7 == this_ptr) {
          pCVar31 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar31->base).vtable._uc)->_uc).getDeathState)(pCVar31);
          if (EVar8 == DEATH_STATE_ALIVE) {
            pCVar31 = (this_ptr->base).victim;
            in_stack_fffffb24 = (char *)0x4c2212;
            (*((pCVar31->base).vtable._ub)->getBoundingBox)
                      (&pCVar31->base,(CBoundingBox3D *)in_stack_fffffb2c);
            puVar14 = auStack_3a4;
            puVar17 = &uStack_38c;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar17 = *puVar14;
              puVar14 = puVar14 + (uint)bVar20 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
            }
            fVar30 = fStack_37c - fStack_388;
            pCVar31 = (this_ptr->base).victim;
            pfVar15 = (float *)((int)pCVar31 + (uint)bVar20 * -8 + 0x24);
            acStack_14c[0] = (pCVar31->base).field_0x20;
            acStack_14c[1] = (pCVar31->base).field_0x21;
            acStack_14c[2] = (pCVar31->base).field_0x22;
            acStack_14c[3] = (pCVar31->base).field_0x23;
            afStack_148[(uint)bVar20 * -2] = *pfVar15;
            afStack_148[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] = pfVar15[(uint)bVar20 * -2 + 1];
            afStack_148[0] = fVar30 * (float)_DAT_005d9147 + afStack_148[0];
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_400);
            fStack_3fc = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,25.0);
            fStack_14 = fStack_3fc;
            core_actor_cpp_FUN_00408de0();
            UStack_d4 = UStack_104;
            (&UStack_10c)[(uint)bVar20 * -2 + 0xf] = (&UStack_10c)[(uint)bVar20 * -2 + 3];
            (&UStack_cc)[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
                 (&UStack_10c)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
            if (&UStack_3e4 != &UStack_d4) {
              UStack_3e4 = UStack_d4;
              fStack_3e0 = fStack_d0;
              UStack_3dc = UStack_cc;
            }
            pCStack_3cc = this_ptr;
            pCStack_3c8 = this_ptr;
            in_stack_fffffb2c = (this_ptr->base).victim;
            (*(((in_stack_fffffb2c->base).vtable._uc)->_uc).processDamage)
                      (in_stack_fffffb2c,aSStack_400);
            dStack_c8 = (double)fStack_3fc;
            if (0.0 < dStack_c8) {
              fVar22 = (float10)fStack_3fc * (float10)_DAT_005d914f * (float10)_DAT_005d913f;
              EVar32 = BLOOD_TYPE_RED;
              round();
              iStack_8c = (int)ROUND(fVar22);
              in_stack_fffffb2c = (CCharacter *)acStack_14c;
              in_stack_fffffb24 = (char *)0x4c2345;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,(CVector3f *)in_stack_fffffb2c,(CVector3f *)0x0,iStack_8c,EVar32
                        );
            }
            pCVar31 = (this_ptr->base).victim;
            if (pCVar31->hit_points <= 0.0) {
              (*(((pCVar31->base).vtable._uc)->_uc).releaseFromGrab)(pCVar31);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCStack_18,1,1);
            }
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar31 = (this_ptr->base).victim;
            (*(((pCVar31->base).vtable._uc)->_uc).releaseFromGrab)(pCVar31);
            in_stack_fffffb2c = (CCharacter *)0x1;
            in_stack_fffffb24 = (char *)pCStack_18;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCStack_18,1,1);
          }
        }
        else {
          in_stack_fffffb24 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCStack_18,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      uStack_128 = uStack_1ac;
      (&UStack_130)[(uint)bVar20 * -2 + 3] = (&UStack_1c0)[(uint)bVar20 * -2 + 6];
      (&UStack_130)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           (&UStack_1c0)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
      core_actor_cpp_FUN_00408d70(this_ptr);
      fVar27 = 12.0;
      fVar30 = 8.0;
      CStack_1e8.x = fStack_e0;
      *(UActorVTable *)((int)&CStack_1e8 + (uint)bVar20 * -8 + 4) =
           (&UStack_10c)[(uint)bVar20 * -2 + 0xc];
      *(UActorVTable *)((int)&CStack_1e8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           (&UStack_10c)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar30,fVar27);
      fVar22 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar32 = BLOOD_TYPE_RED;
      round();
      iStack_74 = (int)ROUND(fVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_1e8,(CVector3f *)0x0,iStack_74,EVar32);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      aUStack_370[2] = (UActorVTable)uStack_2d8;
      aUStack_370[(uint)bVar20 * -2 + 3] = aUStack_304[(uint)bVar20 * -2 + 0xc];
      aUStack_370[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           aUStack_304[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
      core_actor_cpp_FUN_00408d70(this_ptr);
      fVar27 = 12.0;
      fVar30 = 8.0;
      CStack_314.x = fStack_374;
      *(UActorVTable *)((int)&CStack_314 + (uint)bVar20 * -8 + 4) = aUStack_370[(uint)bVar20 * -2];
      *(UActorVTable *)((int)&CStack_314 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           aUStack_370[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar30,fVar27);
      fVar22 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar32 = BLOOD_TYPE_RED;
      round();
      iStack_80 = (int)ROUND(fVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_314,(CVector3f *)0x0,iStack_80,EVar32);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
                ((CDeformableModelInstance *)pCStack_18);
      core_skeleton_cpp_FUN_005469a0(pCStack_18);
      uStack_32c = uStack_308;
      aUStack_328[(uint)bVar20 * -2] = aUStack_304[(uint)bVar20 * -2];
      aUStack_328[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
           aUStack_304[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr);
      fVar27 = 12.0;
      fVar30 = 8.0;
      CStack_338.x = fStack_2fc;
      *(UActorVTable *)((int)&CStack_338 + (uint)bVar20 * -8 + 4) =
           aUStack_304[(uint)bVar20 * -2 + 3];
      *(UActorVTable *)((int)&CStack_338 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           aUStack_304[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar30,fVar27);
      fVar22 = (float10)fStack_14 * (float10)_DAT_005d913f;
      EVar32 = BLOOD_TYPE_RED;
      round();
      iStack_98 = (int)ROUND(fVar22);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_338,(CVector3f *)0x0,iStack_98,EVar32);
      iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
      if (iVar6 == 0) {
        pcVar16 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar16 = "ghoul-eat-?.wav @1.3";
      }
      pcVar18 = acStack_3c4;
      do {
        cVar19 = *pcVar16;
        *pcVar18 = cVar19;
        if (cVar19 == '\0') break;
        cVar19 = pcVar16[1];
        pcVar16 = pcVar16 + 2;
        pcVar18[1] = cVar19;
        pcVar18 = pcVar18 + 2;
      } while (cVar19 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,acStack_3c4);
    }
    goto switchD_004c2644_caseD_e;
  }
  fStack_14 = (float)core_motion_cpp_FUN_005038a0(pCStack_18);
  dStack_a0 = (double)delta_time;
  *(float *)&(this_ptr->base).base.field_0x2594 =
       fStack_14 * (float)_DAT_005d90e7 * delta_time * (this_ptr->base).speed;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar6 = core_motion_cpp_FUN_005035c0();
  iStack_34 = *(int *)(iVar6 + 0x24);
  if (iStack_34 == 0x11) {
    fVar30 = (this_ptr->base).speed;
    fVar22 = (float10)_DAT_005d90ef;
    *(float *)&(this_ptr->base).base.field_0x2598 =
         *(float *)&(this_ptr->base).base.field_0x2598 * (float)_DAT_005d90f7;
    *(float *)&(this_ptr->base).base.field_0x2594 =
         (float)((float10)dStack_a0 * fVar22 * (float10)fVar30);
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    fStack_28 = -1.0;
    pCVar7 = (CGhoul *)&(this_ptr->base).base.model;
    iVar6 = core_motion_cpp_FUN_005035c0();
    switch(*(uint *)(iVar6 + 0x24)) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar10 = this_ptr->dark_waypoint;
        if (pCVar10 == (CDemonActor *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar6 != 0) goto LAB_004c2cc5;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,1,1);
            iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
            if (iVar6 != 0) {
              in_stack_fffffb24 = (char *)0x4c2d33;
              iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
              if (iVar6 != 0) break;
            }
            in_stack_fffffb24 = (char *)this_ptr;
            uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->sfx_handles[0] = uVar12;
          }
        }
        else {
          afStack_2b0[2] =
               *(float *)&pCVar10->field_0x20 - *(float *)&(this_ptr->base).base.base.field_0x20;
          afStack_2b0[3] =
               *(float *)&pCVar10->field_0x24 - *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_2a0 = *(float *)&pCVar10->field_0x28 -
                       *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_224 = afStack_2b0[2];
          afStack_220[(uint)bVar20 * -2] = afStack_2b0[(uint)bVar20 * -2 + 3];
          afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_2b0[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
          fStack_20c = fStack_224;
          afStack_220[(uint)bVar20 * -2 + 6] = afStack_220[(uint)bVar20 * -2];
          afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
               afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          fStack_94 = fStack_204 * fStack_204 + fStack_20c * fStack_20c + fStack_208 * fStack_208;
          if (SQRT(fStack_94) < (float)_DAT_005d90f7) {
            fVar30 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar30;
            if ((float)_DAT_005d9137 < fVar30) {
              (this_ptr->base).base.hit_points = 100.0;
            }
            if (this_ptr->heal_timer < 0.0) {
              this_ptr->heal_timer = 0.0;
              this_ptr->dark_waypoint = (CDemonActor *)0x0;
            }
          }
        }
      }
      else {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
      }
      break;
    case 1:
    case 0x11:
      if ((this_ptr->is_berserk != 0) && (iStack_34 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0x11,1);
      }
      if (0.0 < this_ptr->stun_timer) {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0,1);
      }
      else {
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        uStack_24 = (uint)(*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                                   this_ptr->part_indices[1] * 4) != 0);
        if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) != 0
           ) {
          uStack_24 = uStack_24 + 1;
        }
        iVar6 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x114))();
        pCVar5 = g_CGamePtr;
        if (iVar6 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar31 = (this_ptr->base).victim;
          if (pCVar31 == (CCharacter *)0x0) {
            in_stack_fffffb24 = (char *)this_ptr;
            pCVar7 = (CGhoul *)
                     core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
            if (pCVar7 == (CGhoul *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,0,1);
              in_stack_fffffb24 = (char *)pCVar7;
            }
          }
          else {
            fStack_254 = *(float *)&(pCVar31->base).field_0x20 -
                         *(float *)&(this_ptr->base).base.base.field_0x20;
            fStack_250 = *(float *)&(pCVar31->base).field_0x24 -
                         *(float *)&(this_ptr->base).base.base.field_0x24;
            fStack_24c = *(float *)&(pCVar31->base).field_0x28 -
                         *(float *)&(this_ptr->base).base.base.field_0x28;
            fStack_350 = fStack_254;
            (&UStack_34c)[(uint)bVar20 * -2] = (&UStack_274)[(uint)bVar20 * -2 + 9];
            (&UStack_34c)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 (&UStack_274)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
            UStack_34c._ub = (CDemonActor_vtable *)0x0;
            if ((((this_ptr->base).base.hit_points < (float)_DAT_005d911f) && (0 < (int)uStack_24))
               && (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(this_ptr,delta_time);
            }
            pCVar10 = this_ptr->dark_waypoint;
            in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
            if (pCVar10 == (CDemonActor *)0x0) {
              fVar30 = 0.17453292;
              pCVar7 = (CGhoul *)0x3f800000;
              uStack_17c = 0;
              fStack_174 = 0x40200000;
              uStack_178 = 0;
              pCVar31 = (this_ptr->base).victim;
              pCVar9 = (*((pCVar31->base).vtable._ub)->getPathMap)(&pCVar31->base);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar9,
                                 (CVector3f *)pCVar7,fVar30,(float)in_stack_fffffb2c);
              if (iVar6 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0,1);
              }
              else {
                in_stack_fffffb24 = (char *)pCVar7;
                if (((0 < iVar6) && (0 < (int)uStack_24)) &&
                   (((this_ptr->base).attack_cooldown <= 0.0 &&
                    ((pCVar31 = (this_ptr->base).victim,
                     pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
                     in_stack_fffffb24 = (char *)pCVar7, pCVar10 == (CDemonActor *)0x0 &&
                     (this_ptr->flinch_blend_weight <= 0.0)))))) {
                  fStack_48 = SQRT(fStack_348 * fStack_348 +
                                   fStack_350 * fStack_350 + (float)UStack_34c * (float)UStack_34c);
                  fStack_30 = 0.0;
                  fStack_40 = 0.0;
                  fStack_54 = 0.0;
                  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                              this_ptr->part_indices[3] * 4) != 0) {
                    fStack_30 = (1.0 - ABS(fStack_48 - 0x4059999A) / 0x4059999A) *
                                (float)_DAT_005d9127;
                  }
                  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                              this_ptr->part_indices[1] * 4) != 0) {
                    fStack_40 = (1.0 - ABS(fStack_48 - 0x40200000) / 0x40200000) *
                                (float)_DAT_005d912f;
                  }
                  pCVar31 = (this_ptr->base).victim;
                  in_stack_fffffb24 = (char *)0x4c30f4;
                  fStack_3c = fStack_48;
                  iVar6 = (*(((pCVar31->base).vtable._uc)->_uc).canBeGrabbed)
                                    (pCVar31,(CDemonActor *)this_ptr,0);
                  if (iVar6 != 0) {
                    fStack_54 = (1.0 - ABS(fStack_3c - 0x40200000) / 0x40200000) *
                                (float)_DAT_005d9127;
                  }
                  fStack_50 = fStack_30 + fStack_40;
                  fStack_4c = fStack_50 + fStack_54;
                  if (0.0 < fStack_4c) {
                    fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,fStack_4c);
                    if (fStack_30 <= fStack_44) {
                      if (fStack_50 <= fStack_44) {
                        iVar6 = 0xb;
                      }
                      else {
                        iVar6 = 0xc;
                      }
                    }
                    else {
                      iVar6 = 2;
                    }
                    fStack_14 = fStack_44;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
                    (this_ptr->base).attack_cooldown = 0.7;
                  }
                }
              }
            }
            else {
              fVar30 = 0.0;
              pCVar7 = (CGhoul *)0x40400000;
              pCVar9 = (*((pCVar10->vtable)._ub)->getPathMap)(pCVar10);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)this_ptr,
                                 (CVector3f *)&this_ptr->dark_waypoint->field_0x20,pCVar9,
                                 (CVector3f *)pCVar7,fVar30,(float)in_stack_fffffb2c);
              if (0 < iVar6) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0,1);
                pCVar7 = (CGhoul *)0x4c2efc;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,30.0);
                this_ptr->heal_timer = fStack_14;
              }
              if (iVar6 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              in_stack_fffffb24 = (char *)pCVar7;
              if (iStack_34 == 1) {
                in_stack_fffffb24 = (char *)&(this_ptr->base).base.model;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)in_stack_fffffb24,0x11,1);
              }
            }
          }
        }
        else {
          if (this_ptr->pending_eat_state < 0) {
            cVar19 = *(int *)(&(this_ptr->base).base.model.field_0x2140 +
                             this_ptr->part_indices[1] * 4) != 0;
            if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4)
                != 0) {
              cVar19 = cVar19 + '\x01';
            }
            if (cVar19 != '\0') {
              if (cVar19 == '\x01') {
                this_ptr->pending_eat_state = 0xe;
                pCVar5->player_hit_flag = 1;
              }
              else {
                iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
                this_ptr->pending_eat_state = (iVar6 == 0) + 0xd;
                g_CGamePtr->player_hit_flag = 1;
              }
              goto LAB_004c31ac;
            }
            this_ptr->pending_eat_state = 0;
          }
          else {
LAB_004c31ac:
            if (this_ptr->pending_eat_state != 0) {
              fStack_38 = 0x40000000;
              if (this_ptr->pending_eat_state == 0xe) {
                fStack_38 = 0x40B00000;
              }
              fVar27 = 0.08726646;
              fVar30 = 0.5;
              CStack_2cc.z = fStack_38;
              pCVar25 = &CStack_2cc;
              CStack_2cc.x = 0.0;
              iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
              CStack_2cc.y = 0.0;
              pCVar9 = (CPathMap *)(**(code **)(*(int *)(iVar6 + 0x2b0) + 0xcc))(iVar6);
              core_skeleton_cpp_FUN_005469a0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4,0);
              pUVar23 = aUStack_304 + 5;
              aUStack_2f0[0] = (UActorVTable)uStack_1b8;
              aUStack_304[(uint)bVar20 * -2 + 6] = (&UStack_1c0)[(uint)bVar20 * -2 + 3];
              aUStack_304[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
                   (&UStack_1c0)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
              core_actor_cpp_FUN_00408d70(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),pUVar23);
              pCVar24 = &CStack_29c;
              CStack_29c.x = afStack_220[2];
              *(float *)((int)&CStack_29c + (uint)bVar20 * -8 + 4) =
                   afStack_220[(uint)bVar20 * -2 + 3];
              pCVar7 = this_ptr;
              *(float *)((int)&CStack_29c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   afStack_220[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                                ((CCharacter *)pCVar7,pCVar24,pCVar9,pCVar25,fVar30,fVar27);
              if (((0 < iVar6) &&
                  (iVar6 = (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) +
                                       0x114))(), iVar6 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            ((CMotionController *)&(this_ptr->base).base.model,
                             this_ptr->pending_eat_state,1), this_ptr->pending_eat_state == 0xd)) {
                pCVar4 = (this_ptr->base).base.base.vtable._ub;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.2);
                (*pCVar4->playSoundWithDelay)
                          ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",fStack_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0,1);
        }
      }
      break;
    case 2:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
LAB_004c2cc5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,1,1);
      }
      else {
        pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar10 == (CDemonActor *)0x0) {
          in_stack_fffffb24 = (char *)0x3f000000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          iVar6 = this_ptr->part_indices[3];
          (this_ptr->base).attack_cooldown = fStack_14;
          if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar6 * 4) != 0) {
            fStack_5c = core_motion_cpp_FUN_00503e60((CMotionController *)pCVar7);
            dStack_c0 = (double)fStack_5c;
            in_stack_fffffb24 = (char *)pCVar7;
            fStack_14 = fStack_5c;
            if ((fStack_5c <= (float)_DAT_005d9107) && (fStack_28 = 0x4059999A, 1.0 <= dStack_c0))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_43c);
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
              fStack_438 = fStack_14;
              if (this_ptr->is_berserk != 0) {
                fStack_438 = fStack_14 * (float)_DAT_005d9107;
              }
              in_stack_fffffb24 = (char *)aSStack_43c;
              uStack_408 = this_ptr;
              uStack_404 = this_ptr;
              uVar29 = 0x3e4ccccd;
              core_xform_cpp_FUN_00591530
                        (&DAT_01cb81d4,
                         &(this_ptr->base).base.model.field_0xe80 + _DAT_01cb8224 * 0x30);
              uVar26 = CONCAT44(uVar29,aUStack_260);
              aUStack_260[0] = UStack_188;
              (&UStack_274)[(uint)bVar20 * -2 + 6] = (&UStack_1c0)[(uint)bVar20 * -2 + 0xf];
              (&UStack_274)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7] =
                   (&UStack_1c0)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x10];
              core_actor_cpp_FUN_00408d70(this_ptr,uVar26);
              pCVar25 = (CVector3f *)auStack_11c;
              fVar30 = (float)((ulonglong)uVar26 >> 0x20);
              auStack_11c._0_4_ = fStack_170;
              *(UActorVTable *)(auStack_11c + (uint)bVar20 * -8 + 4) =
                   aUStack_16c[(uint)bVar20 * -2];
              pCVar7 = this_ptr;
              *(UActorVTable *)(auStack_11c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                   aUStack_16c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
              iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                                (&pCVar7->base,pCVar25,fVar30,(SDamageInfo *)in_stack_fffffb24);
              if (iVar6 != 0) {
                in_stack_fffffb24 = "gh-hits?.wav";
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          in_stack_fffffb24 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar7,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         (*(int *)&(this_ptr->base).base.base.field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(pCVar7);
        uStack_1a0 = uStack_23c;
        (&UStack_1c0)[(uint)bVar20 * -2 + 9] = (&UStack_274)[(uint)bVar20 * -2 + 0xf];
        (&UStack_1c0)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
             (&UStack_274)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x10];
        core_actor_cpp_FUN_00408d70(this_ptr);
        pCVar25 = &CStack_200;
        EVar32 = BLOOD_TYPE_RED;
        CStack_200.x = fStack_158;
        *(UActorVTable *)((int)&CStack_200 + (uint)bVar20 * -8 + 4) =
             aUStack_16c[(uint)bVar20 * -2 + 6];
        this_ptr_02 = g_CGorePtr;
        *(UActorVTable *)((int)&CStack_200 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
             aUStack_16c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_02,pCVar25,EVar32);
        (this_ptr->base).pool_me = 1;
      }
      this_ptr->is_berserk = 0;
      if (((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) &&
         (iVar6 = this_ptr->spasm_timer - _DAT_01c2a370, this_ptr->spasm_timer = iVar6, iVar6 < 1))
      {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,12.0);
          fVar22 = (float10)fStack_14 * (float10)_DAT_005d90ff;
          iVar28 = 1;
          iVar6 = 0xf;
          this_ptr_01 = (CMotionController *)round();
          this_ptr->spasm_timer = (int)ROUND(fVar22);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_01,iVar6,iVar28);
        }
      }
      if (0 < this_ptr->lives_left) {
        iVar6 = this_ptr->arise_timer;
        if (iVar6 < 1) {
          iVar6 = iVar6 + _DAT_01c2a370;
          iStack_58 = 0;
          this_ptr->arise_timer = iVar6;
          if (iVar6 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar31 = (this_ptr->base).victim;
            if (pCVar31 != (CCharacter *)0x0) {
              fStack_2e4 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                           *(float *)&(pCVar31->base).field_0x20;
              fStack_2e0 = *(float *)&(this_ptr->base).base.base.field_0x24 -
                           *(float *)&(pCVar31->base).field_0x24;
              fStack_2dc = *(float *)&(this_ptr->base).base.base.field_0x28 -
                           *(float *)&(pCVar31->base).field_0x28;
              fStack_110 = fStack_2e4;
              (&UStack_10c)[(uint)bVar20 * -2] = aUStack_304[(uint)bVar20 * -2 + 9];
              (&UStack_10c)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   aUStack_304[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10];
              if (afStack_148 + 2 != &fStack_110) {
                afStack_148[2] = fStack_110;
                UStack_13c = UStack_10c;
                fStack_138 = fStack_108;
              }
              fStack_7c = fStack_138 * fStack_138 +
                          afStack_148[2] * afStack_148[2] + (float)UStack_13c * (float)UStack_13c;
              fStack_78 = (float)(((int)fStack_7c >> 1) + _DAT_01caf5b4);
              if (fStack_78 < (float)_DAT_005d90ef) goto LAB_004c293b;
            }
            if (iStack_58 == 0) break;
          }
          else {
            this_ptr->arise_timer = 0;
          }
LAB_004c293b:
          fStack_20 = *(float *)&(this_ptr->base).base.field_0x3444;
          if (fStack_20 < *(float *)&(this_ptr->base).base.field_0x3440) {
            fStack_20 = *(float *)&(this_ptr->base).base.model.field_0x2248;
          }
          if (fStack_20 < *(float *)&(this_ptr->base).base.field_0x3440) {
            fStack_20 = *(float *)&(this_ptr->base).base.field_0x3440 + (float)_DAT_005d910f;
          }
          iVar6 = 0;
          do {
            fStack_90 = (float)iVar6 * _DAT_005d9157 * _DAT_005d915b;
            fStack_14 = (float)iVar6;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            fVar22 = (float10)fcos((float10)fStack_90);
            fVar21 = (float10)fsin((float10)fStack_90);
            fStack_2c = (float)core_setcolid_cpp_FUN_00537030
                                         (g_CDemonSetPtr,
                                          *(uint *)&(this_ptr->base).base.base.field_0x20,
                                          *(uint *)&(this_ptr->base).base.base.field_0x28,
                                          (float)(fVar21 * (float10)_DAT_005d915f),
                                          (float)(fVar22 * (float10)_DAT_005d915f),
                                          *(uint *)&(this_ptr->base).base.field_0x3434,
                                          *(float *)&(this_ptr->base).base.base.field_0x24 +
                                          *(float *)&(this_ptr->base).base.field_0x3440);
            fStack_14 = fStack_2c;
            core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            if (fStack_2c < 1.0) break;
            iVar6 = iVar6 + 1;
          } while (iVar6 < 4);
          if (iVar6 < 4) {
            this_ptr->arise_timer = 3;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
          else {
            fStack_14 = (float)(this_ptr->lives_left + 1);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                                  (10.0,(float)(int)fStack_14 * (float)_DAT_005d9167);
            (this_ptr->base).base.hit_points = fStack_14;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,0x10,1);
          }
        }
        else {
          iVar6 = iVar6 - _DAT_01c2a370;
          this_ptr->arise_timer = iVar6;
          if (iVar6 < 1) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,30.0);
            fVar22 = -(float10)fStack_14 * (float10)_DAT_005d9117;
            round();
            this_ptr->arise_timer = (int)ROUND(fVar22);
          }
        }
      }
      break;
    case 0xb:
      pCVar31 = (this_ptr->base).victim;
      if (pCVar31 == (CCharacter *)0x0) {
LAB_004c3569:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar7,1,1);
      }
      else {
        pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31);
        if (pCVar10 == (CDemonActor *)0x0) {
          fStack_28 = 0x40200000;
        }
        else {
          in_stack_fffffb24 = (char *)(this_ptr->base).victim;
          pCVar11 = (CGhoul *)
                    (*(((((CGhoul *)in_stack_fffffb24)->base).base.base.vtable._uc)->_uc).getGrabber
                    )((CCharacter *)in_stack_fffffb24);
          if (pCVar11 != this_ptr) {
            in_stack_fffffb24 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar7,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar31 = (this_ptr->base).victim;
      if ((pCVar31 == (CCharacter *)0x0) ||
         (pCVar10 = (*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
         pCVar10 != (CDemonActor *)0x0)) goto LAB_004c3569;
      in_stack_fffffb24 = (char *)0x3f000000;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
      iVar6 = this_ptr->part_indices[1];
      (this_ptr->base).attack_cooldown = fStack_14;
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar6 * 4) != 0) {
        fStack_60 = core_motion_cpp_FUN_00503e60((CMotionController *)pCVar7);
        dStack_a8 = (double)fStack_60;
        in_stack_fffffb24 = (char *)pCVar7;
        fStack_14 = fStack_60;
        if (fStack_60 <= (float)_DAT_005d9107) {
          fStack_28 = 0x40200000;
          if (1.0 <= dStack_a8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_478);
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
            fStack_474 = fStack_14;
            if (this_ptr->is_berserk != 0) {
              fStack_474 = fStack_14 * (float)_DAT_005d9107;
            }
            in_stack_fffffb24 = (char *)aSStack_478;
            uStack_444 = this_ptr;
            uStack_440 = this_ptr;
            uVar29 = 0x3ecccccd;
            core_xform_cpp_FUN_00591530
                      (&DAT_01cb81c8,&(this_ptr->base).base.model.field_0xe80 + _DAT_01cb8220 * 0x30
                      );
            uVar26 = CONCAT44(uVar29,&uStack_290);
            uStack_290 = uStack_248;
            aUStack_28c[(uint)bVar20 * -2] = (&UStack_274)[(uint)bVar20 * -2 + 0xc];
            aUStack_28c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 (&UStack_274)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
            core_actor_cpp_FUN_00408d70(this_ptr,uVar26);
            pCVar25 = &CStack_284;
            fVar30 = (float)((ulonglong)uVar26 >> 0x20);
            CStack_284.x = fStack_f8;
            *(UActorVTable *)((int)&CStack_284 + (uint)bVar20 * -8 + 4) =
                 (&UStack_10c)[(uint)bVar20 * -2 + 6];
            pCVar7 = this_ptr;
            *(UActorVTable *)((int)&CStack_284 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
                 (&UStack_10c)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
            iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                              (&pCVar7->base,pCVar25,fVar30,(SDamageInfo *)in_stack_fffffb24);
            if (iVar6 != 0) {
              in_stack_fffffb24 = "gh-hits?.wav";
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar6 = this_ptr->burp_timer - _DAT_01c2a370;
      this_ptr->burp_timer = iVar6;
      if (iVar6 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffb24 = (char *)0x41700000;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
        fVar22 = (float10)fStack_14 * (float10)_DAT_005d90ff;
        round();
        this_ptr->burp_timer = (int)ROUND(fVar22);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        in_stack_fffffb24 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0,1);
      }
    }
    if (((0.0 <= fStack_28) && (this_ptr->flinch_blend_weight <= 0.0)) &&
       ((this_ptr->base).victim != (CCharacter *)0x0)) {
      fVar30 = 0.5235988;
      pCVar24 = (CVector3f *)0x40400000;
      uStack_35c = 0;
      fStack_354 = fStack_28;
      uStack_358 = 0;
      pCVar31 = (this_ptr->base).victim;
      pCVar9 = (*((pCVar31->base).vtable._ub)->getPathMap)(&pCVar31->base);
      core_skeleton_cpp_FUN_005469a0(&((this_ptr->base).victim)->model,0);
      aUStack_26c[0] = aUStack_328[2];
      (&UStack_274)[(uint)bVar20 * -2 + 3] = aUStack_328[(uint)bVar20 * -2 + 3];
      (&UStack_274)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
           aUStack_328[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
      core_actor_cpp_FUN_00408d70((this_ptr->base).victim,aUStack_26c);
      pCVar25 = &CStack_2c0;
      CStack_2c0.x = fStack_194;
      *(UActorVTable *)((int)&CStack_2c0 + (uint)bVar20 * -8 + 4) =
           (&UStack_1c0)[(uint)bVar20 * -2 + 0xc];
      pCVar7 = this_ptr;
      *(UActorVTable *)((int)&CStack_2c0 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           (&UStack_1c0)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)pCVar7,pCVar25,pCVar9,pCVar24,fVar30,(float)in_stack_fffffb24
                        );
      if (iVar6 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,1,1);
        *(uint *)&(this_ptr->base).base.field_0x2578 = 0;
      }
    }
    goto LAB_004c1d09;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
      iVar6 = 1;
    }
    else {
LAB_004c2686:
      iVar6 = 0;
    }
LAB_004c1ce2:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) {
      iVar6 = 0x11;
      goto LAB_004c1ce2;
    }
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004c2686;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
LAB_004c1d09:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar31 = (this_ptr->base).victim;
    if ((pCVar31 != (CCharacter *)0x0) &&
       (pCVar7 = (CGhoul *)(*(((pCVar31->base).vtable._uc)->_uc).getGrabber)(pCVar31),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr);
    fStack_134 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    UStack_130 = (UActorVTable)(*(float *)&(this_ptr->base).base.field_0x258c * delta_time);
    fStack_12c = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_1dc = fStack_134;
    (&UStack_1d8)[(uint)bVar20 * -2] = (&UStack_130)[(uint)bVar20 * -2];
    (&UStack_1d8)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         (&UStack_130)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    puVar13 = &(this_ptr->base).base.field_0x257c;
    fStack_1d0 = fStack_1dc + *(float *)puVar13;
    fStack_1cc = (float)UStack_1d8 + *(float *)&(this_ptr->base).base.field_0x2580;
    UStack_1c8 = (UActorVTable)(fStack_1d4 + *(float *)&(this_ptr->base).base.field_0x2584);
    fStack_ec = fStack_1d0;
    (&UStack_10c)[(uint)bVar20 * -2 + 9] = (&UStack_1d8)[(uint)bVar20 * -2 + 3];
    (&UStack_10c)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
         (&UStack_1c8)[(uint)bVar20 * -2 + (uint)bVar20 * -2];
    puVar1 = &(this_ptr->base).base.model.field_0x2254;
    fStack_1c4 = fStack_ec + *(float *)puVar1;
    UStack_1c0 = (UActorVTable)(fStack_e8 + *(float *)&(this_ptr->base).base.model.field_0x2258);
    fStack_1bc = fStack_e4 + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_230.x = fStack_1c4;
    *(UActorVTable *)((int)&CStack_230 + (uint)bVar20 * -8 + 4) = (&UStack_1c0)[(uint)bVar20 * -2];
    *(UActorVTable *)((int)&CStack_230 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
         (&UStack_1c0)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar13 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    uVar29 = *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 = uVar29;
    *(uint *)puVar1 = uVar29;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_230);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  dStack_b8 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < dStack_b8) {
    fStack_6c = (float)core_motion_cpp_FUN_00503f50(this_ptr_00,this_ptr->flinch_motion_index);
    fVar30 = 1.0 - this_ptr->flinch_blend_weight;
    fStack_68 = 1.0 - fVar30 * fVar30 * fVar30;
    fStack_14 = fStack_6c;
    core_skeleton_cpp_FUN_00545a60
              (this_ptr_00,this_ptr->flinch_motion_index,fStack_6c,fStack_68,_DAT_01cb8240);
    fVar30 = this_ptr->flinch_blend_weight - delta_time / _DAT_005f78cc;
    this_ptr->flinch_blend_weight = fVar30;
    if (fVar30 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if (((float)_DAT_005d916f < ABS(*(float *)&(this_ptr->base).base.field_0x2578)) ||
     (fVar30 = *(float *)&(this_ptr->base).base.field_0x2580,
     fVar27 = *(float *)&(this_ptr->base).base.field_0x257c,
     fVar2 = *(float *)&(this_ptr->base).base.field_0x2584,
     (float)_DAT_005d916f < SQRT(fVar2 * fVar2 + fVar27 * fVar27 + fVar30 * fVar30))) {
    iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
    if (iVar6 == 0) {
      _sprintf(&stack0xfffffb24,"ghoul-walk-?.wav *%f");
      uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffb24);
      this_ptr->sfx_handle = uVar12;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0055af80(0x0264B290,this_ptr->sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    iVar6 = this_ptr->part_indices[9];
    if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + iVar6 * 4) == 0) {
      fVar30 = 0.5;
      iVar28 = _DAT_01cb8244;
    }
    else {
      core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[0],_DAT_01cb8230);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) != 0)
      {
        core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[1],_DAT_01cb8228);
      }
      core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[2],_DAT_01cb8234);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[2] * 4) != 0)
      {
        core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[3],_DAT_01cb822c);
      }
      fVar30 = 0.7;
      iVar6 = this_ptr->part_indices[10];
      iVar28 = _DAT_01cb821c;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
              ((CCharacter *)this_ptr,iVar6,iVar28,fVar30);
    core_charactr_cpp_FUN_00426f30();
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (iStack_34 == 0x11)) {
    fStack_278 = *(float *)&(this_ptr->base).base.base.field_0x20 - (this_ptr->prev_position).x;
    UStack_274 = (UActorVTable)
                 (*(float *)&(this_ptr->base).base.base.field_0x24 - (this_ptr->prev_position).y);
    fStack_270 = *(float *)&(this_ptr->base).base.base.field_0x28 - (this_ptr->prev_position).z;
    fStack_164 = fStack_278;
    aUStack_16c[(uint)bVar20 * -2 + 3] = (&UStack_274)[(uint)bVar20 * -2];
    aUStack_16c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
         (&UStack_274)[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
    if (delta_time * (float)_DAT_005d910f <= SQRT(fStack_15c * fStack_15c + fStack_164 * fStack_164)
       ) {
      this_ptr->stuck_timer = 1.0;
    }
    else {
      fVar30 = this_ptr->stuck_timer - delta_time;
      this_ptr->stuck_timer = fVar30;
      if (fVar30 < 0.0) {
        this_ptr->heal_timer = 30.0;
        this_ptr->dark_waypoint = (CDemonActor *)0x0;
        this_ptr->is_berserk = 0;
      }
    }
  }
  puVar13 = &(this_ptr->base).base.base.field_0x20;
  if (&this_ptr->prev_position == (CVector3f *)puVar13) {
    return;
  }
  (this_ptr->prev_position).x = *(float *)puVar13;
  (this_ptr->prev_position).y = *(float *)&(this_ptr->base).base.base.field_0x24;
  (this_ptr->prev_position).z = *(float *)&(this_ptr->base).base.base.field_0x28;
  return;
}
