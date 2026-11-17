// Name: core_werewolf.cpp_CWerewolf_process_FUN_0058b950
// Address: 0058b950
// Address Range: [[0058b950, 0058d01b]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_0058b950(CWerewolf *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_0058b950(CWerewolf *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  int iVar6;
  uint uVar7;
  SMotion *pSVar8;
  CWerewolf *pCVar9;
  EDeathState EVar10;
  CDemonActor *pCVar11;
  CPathMap *path_map;
  CLocation *target_pos;
  int iVar12;
  byte bVar13;
  double dVar14;
  float afStackY_1390 [937];
  float fVar15;
  EBloodType EVar16;
  CVector3f *pCVar17;
  CGore *this_ptr_00;
  float max_value;
  SDamageInfo *pSVar18;
  ulonglong uVar19;
  float in_stack_fffffb38;
  SDamageInfo SStack_498;
  SDamageInfo SStack_45c;
  SDamageInfo SStack_420;
  SDamageInfo SStack_3e4;
  CVector3f CStack_3a8;
  CVector3f CStack_39c;
  float fStack_390;
  float afStack_38c [2];
  CVector3f CStack_384;
  CVector3f CStack_378;
  CVector3f CStack_36c;
  CVector3f CStack_360;
  CVector3f CStack_354;
  CVector3f CStack_348;
  CVector3f CStack_33c;
  CVector3f CStack_330;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  CVector3f CStack_318;
  CVector3f CStack_30c;
  CVector3f CStack_300;
  CVector3f CStack_2f4;
  CVector3f CStack_2e8;
  CVector3f CStack_2dc;
  CVector3f CStack_2d0;
  float fStack_2c4;
  float afStack_2c0 [2];
  CVector3f CStack_2b8;
  CVector3f CStack_2ac;
  CVector3f CStack_2a0;
  float fStack_294;
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
  CVector3f CStack_24c;
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [2];
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [2];
  CVector3f CStack_210;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  float fStack_1c8;
  float afStack_1c4 [2];
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  CVector3f CStack_198;
  CVector3f CStack_18c;
  CVector3f CStack_180;
  CVector3f CStack_174;
  CVector3f CStack_168;
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [2];
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [4];
  float fStack_124;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [4];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f CStack_78;
  CVector3f CStack_6c;
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
  CDeformableModelInstance *pCStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
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
  pCStack_18 = &(this_ptr->base).base.model;
  while (pCVar1 = pCStack_18, 0.0 < afStack_50[0]) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCStack_18->base,afStack_50);
    if (uVar7 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar7);
    }
    else if (uVar7 < 0xb) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                (pCVar1,this_ptr->bone_indices[3],&CStack_2f4);
      pCVar17 = &CStack_30c;
      CStack_30c.x = CStack_2f4.x;
      *(uint *)((int)&CStack_30c + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_2f4 + (uint)bVar13 * -8 + 4);
      *(uint *)((int)&CStack_30c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_2f4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar17,&CStack_2e8);
      max_value = 12.0;
      fVar15 = 8.0;
      CStack_318.x = CStack_2e8.x;
      *(uint *)((int)&CStack_318 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar13 * -8 + 4);
      *(uint *)((int)&CStack_318 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar15,max_value);
      EVar16 = 0x58ba9c;
      dVar14 = round((double)(fStack_14 * (float)0.25));
      iStack_58 = (int)ROUND(dVar14);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_318,(CVector3f *)0x0,iStack_58,EVar16);
    }
    else if (uVar7 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0
                (g_CDemonMission_PTR_00618170,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar7);
    }
  }
  fVar15 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0
            ((CCharacter *)this_ptr,delta_time * fVar15);
  if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  uVar7 = pSVar8->state_index;
  uStack_1c = uVar7;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    EVar10 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr)
    ;
    if ((EVar10 == DEATH_STATE_ALIVE) &&
       ((CHero *)(this_ptr->base).victim == g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffb2c);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar18 = (SDamageInfo *)&stack0xfffffb2c;
      fVar15 = (this_ptr->base).base.size_scale;
      pCStack_30 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      core_xform_cpp_transformVector3x4_FUN_00591530
                (&g_ZeroVector,pCStack_30 + this_ptr->bone_indices[3],&CStack_348);
      pCVar17 = &CStack_3a8;
      CStack_3a8.x = CStack_348.x;
      *(uint *)((int)&CStack_3a8 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_348 + (uint)bVar13 * -8 + 4);
      *(uint *)((int)&CStack_3a8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_348 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar17,&CStack_1e0);
      pCVar17 = &CStack_1d4;
      CStack_1d4.x = CStack_1e0.x;
      *(uint *)((int)&CStack_1d4 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar13 * -8 + 4);
      pCVar9 = this_ptr;
      *(uint *)((int)&CStack_1d4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar18 = (SDamageInfo *)&stack0xfffffb2c;
      fVar15 = (this_ptr->base).base.size_scale;
      core_xform_cpp_transformVector3x4_FUN_00591530
                (&g_ZeroVector,pCStack_30 + this_ptr->bone_indices[2],&CStack_300);
      pCVar17 = &CStack_354;
      CStack_354.x = CStack_300.x;
      *(uint *)((int)&CStack_354 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_300 + (uint)bVar13 * -8 + 4);
      *(uint *)((int)&CStack_354 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_300 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar17,&CStack_204);
      pCVar17 = &CStack_1bc;
      CStack_1bc.x = CStack_204.x;
      *(uint *)((int)&CStack_1bc + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_204 + (uint)bVar13 * -8 + 4);
      pCVar9 = this_ptr;
      *(uint *)((int)&CStack_1bc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_204 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar18 = (SDamageInfo *)&stack0xfffffb2c;
      fVar15 = (this_ptr->base).base.size_scale;
      core_xform_cpp_transformVector3x4_FUN_00591530
                (&g_ZeroVector,pCStack_30 + this_ptr->bone_indices[1],&CStack_2b8);
      pCVar17 = &CStack_378;
      CStack_378.x = CStack_2b8.x;
      *(uint *)((int)&CStack_378 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_2b8 + (uint)bVar13 * -8 + 4);
      *(uint *)((int)&CStack_378 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_2b8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar17,&CStack_d8);
      pCVar17 = &CStack_1a4;
      CStack_1a4.x = CStack_d8.x;
      *(uint *)((int)&CStack_1a4 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_d8 + (uint)bVar13 * -8 + 4);
      pCVar9 = this_ptr;
      *(uint *)((int)&CStack_1a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_d8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
    }
    pCStack_24 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_0058c0f5;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4] != (CHero *)(this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_498);
            SStack_498.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0)
            ;
            SStack_498.attacker = (CDemonActor *)this_ptr;
            SStack_498.wielder = (CDemonActor *)this_ptr;
            pSVar18 = &SStack_498;
            fVar15 = 0.4;
            fStack_14 = SStack_498.damage_amount;
            core_xform_cpp_transformVector3x4_FUN_00591530
                      (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[1],&CStack_168);
            pCVar17 = &CStack_1ec;
            CStack_1ec.x = CStack_168.x;
            *(uint *)((int)&CStack_1ec + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_168 + (uint)bVar13 * -8 + 4);
            *(uint *)((int)&CStack_1ec + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_168 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar17,&CStack_90);
            pCVar17 = &CStack_114;
            CStack_114.x = CStack_90.x;
            *(uint *)((int)&CStack_114 + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_90 + (uint)bVar13 * -8 + 4);
            pCVar9 = this_ptr;
            *(uint *)((int)&CStack_114 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_90 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                      (&pCVar9->base,pCVar17,fVar15,pSVar18);
          }
          pCVar4 = (this_ptr->base).victim;
          if ((pCVar4 != (CCharacter *)0x0) &&
             (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
             EVar10 != DEATH_STATE_ALIVE)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,7,1);
          }
          goto LAB_0058bbb2;
        }
        goto LAB_0058c173;
      }
