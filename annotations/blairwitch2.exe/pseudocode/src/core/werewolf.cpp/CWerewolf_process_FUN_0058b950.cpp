// Name: core_werewolf.cpp_CWerewolf_process_FUN_0058b950
// Address: 0058b950
// Address Range: [[0058b950, 0058d01b]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_0058b950(CWerewolf *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_0058b950(CWerewolf *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  byte *puVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  CCharacter *pCVar4;
  double dVar5;
  CMotionController *pCVar6;
  int iVar7;
  uint uVar8;
  CWerewolf *pCVar9;
  EDeathState EVar10;
  CPathMap *path_map;
  int iVar11;
  byte *puVar12;
  byte bVar13;
  float10 fVar14;
  float afStackY_1390 [938];
  float fVar15;
  uint *puVar16;
  CVector3f *pCVar17;
  float *pfVar18;
  CGore *this_ptr_01;
  float max_value;
  EBloodType EVar19;
  SDamageInfo *pSVar20;
  ulonglong uVar21;
  float in_stack_fffffb38;
  SDamageInfo aSStack_498 [4];
  float fStack_494;
  CWerewolf *pCStack_464;
  CWerewolf *pCStack_460;
  SDamageInfo aSStack_45c [4];
  float fStack_458;
  CWerewolf *pCStack_428;
  CWerewolf *pCStack_424;
  SDamageInfo aSStack_420 [4];
  float fStack_41c;
  CWerewolf *pCStack_3ec;
  CWerewolf *pCStack_3e8;
  SDamageInfo aSStack_3e4 [4];
  float fStack_3e0;
  CWerewolf *pCStack_3b0;
  CWerewolf *pCStack_3ac;
  uint uStack_3a8;
  float afStack_3a4 [5];
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float afStack_378 [3];
  uint uStack_36c;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  uint uStack_354;
  float afStack_350 [5];
  uint uStack_33c;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  CVector3f CStack_318;
  uint uStack_30c;
  float afStack_308 [5];
  uint uStack_2f4;
  float fStack_2e8;
  float afStack_2dc [3];
  uint uStack_2d0;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  uint uStack_2b8;
  float afStack_2ac [3];
  CVector3f CStack_2a0;
  uint uStack_294;
  float afStack_290 [4];
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  uint uStack_26c;
  float fStack_268;
  float fStack_264;
  float afStack_260 [4];
  float fStack_250;
  float afStack_24c [3];
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [5];
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  CVector3f CStack_210;
  float fStack_204;
  float afStack_200 [2];
  CVector3f CStack_1f8;
  uint uStack_1ec;
  float afStack_1e8 [5];
  CVector3f CStack_1d4;
  float fStack_1c8;
  float afStack_1c4 [2];
  CVector3f CStack_1bc;
  uint uStack_1b0;
  float afStack_1ac [2];
  CVector3f CStack_1a4;
  uint uStack_198;
  float afStack_194 [5];
  float fStack_180;
  CVector3f CStack_174;
  uint uStack_168;
  float afStack_164 [5];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [3];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [2];
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [5];
  uint uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_6c;
  int iStack_58;
  float fStack_54;
  float afStack_50 [2];
  CMotionController *pCStack_48;
  CCharacter *pCStack_44;
  float fStack_40;
  CMotionController *pCStack_3c;
  float fStack_38;
  float fStack_34;
  byte *puStack_30;
  float fStack_2c;
  float fStack_28;
  byte *puStack_24;
  CCharacter *pCStack_20;
  uint uStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    return;
  }
  if ((this_ptr->type == WEREWOLF_TYPE_FOREST) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - delta_time;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  afStack_50[0] = delta_time * (this_ptr->base).speed;
  pCStack_18 = (CMotionController *)&(this_ptr->base).base.model;
  while (pCVar6 = pCStack_18, 0.0 < afStack_50[0]) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_18,afStack_50);
    if (uVar8 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar8);
    }
    else if (uVar8 < 0xb) {
      core_skeleton_cpp_FUN_005469a0(pCVar6,this_ptr->bone_indices[3]);
      puVar16 = &uStack_30c;
      uStack_30c = uStack_2f4;
      afStack_308[(uint)bVar13 * -2] = afStack_308[(uint)bVar13 * -2 + 6];
      afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar16);
      max_value = 12.0;
      fVar15 = 8.0;
      CStack_318.x = fStack_2e8;
      *(float *)((int)&CStack_318 + (uint)bVar13 * -8 + 4) = afStack_308[(uint)bVar13 * -2 + 9];
      *(float *)((int)&CStack_318 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar15,max_value);
      fVar14 = (float10)fStack_14 * (float10)_DAT_005ee722;
      EVar19 = BLOOD_TYPE_RED;
      round();
      iStack_58 = (int)ROUND(fVar14);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_318,(CVector3f *)0x0,iStack_58,EVar19);
    }
    else if (uVar8 == 0x29a) {
      core_mission_cpp_FUN_004fc7b0(0x01D182F0,this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar8);
    }
  }
  fVar15 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar15);
  if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
    *(float *)&(this_ptr->base).base.field_0x2598 =
         *(float *)&(this_ptr->base).base.field_0x2598 * (float)_DAT_005ee6fa;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  iVar7 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  uVar8 = *(uint *)(iVar7 + 0x24);
  uStack_1c = uVar8;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    EVar10 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr)
    ;
    if ((EVar10 == DEATH_STATE_ALIVE) &&
       ((this_ptr->base).victim == *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffb2c);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar20 = (SDamageInfo *)&stack0xfffffb2c;
      fVar15 = *(float *)&(this_ptr->base).base.field_0x2824;
      puStack_30 = &(this_ptr->base).base.model.field_0xe80;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_30 + this_ptr->bone_indices[3] * 0x30);
      puVar16 = &uStack_3a8;
      uStack_3a8 = afStack_350[2];
      afStack_3a4[(uint)bVar13 * -2] = afStack_350[(uint)bVar13 * -2 + 3];
      afStack_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar16);
      pCVar17 = &CStack_1d4;
      CStack_1d4.x = afStack_1e8[2];
      *(float *)((int)&CStack_1d4 + (uint)bVar13 * -8 + 4) = afStack_1e8[(uint)bVar13 * -2 + 3];
      pCVar9 = this_ptr;
      *(float *)((int)&CStack_1d4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar20 = (SDamageInfo *)&stack0xfffffb2c;
      fVar15 = *(float *)&(this_ptr->base).base.field_0x2824;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_30 + this_ptr->bone_indices[2] * 0x30);
      puVar16 = &uStack_354;
      uStack_354 = afStack_308[2];
      afStack_350[(uint)bVar13 * -2] = afStack_308[(uint)bVar13 * -2 + 3];
      afStack_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar16);
      pCVar17 = &CStack_1bc;
      CStack_1bc.x = fStack_204;
      *(float *)((int)&CStack_1bc + (uint)bVar13 * -8 + 4) = afStack_200[(uint)bVar13 * -2];
      pCVar9 = this_ptr;
      *(float *)((int)&CStack_1bc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar20 = (SDamageInfo *)&stack0xfffffb2c;
      fVar15 = *(float *)&(this_ptr->base).base.field_0x2824;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_30 + this_ptr->bone_indices[1] * 0x30);
      pfVar18 = afStack_3a4 + 0xb;
      afStack_378[0] = (float)uStack_2b8;
      afStack_3a4[(uint)bVar13 * -2 + 0xc] = afStack_308[(uint)bVar13 * -2 + 0x15];
      afStack_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar18);
      pCVar17 = &CStack_1a4;
      CStack_1a4.x = fStack_d8;
      *(float *)((int)&CStack_1a4 + (uint)bVar13 * -8 + 4) = afStack_d4[(uint)bVar13 * -2];
      pCVar9 = this_ptr;
      *(float *)((int)&CStack_1a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
    }
    puStack_24 = &(this_ptr->base).base.model.field_0xe80;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_0058c0f5;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4) != (this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_498);
            fStack_494 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
            pCStack_464 = this_ptr;
            pCStack_460 = this_ptr;
            pSVar20 = aSStack_498;
            fVar15 = 0.4;
            fStack_14 = fStack_494;
            core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_24 + this_ptr->bone_indices[1] * 0x30)
            ;
            puVar16 = &uStack_1ec;
            uStack_1ec = uStack_168;
            afStack_1e8[(uint)bVar13 * -2] = afStack_164[(uint)bVar13 * -2];
            afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            core_actor_cpp_FUN_00408d70(this_ptr,puVar16);
            pCVar17 = &CStack_114;
            CStack_114.x = fStack_90;
            *(float *)((int)&CStack_114 + (uint)bVar13 * -8 + 4) =
                 afStack_d4[(uint)bVar13 * -2 + 0x12];
            pCVar9 = this_ptr;
            *(float *)((int)&CStack_114 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                      (&pCVar9->base,pCVar17,fVar15,pSVar20);
          }
          pCVar3 = (this_ptr->base).victim;
          if ((pCVar3 != (CCharacter *)0x0) &&
             (EVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
             EVar10 != DEATH_STATE_ALIVE)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,7,1);
          }
          goto LAB_0058bbb2;
        }
        goto LAB_0058c173;
      }
