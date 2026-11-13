// Name: core_werewolf.cpp_CWerewolf_process_FUN_005af4a0
// Address: 005af4a0
// Address Range: [[005af4a0, 005b0b6b]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005af4a0(CWerewolf *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005af4a0(CWerewolf *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  CCharacter *pCVar4;
  double dVar5;
  CMotionController *pCVar6;
  int iVar7;
  uint uVar8;
  SMotion *pSVar9;
  CWerewolf *pCVar10;
  EDeathState EVar11;
  CDemonActor *pCVar12;
  CPathMap *path_map;
  CLocation *target_pos;
  int iVar13;
  byte bVar14;
  float10 fVar15;
  float afStackY_1390 [938];
  float fVar16;
  uint *puVar17;
  CVector3f *pCVar18;
  float *pfVar19;
  CGore *this_ptr_01;
  float max_value;
  EBloodType EVar20;
  SDamageInfo *pSVar21;
  ulonglong uVar22;
  float in_stack_fffffb38;
  SDamageInfo SStack_498;
  SDamageInfo SStack_45c;
  SDamageInfo SStack_420;
  SDamageInfo SStack_3e4;
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
  CMatrix3x4f *pCStack_30;
  float fStack_2c;
  float fStack_28;
  CMatrix3x4f *pCStack_24;
  CCharacter *pCStack_20;
  uint uStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar14 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    return;
  }
  if ((this_ptr->type == WEREWOLF_TYPE_FOREST) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - delta_time;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_50[0] = delta_time * (this_ptr->base).speed;
  pCStack_18 = &(this_ptr->base).base.model.base;
  while (pCVar6 = pCStack_18, 0.0 < afStack_50[0]) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_18,afStack_50);
    if (uVar8 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar8);
    }
    else if (uVar8 < 0xb) {
      core_skeleton_cpp_FUN_00569040(pCVar6,this_ptr->bone_indices[3]);
      puVar17 = &uStack_30c;
      uStack_30c = uStack_2f4;
      afStack_308[(uint)bVar14 * -2] = afStack_308[(uint)bVar14 * -2 + 6];
      afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar17);
      max_value = 12.0;
      fVar16 = 8.0;
      CStack_318.x = fStack_2e8;
      *(float *)((int)&CStack_318 + (uint)bVar14 * -8 + 4) = afStack_308[(uint)bVar14 * -2 + 9];
      *(float *)((int)&CStack_318 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar16,max_value);
      fVar15 = (float10)fStack_14 * (float10)_DAT_005f9afa;
      EVar20 = BLOOD_TYPE_RED;
      round();
      iStack_58 = (int)ROUND(fVar15);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,&CStack_318,(CVector3f *)0x0,iStack_58,EVar20);
    }
    else if (uVar8 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(0x01D2C900,this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar8);
    }
  }
  fVar16 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar16);
  if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005f9ad2;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  uVar8 = pSVar9->state_index;
  uStack_1c = uVar8;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    EVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr)
    ;
    if ((EVar11 == DEATH_STATE_ALIVE) &&
       ((this_ptr->base).victim == *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffb2c);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar21 = (SDamageInfo *)&stack0xfffffb2c;
      fVar16 = (this_ptr->base).base.size_scale;
      pCStack_30 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_30 + this_ptr->bone_indices[3]);
      puVar17 = &uStack_3a8;
      uStack_3a8 = afStack_350[2];
      afStack_3a4[(uint)bVar14 * -2] = afStack_350[(uint)bVar14 * -2 + 3];
      afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_350[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar17);
      pCVar18 = &CStack_1d4;
      CStack_1d4.x = afStack_1e8[2];
      *(float *)((int)&CStack_1d4 + (uint)bVar14 * -8 + 4) = afStack_1e8[(uint)bVar14 * -2 + 3];
      pCVar10 = this_ptr;
      *(float *)((int)&CStack_1d4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar21 = (SDamageInfo *)&stack0xfffffb2c;
      fVar16 = (this_ptr->base).base.size_scale;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_30 + this_ptr->bone_indices[2]);
      puVar17 = &uStack_354;
      uStack_354 = afStack_308[2];
      afStack_350[(uint)bVar14 * -2] = afStack_308[(uint)bVar14 * -2 + 3];
      afStack_350[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar17);
      pCVar18 = &CStack_1bc;
      CStack_1bc.x = fStack_204;
      *(float *)((int)&CStack_1bc + (uint)bVar14 * -8 + 4) = afStack_200[(uint)bVar14 * -2];
      pCVar10 = this_ptr;
      *(float *)((int)&CStack_1bc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_200[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar21 = (SDamageInfo *)&stack0xfffffb2c;
      fVar16 = (this_ptr->base).base.size_scale;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_30 + this_ptr->bone_indices[1]);
      pfVar19 = afStack_3a4 + 0xb;
      afStack_378[0] = (float)uStack_2b8;
      afStack_3a4[(uint)bVar14 * -2 + 0xc] = afStack_308[(uint)bVar14 * -2 + 0x15];
      afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
           afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
      pCVar18 = &CStack_1a4;
      CStack_1a4.x = fStack_d8;
      *(float *)((int)&CStack_1a4 + (uint)bVar14 * -8 + 4) = afStack_d4[(uint)bVar14 * -2];
      pCVar10 = this_ptr;
      *(float *)((int)&CStack_1a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21);
    }
    pCStack_24 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_005afc45;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != (this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_498);
            SStack_498.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0)
            ;
            SStack_498.attacker = (CDemonActor *)this_ptr;
            SStack_498.wielder = (CDemonActor *)this_ptr;
            pSVar21 = &SStack_498;
            fVar16 = 0.4;
            fStack_14 = SStack_498.damage_amount;
            core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_24 + this_ptr->bone_indices[1]);
            puVar17 = &uStack_1ec;
            uStack_1ec = uStack_168;
            afStack_1e8[(uint)bVar14 * -2] = afStack_164[(uint)bVar14 * -2];
            afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
            core_actor_cpp_FUN_00408b40(this_ptr,puVar17);
            pCVar18 = &CStack_114;
            CStack_114.x = fStack_90;
            *(float *)((int)&CStack_114 + (uint)bVar14 * -8 + 4) =
                 afStack_d4[(uint)bVar14 * -2 + 0x12];
            pCVar10 = this_ptr;
            *(float *)((int)&CStack_114 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                 afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                      (&pCVar10->base,pCVar18,fVar16,pSVar21);
          }
          pCVar3 = (this_ptr->base).victim;
          if ((pCVar3 != (CCharacter *)0x0) &&
             (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
             EVar11 != DEATH_STATE_ALIVE)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,7,1);
          }
          goto LAB_005af702;
        }
        goto LAB_005afcc3;
      }