LAB_0058c6d9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
        goto LAB_0058bbb2;
      }
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_21c = (pCVar4->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        afStack_218[0] =
             (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_218[1] =
             (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        afStack_bc[2] = fStack_21c;
        afStack_bc[(uint)bVar13 * -2 + 3] = afStack_218[(uint)bVar13 * -2];
        afStack_bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        fStack_40 = SQRT(fStack_ac * fStack_ac +
                         afStack_bc[2] * afStack_bc[2] + afStack_bc[3] * afStack_bc[3]);
        if (((this_ptr->base).guard_distance < fStack_40) || ((float)32 < fStack_40))
        {
          (this_ptr->base).victim = (CCharacter *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
          goto LAB_0058bbb2;
        }
      }
      pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if ((pCVar11 == (CDemonActor *)0x0) || (uStack_1c != 0xf)) {
        pCStack_20 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CHAR_PTR_01d046a0 = "..\\core\\werewolf.cpp";
            g_INT_01d046a4 = 0x1ad;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      (&((this_ptr->base).victim)->base,&(this_ptr->alpha1->location).position,
                       &CStack_228);
            afStack_260[2] = CStack_228.x;
            afStack_260[(uint)bVar13 * -2 + 3] =
                 *(float *)((int)&CStack_228 + (uint)bVar13 * -8 + 4);
            afStack_260[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 *(float *)((int)&CStack_228 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            if (0.0 <= fStack_250) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        (&((this_ptr->base).victim)->base,&(this_ptr->alpha2->location).position,
                         &CStack_cc);
              fStack_c0 = CStack_cc.x;
              afStack_bc[(uint)bVar13 * -2] = *(float *)((int)&CStack_cc + (uint)bVar13 * -8 + 4);
              afStack_bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                   *(float *)((int)&CStack_cc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              if (0.0 <= afStack_bc[1]) {
                pCVar4 = (this_ptr->base).victim;
                pCVar5 = (CCharacter *)this_ptr->alpha1;
                fStack_1c8 = (pCVar4->base).location.position.x - (pCVar5->base).location.position.x
                ;
                afStack_1c4[0] =
                     (pCVar4->base).location.position.y - (pCVar5->base).location.position.y;
                afStack_1c4[1] =
                     (pCVar4->base).location.position.z - (pCVar5->base).location.position.z;
                fStack_9c = fStack_1c8;
                afStack_bc[(uint)bVar13 * -2 + 9] = afStack_1c4[(uint)bVar13 * -2];
                afStack_bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
                     afStack_1c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
                fVar15 = fStack_9c * fStack_9c;
                pCStack_44 = pCVar5;
                pCVar5 = (CCharacter *)this_ptr->alpha2;
                fStack_2c4 = (pCVar4->base).location.position.x - (pCVar5->base).location.position.x
                ;
                afStack_2c0[0] =
                     (pCVar4->base).location.position.y - (pCVar5->base).location.position.y;
                afStack_2c0[1] =
                     (pCVar4->base).location.position.z - (pCVar5->base).location.position.z;
                fStack_390 = fStack_2c4;
                afStack_38c[(uint)bVar13 * -2] = afStack_2c0[(uint)bVar13 * -2];
                afStack_38c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                     afStack_2c0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
                pCStack_20 = pCStack_44;
                if (SQRT(fStack_94 * fStack_94 + fVar15 + fStack_98 * fStack_98) <=
                    SQRT(afStack_38c[1] * afStack_38c[1] +
                         fStack_390 * fStack_390 + afStack_38c[0] * afStack_38c[0])) {
                  pCStack_20 = pCVar5;
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
            fStack_264 = (pCStack_20->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            afStack_260[0] =
                 (pCStack_20->base).location.position.y -
                 (this_ptr->base).base.base.location.position.y;
            afStack_260[1] =
                 (pCStack_20->base).location.position.z -
                 (this_ptr->base).base.base.location.position.z;
            fStack_234 = fStack_264;
            afStack_230[(uint)bVar13 * -2] = afStack_260[(uint)bVar13 * -2];
            afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_260[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            if (SQRT(afStack_230[1] * afStack_230[1] +
                     fStack_234 * fStack_234 + afStack_230[0] * afStack_230[0]) <
                (float)5) {
              iVar6 = this_ptr->phase + 1;
              this_ptr->phase = iVar6;
              if (3 < iVar6) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 10.0f;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) &&
                  (iVar6 = this_ptr->phase + 1, this_ptr->phase = iVar6, 3 < iVar6)) {
            this_ptr->phase = 0;
          }
        }
        pCVar4 = pCStack_20;
        fStack_268 = 3.0f;
        fStack_54 = 3.0f;
        uVar19._0_4_ = 0.5;
        uVar19._4_4_ = 0.17453292;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uStack_270 = 0;
        uStack_26c = 0;
        path_map = (*((pCStack_20->base).vtable._ub)->getPathMap)(&pCStack_20->base);
        target_pos = &(pCVar4->base).location;
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,(CVector3f *)uVar19
                           ,SUB84(uVar19,4),in_stack_fffffb38);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
        }
        else if (iVar6 < 1) {
          pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar11 == (CDemonActor *)0x0) {
            fStack_a8 = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            fStack_a4 = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_a0 = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            CStack_330.x = fStack_a8;
            *(float *)((int)&CStack_330 + (uint)bVar13 * -8 + 4) = afStack_bc[(uint)bVar13 * -2 + 6]
            ;
            *(float *)((int)&CStack_330 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4 + 4) =
                 afStack_bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
            if (&CStack_360 != &CStack_330) {
              CStack_360.x = CStack_330.x;
              CStack_360.y = CStack_330.y;
              CStack_360.z = CStack_330.z;
            }
            fStack_38 = SQRT(CStack_360.z * CStack_360.z +
                             CStack_360.x * CStack_360.x + CStack_360.y * CStack_360.y);
            fStack_2c = 20.0;
            if (this_ptr->type == WEREWOLF_TYPE_TRAIN_ALPHA) {
              fStack_2c = 10.0;
            }
            if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
              fStack_2c = 10.0;
            }
            pCStack_48 = &(this_ptr->base).base.model.base;
            if (fStack_2c < fStack_38) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                        (&CStack_360,&CStack_1b0);
              fStack_294 = CStack_1b0.x;
              afStack_290[(uint)bVar13 * -2] = *(float *)((int)&CStack_1b0 + (uint)bVar13 * -8 + 4);
              afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                   *(float *)((int)&CStack_1b0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                    (afStack_290[0] - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fStack_14) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_48,8,1);
                iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.85);
                if (iVar6 != 0) {
                  core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(this_ptr);
                }
                iVar12 = 0;
                for (iVar6 = 0; iVar6 < g_CDemonSetPtr->enemy_count; iVar6 = iVar6 + 1) {
                  pCVar9 = (CWerewolf *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar12),
                                      g_CWerewolfClassInfo.name_hash);
                  if (((pCVar9 != (CWerewolf *)0x0) && (pCVar9 != this_ptr)) &&
                     (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                         (&(pCVar9->base).base.model.base), pSVar8->state_index == 8
                     )) {
                    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
                    if (iVar6 == 1) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + 0.2617994f;
                    }
                    if (iVar6 == 2) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + -0.2617994f;
                    }
                    break;
                  }
                  iVar12 = iVar12 + 4;
                }
              }
            }
            else if ((fStack_38 < 3.0f * 2.0f) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_48,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_0058bbb2;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
            if (iVar6 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,2,1);
            }
            if (iVar6 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,3,1);
            }
            if (iVar6 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.6);
            if (iVar6 != 0) {
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
                (&(this_ptr->base).base.model.base,0,1);
    }
    else {
      pCStack_3c = &(this_ptr->base).base.model.base;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_420);
        SStack_420.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
        SStack_420.attacker = (CDemonActor *)this_ptr;
        SStack_420.wielder = (CDemonActor *)this_ptr;
        pSVar18 = &SStack_420;
        fVar15 = 0.4;
        fStack_14 = SStack_420.damage_amount;
        core_xform_cpp_transformVector3x4_FUN_00591530
                  (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[2],&CStack_2d0);
        pCVar17 = &CStack_144;
        CStack_144.x = CStack_2d0.x;
        *(uint *)((int)&CStack_144 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&CStack_2d0 + (uint)bVar13 * -8 + 4);
        *(uint *)((int)&CStack_144 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&CStack_2d0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr,pCVar17,&CStack_108);
        pCVar17 = &CStack_e4;
        CStack_e4.x = CStack_108.x;
        *(uint *)((int)&CStack_e4 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&CStack_108 + (uint)bVar13 * -8 + 4);
        pCVar9 = this_ptr;
        *(uint *)((int)&CStack_e4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&CStack_108 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
        pCVar4 = (this_ptr->base).victim;
        if ((pCVar4 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_3c,7,1);
        }
        goto LAB_0058bbb2;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_0058bbb2;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && ((this_ptr->base).pool_me == 0)) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                      ((CDeformableModelInstance *)pCStack_3c,0,&CStack_6c);
            pCVar17 = &CStack_198;
            CStack_198.x = CStack_6c.x;
            *(uint *)((int)&CStack_198 + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_6c + (uint)bVar13 * -8 + 4);
            *(uint *)((int)&CStack_198 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_6c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar17,&CStack_180);
            EVar16 = BLOOD_TYPE_RED;
            pCVar17 = &CStack_fc;
            CStack_fc.x = CStack_180.x;
            *(uint *)((int)&CStack_fc + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_180 + (uint)bVar13 * -8 + 4);
            this_ptr_00 = g_CGorePtr;
            *(uint *)((int)&CStack_fc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_180 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar17,EVar16);
            (this_ptr->base).pool_me = 1;
          }
          goto LAB_0058bbb2;
        }
        if (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4] != (CHero *)(this_ptr->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_45c);
          SStack_45c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
          SStack_45c.attacker = (CDemonActor *)this_ptr;
          SStack_45c.wielder = (CDemonActor *)this_ptr;
          pSVar18 = &SStack_45c;
          fVar15 = 1.0;
          fStack_14 = SStack_45c.damage_amount;
          core_xform_cpp_transformVector3x4_FUN_00591530
                    (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[3],&CStack_78);
          pCVar17 = &CStack_24c;
          CStack_24c.x = CStack_78.x;
          *(uint *)((int)&CStack_24c + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_78 + (uint)bVar13 * -8 + 4);
          *(uint *)((int)&CStack_24c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_384);
          pCVar17 = &CStack_240;
          CStack_240.x = CStack_384.x;
          *(uint *)((int)&CStack_240 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_384 + (uint)bVar13 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_240 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_384 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
          pSVar18 = &SStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_transformVector3x4_FUN_00591530
                    (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[2],&CStack_36c);
          pCVar17 = &CStack_39c;
          CStack_39c.x = CStack_36c.x;
          *(uint *)((int)&CStack_39c + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_36c + (uint)bVar13 * -8 + 4);
          *(uint *)((int)&CStack_39c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_36c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_f0);
          pCVar17 = &CStack_210;
          CStack_210.x = CStack_f0.x;
          *(uint *)((int)&CStack_210 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_f0 + (uint)bVar13 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_210 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
          pSVar18 = &SStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_transformVector3x4_FUN_00591530
                    (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[1],&CStack_33c);
          pCVar17 = &CStack_2dc;
          CStack_2dc.x = CStack_33c.x;
          *(uint *)((int)&CStack_2dc + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_33c + (uint)bVar13 * -8 + 4);
          *(uint *)((int)&CStack_2dc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_33c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_15c);
          pCVar17 = &CStack_1f8;
          CStack_1f8.x = CStack_15c.x;
          *(uint *)((int)&CStack_1f8 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_15c + (uint)bVar13 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_1f8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_15c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
        }
        pCVar4 = (this_ptr->base).victim;
        if ((pCVar4 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,7,1);
        }
LAB_0058c173:
        if ((CHero *)(this_ptr->base).victim != g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_3e4);
          SStack_3e4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
          SStack_3e4.attacker = (CDemonActor *)this_ptr;
          SStack_3e4.wielder = (CDemonActor *)this_ptr;
          pSVar18 = &SStack_3e4;
          fVar15 = 0.4;
          fStack_14 = SStack_3e4.damage_amount;
          core_xform_cpp_transformVector3x4_FUN_00591530
                    (&g_ZeroVector,
                     (CMatrix3x4f *)
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices
                     [this_ptr->bone_indices[3]].m,&CStack_18c);
          pCVar17 = &CStack_2ac;
          CStack_2ac.x = CStack_18c.x;
          *(uint *)((int)&CStack_2ac + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_18c + (uint)bVar13 * -8 + 4);
          *(uint *)((int)&CStack_2ac + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_18c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_120);
          pCVar17 = &CStack_2a0;
          CStack_2a0.x = CStack_120.x;
          *(uint *)((int)&CStack_2a0 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_120 + (uint)bVar13 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_2a0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&CStack_120 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar17,fVar15,pSVar18);
        }
        pCVar4 = (this_ptr->base).victim;
        if ((pCVar4 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,7,1);
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
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 == (CCharacter *)0x0) goto LAB_0058bbb2;
        if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
          fStack_27c = (pCVar4->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          fStack_278 = (pCVar4->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          fStack_274 = (pCVar4->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_324 = fStack_27c;
          *(float *)((int)&CStack_330 + ((uint)bVar13 * -2 + 3) * 4 + 4) =
               afStack_290[(uint)bVar13 * -2 + 6];
          *(float *)((int)&CStack_330 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 4) * 4 + 4) =
               afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          fStack_34 = SQRT(fStack_31c * fStack_31c +
                           fStack_324 * fStack_324 + fStack_320 * fStack_320);
          if (((this_ptr->base).guard_distance < fStack_34) ||
             ((float)32 < fStack_34)) {
            (this_ptr->base).victim = (CCharacter *)0x0;
            goto LAB_0058bbb2;
          }
        }
        pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
        if ((pCVar11 != (CDemonActor *)0x0) && (uStack_1c == 0xe)) goto LAB_0058c6b6;
        if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_0058bbb2;
        iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
        if (iVar6 != 0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(this_ptr);
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0xf,1);
          goto LAB_0058bbb2;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0xf,1);
        goto LAB_0058bbb2;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,1,1);
    }
    goto LAB_0058bbb2;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
      if ((uVar7 == 0xe) || (uVar7 == 0xf)) {
LAB_0058bb87:
        iVar6 = 0xf;
      }
      else {
        iVar6 = 1;
      }
    }
    else {
LAB_0058be7b:
      iVar6 = 0;
    }