LAB_0058c6d9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0,1);
        }
        goto LAB_0058bbb2;
      }
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_21c = *(float *)&(pCVar3->base).field_0x20 -
                     *(float *)&(this_ptr->base).base.base.field_0x20;
        fStack_218 = *(float *)&(pCVar3->base).field_0x24 -
                     *(float *)&(this_ptr->base).base.base.field_0x24;
        fStack_214 = *(float *)&(pCVar3->base).field_0x28 -
                     *(float *)&(this_ptr->base).base.base.field_0x28;
        fStack_b4 = fStack_21c;
        afStack_d4[(uint)bVar13 * -2 + 9] = afStack_230[(uint)bVar13 * -2 + 6];
        afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        fStack_40 = SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
        if (((this_ptr->base).guard_distance < fStack_40) || ((float)_DAT_005ee702 < fStack_40)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0,1);
          goto LAB_0058bbb2;
        }
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
      if ((iVar7 == 0) || (uStack_1c != 0xf)) {
        pCStack_20 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            _DAT_01d046a0 = "..\\core\\werewolf.cpp";
            _DAT_01d046a4 = 0x1ad;
            core_main_c_FUN_004e4500();
          }
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            core_actor_cpp_FUN_00408de0();
            afStack_260[2] = afStack_230[2];
            afStack_260[(uint)bVar13 * -2 + 3] = afStack_230[(uint)bVar13 * -2 + 3];
            afStack_260[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
            if (0.0 <= fStack_250) {
              core_actor_cpp_FUN_00408de0();
              uStack_c0 = afStack_d4[2];
              afStack_d4[(uint)bVar13 * -2 + 6] = afStack_d4[(uint)bVar13 * -2 + 3];
              afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                   afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
              if (0.0 <= fStack_b8) {
                pCVar3 = (this_ptr->base).victim;
                pCVar4 = (CCharacter *)this_ptr->alpha1;
                fStack_1c8 = *(float *)&(pCVar3->base).field_0x20 -
                             *(float *)&(pCVar4->base).field_0x20;
                afStack_1c4[0] =
                     *(float *)&(pCVar3->base).field_0x24 - *(float *)&(pCVar4->base).field_0x24;
                afStack_1c4[1] =
                     *(float *)&(pCVar3->base).field_0x28 - *(float *)&(pCVar4->base).field_0x28;
                fStack_9c = fStack_1c8;
                afStack_d4[(uint)bVar13 * -2 + 0xf] = afStack_1c4[(uint)bVar13 * -2];
                afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                     afStack_1c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
                fVar15 = fStack_9c * fStack_9c;
                pCStack_44 = pCVar4;
                pCVar4 = (CCharacter *)this_ptr->alpha2;
                fStack_2c4 = *(float *)&(pCVar3->base).field_0x20 -
                             *(float *)&(pCVar4->base).field_0x20;
                fStack_2c0 = *(float *)&(pCVar3->base).field_0x24 -
                             *(float *)&(pCVar4->base).field_0x24;
                fStack_2bc = *(float *)&(pCVar3->base).field_0x28 -
                             *(float *)&(pCVar4->base).field_0x28;
                fStack_390 = fStack_2c4;
                afStack_3a4[(uint)bVar13 * -2 + 6] = afStack_308[(uint)bVar13 * -2 + 0x12];
                afStack_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                     afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
                pCStack_20 = pCStack_44;
                if (SQRT(fStack_94 * fStack_94 + fVar15 + fStack_98 * fStack_98) <=
                    SQRT(fStack_388 * fStack_388 + fStack_390 * fStack_390 + fStack_38c * fStack_38c
                        )) {
                  pCStack_20 = pCVar4;
                  goto LAB_0058c8b4;
                }
              }
              else {
                pCStack_20 = (CCharacter *)this_ptr->alpha2;
              }
            }
            else {
              pCStack_20 = (CCharacter *)this_ptr->alpha1;
            }
          }
