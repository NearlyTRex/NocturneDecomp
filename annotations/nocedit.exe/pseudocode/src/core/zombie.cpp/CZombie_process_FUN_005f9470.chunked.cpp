// Name: core_zombie.cpp_CZombie_process_FUN_005f9470
// Address: 005f9470
// Address Range: [[005f9470, 005fb1eb]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time)

#include "nocturne.h"
/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Removing unreachable block (ram,0x005faea9) */
/* WARNING: Type propagation algorithm not settling */

typedef struct CZombie_process_Ctx {
    CZombie *this_ptr;
    float delta_time;
    CLocation *pCVar1;
    CDeformableModelInstance *pCVar2;
    CCharacter *pCVar3;
    CCharacter_full_vtable *pCVar4;
    CEnemy_full_vtable *pCVar5;
    int iVar6;
    CMotionList *pCVar7;
    uint uVar8;
    int iVar10;
    CVector3f *pCVar11;
    CZombie *pCVar12;
    EDeathState EVar13;
    CBoundingBox3D *pCVar14;
    CVector3f *pCVar15;
    SMotion *pSVar16;
    CPathMap *pCVar17;
    CDemonActor *pCVar18;
    CDoor *this_ptr_00;
    int desired_state_index;
    char *pcVar19;
    char cVar20;
    float10 fVar21;
    float10 fVar22;
    char *pcVar23;
    float fVar24;
    float fVar25;
    float max_distance;
    float fVar26;
    SDamageInfo local_3ac;
    SDamageInfo local_370;
    char local_334[32];
    CBoundingBox3D local_314;
    CBoundingBox3D local_2fc;
    CBoundingBox3D local_2e4;
    CBoundingBox3D local_2cc;
    CBoundingBox3D local_2b4;
    CVector3f local_29c;
    CVector3f local_290;
    CVector3f local_284;
    CVector3f local_278;
    CVector3f local_26c;
    float local_260;
    float local_25c;
    float local_258;
    float local_254;
    float local_250;
    float local_24c;
    CVector3f local_248;
    CVector3f local_23c;
    CVector3f local_230;
    float local_224;
    float local_220;
    float local_21c;
    CVector3f local_218;
    CVector3f local_20c;
    CVector3f local_200;
    CVector3f local_1f4;
    CVector3f local_1e8;
    float local_1dc;
    float local_1d8;
    float local_1d4;
    CVector3f local_1d0;
    CVector3f local_1c4;
    float local_1b8;
    float local_1b4;
    float local_1b0;
    float local_1ac;
    float local_1a8;
    float local_1a4;
    float local_1a0;
    uint local_19c;
    float local_198;
    CVector3f local_194;
    CVector3f local_188;
    CVector3f local_17c;
    CVector3f local_170;
    CVector3f local_164;
    CVector3f local_158;
    CVector3f local_14c;
    CVector3f local_140;
    float local_134;
    float local_130;
    float local_12c;
    CVector3f local_128;
    CVector3f local_11c;
    float local_110;
    float local_10c;
    float local_108;
    CVector3f local_104;
    CVector3f local_f8;
    CVector3f local_ec;
    CVector3f local_e0;
    CVector3f local_d4;
    CVector3f local_c8;
    float local_bc;
    float local_b8;
    float local_b4;
    CVector3f local_b0;
    CVector3f local_a4;
    double local_98;
    double local_88;
    int local_80;
    float local_7c;
    float local_78;
    float local_74;
    CVector3f *local_68;
    float local_5c;
    CDoor *local_58;
    CVector3f *local_54;
    float local_50;
    float local_4c;
    int local_48;
    float local_44;
    int local_40;
    float local_3c;
    int local_38;
    float local_34;
    float local_30;
    float local_2c;
    int local_28;
    CLocation *local_24;
    CDeformableModelInstance *local_20;
    float local_1c;
    CVector3f *local_18;
    CVector3f *local_14;
    CCharacter *iVar9;
} CZombie_process_Ctx;

// Chunk return codes for cross-boundary gotos
// 0 = normal continuation
#define GOTO_LAB_005f9504 1
#define GOTO_LAB_005f9541 2
#define GOTO_LAB_005fa18b 3
#define GOTO_LAB_005f9f22 4