LAB_0058bb92:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) {
      if ((uVar7 == 0xe) || (uVar7 == 0xf)) goto LAB_0058bb87;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar6 = 1;
      }
      else {
        iVar6 = 8;
      }
      goto LAB_0058bb92;
    }
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_0058be7b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_0058bb9a:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_0058bbb2:
  if ((uStack_1c == 0x13) && ((this_ptr->base).base.was_rendered_opaque != 0)) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar6 == 0) {
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar7;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  }
  fStack_28 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    fStack_28 = 0.75;
  }
  dVar14 = 3;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar14 = 2;
  }
  (this_ptr->base).base.collision_cylinder_radius = fStack_28 * (float)dVar14;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  iVar6 = pSVar8->state_index;
  if (((((iVar6 != 0xd) && (iVar6 != 0)) && (iVar6 != 0xe)) && (iVar6 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar9 = (CWerewolf *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar9 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    afStack_134[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_134[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_124 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_84 = afStack_134[2];
    afStack_80[(uint)bVar13 * -2] = afStack_134[(uint)bVar13 * -2 + 3];
    afStack_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    pCVar17 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_150 = fStack_84 + pCVar17->x;
    afStack_14c[0] = afStack_80[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_14c[1] = afStack_80[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    afStack_290[2] = fStack_150;
    afStack_290[(uint)bVar13 * -2 + 3] = afStack_14c[(uint)bVar13 * -2];
    afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_14c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    pCVar2 = &(this_ptr->base).base.position_delta;
    fStack_138 = afStack_290[2] + pCVar2->x;
    afStack_134[0] = afStack_290[3] + (this_ptr->base).base.position_delta.y;
    afStack_134[1] = fStack_280 + (this_ptr->base).base.position_delta.z;
    CStack_174.x = fStack_138;
    *(float *)((int)&CStack_174 + (uint)bVar13 * -8 + 4) = afStack_134[(uint)bVar13 * -2];
    *(float *)((int)&CStack_174 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar17->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_174);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_0058dd00(this_ptr);
  this_ptr->eye_glow_phase = delta_time * (float)0.5 + this_ptr->eye_glow_phase;
  return;
}