LAB_0058c8b4:
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            fStack_264 = *(float *)&(pCStack_20->base).field_0x20 -
                         *(float *)&(this_ptr->base).base.base.field_0x20;
            afStack_260[0] =
                 *(float *)&(pCStack_20->base).field_0x24 -
                 *(float *)&(this_ptr->base).base.base.field_0x24;
            afStack_260[1] =
                 *(float *)&(pCStack_20->base).field_0x28 -
                 *(float *)&(this_ptr->base).base.base.field_0x28;
            fStack_234 = fStack_264;
            afStack_230[(uint)bVar13 * -2] = afStack_260[(uint)bVar13 * -2];
            afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_260[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            if (SQRT(afStack_230[1] * afStack_230[1] +
                     fStack_234 * fStack_234 + afStack_230[0] * afStack_230[0]) <
                (float)_DAT_005ee70a) {
              iVar7 = this_ptr->phase + 1;
              this_ptr->phase = iVar7;
              if (3 < iVar7) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 0x41200000;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) &&
                  (iVar7 = this_ptr->phase + 1, this_ptr->phase = iVar7, 3 < iVar7)) {
            this_ptr->phase = 0;
          }
        }
        pCVar3 = pCStack_20;
        fStack_268 = 0x40400000;
        fStack_54 = 0x40400000;
        uVar21 = 0x3e32b8c23f000000;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        uStack_270 = 0;
        uStack_26c = 0;
        path_map = (*((pCStack_20->base).vtable._ub)->getPathMap)(&pCStack_20->base);
        puVar12 = &(pCVar3->base).field_0x20;
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,(CVector3f *)puVar12,path_map,(CVector3f *)uVar21,
                           (float)((ulonglong)uVar21 >> 0x20),in_stack_fffffb38);
        if (iVar7 < 0) {
          engine_console_cpp_FUN_00436710();
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0,1);
        }
        else if (iVar7 < 1) {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
          if (iVar7 == 0) {
            fStack_a8 = *(float *)puVar12 - *(float *)&(this_ptr->base).base.base.field_0x20;
            fStack_a4 = *(float *)&(pCVar3->base).field_0x24 -
                        *(float *)&(this_ptr->base).base.base.field_0x24;
            fStack_a0 = *(float *)&(pCVar3->base).field_0x28 -
                        *(float *)&(this_ptr->base).base.base.field_0x28;
            fStack_330 = fStack_a8;
            afStack_350[(uint)bVar13 * -2 + 9] = afStack_d4[(uint)bVar13 * -2 + 0xc];
            afStack_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
                 afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
            if (afStack_3a4 + 0x11 != afStack_350 + 8) {
              fStack_360 = fStack_330;
              fStack_35c = fStack_32c;
              fStack_358 = fStack_328;
            }
            fStack_38 = SQRT(fStack_358 * fStack_358 +
                             fStack_360 * fStack_360 + fStack_35c * fStack_35c);
            fStack_2c = 20.0;
            if (this_ptr->type == WEREWOLF_TYPE_TRAIN_ALPHA) {
              fStack_2c = 10.0;
            }
            if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
              fStack_2c = 10.0;
            }
            pCStack_48 = (CMotionController *)&(this_ptr->base).base.model;
            if (fStack_2c < fStack_38) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              uStack_294 = uStack_1b0;
              afStack_290[(uint)bVar13 * -2] = afStack_1ac[(uint)bVar13 * -2];
              afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                   afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
              fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
              if (ABS(fStack_14) < (float)_DAT_005ee71a) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_48,8,1);
                iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.85);
                if (iVar7 != 0) {
                  core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(this_ptr);
                }
                for (iVar7 = 0; iVar7 < g_CDemonSetPtr->enemy_count; iVar7 = iVar7 + 1) {
                  pCVar9 = (CWerewolf *)core_actor_cpp_castToClassHash_FUN_0040c8f0();
                  if (((pCVar9 != (CWerewolf *)0x0) && (pCVar9 != this_ptr)) &&
                     (iVar11 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar11 + 0x24) == 8)) {
                    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
                    if (iVar7 == 1) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + _DAT_005ee72a;
                    }
                    if (iVar7 == 2) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + _DAT_005ee72e;
                    }
                    break;
                  }
                }
              }
            }
            else if ((fStack_38 < 0x40400000 * _DAT_005ee712) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_48,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_0058bbb2;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,2,1);
            }
            if (iVar7 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,3,1);
            }
            if (iVar7 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.6);
            if (iVar7 != 0) {
              core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(this_ptr);
            }
          }
        }
        fVar15 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar15;
        if (fVar15 < 0.0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(this_ptr);
        }
        goto LAB_0058bbb2;
      }