// Chunk: check_0_0_check_uVar8_0 (lines 35-152 of original)
static int CZombie_process_check_0_0_check_uVar8_0(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    CCharacter *&pCVar3 = ctx->pCVar3;
    int &iVar6 = ctx->iVar6;
    uint &uVar8 = ctx->uVar8;
    int &iVar10 = ctx->iVar10;
    CVector3f *&pCVar11 = ctx->pCVar11;
    CZombie *&pCVar12 = ctx->pCVar12;
    EDeathState &EVar13 = ctx->EVar13;
    CDemonActor *&pCVar18 = ctx->pCVar18;
    float &fVar25 = ctx->fVar25;
    float &fVar26 = ctx->fVar26;
    SDamageInfo &local_3ac = ctx->local_3ac;
    CVector3f &local_29c = ctx->local_29c;
    CVector3f &local_290 = ctx->local_290;
    CVector3f &local_26c = ctx->local_26c;
    CVector3f &local_248 = ctx->local_248;
    CVector3f &local_230 = ctx->local_230;
    float &local_1a0 = ctx->local_1a0;
    uint &local_19c = ctx->local_19c;
    float &local_198 = ctx->local_198;
    CVector3f &local_188 = ctx->local_188;
    CVector3f &local_158 = ctx->local_158;
    double &local_98 = ctx->local_98;
    int &local_80 = ctx->local_80;
    float &local_74 = ctx->local_74;
    CDeformableModelInstance *&local_20 = ctx->local_20;
    CVector3f *&local_14 = ctx->local_14;

      if (uVar8 < 5) {
        if (uVar8 == 2) {
          pCVar18 = this_ptr->pickup_target;
          if (pCVar18 != (CDemonActor *)0x0) {
            this_ptr->pickup_target = (CDemonActor *)0x0;
            iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00
                              (this_ptr,this_ptr->object_shape_class);
            if (-1 < iVar6) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                        ((CCharacter *)this_ptr,iVar6,pCVar18,0.2);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,pCVar18,iVar6);
            }
          }
        }
        else {
LAB_005f9541:
          core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
        }
        return GOTO_LAB_005f9504;
      }
      if (uVar8 < 6) {
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          local_74 = 1.3f;
          local_290.x = 0.0;
          local_290.y = 0.0;
          local_290.z = 1.3f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_26c,&local_290);
          pCVar3 = (this_ptr->base).victim;
          local_1a0 = local_26c.x - (pCVar3->base).location.position.x;
          local_198 = local_26c.z - (pCVar3->base).location.position.z;
          local_19c = 0;
          if (SQRT(local_198 * local_198 + local_1a0 * local_1a0) <= 1.0) {
            local_188.y = 4.0;
            local_188.x = 0.0;
            local_188.z = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_230,&local_188);
            pCVar3 = (this_ptr->base).victim;
            local_158.x = (pCVar3->base).location.position.x;
            local_158.z = (pCVar3->base).location.position.z;
            local_158.y = local_230.y;
            core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
            iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                              (g_CDemonSetPtr,&local_230,&local_158);
            core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
            if ((iVar6 != 0) ||
               (pCVar3 = (this_ptr->base).victim,
               iVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar3,(CDemonActor *)this_ptr,0), iVar10 != 0)) {
              if (iVar6 != 0) {
                core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
              }
              return GOTO_LAB_005f9504;
            }
          }
        }
        core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
        return GOTO_LAB_005f9504;
      }
      if (uVar8 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
        return GOTO_LAB_005f9504;
      }
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (local_20,&local_29c,this_ptr->bone_indices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_248,pCVar11);
        if (this_ptr->part_indices[4] < 0) {
          pCVar3 = (this_ptr->base).victim;
          fVar25 = local_248.x - (pCVar3->base).location.position.x;
          fVar26 = local_248.z - (pCVar3->base).location.position.z;
          if ((float)1.5 < SQRT(fVar26 * fVar26 + fVar25 * fVar25)) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
            return GOTO_LAB_005f9504;
          }
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          pCVar12 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
          if (pCVar12 != this_ptr) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
            return GOTO_LAB_005f9504;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_3ac);
        local_3ac.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(15.0,25.0);
        local_3ac.attacker = (CDemonActor *)this_ptr;
        local_3ac.wielder = (CDemonActor *)this_ptr;
        pCVar3 = (this_ptr->base).victim;
        local_14 = (CVector3f *)local_3ac.damage_amount;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_3ac);
        local_98 = (double)local_3ac.damage_amount;
        if (0.0 < local_98) {
          local_80 = (int)ROUND(ROUND(local_98 * 2.5 * 0.25));
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                    (g_CGorePtr,&local_248,(CVector3f *)0x0,local_80,0);
        }
        pCVar3 = (this_ptr->base).victim;
        EVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (0 < (int)EVar13) {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        return GOTO_LAB_005f9504;
      }
      core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
    return 0;
}

// Chunk: check_0_0_check_uVar8_1 (lines 172-236 of original)
static int CZombie_process_check_0_0_check_uVar8_1(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    CCharacter *&pCVar3 = ctx->pCVar3;
    int &iVar6 = ctx->iVar6;
    CVector3f *&pCVar11 = ctx->pCVar11;
    CBoundingBox3D *&pCVar14 = ctx->pCVar14;
    CVector3f *&pCVar15 = ctx->pCVar15;
    CDemonActor *&pCVar18 = ctx->pCVar18;
    CBoundingBox3D &local_314 = ctx->local_314;
    CBoundingBox3D &local_2e4 = ctx->local_2e4;
    CVector3f &local_278 = ctx->local_278;
    CVector3f &local_23c = ctx->local_23c;
    float &local_224 = ctx->local_224;
    float &local_220 = ctx->local_220;
    float &local_21c = ctx->local_21c;
    CVector3f &local_1e8 = ctx->local_1e8;
    float &local_1dc = ctx->local_1dc;
    float &local_1d8 = ctx->local_1d8;
    float &local_1d4 = ctx->local_1d4;
    CVector3f &local_f8 = ctx->local_f8;
    CVector3f &local_ec = ctx->local_ec;
    CVector3f &local_d4 = ctx->local_d4;
    CVector3f &local_c8 = ctx->local_c8;
    CVector3f &local_b0 = ctx->local_b0;
    float &local_2c = ctx->local_2c;

      iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(this_ptr,3);
      if (iVar6 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x205;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar18 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar18 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s tossing %s\n",this_ptr,pCVar18);
        local_23c.x = 0.0;
        local_23c.y = 0.0;
        local_23c.z = 1.0;
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          pCVar18 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
          pCVar14 = (*((pCVar18->vtable)._ub)->getBoundingBox)(pCVar18,&local_2e4);
          local_224 = (pCVar14->min).x + (pCVar14->max).x;
          local_220 = (pCVar14->min).y + (pCVar14->max).y;
          local_ec.x = local_224 * 0.5f;
          local_21c = (pCVar14->min).z + (pCVar14->max).z;
          local_ec.y = local_220 * 0.5f;
          local_ec.z = local_21c * 0.5f;
          pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((this_ptr->base).base.carry_hands[iVar6].carry_actor,&local_c8,
                               &local_ec);
          pCVar3 = (this_ptr->base).victim;
          pCVar14 = (*((pCVar3->base).vtable._ub)->getBoundingBox)(&pCVar3->base,&local_314);
          local_1dc = (pCVar14->min).x + (pCVar14->max).x;
          local_1d8 = (pCVar14->min).y + (pCVar14->max).y;
          local_f8.x = local_1dc * 0.5f;
          local_1d4 = (pCVar14->min).z + (pCVar14->max).z;
          local_f8.y = local_1d8 * 0.5f;
          local_f8.z = local_1d4 * 0.5f;
          pCVar15 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              (&((this_ptr->base).victim)->base,&local_b0,&local_f8);
          local_1e8.x = pCVar15->x - pCVar11->x;
          local_1e8.y = pCVar15->y - pCVar11->y;
          local_1e8.z = pCVar15->z - pCVar11->z;
          local_2c = SQRT(local_1e8.z * local_1e8.z +
                          local_1e8.x * local_1e8.x + local_1e8.y * local_1e8.y);
          if (0.0 < local_2c) {
            pCVar11 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&local_278,&local_1e8);
            local_d4.z = 1.0 / local_2c;
            local_d4.x = pCVar11->x * local_d4.z;
            local_d4.y = pCVar11->y * local_d4.z;
            local_d4.z = local_d4.z * pCVar11->z;
            if (&local_23c != &local_d4) {
              local_23c.x = local_d4.x;
              local_23c.y = local_d4.y;
              local_23c.z = local_d4.z;
            }
          }
        }
        local_23c.x = local_23c.x * 27.0f;
        local_23c.z = local_23c.z * 27.0f;
        local_23c.y = local_23c.y * 27.0f + 5.0f;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar6,&local_23c);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    return 0;
}