LAB_005b0229:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0,1);
        }
        goto LAB_005af702;
      }
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_21c = (pCVar3->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        fStack_218 = (pCVar3->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        fStack_214 = (pCVar3->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_b4 = fStack_21c;
        afStack_d4[(uint)bVar14 * -2 + 9] = afStack_230[(uint)bVar14 * -2 + 6];
        afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
             afStack_230[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
        fStack_40 = SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
        if (((this_ptr->base).guard_distance < fStack_40) || ((float)_DAT_005f9ada < fStack_40)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0,1);
          goto LAB_005af702;
        }
      }
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if ((pCVar12 == (CDemonActor *)0x0) || (uStack_1c != 0xf)) {
        pCStack_20 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            _DAT_01d1d400 = "..\\core\\werewolf.cpp";
            _DAT_01d1d404 = 0x1ad;
            core_main_c_FUN_005030e0();
          }
          engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            core_actor_cpp_FUN_00408bb0();
            afStack_260[2] = afStack_230[2];
            afStack_260[(uint)bVar14 * -2 + 3] = afStack_230[(uint)bVar14 * -2 + 3];
            afStack_260[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
                 afStack_230[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
            if (0.0 <= fStack_250) {
              core_actor_cpp_FUN_00408bb0();
              uStack_c0 = afStack_d4[2];
              afStack_d4[(uint)bVar14 * -2 + 6] = afStack_d4[(uint)bVar14 * -2 + 3];
              afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
                   afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
              if (0.0 <= fStack_b8) {
                pCVar3 = (this_ptr->base).victim;
                pCVar4 = (CCharacter *)this_ptr->alpha1;
                fStack_1c8 = (pCVar3->base).location.position.x - (pCVar4->base).location.position.x
                ;
                afStack_1c4[0] =
                     (pCVar3->base).location.position.y - (pCVar4->base).location.position.y;
                afStack_1c4[1] =
                     (pCVar3->base).location.position.z - (pCVar4->base).location.position.z;
                fStack_9c = fStack_1c8;
                afStack_d4[(uint)bVar14 * -2 + 0xf] = afStack_1c4[(uint)bVar14 * -2];
                afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
                     afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
                fVar16 = fStack_9c * fStack_9c;
                pCStack_44 = pCVar4;
                pCVar4 = (CCharacter *)this_ptr->alpha2;
                fStack_2c4 = (pCVar3->base).location.position.x - (pCVar4->base).location.position.x
                ;
                fStack_2c0 = (pCVar3->base).location.position.y - (pCVar4->base).location.position.y
                ;
                fStack_2bc = (pCVar3->base).location.position.z - (pCVar4->base).location.position.z
                ;
                fStack_390 = fStack_2c4;
                afStack_3a4[(uint)bVar14 * -2 + 6] = afStack_308[(uint)bVar14 * -2 + 0x12];
                afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
                     afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
                pCStack_20 = pCStack_44;
                if (SQRT(fStack_94 * fStack_94 + fVar16 + fStack_98 * fStack_98) <=
                    SQRT(fStack_388 * fStack_388 + fStack_390 * fStack_390 + fStack_38c * fStack_38c
                        )) {
                  pCStack_20 = pCVar4;
                  goto LAB_005b0404;
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
LAB_005b0404:
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            fStack_264 = (pCStack_20->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            afStack_260[0] =
                 (pCStack_20->base).location.position.y -
                 (this_ptr->base).base.base.location.position.y;
            afStack_260[1] =
                 (pCStack_20->base).location.position.z -
                 (this_ptr->base).base.base.location.position.z;
            fStack_234 = fStack_264;
            afStack_230[(uint)bVar14 * -2] = afStack_260[(uint)bVar14 * -2];
            afStack_230[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_260[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
            if (SQRT(afStack_230[1] * afStack_230[1] +
                     fStack_234 * fStack_234 + afStack_230[0] * afStack_230[0]) <
                (float)_DAT_005f9ae2) {
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
        uVar22._0_4_ = 0.5;
        uVar22._4_4_ = 0.17453292;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uStack_270 = 0;
        uStack_26c = 0;
        path_map = (*((pCStack_20->base).vtable._ub)->getPathMap)(&pCStack_20->base);
        target_pos = &(pCVar3->base).location;
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,(CVector3f *)uVar22
                           ,SUB84(uVar22,4),in_stack_fffffb38);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0,1);
        }
        else if (iVar7 < 1) {
          pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c600
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar12 == (CDemonActor *)0x0) {
            fStack_a8 = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            fStack_a4 = (pCVar3->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_a0 = (pCVar3->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_330 = fStack_a8;
            afStack_350[(uint)bVar14 * -2 + 9] = afStack_d4[(uint)bVar14 * -2 + 0xc];
            afStack_350[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
                 afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
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
            pCStack_48 = &(this_ptr->base).base.model.base;
            if (fStack_2c < fStack_38) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
              uStack_294 = uStack_1b0;
              afStack_290[(uint)bVar14 * -2] = afStack_1ac[(uint)bVar14 * -2];
              afStack_290[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                   afStack_1ac[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (afStack_290[0] - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fStack_14) < (float)_DAT_005f9af2) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,8,1);
                iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.85);
                if (iVar7 != 0) {
                  core_werewolf_cpp_CWerewolf_playHowl_FUN_005b0bb0(this_ptr);
                }
                iVar13 = 0;
                for (iVar7 = 0; iVar7 < g_CDemonSetPtr->enemy_count; iVar7 = iVar7 + 1) {
                  pCVar10 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040c600
                                      (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar13),
                                       g_CWerewolfClassInfo.name_hash);
                  if (((pCVar10 != (CWerewolf *)0x0) && (pCVar10 != this_ptr)) &&
                     (pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                         (&(pCVar10->base).base.model.base),
                     pSVar9->state_index == 8)) {
                    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
                    if (iVar7 == 1) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + _DAT_005f9b02;
                    }
                    if (iVar7 == 2) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + _DAT_005f9b06;
                    }
                    break;
                  }
                  iVar13 = iVar13 + 4;
                }
              }
            }
            else if ((fStack_38 < 0x40400000 * _DAT_005f9aea) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_005af702;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,2,1);
            }
            if (iVar7 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,3,1);
            }
            if (iVar7 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.6);
            if (iVar7 != 0) {
              core_werewolf_cpp_CWerewolf_playHowl_FUN_005b0bb0(this_ptr);
            }
          }
        }
        fVar16 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar16;
        if (fVar16 < 0.0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_005b0bb0(this_ptr);
        }
        goto LAB_005af702;
      }
LAB_005b0206:
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0,1);
    }
    else {
      pCStack_3c = &(this_ptr->base).base.model.base;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_420);
        SStack_420.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
        SStack_420.attacker = (CDemonActor *)this_ptr;
        SStack_420.wielder = (CDemonActor *)this_ptr;
        pSVar21 = &SStack_420;
        fVar16 = 0.4;
        fStack_14 = SStack_420.damage_amount;
        core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_24 + this_ptr->bone_indices[2]);
        pfVar19 = afStack_164 + 8;
        afStack_144[0] = (float)uStack_2d0;
        afStack_164[(uint)bVar14 * -2 + 9] = afStack_308[(uint)bVar14 * -2 + 0xf];
        afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
             afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
        pCVar18 = &CStack_e4;
        CStack_e4.x = fStack_108;
        *(float *)((int)&CStack_e4 + (uint)bVar14 * -8 + 4) = afStack_104[(uint)bVar14 * -2];
        pCVar10 = this_ptr;
        *(float *)((int)&CStack_e4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21);
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_3c,7,1);
        }
        goto LAB_005af702;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_005af702;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && ((this_ptr->base).pool_me == 0)) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_FUN_00569040(pCStack_3c);
            uStack_198 = uStack_6c;
            afStack_194[(uint)bVar14 * -2] = afStack_d4[(uint)bVar14 * -2 + 0x1b];
            afStack_194[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c];
            core_actor_cpp_FUN_00408b40(this_ptr);
            EVar20 = BLOOD_TYPE_RED;
            pCVar18 = &CStack_fc;
            CStack_fc.x = fStack_180;
            *(float *)((int)&CStack_fc + (uint)bVar14 * -8 + 4) = afStack_194[(uint)bVar14 * -2 + 6]
            ;
            this_ptr_01 = g_CGorePtr;
            *(float *)((int)&CStack_fc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                 afStack_194[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
            core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar18,EVar20);
            (this_ptr->base).pool_me = 1;
          }
          goto LAB_005af702;
        }
        if (*(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != (this_ptr->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_45c);
          SStack_45c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
          SStack_45c.attacker = (CDemonActor *)this_ptr;
          SStack_45c.wielder = (CDemonActor *)this_ptr;
          pSVar21 = &SStack_45c;
          fVar16 = 1.0;
          fStack_14 = SStack_45c.damage_amount;
          core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_24 + this_ptr->bone_indices[3]);
          pfVar19 = afStack_260 + 5;
          afStack_24c[0] = (float)uStack_78;
          afStack_260[(uint)bVar14 * -2 + 6] = afStack_d4[(uint)bVar14 * -2 + 0x18];
          afStack_260[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
               afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
          pCVar18 = &CStack_240;
          CStack_240.x = fStack_384;
          *(float *)((int)&CStack_240 + (uint)bVar14 * -8 + 4) = afStack_3a4[(uint)bVar14 * -2 + 9];
          pCVar10 = this_ptr;
          *(float *)((int)&CStack_240 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21)
          ;
          pSVar21 = &SStack_45c;
          fVar16 = 1.0;
          core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_24 + this_ptr->bone_indices[2]);
          pfVar19 = afStack_3a4 + 2;
          afStack_3a4[2] = (float)uStack_36c;
          afStack_3a4[(uint)bVar14 * -2 + 3] = afStack_3a4[(uint)bVar14 * -2 + 0xf];
          afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
               afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
          pCVar18 = &CStack_210;
          CStack_210.x = fStack_f0;
          *(float *)((int)&CStack_210 + (uint)bVar14 * -8 + 4) = afStack_ec[(uint)bVar14 * -2];
          pCVar10 = this_ptr;
          *(float *)((int)&CStack_210 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               afStack_ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21)
          ;
          pSVar21 = &SStack_45c;
          fVar16 = 1.0;
          core_xform_cpp_FUN_005b5080(&DAT_02c8af28,pCStack_24 + this_ptr->bone_indices[1]);
          pfVar19 = afStack_308 + 0xb;
          afStack_2dc[0] = (float)uStack_33c;
          afStack_308[(uint)bVar14 * -2 + 0xc] = afStack_350[(uint)bVar14 * -2 + 6];
          afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
               afStack_350[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
          pCVar18 = &CStack_1f8;
          CStack_1f8.x = afStack_164[2];
          *(float *)((int)&CStack_1f8 + (uint)bVar14 * -8 + 4) = afStack_164[(uint)bVar14 * -2 + 3];
          pCVar10 = this_ptr;
          *(float *)((int)&CStack_1f8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21)
          ;
        }
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,7,1);
        }