LAB_0058c6b6:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0,1);
    }
    else {
      pCStack_3c = (CMotionController *)&(this_ptr->base).base.model;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_420);
        fStack_41c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
        pCStack_3ec = this_ptr;
        pCStack_3e8 = this_ptr;
        pSVar20 = aSStack_420;
        fVar15 = 0.4;
        fStack_14 = fStack_41c;
        core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_24 + this_ptr->bone_indices[2] * 0x30);
        pfVar18 = afStack_164 + 8;
        afStack_144[0] = (float)uStack_2d0;
        afStack_164[(uint)bVar13 * -2 + 9] = afStack_308[(uint)bVar13 * -2 + 0xf];
        afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar18);
        pCVar17 = &CStack_e4;
        CStack_e4.x = fStack_108;
        *(float *)((int)&CStack_e4 + (uint)bVar13 * -8 + 4) = afStack_104[(uint)bVar13 * -2];
        pCVar9 = this_ptr;
        *(float *)((int)&CStack_e4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             afStack_104[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_3c,7,1);
        }
        goto LAB_0058bbb2;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_0058bbb2;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && ((this_ptr->base).pool_me == 0)) &&
             (*(int *)&(this_ptr->base).base.base.field_0xdc == 0)) {
            core_skeleton_cpp_FUN_005469a0(pCStack_3c);
            uStack_198 = uStack_6c;
            afStack_194[(uint)bVar13 * -2] = afStack_d4[(uint)bVar13 * -2 + 0x1b];
            afStack_194[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
            core_actor_cpp_FUN_00408d70(this_ptr);
            EVar19 = BLOOD_TYPE_RED;
            pCVar17 = &CStack_fc;
            CStack_fc.x = fStack_180;
            *(float *)((int)&CStack_fc + (uint)bVar13 * -8 + 4) = afStack_194[(uint)bVar13 * -2 + 6]
            ;
            this_ptr_01 = g_CGorePtr;
            *(float *)((int)&CStack_fc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 afStack_194[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
            core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar17,EVar19);
            (this_ptr->base).pool_me = 1;
          }
          goto LAB_0058bbb2;
        }
        if (*(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4) != (this_ptr->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_45c);
          fStack_458 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
          pCStack_428 = this_ptr;
          pCStack_424 = this_ptr;
          pSVar20 = aSStack_45c;
          fVar15 = 1.0;
          fStack_14 = fStack_458;
          core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_24 + this_ptr->bone_indices[3] * 0x30);
          pfVar18 = afStack_260 + 5;
          afStack_24c[0] = (float)uStack_78;
          afStack_260[(uint)bVar13 * -2 + 6] = afStack_d4[(uint)bVar13 * -2 + 0x18];
          afStack_260[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
          core_actor_cpp_FUN_00408d70(this_ptr,pfVar18);
          pCVar17 = &CStack_240;
          CStack_240.x = fStack_384;
          *(float *)((int)&CStack_240 + (uint)bVar13 * -8 + 4) = afStack_3a4[(uint)bVar13 * -2 + 9];
          pCVar9 = this_ptr;
          *(float *)((int)&CStack_240 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               afStack_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
          pSVar20 = aSStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_24 + this_ptr->bone_indices[2] * 0x30);
          pfVar18 = afStack_3a4 + 2;
          afStack_3a4[2] = (float)uStack_36c;
          afStack_3a4[(uint)bVar13 * -2 + 3] = afStack_3a4[(uint)bVar13 * -2 + 0xf];
          afStack_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
               afStack_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
          core_actor_cpp_FUN_00408d70(this_ptr,pfVar18);
          pCVar17 = &CStack_210;
          CStack_210.x = fStack_f0;
          *(float *)((int)&CStack_210 + (uint)bVar13 * -8 + 4) = afStack_ec[(uint)bVar13 * -2];
          pCVar9 = this_ptr;
          *(float *)((int)&CStack_210 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               afStack_ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
          pSVar20 = aSStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_24 + this_ptr->bone_indices[1] * 0x30);
          pfVar18 = afStack_308 + 0xb;
          afStack_2dc[0] = (float)uStack_33c;
          afStack_308[(uint)bVar13 * -2 + 0xc] = afStack_350[(uint)bVar13 * -2 + 6];
          afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
               afStack_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          core_actor_cpp_FUN_00408d70(this_ptr,pfVar18);
          pCVar17 = &CStack_1f8;
          CStack_1f8.x = afStack_164[2];
          *(float *)((int)&CStack_1f8 + (uint)bVar13 * -8 + 4) = afStack_164[(uint)bVar13 * -2 + 3];
          pCVar9 = this_ptr;
          *(float *)((int)&CStack_1f8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
        }
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,7,1);
        }