// Chunk: check_0_0_else_2 (lines 244-280 of original)
static int CZombie_process_check_0_0_else_2(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    CDeformableModelInstance *&pCVar2 = ctx->pCVar2;
    int &iVar6 = ctx->iVar6;
    uint &uVar8 = ctx->uVar8;
    CVector3f *&pCVar11 = ctx->pCVar11;
    char *&pcVar19 = ctx->pcVar19;
    char &cVar20 = ctx->cVar20;
    char *&pcVar23 = ctx->pcVar23;
    auto &local_334 = ctx->local_334;
    CVector3f &local_11c = ctx->local_11c;
    CVector3f &local_104 = ctx->local_104;

 return GOTO_LAB_005f9541;
      if (uVar8 < 0x66) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar8 == 0x29a) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_11c,this_ptr->bone_indices[0]);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_104,pCVar11);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0(g_CGorePtr,&local_104,(CVector3f *)0x0,3,0)
        ;
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar6 == 0) {
          pcVar23 = "ghoul-dig-?.wav";
        }
        else {
          pcVar23 = "ghoul-eat-?.wav";
        }
        pcVar19 = local_334;
        do {
          cVar20 = *pcVar23;
          *pcVar19 = cVar20;
          if (cVar20 == '\0') break;
          cVar20 = pcVar23[1];
          pcVar23 = pcVar23 + 2;
          pcVar19[1] = cVar20;
          pcVar19 = pcVar19 + 2;
        } while (cVar20 != '\0');
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
      }
    return 0;
}

// Chunk: branch_0_check_uVar8_0_branch_0 (lines 316-359 of original)
static int CZombie_process_branch_0_check_uVar8_0_branch_0(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    float &delta_time = ctx->delta_time;
    int &iVar6 = ctx->iVar6;
    CMotionList *&pCVar7 = ctx->pCVar7;
    uint &uVar8 = ctx->uVar8;
    EDeathState &EVar13 = ctx->EVar13;
    char *&pcVar23 = ctx->pcVar23;
    int &local_38 = ctx->local_38;

        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(delta_time * (float)0.125);
        if (iVar6 != 0) {
          iVar6 = 0;
          pcVar23 = "pickass";
          pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                             (&(this_ptr->base).base.model.motion_controller);
          iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar7,pcVar23,iVar6);
          if (-1 < iVar6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0x10,1);
            return GOTO_LAB_005fa18b;
          }
        }
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if (((this_ptr->base).victim == (CCharacter *)0x0) && (local_38 != 0)) {
          EVar13 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                             (&g_HeroActors[g_LocalHeroIndex]->base);
 return GOTO_LAB_005fa18b;
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = &g_HeroActors[g_LocalHeroIndex]->base;
        }
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
          if (iVar6 == 0) {
            if (this_ptr->is_female == 0) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"zom-a0?.wav");
              this_ptr->sfx_handles[1] = uVar8;
            }
            else {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
              this_ptr->sfx_handles[1] = uVar8;
            }
          }
        }
    return 0;
}

// Chunk: branch_0_check_uVar8_0_check_uVar8_1 (lines 359-512 of original)
static int CZombie_process_branch_0_check_uVar8_0_check_uVar8_1(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    float &delta_time = ctx->delta_time;
    CDeformableModelInstance *&pCVar2 = ctx->pCVar2;
    CCharacter *&pCVar3 = ctx->pCVar3;
    int &iVar6 = ctx->iVar6;
    uint &uVar8 = ctx->uVar8;
    CVector3f *&pCVar11 = ctx->pCVar11;
    EDeathState &EVar13 = ctx->EVar13;
    CBoundingBox3D *&pCVar14 = ctx->pCVar14;
    CPathMap *&pCVar17 = ctx->pCVar17;
    CDemonActor *&pCVar18 = ctx->pCVar18;
    char &cVar20 = ctx->cVar20;
    char *&pcVar23 = ctx->pcVar23;
    float &fVar25 = ctx->fVar25;
    float &fVar26 = ctx->fVar26;
    CBoundingBox3D &local_2cc = ctx->local_2cc;
    CVector3f &local_218 = ctx->local_218;
    CVector3f &local_20c = ctx->local_20c;
    CVector3f &local_200 = ctx->local_200;
    float &local_1ac = ctx->local_1ac;
    float &local_1a8 = ctx->local_1a8;
    float &local_1a4 = ctx->local_1a4;
    CVector3f &local_194 = ctx->local_194;
    float &local_50 = ctx->local_50;
    float &local_44 = ctx->local_44;
    int &local_40 = ctx->local_40;
    int &local_38 = ctx->local_38;
    CVector3f *&local_14 = ctx->local_14;

        pCVar3 = (this_ptr->base).victim;
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((((this_ptr->base).victim == (CCharacter *)0x0) && (local_38 != 0)) &&
           (EVar13 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState
                     )(&g_HeroActors[g_LocalHeroIndex]->base), EVar13 != DEATH_STATE_ALIVE)) {
          g_CGamePtr->player_hit_flag = 1;
          (this_ptr->base).victim = &g_HeroActors[g_LocalHeroIndex]->base;
        }
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
        else if (pCVar3 == (CCharacter *)0x0) {
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
          if (iVar6 == 0) {
            if (this_ptr->is_female == 0) {
              pcVar23 = "zom-a0?.wav";
            }
            else {
              pcVar23 = "f-zombie-alert?.wav";
            }
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,pcVar23);
            this_ptr->sfx_handles[1] = uVar8;
          }