LAB_005afcc3:
        if ((this_ptr->base).victim != *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_3e4);
          SStack_3e4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
          SStack_3e4.attacker = (CDemonActor *)this_ptr;
          SStack_3e4.wielder = (CDemonActor *)this_ptr;
          pSVar21 = &SStack_3e4;
          fVar16 = 0.4;
          fStack_14 = SStack_3e4.damage_amount;
          core_xform_cpp_FUN_005b5080
                    (&DAT_02c8af28,
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices
                     [this_ptr->bone_indices[3]].m);
          pfVar19 = afStack_308 + 0x17;
          afStack_2ac[0] = afStack_194[2];
          afStack_308[(uint)bVar14 * -2 + 0x18] = afStack_194[(uint)bVar14 * -2 + 3];
          afStack_308[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19] =
               afStack_194[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
          pCVar18 = &CStack_2a0;
          CStack_2a0.x = fStack_120;
          *(float *)((int)&CStack_2a0 + (uint)bVar14 * -8 + 4) =
               afStack_164[(uint)bVar14 * -2 + 0x12];
          pCVar10 = this_ptr;
          *(float *)((int)&CStack_2a0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar18,fVar16,pSVar21)
          ;
        }
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,7,1);
        }
        goto LAB_005af702;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_005af702;
          goto LAB_005af6ea;
        }
        goto LAB_005b0229;
      }