LAB_0058c173:
        if ((this_ptr->base).victim != *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_3e4);
          fStack_3e0 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
          pCStack_3b0 = this_ptr;
          pCStack_3ac = this_ptr;
          pSVar20 = aSStack_3e4;
          fVar15 = 0.4;
          fStack_14 = fStack_3e0;
          core_xform_cpp_FUN_00591530
                    (&DAT_0265370c,
                     &(this_ptr->base).base.model.field_0xe80 + this_ptr->bone_indices[3] * 0x30);
          pfVar18 = afStack_308 + 0x17;
          afStack_2ac[0] = afStack_194[2];
          afStack_308[(uint)bVar13 * -2 + 0x18] = afStack_194[(uint)bVar13 * -2 + 3];
          afStack_308[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
               afStack_194[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          core_actor_cpp_FUN_00408d70(this_ptr,pfVar18);
          pCVar17 = &CStack_2a0;
          CStack_2a0.x = fStack_120;
          *(float *)((int)&CStack_2a0 + (uint)bVar13 * -8 + 4) =
               afStack_164[(uint)bVar13 * -2 + 0x12];
          pCVar9 = this_ptr;
          *(float *)((int)&CStack_2a0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar20);
        }
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,7,1);
        }
        goto LAB_0058bbb2;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_0058bbb2;
          goto LAB_0058bb9a;
        }
        goto LAB_0058c6d9;
      }