LAB_005fa85e:
          core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
        }
        else {
          cVar20 = (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                   != 0;
          if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0
             ) {
            cVar20 = cVar20 + '\x01';
          }
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          iVar6 = core_zombie_cpp_CZombie_processPickup_FUN_005fb530(this_ptr,delta_time);
          if (iVar6 == 0) {
            local_50 = 1.3f;
            local_40 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(this_ptr,1);
            if (((-1 < local_40) &&
                (pCVar18 = (this_ptr->base).base.carry_hands[local_40].carry_actor,
                pCVar18 != (CDemonActor *)0x0)) && (this_ptr->object_shape_class == 1)) {
              local_44 = 1.0;
              if (pCVar18 != (CDemonActor *)0x0) {
                pCVar14 = (*((pCVar18->vtable)._ub)->getBoundingBox)(pCVar18,&local_2cc);
                local_14 = &pCVar14->max;
                core_actor_cpp_CVector_ctor_FUN_00410340(&local_194);
                local_194.x = local_14->x - (pCVar14->min).x;
                local_194.y = local_14->y - (pCVar14->min).y;
                local_194.z = local_14->z - (pCVar14->min).z;
                local_44 = local_194.z * (float)0.5 + 1.0;
              }
              local_50 = local_44;
            }
            fVar26 = 0.34906584;
            fVar25 = 1.1;
            local_200.x = 0.0;
            local_200.z = local_50;
            pCVar11 = &local_200;
            local_200.y = 0.0;
            pCVar3 = (this_ptr->base).victim;
            pCVar17 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar17,pCVar11,
                               fVar25,fVar26);
            pCVar2 = &(this_ptr->base).base.model;
            if (iVar6 < 0) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
            else if (iVar6 < 1) {
              iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00
                                (this_ptr,this_ptr->object_shape_class);
              pCVar3 = (this_ptr->base).victim;
              local_1ac = (this_ptr->base).base.base.location.position.x -
                          (pCVar3->base).location.position.x;
              local_1a8 = (this_ptr->base).base.base.location.position.y -
                          (pCVar3->base).location.position.y;
              local_1a4 = (this_ptr->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)20) {
                pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                    ((CDemonActor *)this_ptr,&local_20c,
                                     &(((this_ptr->base).victim)->base).location.position);
                pCVar11 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                    (&local_218,pCVar11);
                if (((ABS(pCVar11->y) < (float)0.261799387791667) && (-1 < iVar6)) &&
                   (uVar8 = this_ptr->object_shape_class, 1 < uVar8)) {
                  if (uVar8 < 3) {
                    if ((this_ptr->base).base.carry_hands[iVar6].carry_actor != (CDemonActor *)0x0)
                    {
                      engine_console_cpp_CConsole_printf_FUN_00441890
                                (g_CConsolePtr,"%s lugging\n",this_ptr);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xd,1);
                    }
                  }
                  else if ((uVar8 == 3) &&
                          ((this_ptr->base).base.carry_hands[iVar6].carry_actor !=
                           (CDemonActor *)0x0)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s tossing\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&pCVar2->motion_controller,0xb,1);
                  }
                }
              }
            }
            else if (((cVar20 != '\0') && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                    (pCVar3 = (this_ptr->base).victim,
                    pCVar18 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                    pCVar18 == (CDemonActor *)0x0)) {
              if ((local_40 < 0) ||
                 ((this_ptr->base).base.carry_hands[local_40].carry_actor == (CDemonActor *)0x0)) {
                if ((local_38 == 0) ||
                   (pCVar3 = (this_ptr->base).victim,
                   EVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
                   EVar13 == DEATH_STATE_ALIVE)) {
                  iVar6 = 3;
                }
                else {
                  iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                  if (iVar6 == 0) {
                    iVar6 = 0x19;
                  }
                  else {
                    iVar6 = 0x18;
                  }
                }
              }
              else {
                iVar6 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,iVar6,1);
              (this_ptr->base).attack_cooldown = 0.8;
            }
          }
        }
    return 0;
}

// Chunk: branch_0_check_uVar8_0_check_uVar8_2 (lines 512-554 of original)
static int CZombie_process_branch_0_check_uVar8_0_check_uVar8_2(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    CCharacter *&pCVar3 = ctx->pCVar3;
    int &iVar6 = ctx->iVar6;
    EDeathState &EVar13 = ctx->EVar13;
    CBoundingBox3D *&pCVar14 = ctx->pCVar14;
    CDemonActor *&pCVar18 = ctx->pCVar18;
    CBoundingBox3D &local_2fc = ctx->local_2fc;
    CVector3f &local_1f4 = ctx->local_1f4;
    double &local_88 = ctx->local_88;
    CVector3f *&local_68 = ctx->local_68;
    CVector3f *&local_54 = ctx->local_54;
    int &local_48 = ctx->local_48;
    float &local_3c = ctx->local_3c;
    float &local_34 = ctx->local_34;
    CVector3f *&local_14 = ctx->local_14;

        if ((this_ptr->base).victim == (CCharacter *)0x0) {
LAB_005fac96:
          core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
        }
        else {
          iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(this_ptr,1);
          if ((((iVar6 < 0) ||
               (pCVar3 = (this_ptr->base).victim,
               EVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < (int)EVar13
               )) || ((this_ptr->base).base.carry_hands[iVar6].carry_actor == (CDemonActor *)0x0))
             || (pCVar3 = (this_ptr->base).victim,
                pCVar18 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                pCVar18 != (CDemonActor *)0x0)) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up swing\n",this_ptr);
            core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
          }
          else {
            pCVar18 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
            local_3c = 1.0;
            if (pCVar18 != (CDemonActor *)0x0) {
              pCVar14 = (*((pCVar18->vtable)._ub)->getBoundingBox)(pCVar18,&local_2fc);
              local_68 = &local_1f4;
              core_actor_cpp_CVector_ctor_FUN_00410340(local_68);
              local_1f4.x = (pCVar14->max).x - (pCVar14->min).x;
              local_1f4.y = (pCVar14->max).y - (pCVar14->min).y;
              local_1f4.z = (pCVar14->max).z - (pCVar14->min).z;
              local_3c = local_68->z * (float)0.5 + local_3c;
            }
            local_34 = local_3c;
            local_54 = (CVector3f *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                 (&(this_ptr->base).base.model.motion_controller);
            local_88 = (double)(float)local_54;
            local_14 = local_54;
            if ((1.0 <= local_88) && (local_88 <= 2)) {
              local_48 = 1;
            }
          }
        }
    return 0;
}

