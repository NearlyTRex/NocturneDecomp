// Name: core_tawiscara.cpp_CTawiscara_process_FUN_00594000
// Address: 00594000
// Address Range: [[00594000, 005956ce]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscara_cpp_CTawiscara_process_FUN_00594000(CTawiscara *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_tawiscara_cpp_CTawiscara_process_FUN_00594000(CTawiscara *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  int iVar6;
  uint uVar7;
  SMotion *pSVar8;
  CTawiscara *pCVar9;
  EDeathState EVar10;
  SDamageInfo *pSVar11;
  CDemonActor *pCVar12;
  CPathMap *path_map;
  CLocation *target_pos;
  int iVar13;
  byte bVar14;
  double dVar15;
  float afStackY_1390 [938];
  float fVar16;
  EBloodType blood_type;
  CVector3f *pCVar17;
  CGore *this_ptr_00;
  float max_value;
  ulonglong uVar18;
  float in_stack_fffffb3c;
  SDamageInfo SStack_498;
  SDamageInfo SStack_45c;
  SDamageInfo SStack_420;
  SDamageInfo SStack_3e4;
  float fStack_3a8;
  float afStack_3a4 [4];
  float fStack_394;
  CVector3f CStack_390;
  CVector3f CStack_384;
  CVector3f CStack_378;
  float fStack_36c;
  float afStack_368 [2];
  CVector3f CStack_360;
  float fStack_354;
  float afStack_350 [2];
  CVector3f CStack_348;
  CVector3f CStack_33c;
  CVector3f CStack_330;
  uint uStack_324;
  uint uStack_320;
  float fStack_31c;
  CVector3f CStack_318;
  CVector3f CStack_30c;
  CVector3f CStack_300;
  CVector3f CStack_2f4;
  CVector3f CStack_2e8;
  CVector3f CStack_2dc;
  CVector3f CStack_2d0;
  float fStack_2c4;
  float afStack_2c0 [4];
  float fStack_2b0;
  CVector3f CStack_2ac;
  CVector3f CStack_2a0;
  CVector3f CStack_294;
  float fStack_288;
  float afStack_284 [4];
  float fStack_274;
  CVector3f CStack_270;
  CVector3f CStack_264;
  CVector3f CStack_258;
  float fStack_24c;
  float afStack_248 [2];
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [4];
  float fStack_220;
  CVector3f CStack_21c;
  float fStack_210;
  float afStack_20c [4];
  float fStack_1fc;
  CVector3f CStack_1f8;
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  CVector3f CStack_198;
  CVector3f CStack_18c;
  CVector3f CStack_180;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [2];
  CVector3f CStack_144;
  CVector3f CStack_138;
  float fStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  int iStack_58;
  float fStack_54;
  float afStack_50 [2];
  CCharacter *pCStack_48;
  float fStack_44;
  CMotionController *pCStack_40;
  float fStack_3c;
  CMotionController *pCStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMatrix3x4f *pCStack_28;
  CMatrix3x4f *pCStack_24;
  CCharacter *pCStack_20;
  uint uStack_1c;
  CDeformableModelInstance *pCStack_18;
  SDamageInfo *pSStack_14;
  
  bVar14 = 0;
  iVar6 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar6 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[1]);
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
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_18->base,afStack_50);
    if (uVar7 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar7);
    }
    else if (uVar7 < 0xb) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                (pCVar1,this_ptr->bone_indices[3],&CStack_2e8);
      pCVar17 = &CStack_300;
      CStack_300.x = CStack_2e8.x;
      *(uint *)((int)&CStack_300 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_300 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar17,&CStack_2dc);
      max_value = 12.0;
      fVar16 = 8.0;
      CStack_1bc.x = CStack_2dc.x;
      *(uint *)((int)&CStack_1bc + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_2dc + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_1bc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_2dc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      pSStack_14 = (SDamageInfo *)
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar16,max_value);
      blood_type = 0x594153;
      dVar15 = round((double)((float)pSStack_14 * (float)0.25))
      ;
      iStack_58 = (int)ROUND(dVar15);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_1bc,(CVector3f *)0x0,iStack_58,blood_type);
    }
    else if (uVar7 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10
                (g_CDemonMission_PTR_00600530,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar7);
    }
  }
  fVar16 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar16);
  if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar1->base);
  uVar7 = pSVar8->state_index;
  uStack_1c = uVar7;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    EVar10 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr)
    ;
    if ((EVar10 == DEATH_STATE_ALIVE) &&
       ((CHero *)(this_ptr->base).victim == g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffb2c);
      pSVar11 = (SDamageInfo *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      fVar16 = (this_ptr->base).base.size_scale;
      pCStack_28 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      pSStack_14 = pSVar11;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,pCStack_28 + this_ptr->bone_indices[3],&CStack_33c);
      pCVar17 = &CStack_1d4;
      CStack_1d4.x = CStack_33c.x;
      *(uint *)((int)&CStack_1d4 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_33c + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_1d4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_33c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar17,&CStack_15c);
      pCVar17 = &CStack_1c8;
      CStack_1c8.x = CStack_15c.x;
      *(uint *)((int)&CStack_1c8 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_15c + (uint)bVar14 * -8 + 4);
      pCVar9 = this_ptr;
      *(uint *)((int)&CStack_1c8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_15c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
      pSVar11 = (SDamageInfo *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      fVar16 = (this_ptr->base).base.size_scale;
      pSStack_14 = pSVar11;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,pCStack_28 + this_ptr->bone_indices[2],&CStack_2f4);
      pCVar17 = &CStack_30c;
      CStack_30c.x = CStack_2f4.x;
      *(uint *)((int)&CStack_30c + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_2f4 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_30c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_2f4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar17,&CStack_18c);
      pCVar17 = &CStack_1b0;
      CStack_1b0.x = CStack_18c.x;
      *(uint *)((int)&CStack_1b0 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_18c + (uint)bVar14 * -8 + 4);
      pCVar9 = this_ptr;
      *(uint *)((int)&CStack_1b0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_18c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
      pSStack_14 = (SDamageInfo *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      pSVar11 = (SDamageInfo *)&stack0xfffffb2c;
      fVar16 = (this_ptr->base).base.size_scale;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,pCStack_28 + this_ptr->bone_indices[1],&CStack_e4);
      pCVar17 = &CStack_348;
      CStack_348.x = CStack_e4.x;
      *(uint *)((int)&CStack_348 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_e4 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_348 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_e4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar17,&CStack_144);
      pCVar17 = &CStack_198;
      CStack_198.x = CStack_144.x;
      *(uint *)((int)&CStack_198 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_144 + (uint)bVar14 * -8 + 4);
      pCVar9 = this_ptr;
      *(uint *)((int)&CStack_198 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_144 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
    }
    pCStack_24 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_005947a3;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14] != (CHero *)(this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_420);
            SStack_420.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0)
            ;
            SStack_420.attacker = (CDemonActor *)this_ptr;
            SStack_420.wielder = (CDemonActor *)this_ptr;
            pSVar11 = &SStack_420;
            fVar16 = 0.4;
            pSStack_14 = (SDamageInfo *)SStack_420.damage_amount;
            core_xform_cpp_transformVector3x4_FUN_00583260
                      (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[1],&CStack_6c);
            pCVar17 = &CStack_120;
            CStack_120.x = CStack_6c.x;
            *(uint *)((int)&CStack_120 + (uint)bVar14 * -8 + 4) =
                 *(uint *)((int)&CStack_6c + (uint)bVar14 * -8 + 4);
            *(uint *)((int)&CStack_120 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                 *(uint *)((int)&CStack_6c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,pCVar17,&CStack_84);
            pCVar17 = &CStack_2d0;
            CStack_2d0.x = CStack_84.x;
            *(uint *)((int)&CStack_2d0 + (uint)bVar14 * -8 + 4) =
                 *(uint *)((int)&CStack_84 + (uint)bVar14 * -8 + 4);
            pCVar9 = this_ptr;
            *(uint *)((int)&CStack_2d0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                 *(uint *)((int)&CStack_84 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                      (&pCVar9->base,pCVar17,fVar16,pSVar11);
          }
          pCVar4 = (this_ptr->base).victim;
          if ((pCVar4 != (CCharacter *)0x0) &&
             (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
             EVar10 != DEATH_STATE_ALIVE)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(this_ptr->base).base.model.base,7,1);
          }
          goto LAB_00594269;
        }
        goto LAB_00594821;
      }