LAB_0058c0f5:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) goto LAB_0058bbb2;
        if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
          fStack_27c = *(float *)&(pCVar3->base).field_0x20 -
                       *(float *)&(this_ptr->base).base.base.field_0x20;
          fStack_278 = *(float *)&(pCVar3->base).field_0x24 -
                       *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_274 = *(float *)&(pCVar3->base).field_0x28 -
                       *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_324 = fStack_27c;
          afStack_350[(uint)bVar13 * -2 + 0xc] = afStack_290[(uint)bVar13 * -2 + 6];
          afStack_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
               afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          fStack_34 = SQRT(fStack_31c * fStack_31c +
                           fStack_324 * fStack_324 + fStack_320 * fStack_320);
          if (((this_ptr->base).guard_distance < fStack_34) || ((float)_DAT_005ee702 < fStack_34)) {
            (this_ptr->base).victim = (CCharacter *)0x0;
            goto LAB_0058bbb2;
          }
        }
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
        if ((iVar7 != 0) && (uStack_1c == 0xe)) goto LAB_0058c6b6;
        if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_0058bbb2;
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
        if (iVar7 != 0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(this_ptr);
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0xf,1);
          goto LAB_0058bbb2;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0xf,1);
        goto LAB_0058bbb2;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,1,1);
    }
    goto LAB_0058bbb2;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) {
LAB_0058bb87:
        iVar7 = 0xf;
      }
      else {
        iVar7 = 1;
      }
    }
    else {
LAB_0058be7b:
      iVar7 = 0;
    }