// Chunk: branch_0_else_1 (lines 579-709 of original)
static int CZombie_process_branch_0_else_1(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    float &delta_time = ctx->delta_time;
    CLocation *&pCVar1 = ctx->pCVar1;
    CDeformableModelInstance *&pCVar2 = ctx->pCVar2;
    CCharacter *&pCVar3 = ctx->pCVar3;
    CEnemy_full_vtable *&pCVar5 = ctx->pCVar5;
    int &iVar6 = ctx->iVar6;
    uint &uVar8 = ctx->uVar8;
    int &iVar10 = ctx->iVar10;
    EDeathState &EVar13 = ctx->EVar13;
    float10 &fVar21 = ctx->fVar21;
    float10 &fVar22 = ctx->fVar22;
    float &fVar25 = ctx->fVar25;
    float &fVar26 = ctx->fVar26;
    float &local_254 = ctx->local_254;
    float &local_250 = ctx->local_250;
    float &local_24c = ctx->local_24c;
    float &local_1b8 = ctx->local_1b8;
    float &local_1b4 = ctx->local_1b4;
    float &local_1b0 = ctx->local_1b0;
    float &local_134 = ctx->local_134;
    float &local_130 = ctx->local_130;
    float &local_12c = ctx->local_12c;
    float &local_78 = ctx->local_78;
    float &local_5c = ctx->local_5c;
    float &local_30 = ctx->local_30;
    int &local_28 = ctx->local_28;
    CLocation *&local_24 = ctx->local_24;
    float &local_1c = ctx->local_1c;
    CVector3f *&local_18 = ctx->local_18;
    CVector3f *&local_14 = ctx->local_14;
    CCharacter *&iVar9 = ctx->iVar9;

      pCVar1 = &(this_ptr->base).base.base.location;
      if (uVar8 < 0x18) {
        if (0xd < uVar8) {
          if (uVar8 < 0xf) {
            iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,this_ptr->rise_from_grave_condition);
            if ((iVar6 != 0) &&
               (fVar25 = this_ptr->rise_delay - delta_time, this_ptr->rise_delay = fVar25,
               fVar25 < 0.0)) {
              iVar6 = 0;
              local_28 = 0;
              this_ptr->rise_delay = this_ptr->rise_delay + 1.0;
              local_24 = pCVar1;
              for (; local_28 < g_CDemonSetPtr->character_count; local_28 = local_28 + 1) {
                iVar9 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iVar6);
                iVar10 = (*(((iVar9->base).vtable._uc)->_uc).isGrabbable)
                                   (iVar9,(CDemonActor *)this_ptr);
                if (iVar10 != 0) {
                  local_1b8 = (iVar9->base).location.position.x - (local_24->position).x;
                  local_1b4 = (iVar9->base).location.position.y - (local_24->position).y;
                  local_1b0 = (iVar9->base).location.position.z - (local_24->position).z;
                  if ((ABS(local_1b4) <= (float)10) &&
                     (local_1b4 = 0.0,
                     SQRT(local_1b0 * local_1b0 + local_1b8 * local_1b8) <=
                     (this_ptr->base).guard_distance)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&(this_ptr->base).base.model.motion_controller,0xf,1);
                    if ((CGrave *)this_ptr->grave_actor != (CGrave *)0x0) {
                      core_grave_cpp_CGrave_startAnimation_FUN_004ee790
                                ((CGrave *)this_ptr->grave_actor);
                      this_ptr->grave_actor = (CDemonActor *)0x0;
                    }
                    (this_ptr->base).guard_distance = 100.0;
                    break;
                  }
                }
                iVar6 = iVar6 + 4;
              }
            }
          }
          else if (uVar8 == 0x14) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar3 = (this_ptr->base).victim;
            if (((pCVar3 != (CCharacter *)0x0) &&
                (fVar25 = (pCVar1->position).x - (pCVar3->base).location.position.x,
                fVar26 = (this_ptr->base).base.base.location.position.z -
                         (pCVar3->base).location.position.z,
                SQRT(fVar26 * fVar26 + fVar25 * fVar25) <= (float)3)) &&
               (ABS((this_ptr->base).base.base.location.position.y -
                    (pCVar3->base).location.position.y) <= (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
          }
        }
      }
      else if ((uVar8 < 0x19) || (uVar8 < 0x1a)) {
        EVar13 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                           (&g_HeroActors[g_LocalHeroIndex]->base);
        if ((EVar13 == DEATH_STATE_ALIVE) &&
           ((*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time), (this_ptr->base).victim != (CCharacter *)0x0)) {
LAB_005fa279:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else if ((uVar8 == 0x1c) &&
              (fVar25 = this_ptr->buried_timer - delta_time, this_ptr->buried_timer = fVar25,
              fVar25 <= 0.0)) {
        pCVar5 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->buried_timer = 0.0;
        (*(pCVar5->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_254 = (pCVar1->position).x - (pCVar3->base).location.position.x;
          local_250 = (this_ptr->base).base.base.location.position.y -
                      (pCVar3->base).location.position.y;
          local_24c = (this_ptr->base).base.base.location.position.z -
                      (pCVar3->base).location.position.z;
          if (&local_134 != &local_254) {
            local_134 = local_254;
            local_130 = local_250;
            local_12c = local_24c;
          }
          local_1c = local_12c * local_12c + local_134 * local_134 + local_130 * local_130;
          local_5c = (float)(((int)local_1c >> 1) + g_FastSqrtMagic);
          if (local_5c <= (float)8) {
            local_30 = (this_ptr->base).base.collision_cylinder_top;
            if (local_30 < (this_ptr->base).base.collision_cylinder_bottom) {
              local_30 = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (local_30 < (this_ptr->base).base.collision_cylinder_bottom) {
              local_30 = (this_ptr->base).base.collision_cylinder_bottom + (float)0.5;
            }
            iVar6 = 0;
            do {
              local_78 = (float)iVar6 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (CVector3f *)iVar6;
              core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar21 = (float10)fcos((float10)local_78);
              fVar22 = (float10)fsin((float10)local_78);
              local_18 = (CVector3f *)
                         core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
                                   (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                    (this_ptr->base).base.base.location.position.z,
                                    (float)(fVar22 * (float10)0.050000000000000003),
                                    (float)(fVar21 * (float10)0.050000000000000003),
                                    (this_ptr->base).base.collision_cylinder_radius,
                                    (this_ptr->base).base.base.location.position.y +
                                    (this_ptr->base).base.collision_cylinder_bottom,
                                    (this_ptr->base).base.base.location.position.y + local_30);
              local_14 = local_18;
              core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
              if ((float)local_18 < 1.0) break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 4);
            if (3 < iVar6) goto LAB_005fa279;
            this_ptr->buried_timer = 3.0;
            (this_ptr->base).victim = (CCharacter *)0x0;
          }
        }
      }
    return 0;
}

// Chunk: branch_0_chunk_2 (lines 710-733 of original)
static int CZombie_process_branch_0_chunk_2(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    float &delta_time = ctx->delta_time;
    CCharacter *&pCVar3 = ctx->pCVar3;
    int &iVar6 = ctx->iVar6;
    CVector3f *&pCVar11 = ctx->pCVar11;
    CPathMap *&pCVar17 = ctx->pCVar17;
    float &fVar24 = ctx->fVar24;
    float &fVar25 = ctx->fVar25;
    float &max_distance = ctx->max_distance;
    float &fVar26 = ctx->fVar26;
    CVector3f &local_e0 = ctx->local_e0;
    float &local_4c = ctx->local_4c;
    float &local_34 = ctx->local_34;

      fVar25 = (this_ptr->base).speed;
      fVar26 = (float)1.57079632675;
      max_distance = 0.7853982;
      fVar24 = 3.0;
      (this_ptr->base).base.walk_step_speed = local_4c * (this_ptr->base).speed * delta_time;
      (this_ptr->base).base.turn_speed = delta_time * fVar25 * fVar26;
      local_e0.x = 0.0;
      local_e0.z = local_34;
      pCVar11 = &local_e0;
      local_e0.y = 0.0;
      pCVar3 = (this_ptr->base).victim;
      pCVar17 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar17,pCVar11,fVar24,max_distance);
      if (iVar6 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s giving up attack\n",this_ptr);
        core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    return 0;
}

// Chunk: else_2 (lines 734-763 of original)
static int CZombie_process_else_2(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    int &iVar6 = ctx->iVar6;
    uint &uVar8 = ctx->uVar8;

    uVar8 = (this_ptr->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
LAB_005f9ea6:
        if (iVar6 != 1) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(this_ptr);
        }
      }
      else {
LAB_005fa14f:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    else {
      if (uVar8 < 3) goto LAB_005f9ea6;
      if (uVar8 != 3) goto LAB_005fa14f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    return 0;
}

// Chunk: else_3 (lines 773-847 of original)
static int CZombie_process_else_3(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    float &delta_time = ctx->delta_time;
    CLocation *&pCVar1 = ctx->pCVar1;
    CCharacter *&pCVar3 = ctx->pCVar3;
    int &iVar6 = ctx->iVar6;
    int &iVar10 = ctx->iVar10;
    CVector3f *&pCVar11 = ctx->pCVar11;
    CZombie *&pCVar12 = ctx->pCVar12;
    CBoundingBox3D *&pCVar14 = ctx->pCVar14;
    CVector3f *&pCVar15 = ctx->pCVar15;
    CDoor *&this_ptr_00 = ctx->this_ptr_00;
    int &desired_state_index = ctx->desired_state_index;
    float &fVar25 = ctx->fVar25;
    CBoundingBox3D &local_2b4 = ctx->local_2b4;
    CVector3f &local_284 = ctx->local_284;
    float &local_260 = ctx->local_260;
    float &local_25c = ctx->local_25c;
    float &local_258 = ctx->local_258;
    CVector3f &local_17c = ctx->local_17c;
    CVector3f &local_170 = ctx->local_170;
    CVector3f &local_164 = ctx->local_164;
    CVector3f &local_140 = ctx->local_140;
    CVector3f &local_128 = ctx->local_128;
    float &local_110 = ctx->local_110;
    float &local_10c = ctx->local_10c;
    float &local_108 = ctx->local_108;
    float &local_bc = ctx->local_bc;
    float &local_b8 = ctx->local_b8;
    float &local_b4 = ctx->local_b4;
    CDoor *&local_58 = ctx->local_58;

    if (iVar6 != 0xf) {
      iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
      if (iVar10 != 0) {
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (pCVar12 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
           pCVar12 == this_ptr)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
        }
        (this_ptr->base).base.velocity.y =
             (this_ptr->base).base.velocity.y - delta_time * (float)32;
        local_260 = (this_ptr->base).base.velocity.x * delta_time;
        local_25c = (this_ptr->base).base.velocity.y * delta_time;
        pCVar11 = &(this_ptr->base).base.position_delta;
        local_258 = delta_time * (this_ptr->base).base.velocity.z;
        pCVar15 = &(this_ptr->base).base.model.accumulated_root_motion;
        local_110 = local_260 + pCVar11->x;
        local_10c = local_25c + (this_ptr->base).base.position_delta.y;
        local_108 = local_258 + (this_ptr->base).base.position_delta.z;
        local_284.x = local_110 + pCVar15->x;
        local_284.y = local_10c + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_284.z = local_108 + (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.position_delta.z = 0.0;
        (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
        pCVar11->x = (this_ptr->base).base.position_delta.y;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        fVar25 = (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.y = fVar25;
        pCVar15->x = fVar25;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_284);
        if ((iVar6 == 1) &&
           (this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                             (g_LastCollisionActor,g_CDoorClassInfo.name_hash),
           local_58 = this_ptr_00, this_ptr_00 != (CDoor *)0x0)) {
          pCVar14 = (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr_00,&local_2b4);
          local_bc = (pCVar14->min).x + (pCVar14->max).x;
          local_b8 = (pCVar14->min).y + (pCVar14->max).y;
          local_164.x = local_bc * 0.5f;
          local_164.y = local_b8 * 0.5f;
          local_b4 = (pCVar14->min).z + (pCVar14->max).z;
          local_164.z = local_b4 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr_00,&local_17c,&local_164);
          pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_140,&local_17c);
          pCVar11 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_128,pCVar11);
          if (ABS(pCVar11->y) < (float)0.34906585038888899) {
            iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            desired_state_index = 0x12;
            if (iVar10 != 0) {
              desired_state_index = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,desired_state_index,1);
            this_ptr->target_door = local_58;
          }
        }
      }
      return GOTO_LAB_005f9f22;
    }
    pCVar15 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_170,pCVar11);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar15->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar15->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar15->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    return 0;
}

// Chunk: branch_0 (lines 857-891 of original)
static int CZombie_process_branch_0(CZombie_process_Ctx *ctx) {
    CZombie *&this_ptr = ctx->this_ptr;
    int &iVar6 = ctx->iVar6;
    int &iVar10 = ctx->iVar10;
    float &fVar25 = ctx->fVar25;

    iVar6 = this_ptr->part_indices[5];
    if ((this_ptr->base).base.model.part_data.visibility_flags[iVar6] == 0) {
      iVar10 = this_ptr->bone_indices[10];
      fVar25 = 0.5;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],this_ptr->bone_indices[5],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],this_ptr->bone_indices[3],0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],this_ptr->bone_indices[6],0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],this_ptr->bone_indices[4],0.2);
      }
      iVar10 = this_ptr->bone_indices[0];
      fVar25 = 0.7;
      iVar6 = this_ptr->part_indices[6];
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
              ((CCharacter *)this_ptr,iVar6,iVar10,fVar25);
    if ((this_ptr->part_indices[4] < 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0)) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_indices[5],this_ptr->bone_indices[10],0.2);
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670((CCharacter *)this_ptr);
    return 0;
}