LAB_00594d89:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
        goto LAB_00594269;
      }
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_f0 = (pCVar4->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        fStack_ec = (pCVar4->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y;
        fStack_e8 = (pCVar4->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z;
        fStack_234 = fStack_f0;
        afStack_230[(uint)bVar14 * -2] = afStack_104[(uint)bVar14 * -2 + 6];
        afStack_230[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
        fStack_34 = SQRT(afStack_230[1] * afStack_230[1] +
                         fStack_234 * fStack_234 + afStack_230[0] * afStack_230[0]);
        if (((this_ptr->base).guard_distance < fStack_34) || ((float)32 < fStack_34))
        {
          (this_ptr->base).victim = (CCharacter *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
          goto LAB_00594269;
        }
      }
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if ((pCVar12 == (CDemonActor *)0x0) || (uStack_1c != 0xf)) {
        pCStack_20 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CurrentFilename = "..\\core\\tawiscara.cpp";
            g_CurrentLineNumber = 428;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      (&((this_ptr->base).victim)->base,&(this_ptr->alpha1->location).position,
                       &CStack_21c);
            fStack_24c = CStack_21c.x;
            afStack_248[(uint)bVar14 * -2] = *(float *)((int)&CStack_21c + (uint)bVar14 * -8 + 4);
            afStack_248[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 *(float *)((int)&CStack_21c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            if (0.0 <= afStack_248[1]) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                        (&((this_ptr->base).victim)->base,&(this_ptr->alpha2->location).position,
                         &CStack_1e0);
              afStack_20c[2] = CStack_1e0.x;
              afStack_20c[(uint)bVar14 * -2 + 3] =
                   *(float *)((int)&CStack_1e0 + (uint)bVar14 * -8 + 4);
              afStack_20c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
                   *(float *)((int)&CStack_1e0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              if (0.0 <= fStack_1fc) {
                pCVar4 = (this_ptr->base).victim;
                pCVar5 = (CCharacter *)this_ptr->alpha1;
                fStack_354 = (pCVar4->base).location.position.x - (pCVar5->base).location.position.x
                ;
                afStack_350[0] =
                     (pCVar4->base).location.position.y - (pCVar5->base).location.position.y;
                afStack_350[1] =
                     (pCVar4->base).location.position.z - (pCVar5->base).location.position.z;
                afStack_3a4[2] = fStack_354;
                afStack_3a4[(uint)bVar14 * -2 + 3] = afStack_350[(uint)bVar14 * -2];
                afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
                     afStack_350[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
                fVar16 = afStack_3a4[2] * afStack_3a4[2];
                pCStack_48 = pCVar5;
                pCVar5 = (CCharacter *)this_ptr->alpha2;
                afStack_2c0[2] =
                     (pCVar4->base).location.position.x - (pCVar5->base).location.position.x;
                afStack_2c0[3] =
                     (pCVar4->base).location.position.y - (pCVar5->base).location.position.y;
                fStack_2b0 = (pCVar4->base).location.position.z - (pCVar5->base).location.position.z
                ;
                fStack_36c = afStack_2c0[2];
                afStack_368[(uint)bVar14 * -2] = afStack_2c0[(uint)bVar14 * -2 + 3];
                afStack_368[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                     afStack_2c0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
                pCStack_20 = pCStack_48;
                if (SQRT(fStack_394 * fStack_394 + fVar16 + afStack_3a4[3] * afStack_3a4[3]) <=
                    SQRT(afStack_368[1] * afStack_368[1] +
                         fStack_36c * fStack_36c + afStack_368[0] * afStack_368[0])) {
                  pCStack_20 = pCVar5;
                  goto LAB_00594f64;
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
LAB_00594f64:
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            fStack_2c4 = (pCStack_20->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            afStack_2c0[0] =
                 (pCStack_20->base).location.position.y -
                 (this_ptr->base).base.base.location.position.y;
            afStack_2c0[1] =
                 (pCStack_20->base).location.position.z -
                 (this_ptr->base).base.base.location.position.z;
            fStack_108 = fStack_2c4;
            afStack_104[(uint)bVar14 * -2] = afStack_2c0[(uint)bVar14 * -2];
            afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_2c0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
            if (SQRT(afStack_104[1] * afStack_104[1] +
                     fStack_108 * fStack_108 + afStack_104[0] * afStack_104[0]) <
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
        fStack_31c = 3.0f;
        fStack_54 = 3.0f;
        uVar18._0_4_ = 0.5;
        uVar18._4_4_ = 0.17453292;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uStack_324 = 0;
        uStack_320 = 0;
        path_map = (*((pCStack_20->base).vtable._ub)->getPathMap)(&pCStack_20->base);
        target_pos = &(pCVar4->base).location;
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,(CVector3f *)uVar18
                           ,SUB84(uVar18,4),in_stack_fffffb3c);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
        else if (iVar6 < 1) {
          pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar12 == (CDemonActor *)0x0) {
            afStack_230[2] =
                 (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            afStack_230[3] =
                 (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_220 = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            CStack_78.x = afStack_230[2];
            *(float *)((int)&CStack_78 + (uint)bVar14 * -8 + 4) = afStack_230[(uint)bVar14 * -2 + 3]
            ;
            *(float *)((int)&CStack_78 + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 1) * 4 + 4) =
                 afStack_230[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
            if (&CStack_1ec != &CStack_78) {
              CStack_1ec.x = CStack_78.x;
              CStack_1ec.y = CStack_78.y;
              CStack_1ec.z = CStack_78.z;
            }
            fStack_3c = SQRT(CStack_1ec.z * CStack_1ec.z +
                             CStack_1ec.x * CStack_1ec.x + CStack_1ec.y * CStack_1ec.y);
            fStack_2c = 20.0;
            if (this_ptr->type == WEREWOLF_TYPE_TRAIN_ALPHA) {
              fStack_2c = 10.0;
            }
            if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
              fStack_2c = 10.0;
            }
            pCStack_40 = &(this_ptr->base).base.model.base;
            if (fStack_2c < fStack_3c) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                        (&CStack_1ec,&CStack_1a4);
              fStack_288 = CStack_1a4.x;
              afStack_284[(uint)bVar14 * -2] = *(float *)((int)&CStack_1a4 + (uint)bVar14 * -8 + 4);
              afStack_284[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                   *(float *)((int)&CStack_1a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              pSStack_14 = (SDamageInfo *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                     (afStack_284[0] - (this_ptr->base).base.base.orient.vec.y);
              if (ABS((float)pSStack_14) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_40,8,1);
                iVar6 = core_actor_cpp_randomChance_FUN_0040cf40(0.85);
                if (iVar6 != 0) {
                  core_tawiscara_cpp_CTawiscara_playHowl_FUN_00595710(this_ptr);
                }
                iVar13 = 0;
                for (iVar6 = 0; iVar6 < g_CDemonSetPtr->enemy_count; iVar6 = iVar6 + 1) {
                  pCVar9 = (CTawiscara *)
                           core_actor_cpp_castToClassHash_FUN_0040c840
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar13),
                                      g_CTawiscaraClassInfo.name_hash);
                  if (((pCVar9 != (CTawiscara *)0x0) && (pCVar9 != this_ptr)) &&
                     (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                         (&(pCVar9->base).base.model.base), pSVar8->state_index == 8
                     )) {
                    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
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
                  iVar13 = iVar13 + 4;
                }
              }
            }
            else if ((fStack_3c < 3.0f * 2.0f) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_40,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_00594269;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            if (iVar6 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,2,1);
            }
            if (iVar6 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,3,1);
            }
            if (iVar6 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            iVar6 = core_actor_cpp_randomChance_FUN_0040cf40(0.6);
            if (iVar6 != 0) {
              core_tawiscara_cpp_CTawiscara_playHowl_FUN_00595710(this_ptr);
            }
          }
        }
        fVar16 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar16;
        if (fVar16 < 0.0) {
          core_tawiscara_cpp_CTawiscara_playHowl_FUN_00595710(this_ptr);
        }
        goto LAB_00594269;
      }
LAB_00594d66:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0,1);
    }
    else {
      pCStack_38 = &(this_ptr->base).base.model.base;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_3e4);
        SStack_3e4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
        SStack_3e4.attacker = (CDemonActor *)this_ptr;
        SStack_3e4.wielder = (CDemonActor *)this_ptr;
        pSVar11 = &SStack_3e4;
        fVar16 = 0.4;
        pSStack_14 = (SDamageInfo *)SStack_3e4.damage_amount;
        core_xform_cpp_transformVector3x4_FUN_00583260
                  (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[2],&CStack_174);
        pCVar17 = &CStack_138;
        CStack_138.x = CStack_174.x;
        *(uint *)((int)&CStack_138 + (uint)bVar14 * -8 + 4) =
             *(uint *)((int)&CStack_174 + (uint)bVar14 * -8 + 4);
        *(uint *)((int)&CStack_138 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             *(uint *)((int)&CStack_174 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar17,&CStack_90);
        pCVar17 = &CStack_a8;
        CStack_a8.x = CStack_90.x;
        *(uint *)((int)&CStack_a8 + (uint)bVar14 * -8 + 4) =
             *(uint *)((int)&CStack_90 + (uint)bVar14 * -8 + 4);
        pCVar9 = this_ptr;
        *(uint *)((int)&CStack_a8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             *(uint *)((int)&CStack_90 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
        pCVar4 = (this_ptr->base).victim;
        if ((pCVar4 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_38,7,1);
        }
        goto LAB_00594269;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_00594269;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && ((this_ptr->base).pool_me == 0)) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      ((CDeformableModelInstance *)pCStack_38,0,&CStack_c0);
            pCVar17 = &CStack_270;
            CStack_270.x = CStack_c0.x;
            *(uint *)((int)&CStack_270 + (uint)bVar14 * -8 + 4) =
                 *(uint *)((int)&CStack_c0 + (uint)bVar14 * -8 + 4);
            *(uint *)((int)&CStack_270 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                 *(uint *)((int)&CStack_c0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,pCVar17,&CStack_258);
            fVar16 = 0.0;
            pCVar17 = &CStack_b4;
            CStack_b4.x = CStack_258.x;
            *(uint *)((int)&CStack_b4 + (uint)bVar14 * -8 + 4) =
                 *(uint *)((int)&CStack_258 + (uint)bVar14 * -8 + 4);
            this_ptr_00 = g_CGorePtr;
            *(uint *)((int)&CStack_b4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
                 *(uint *)((int)&CStack_258 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar17,(EBloodType)fVar16)
            ;
            (this_ptr->base).pool_me = 1;
          }
          goto LAB_00594269;
        }
        if (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14] != (CHero *)(this_ptr->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_498);
          SStack_498.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
          SStack_498.attacker = (CDemonActor *)this_ptr;
          SStack_498.wielder = (CDemonActor *)this_ptr;
          pSVar11 = &SStack_498;
          fVar16 = 1.0;
          pSStack_14 = (SDamageInfo *)SStack_498.damage_amount;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[3],&CStack_2ac);
          pCVar17 = &CStack_240;
          CStack_240.x = CStack_2ac.x;
          *(uint *)((int)&CStack_240 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_2ac + (uint)bVar14 * -8 + 4);
          *(uint *)((int)&CStack_240 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_2ac + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_378);
          pCVar17 = &CStack_384;
          CStack_384.x = CStack_378.x;
          *(uint *)((int)&CStack_384 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_378 + (uint)bVar14 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_384 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_378 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
          pSVar11 = &SStack_498;
          fVar16 = 1.0;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[2],&CStack_360);
          pCVar17 = &CStack_d8;
          CStack_d8.x = CStack_360.x;
          *(uint *)((int)&CStack_d8 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_360 + (uint)bVar14 * -8 + 4);
          *(uint *)((int)&CStack_d8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_360 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_264);
          pCVar17 = &CStack_cc;
          CStack_cc.x = CStack_264.x;
          *(uint *)((int)&CStack_cc + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_264 + (uint)bVar14 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_cc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_264 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
          pSVar11 = &SStack_498;
          fVar16 = 1.0;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&g_ZeroVector,pCStack_24 + this_ptr->bone_indices[1],&CStack_330);
          pCVar17 = &CStack_1f8;
          CStack_1f8.x = CStack_330.x;
          *(uint *)((int)&CStack_1f8 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_330 + (uint)bVar14 * -8 + 4);
          *(uint *)((int)&CStack_1f8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_330 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_318);
          pCVar17 = &CStack_390;
          CStack_390.x = CStack_318.x;
          *(uint *)((int)&CStack_390 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_318 + (uint)bVar14 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_390 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_318 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
        }
        pCVar4 = (this_ptr->base).victim;
        if ((pCVar4 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,7,1);
        }
LAB_00594821:
        if ((CHero *)(this_ptr->base).victim != g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_45c);
          SStack_45c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
          SStack_45c.attacker = (CDemonActor *)this_ptr;
          SStack_45c.wielder = (CDemonActor *)this_ptr;
          pSVar11 = &SStack_45c;
          fVar16 = 0.4;
          pSStack_14 = (SDamageInfo *)SStack_45c.damage_amount;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&g_ZeroVector,
                     (CMatrix3x4f *)
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices
                     [this_ptr->bone_indices[3]].m,&CStack_180);
          pCVar17 = &CStack_2a0;
          CStack_2a0.x = CStack_180.x;
          *(uint *)((int)&CStack_2a0 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_180 + (uint)bVar14 * -8 + 4);
          *(uint *)((int)&CStack_2a0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_180 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar17,&CStack_114);
          pCVar17 = &CStack_294;
          CStack_294.x = CStack_114.x;
          *(uint *)((int)&CStack_294 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)&CStack_114 + (uint)bVar14 * -8 + 4);
          pCVar9 = this_ptr;
          *(uint *)((int)&CStack_294 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               *(uint *)((int)&CStack_114 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar9->base,pCVar17,fVar16,pSVar11);
        }
        pCVar4 = (this_ptr->base).victim;
        if ((pCVar4 != (CCharacter *)0x0) &&
           (EVar10 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
           EVar10 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,7,1);
        }
        goto LAB_00594269;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_00594269;
          goto LAB_00594251;
        }
        goto LAB_00594d89;
      }
LAB_005947a3:
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 == (CCharacter *)0x0) goto LAB_00594269;
        if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
          fStack_210 = (pCVar4->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          afStack_20c[0] =
               (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_20c[1] =
               (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          fStack_3a8 = fStack_210;
          afStack_3a4[(uint)bVar14 * -2] = afStack_20c[(uint)bVar14 * -2];
          afStack_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
               afStack_20c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          fStack_44 = SQRT(afStack_3a4[1] * afStack_3a4[1] +
                           fStack_3a8 * fStack_3a8 + afStack_3a4[0] * afStack_3a4[0]);
          if (((this_ptr->base).guard_distance < fStack_44) ||
             ((float)32 < fStack_44)) {
            (this_ptr->base).victim = (CCharacter *)0x0;
            goto LAB_00594269;
          }
        }
        pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
        if ((pCVar12 != (CDemonActor *)0x0) && (uStack_1c == 0xe)) goto LAB_00594d66;
        if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_00594269;
        iVar6 = core_actor_cpp_randomChance_FUN_0040cf40(0.4);
        if (iVar6 != 0) {
          core_tawiscara_cpp_CTawiscara_playHowl_FUN_00595710(this_ptr);
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0xf,1);
          goto LAB_00594269;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0xf,1);
        goto LAB_00594269;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,1,1);
    }
    goto LAB_00594269;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
      if ((uVar7 == 0xe) || (uVar7 == 0xf)) {
LAB_0059423e:
        iVar6 = 0xf;
      }
      else {
        iVar6 = 1;
      }
    }
    else {
LAB_00594529:
      iVar6 = 0;
    }
LAB_00594249:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) {
      if ((uVar7 == 0xe) || (uVar7 == 0xf)) goto LAB_0059423e;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar6 = 1;
      }
      else {
        iVar6 = 8;
      }
      goto LAB_00594249;
    }
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00594529;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_00594251:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00594269:
  if ((uStack_1c == 0x13) && ((this_ptr->base).base.was_rendered_opaque != 0)) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
    if (iVar6 == 0) {
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar7;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[1]);
  }
  fStack_30 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    fStack_30 = 0.75;
  }
  dVar15 = 3;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar15 = 2;
  }
  (this_ptr->base).base.collision_cylinder_radius = fStack_30 * (float)dVar15;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  iVar6 = pSVar8->state_index;
  if (((((iVar6 != 0xd) && (iVar6 != 0)) && (iVar6 != 0xe)) && (iVar6 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar9 = (CTawiscara *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar9 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_12c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_128[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_128[1] = (this_ptr->base).base.velocity.z * delta_time;
    afStack_104[2] = fStack_12c;
    afStack_104[(uint)bVar14 * -2 + 3] = afStack_128[(uint)bVar14 * -2];
    afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_128[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    pCVar17 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_150 = afStack_104[2] + pCVar17->x;
    afStack_14c[0] = afStack_104[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_14c[1] = fStack_f4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    afStack_284[2] = fStack_150;
    afStack_284[(uint)bVar14 * -2 + 3] = afStack_14c[(uint)bVar14 * -2];
    afStack_284[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_14c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    pCVar2 = &(this_ptr->base).base.position_delta;
    fStack_168 = afStack_284[2] + pCVar2->x;
    afStack_164[0] = afStack_284[3] + (this_ptr->base).base.position_delta.y;
    afStack_164[1] = fStack_274 + (this_ptr->base).base.position_delta.z;
    CStack_9c.x = fStack_168;
    *(float *)((int)&CStack_9c + (uint)bVar14 * -8 + 4) = afStack_164[(uint)bVar14 * -2];
    *(float *)((int)&CStack_9c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar17->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    fVar16 = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.y = fVar16;
    pCVar2->x = fVar16;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_9c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  core_tawiscara_cpp_CTawiscara_processChainConstraint_FUN_00596380(this_ptr);
  this_ptr->eye_glow_phase = delta_time * (float)0.5 + this_ptr->eye_glow_phase;
  return;
}