LAB_0058bb92:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar7,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) goto LAB_0058bb87;
      if (*(float *)&(this_ptr->base).base.field_0x2598 <=
          ABS(*(float *)&(this_ptr->base).base.field_0x2578)) {
        iVar7 = 1;
      }
      else {
        iVar7 = 8;
      }
      goto LAB_0058bb92;
    }
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_0058be7b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
LAB_0058bb9a:
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
LAB_0058bbb2:
  if ((uStack_1c == 0x13) && ((this_ptr->base).base.was_rendered_opaque != 0)) {
    iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar7 == 0) {
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar8;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  }
  fStack_28 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    fStack_28 = 0.75;
  }
  dVar5 = _DAT_005ee73a;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar5 = _DAT_005ee732;
  }
  *(float *)&(this_ptr->base).base.field_0x3434 = fStack_28 * (float)dVar5;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar7 = core_motion_cpp_FUN_005035c0();
  iVar7 = *(int *)(iVar7 + 0x24);
  if (((((iVar7 != 0xd) && (iVar7 != 0)) && (iVar7 != 0xe)) && (iVar7 != 0x14)) ||
     (*(int *)&(this_ptr->base).base.base.field_0xdc != 0)) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar9 = (CWerewolf *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar9 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_12c = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_128 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_124 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_84 = fStack_12c;
    afStack_d4[(uint)bVar13 * -2 + 0x15] = afStack_164[(uint)bVar13 * -2 + 0xf];
    afStack_d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    puVar12 = &(this_ptr->base).base.model.field_0x2254;
    fStack_150 = fStack_84 + *(float *)puVar12;
    fStack_14c = fStack_80 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_148 = fStack_7c + *(float *)&(this_ptr->base).base.model.field_0x225c;
    afStack_290[2] = fStack_150;
    afStack_290[(uint)bVar13 * -2 + 3] = afStack_164[(uint)bVar13 * -2 + 6];
    afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    puVar1 = &(this_ptr->base).base.field_0x257c;
    fStack_138 = afStack_290[2] + *(float *)puVar1;
    fStack_134 = afStack_290[3] + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_130 = fStack_280 + *(float *)&(this_ptr->base).base.field_0x2584;
    CStack_174.x = fStack_138;
    *(float *)((int)&CStack_174 + (uint)bVar13 * -8 + 4) = afStack_164[(uint)bVar13 * -2 + 0xc];
    *(float *)((int)&CStack_174 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar12 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_174);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  core_werewolf_cpp_FUN_0058dd00();
  this_ptr->eye_glow_phase = delta_time * (float)_DAT_005ee742 + this_ptr->eye_glow_phase;
  return;
}