void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time)

{
  CZombie_process_Ctx _ctx_storage = {};
  CZombie_process_Ctx *ctx = &_ctx_storage;
  ctx->this_ptr = this_ptr;
  ctx->delta_time = delta_time;

    CLocation *&pCVar1 = ctx->pCVar1;
    CDeformableModelInstance *&pCVar2 = ctx->pCVar2;
    CCharacter *&pCVar3 = ctx->pCVar3;
    CCharacter_full_vtable *&pCVar4 = ctx->pCVar4;
    CEnemy_full_vtable *&pCVar5 = ctx->pCVar5;
    int &iVar6 = ctx->iVar6;
    CMotionList *&pCVar7 = ctx->pCVar7;
    uint &uVar8 = ctx->uVar8;
    int &iVar10 = ctx->iVar10;
    CVector3f *&pCVar11 = ctx->pCVar11;
    CZombie *&pCVar12 = ctx->pCVar12;
    EDeathState &EVar13 = ctx->EVar13;
    CBoundingBox3D *&pCVar14 = ctx->pCVar14;
    CVector3f *&pCVar15 = ctx->pCVar15;
    SMotion *&pSVar16 = ctx->pSVar16;
    CPathMap *&pCVar17 = ctx->pCVar17;
    CDemonActor *&pCVar18 = ctx->pCVar18;
    CDoor *&this_ptr_00 = ctx->this_ptr_00;
    int &desired_state_index = ctx->desired_state_index;
    char *&pcVar19 = ctx->pcVar19;
    char &cVar20 = ctx->cVar20;
    float10 &fVar21 = ctx->fVar21;
    float10 &fVar22 = ctx->fVar22;
    char *&pcVar23 = ctx->pcVar23;
    float &fVar24 = ctx->fVar24;
    float &fVar25 = ctx->fVar25;
    float &max_distance = ctx->max_distance;
    float &fVar26 = ctx->fVar26;
    SDamageInfo &local_3ac = ctx->local_3ac;
    SDamageInfo &local_370 = ctx->local_370;
    auto &local_334 = ctx->local_334;
    CBoundingBox3D &local_314 = ctx->local_314;
    CBoundingBox3D &local_2fc = ctx->local_2fc;
    CBoundingBox3D &local_2e4 = ctx->local_2e4;
    CBoundingBox3D &local_2cc = ctx->local_2cc;
    CBoundingBox3D &local_2b4 = ctx->local_2b4;
    CVector3f &local_29c = ctx->local_29c;
    CVector3f &local_290 = ctx->local_290;
    CVector3f &local_284 = ctx->local_284;
    CVector3f &local_278 = ctx->local_278;
    CVector3f &local_26c = ctx->local_26c;
    float &local_260 = ctx->local_260;
    float &local_25c = ctx->local_25c;
    float &local_258 = ctx->local_258;
    float &local_254 = ctx->local_254;
    float &local_250 = ctx->local_250;
    float &local_24c = ctx->local_24c;
    CVector3f &local_248 = ctx->local_248;
    CVector3f &local_23c = ctx->local_23c;
    CVector3f &local_230 = ctx->local_230;
    float &local_224 = ctx->local_224;
    float &local_220 = ctx->local_220;
    float &local_21c = ctx->local_21c;
    CVector3f &local_218 = ctx->local_218;
    CVector3f &local_20c = ctx->local_20c;
    CVector3f &local_200 = ctx->local_200;
    CVector3f &local_1f4 = ctx->local_1f4;
    CVector3f &local_1e8 = ctx->local_1e8;
    float &local_1dc = ctx->local_1dc;
    float &local_1d8 = ctx->local_1d8;
    float &local_1d4 = ctx->local_1d4;
    CVector3f &local_1d0 = ctx->local_1d0;
    CVector3f &local_1c4 = ctx->local_1c4;
    float &local_1b8 = ctx->local_1b8;
    float &local_1b4 = ctx->local_1b4;
    float &local_1b0 = ctx->local_1b0;
    float &local_1ac = ctx->local_1ac;
    float &local_1a8 = ctx->local_1a8;
    float &local_1a4 = ctx->local_1a4;
    float &local_1a0 = ctx->local_1a0;
    uint &local_19c = ctx->local_19c;
    float &local_198 = ctx->local_198;
    CVector3f &local_194 = ctx->local_194;
    CVector3f &local_188 = ctx->local_188;
    CVector3f &local_17c = ctx->local_17c;
    CVector3f &local_170 = ctx->local_170;
    CVector3f &local_164 = ctx->local_164;
    CVector3f &local_158 = ctx->local_158;
    CVector3f &local_14c = ctx->local_14c;
    CVector3f &local_140 = ctx->local_140;
    float &local_134 = ctx->local_134;
    float &local_130 = ctx->local_130;
    float &local_12c = ctx->local_12c;
    CVector3f &local_128 = ctx->local_128;
    CVector3f &local_11c = ctx->local_11c;
    float &local_110 = ctx->local_110;
    float &local_10c = ctx->local_10c;
    float &local_108 = ctx->local_108;
    CVector3f &local_104 = ctx->local_104;
    CVector3f &local_f8 = ctx->local_f8;
    CVector3f &local_ec = ctx->local_ec;
    CVector3f &local_e0 = ctx->local_e0;
    CVector3f &local_d4 = ctx->local_d4;
    CVector3f &local_c8 = ctx->local_c8;
    float &local_bc = ctx->local_bc;
    float &local_b8 = ctx->local_b8;
    float &local_b4 = ctx->local_b4;
    CVector3f &local_b0 = ctx->local_b0;
    CVector3f &local_a4 = ctx->local_a4;
    double &local_98 = ctx->local_98;
    double &local_88 = ctx->local_88;
    int &local_80 = ctx->local_80;
    float &local_7c = ctx->local_7c;
    float &local_78 = ctx->local_78;
    float &local_74 = ctx->local_74;
    CVector3f *&local_68 = ctx->local_68;
    float &local_5c = ctx->local_5c;
    CDoor *&local_58 = ctx->local_58;
    CVector3f *&local_54 = ctx->local_54;
    float &local_50 = ctx->local_50;
    float &local_4c = ctx->local_4c;
    int &local_48 = ctx->local_48;
    float &local_44 = ctx->local_44;
    int &local_40 = ctx->local_40;
    float &local_3c = ctx->local_3c;
    int &local_38 = ctx->local_38;
    float &local_34 = ctx->local_34;
    float &local_30 = ctx->local_30;
    float &local_2c = ctx->local_2c;
    int &local_28 = ctx->local_28;
    CLocation *&local_24 = ctx->local_24;
    CDeformableModelInstance *&local_20 = ctx->local_20;
    float &local_1c = ctx->local_1c;
    CVector3f *&local_18 = ctx->local_18;
    CVector3f *&local_14 = ctx->local_14;
    CCharacter *&iVar9 = ctx->iVar9;
  // param this_ptr aliased into ctx above
  // param delta_time aliased into ctx above

  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = 0;
  pcVar23 = "CHASE_2";
  local_38 = 0;
  pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&(this_ptr->base).base.model.motion_controller);
  iVar6 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar7,pcVar23,iVar6);
  if (iVar6 == 0x16) {
    local_38 = 1;
  }
  pCVar3 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  if (pCVar3 != (CCharacter *)0x0) {
    pCVar4 = (pCVar3->base).vtable._uc;
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&(this_ptr->base).base.model,&local_1d0,0);
    iVar6 = (*(pCVar4->_uc).attractActorToward)(pCVar3,(CDemonActor *)this_ptr,pCVar11);
    if (iVar6 != 0) {
      return;
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < this_ptr->pain_cooldown) {
    this_ptr->pain_cooldown = this_ptr->pain_cooldown - delta_time;
  }
  local_20 = &(this_ptr->base).base.model;
  local_7c = delta_time * (this_ptr->base).speed;