LAB_005afc45:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) goto LAB_005af702;
        if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
          fStack_27c = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          fStack_278 = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          fStack_274 = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_324 = fStack_27c;
          afStack_350[(uint)bVar14 * -2 + 0xc] = afStack_290[(uint)bVar14 * -2 + 6];
          afStack_350[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
               afStack_290[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
          fStack_34 = SQRT(fStack_31c * fStack_31c +
                           fStack_324 * fStack_324 + fStack_320 * fStack_320);
          if (((this_ptr->base).guard_distance < fStack_34) || ((float)_DAT_005f9ada < fStack_34)) {
            (this_ptr->base).victim = (CCharacter *)0x0;
            goto LAB_005af702;
          }
        }
        pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
        if ((pCVar12 != (CDemonActor *)0x0) && (uStack_1c == 0xe)) goto LAB_005b0206;
        if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_005af702;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
        if (iVar7 != 0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_005b0bb0(this_ptr);
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0xf,1);
          goto LAB_005af702;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0xf,1);
        goto LAB_005af702;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,1,1);
    }
    goto LAB_005af702;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) {
LAB_005af6d7:
        iVar7 = 0xf;
      }
      else {
        iVar7 = 1;
      }
    }
    else {
LAB_005af9cb:
      iVar7 = 0;
    }