LAB_005f9504:
  pCVar2 = local_20;
  if (0.0 < local_7c) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&local_20->motion_controller,&local_7c);
    if (uVar8 < 0xb) {
      int _rc = CZombie_process_check_0_0_check_uVar8_0(ctx);
      if (_rc == GOTO_LAB_005f9504) goto LAB_005f9504;
    }
    else if (uVar8 < 0xc) {
      iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(this_ptr,2);
      if (iVar6 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x1ee;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar18 = (this_ptr->base).base.carry_hands[iVar6].carry_actor;
      if (pCVar18 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s lugging %s\n",this_ptr,pCVar18);
        local_14c.x = 0.0;
        local_14c.y = 6.0;
        local_14c.z = 17.0;
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,iVar6,&local_14c);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar8 < 0xd) {
      CZombie_process_check_0_0_check_uVar8_1(ctx);
    }
    else if (uVar8 < 0xe) {
      if (this_ptr->target_door != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00480de0(this_ptr->target_door,0.3);
        (*((this_ptr->target_door->base).vtable._ub)->playSound)
                  (&this_ptr->target_door->base,"zombie-bang-door?.wav");
        this_ptr->target_door = (CDoor *)0x0;
      }
    }
    else {
      int _rc = CZombie_process_check_0_0_else_2(ctx);
      if (_rc == GOTO_LAB_005f9541) goto LAB_005f9541;
    }
    goto LAB_005f9504;
  }
  fVar25 = (this_ptr->base).speed;
  fVar24 = (float)3.1415926535000001;
  fVar26 = (float)0.5;
  iVar6 = this_ptr->part_indices[3];
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar24 * fVar25 * fVar26;
  if (((((this_ptr->base).base.model.part_data.visibility_flags[iVar6] == 0) &&
       ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0)) ||
      ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0)) &&
     ((0.0 <= this_ptr->bleedout_timer &&
      (fVar25 = this_ptr->bleedout_timer + delta_time, this_ptr->bleedout_timer = fVar25,
      (float)6 <= fVar25)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_370);
    local_370.damage_amount = 9999.9;
    local_370.attacker = (CDemonActor *)this_ptr;
    local_370.wielder = (CDemonActor *)this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&local_370);
    this_ptr->bleedout_timer = -1.0;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar2->motion_controller);
  iVar6 = pSVar16->state_index;
  local_48 = 0;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    local_34 = -1.0;
    local_4c = 0.3;
    pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar2->motion_controller);
    uVar8 = pSVar16->state_index;
    if (uVar8 < 8) {
    if (uVar8 == 0) {
      int _rc = CZombie_process_branch_0_check_uVar8_0_branch_0(ctx);
      if (_rc == GOTO_LAB_005fa18b) goto LAB_005fa18b;
    }
    else if (uVar8 < 2) {
      CZombie_process_branch_0_check_uVar8_0_check_uVar8_1(ctx);
    }
    else if (uVar8 < 3) {
      CZombie_process_branch_0_check_uVar8_0_check_uVar8_2(ctx);
    }
      else if (uVar8 == 3) {
        pCVar3 = (this_ptr->base).victim;
        if ((pCVar3 == (CCharacter *)0x0) ||
           (EVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), 0 < (int)EVar13))
        goto LAB_005fa85e;
        pCVar3 = (this_ptr->base).victim;
        pCVar12 = (CZombie *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar12 == (CZombie *)0x0) {
          local_34 = 1.3f;
          local_4c = 3.0;
        }
        else if (pCVar12 != this_ptr) goto LAB_005fac96;
      }
    }
    else if (uVar8 < 9) {
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_a4,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_1c4,pCVar11);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_1c4,0);
        (this_ptr->base).pool_me = 1;
      }
    }
    else {
      CZombie_process_branch_0_else_1(ctx);
    }
LAB_005fa18b:
    if ((0.0 <= local_34) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
      CZombie_process_branch_0_chunk_2(ctx);
    }
  }
    else {
      CZombie_process_else_2(ctx);
    }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
  iVar6 = pSVar16->state_index;
  if (iVar6 == 0xe) {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  }
    else {
      int _rc = CZombie_process_else_3(ctx);
      if (_rc == GOTO_LAB_005f9f22) goto LAB_005f9f22;
    }
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005f9f22:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  if (iVar6 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  }
    if ((this_ptr->base).pool_me == 0) {
      CZombie_process_branch_0(ctx);
    }
  iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(this_ptr,1);
  if (((local_48 != 0) && (-1 < iVar6)) &&
     (pCVar18 = (this_ptr->base).base.carry_hands[iVar6].carry_actor, pCVar18 != (CDemonActor *)0x0)
     ) {
    (*((pCVar18->vtable)._ub)->processMeleeHit)(pCVar18,2);
    return;
  }
  return;
}