LAB_005af6e2:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar7,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) goto LAB_005af6d7;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar7 = 1;
      }
      else {
        iVar7 = 8;
      }
      goto LAB_005af6e2;
    }
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_005af9cb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_005af6ea:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005af702:
  if ((uStack_1c == 0x13) && ((this_ptr->base).base.was_rendered_opaque != 0)) {
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar7 == 0) {
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar8;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
  }
  fStack_28 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    fStack_28 = 0.75;
  }
  dVar5 = _DAT_005f9b12;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar5 = _DAT_005f9b0a;
  }
  (this_ptr->base).base.collision_cylinder_radius = fStack_28 * (float)dVar5;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  iVar7 = pSVar9->state_index;
  if (((((iVar7 != 0xd) && (iVar7 != 0)) && (iVar7 != 0xe)) && (iVar7 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar10 = (CWerewolf *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700();
    fStack_12c = (this_ptr->base).base.velocity.x * delta_time;
    fStack_128 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_124 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_84 = fStack_12c;
    afStack_d4[(uint)bVar14 * -2 + 0x15] = afStack_164[(uint)bVar14 * -2 + 0xf];
    afStack_d4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
         afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
    pCVar18 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_150 = fStack_84 + pCVar18->x;
    fStack_14c = fStack_80 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_148 = fStack_7c + (this_ptr->base).base.model.accumulated_root_motion.z;
    afStack_290[2] = fStack_150;
    afStack_290[(uint)bVar14 * -2 + 3] = afStack_164[(uint)bVar14 * -2 + 6];
    afStack_290[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    pCVar1 = &(this_ptr->base).base.position_delta;
    fStack_138 = afStack_290[2] + pCVar1->x;
    fStack_134 = afStack_290[3] + (this_ptr->base).base.position_delta.y;
    fStack_130 = fStack_280 + (this_ptr->base).base.position_delta.z;
    CStack_174.x = fStack_138;
    *(float *)((int)&CStack_174 + (uint)bVar14 * -8 + 4) = afStack_164[(uint)bVar14 * -2 + 0xc];
    *(float *)((int)&CStack_174 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar18->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_174);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  core_werewolf_cpp_FUN_005b1850();
  this_ptr->eye_glow_phase = delta_time * (float)_DAT_005f9b1a + this_ptr->eye_glow_phase;
  return;
}
