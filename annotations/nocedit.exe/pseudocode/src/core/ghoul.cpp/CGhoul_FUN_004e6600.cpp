// Name: core_ghoul.cpp_CGhoul_FUN_004e6600
// Address: 004e6600
// Address Range: [[004e6600, 004e818c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_FUN_004e6600(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_CGhoul_FUN_004e6600(uint param_1, uint
   param_2) */

void __cdecl core_ghoul_cpp_CGhoul_FUN_004e6600(void)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uintptr_t uVar7;
  CDemonActor_vtable *pCVar8;
  bool bVar9;
  CCharacter *pCVar10;
  CGame *pCVar11;
  int iVar12;
  SMotion *pSVar13;
  int iVar14;
  CEnemy *pCVar15;
  int extraout_EAX;
  CVector3f *pCVar16;
  int extraout_EAX_00;
  float fVar17;
  int extraout_EAX_01;
  uint uVar18;
  CLocation *pCVar19;
  char *pcVar20;
  char *pcVar21;
  char cVar22;
  float10 fVar23;
  float10 fVar24;
  double dVar25;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  int force_immediate;
  SDamageInfo local_314;
  SDamageInfo local_2d8;
  SDamageInfo local_29c;
  char local_260 [36];
  float local_23c;
  float local_230;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210 [2];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  CVector3f local_1c8;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  uint local_138;
  uint local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  uint local_fc;
  uint local_f8;
  float local_f4;
  CVector3f local_f0;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  int local_84;
  float local_7c;
  float local_78;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CMotionController *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  iVar12 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base);
  if (iVar12 == 0) {
    return;
  }
  (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base).model.accumulated_root_motion.y =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  (in_stack_00000004->base).model.accumulated_root_motion.x =
       (in_stack_00000004->base).model.accumulated_root_motion.y;
  local_64 = in_stack_00000008 * in_stack_00000004->speed;
  local_18 = &(in_stack_00000004->base).model;
switchD_004e6f9a_caseD_e:
  pCVar2 = local_18;
  if (0.0 < local_64) {
    iVar12 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_18->motion_controller);
    switch(iVar12) {
    case 5:
      if ((((*(int *)(in_stack_00000004->unk2 + 4) != 0) &&
           (iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x120))
                               (), iVar12 == 0)) &&
          (iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))()
          , iVar12 == 0)) &&
         (iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0xfc))(),
         iVar12 != 0)) {
        local_174.z = 2.5f;
        local_174.x = 0.0;
        local_174.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_1c8,&local_174);
        fVar17 = local_1c8.x - *(float *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x20);
        fVar4 = local_1c8.z - *(float *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x28);
        bVar9 = SQRT(fVar4 * fVar4 + fVar17 * fVar17) <= 1.0;
        if (((ABS(local_1c8.y - *(float *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x24)) <=
              (float)4) &&
            ((!bVar9 ||
             (iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x100)
                       )(), iVar12 != 0)))) && (bVar9)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&local_18->motion_controller,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base);
      break;
    case 10:
      if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        pCVar15 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))();
        if (pCVar15 == in_stack_00000004) {
          iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x120))();
          if (iVar12 == 0) {
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x14))();
            iVar12 = *(int *)(in_stack_00000004->unk2 + 4);
            local_168.x = *(float *)(iVar12 + 0x20);
            local_168.z = *(float *)(iVar12 + 0x28);
            local_168.y = (local_230 - local_23c) * (float)0.69999999999999996 +
                          *(float *)(iVar12 + 0x24);
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
            local_14 = local_29c.damage_amount;
            pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (*(CDemonActor **)(in_stack_00000004->unk2 + 4),&local_f0,&local_168
                                );
            if (&local_29c.impact_direction != pCVar16) {
              local_29c.impact_direction.x = pCVar16->x;
              local_29c.impact_direction.y = pCVar16->y;
              local_29c.impact_direction.z = pCVar16->z;
            }
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x11c))();
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              dVar25 = round(local_ac * 2.5 * 0.25);
              local_70 = (int)ROUND(dVar25);
              core_gore_cpp_FUN_004edbb0();
            }
            if (*(float *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x243c) <= 0.0) {
              (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x104))();
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&local_18->motion_controller,1,1);
            }
            (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)in_stack_00000004,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x104))();
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(local_18);
      iVar14 = INT_02d83300;
      if (iVar12 == 0xc) {
        iVar14 = INT_02d83304;
      }
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (local_18,&local_1e0,iVar14);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_1d4,pCVar16);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar25 = round((double)(local_14 * (float)0.25));
      local_58 = (int)ROUND(dVar25);
      core_gore_cpp_FUN_004edbb0();
      (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                ((CDemonActor *)in_stack_00000004,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar2,&local_1b0,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_228,pCVar16);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar25 = round((double)(local_14 * (float)0.25));
      local_54 = (int)ROUND(dVar25);
      core_gore_cpp_FUN_004edbb0();
      (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                ((CDemonActor *)in_stack_00000004,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar2,&local_1ec,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_15c,pCVar16);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar25 = round((double)(local_14 * (float)0.25));
      local_84 = (int)ROUND(dVar25);
      core_gore_cpp_FUN_004edbb0();
      iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar12 == 0) {
        pcVar20 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar20 = "ghoul-eat-?.wav @1.3";
      }
      pcVar21 = local_260;
      do {
        cVar22 = *pcVar20;
        *pcVar21 = cVar22;
        if (cVar22 == '\0') break;
        cVar22 = pcVar20[1];
        pcVar20 = pcVar20 + 2;
        pcVar21[1] = cVar22;
        pcVar21 = pcVar21 + 2;
      } while (cVar22 != '\0');
      (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                ((CDemonActor *)in_stack_00000004,local_260);
    }
    goto switchD_004e6f9a_caseD_e;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&local_18->motion_controller,1);
  local_8c = (double)in_stack_00000008;
  fVar17 = in_stack_00000004->speed;
  fVar4 = (float)1.57079632675;
  (in_stack_00000004->base).walk_step_speed =
       in_stack_00000004->speed * local_14 * (float)3 * in_stack_00000008;
  (in_stack_00000004->base).turn_speed = in_stack_00000008 * fVar4 * fVar17;
  pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&local_18->motion_controller);
  iVar12 = pSVar13->state_index;
  if (iVar12 == 0x11) {
    fVar17 = in_stack_00000004->speed;
    fVar23 = (float10)8;
    (in_stack_00000004->base).turn_speed =
         (float)(fVar23 * (float10)(in_stack_00000004->base).turn_speed);
    (in_stack_00000004->base).walk_step_speed =
         (float)((float10)local_8c * fVar23 * (float10)fVar17);
  }
  iVar14 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base);
  if (iVar14 == 0) {
    local_20 = -1.0;
    pCVar2 = &(in_stack_00000004->base).model;
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar2->motion_controller);
    switch(pSVar13->state_index) {
    case 0:
      if ((float)in_stack_00000004[1].base.base.health <= 0.0) {
        uVar7 = in_stack_00000004[1].base.base.validation_magic;
        if (uVar7 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX_00 != 0) goto LAB_004e7576;
          (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
          if (*(int *)(in_stack_00000004->unk2 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base).model.motion_controller,1,1);
            iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                               ((uint)in_stack_00000004[1].base.base.orient_matrix.m[2].y);
            if ((iVar14 == 0) ||
               (iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                   ((uint)in_stack_00000004[1].base.base.orient_matrix.m[2].z),
               iVar14 == 0)) {
              fVar17 = (float)(*((in_stack_00000004->base).base.vtable._ub)->playSound)
                                        ((CDemonActor *)in_stack_00000004,"ghoul-alert-?.wav"
                                        );
              in_stack_00000004[1].base.base.orient_matrix.m[2].y = fVar17;
            }
          }
        }
        else {
          local_180 = *(float *)(uVar7 + 0x20) - (in_stack_00000004->base).base.location.position.x;
          local_17c = *(float *)(uVar7 + 0x24) - (in_stack_00000004->base).base.location.position.y;
          local_178 = *(float *)(uVar7 + 0x28) - (in_stack_00000004->base).base.location.position.z;
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)4) {
            fVar17 = (in_stack_00000004->base).hit_points + in_stack_00000008;
            in_stack_00000004[1].base.base.unk1 =
                 (int)((float)in_stack_00000004[1].base.base.unk1 - in_stack_00000008);
            (in_stack_00000004->base).hit_points = fVar17;
            if ((float)100 < fVar17) {
              (in_stack_00000004->base).hit_points = 100.0;
            }
            if ((float)in_stack_00000004[1].base.base.unk1 < 0.0) {
              in_stack_00000004[1].base.base.unk1 = 0;
              in_stack_00000004[1].base.base.validation_magic = 0;
            }
          }
        }
      }
      else {
        in_stack_00000004[1].base.base.health =
             (int)((float)in_stack_00000004[1].base.base.health - in_stack_00000008);
      }
      break;
    case 1:
    case 0x11:
      if ((in_stack_00000004[1].base.base.was_created != 0) && (iVar12 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,0x11,1);
      }
      if (0.0 < (float)in_stack_00000004[1].base.base.health) {
        in_stack_00000004[1].base.base.health =
             (int)((float)in_stack_00000004[1].base.base.health - in_stack_00000008);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,0,1);
      }
      else {
        (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base).model.accumulated_root_motion.y =
             (in_stack_00000004->base).model.accumulated_root_motion.z;
        (in_stack_00000004->base).model.accumulated_root_motion.x =
             (in_stack_00000004->base).model.accumulated_root_motion.y;
        cVar22 = (in_stack_00000004->base).model.part_visibility_flags
                 [(int)in_stack_00000004[1].base.base.orient.pitch] != 0;
        if ((in_stack_00000004->base).model.part_visibility_flags
            [(int)in_stack_00000004[1].base.base.orient.heading] != 0) {
          cVar22 = cVar22 + '\x01';
        }
        iVar14 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                           (&g_HeroActors[g_LocalHeroIndex]->base);
        pCVar11 = g_CGamePtr;
        if (iVar14 == 0) {
          (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
          iVar14 = *(int *)(in_stack_00000004->unk2 + 4);
          if (iVar14 == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
            if (extraout_EAX_01 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base).model.motion_controller,0,1);
            }
          }
          else {
            local_1f8 = *(float *)(iVar14 + 0x20) -
                        (in_stack_00000004->base).base.location.position.x;
            local_1f0 = *(float *)(iVar14 + 0x28) -
                        (in_stack_00000004->base).base.location.position.z;
            local_1f4 = 0.0;
            if ((((in_stack_00000004->base).hit_points < (float)25) && (cVar22 != '\0')
                ) && (in_stack_00000004[1].base.base.validation_magic == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0();
            }
            local_30 = &(in_stack_00000004->base).model.motion_controller;
            uVar7 = in_stack_00000004[1].base.base.validation_magic;
            if (uVar7 == 0) {
              local_fc = 0;
              local_f4 = 2.5f;
              local_f8 = 0;
              (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0xbc))();
              iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base);
              if (iVar14 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
              }
              else if (((0 < iVar14) && (cVar22 != '\0')) &&
                      ((*(float *)in_stack_00000004->unk2 <= 0.0 &&
                       ((iVar14 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) +
                                                       0x154) + 0x108))(), iVar14 == 0 &&
                        (*(float *)(in_stack_00000004[1].base.base.actor_name + 0x1c) <= 0.0)))))) {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if ((in_stack_00000004->base).model.part_visibility_flags
                    [(int)in_stack_00000004[1].base.base.orient.heading] != 0) {
                  local_24 = (1.0 - ABS(local_48 - 3.4f) / 3.4f) *
                             (float)0.29999999999999999;
                }
                if ((in_stack_00000004->base).model.part_visibility_flags
                    [(int)in_stack_00000004[1].base.base.orient.pitch] != 0) {
                  local_40 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.40000000000000002;
                }
                local_44 = local_48;
                iVar14 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0xfc
                                     ))();
                if (iVar14 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar14 = 0xb;
                    }
                    else {
                      iVar14 = 0xc;
                    }
                  }
                  else {
                    iVar14 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(in_stack_00000004->base).model.motion_controller,iVar14,1);
                  builtin_strncpy(in_stack_00000004->unk2,"333?",4);
                }
              }
            }
            else {
              (**(code **)(*(int *)(uVar7 + 0x154) + 0xbc))();
              iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base);
              if (0 < iVar14) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
                in_stack_00000004[1].base.base.unk1 = (int)local_14;
              }
              if (iVar14 < 0) {
                in_stack_00000004[1].base.base.unk1 = 0x41f00000;
                in_stack_00000004[1].base.base.validation_magic = 0;
              }
              if (iVar12 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->base).model.motion_controller,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) < 0) {
            cVar22 = (in_stack_00000004->base).model.part_visibility_flags
                     [(int)in_stack_00000004[1].base.base.orient.pitch] != 0;
            if ((in_stack_00000004->base).model.part_visibility_flags
                [(int)in_stack_00000004[1].base.base.orient.heading] != 0) {
              cVar22 = cVar22 + '\x01';
            }
            if (cVar22 != '\0') {
              if (cVar22 == '\x01') {
                pCVar10 = &in_stack_00000004[1].base;
                (pCVar10->base).actor_name[0x18] = '\x0e';
                (pCVar10->base).actor_name[0x19] = '\0';
                (pCVar10->base).actor_name[0x1a] = '\0';
                (pCVar10->base).actor_name[0x1b] = '\0';
                pCVar11->unk11 = 1;
              }
              else {
                iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                *(uint *)(in_stack_00000004[1].base.base.actor_name + 0x18) = (iVar14 == 0) + 0xd;
                g_CGamePtr->unk11 = 1;
              }
              goto LAB_004e7a33;
            }
            pCVar10 = &in_stack_00000004[1].base;
            (pCVar10->base).actor_name[0x18] = '\0';
            (pCVar10->base).actor_name[0x19] = '\0';
            (pCVar10->base).actor_name[0x1a] = '\0';
            (pCVar10->base).actor_name[0x1b] = '\0';
          }
          else {
LAB_004e7a33:
            if (*(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) != 0) {
              local_2c = 2.0f;
              if (*(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) == 0xe) {
                local_2c = 5.5f;
              }
              local_dc = local_2c;
              local_e4 = 0;
              local_e0 = 0;
              (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
              pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                  (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_198,0);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_150,pCVar16);
              iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base);
              if (((0 < iVar14) &&
                  (iVar14 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).
                              isDamageable)(&g_HeroActors[g_LocalHeroIndex]->base), iVar14 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(in_stack_00000004->base).model.motion_controller,
                             *(int *)(in_stack_00000004[1].base.base.actor_name + 0x18),1),
                 *(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) == 0xd)) {
                pCVar8 = (in_stack_00000004->base).base.vtable._ub;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.2);
                (*pCVar8->playSoundWithVolume)
                          ((CDemonActor *)in_stack_00000004,"ghoul-scream-!-?.wav",local_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base).model.motion_controller,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
LAB_004e7576:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,1,1);
      }
      else {
        iVar14 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))();
        if (iVar14 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          fVar17 = in_stack_00000004[1].base.base.orient.heading;
          *(float *)in_stack_00000004->unk2 = local_14;
          if ((in_stack_00000004->base).model.part_visibility_flags[(int)fVar17] != 0) {
            local_50 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                 (&pCVar2->motion_controller);
            local_9c = (double)local_50;
            local_14 = local_50;
            if ((local_50 <= (float)2) && (local_20 = 3.4f, 1.0 <= local_9c)
               ) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2d8);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_2d8.damage_amount = local_14;
              if (in_stack_00000004[1].base.base.was_created != 0) {
                local_2d8.damage_amount = local_14 * (float)2;
              }
              pCVar16 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_114,(CVector3f *)&INT_02d832b4,
                                   (in_stack_00000004->base).model.bone_transform.
                                   bone_world_matrices + INT_02d83304);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)in_stack_00000004,&local_1bc,pCVar16);
              iVar14 = core_enemy_cpp_CEnemy_FUN_004a9880(in_stack_00000004);
              if (iVar14 != 0) {
                (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)in_stack_00000004,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      if (((in_stack_00000004->pool_me == 0) &&
          ((int)in_stack_00000004[1].base.base.location.position.y < 1)) &&
         ((in_stack_00000004->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_108,pCVar16);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      fVar17 = in_stack_00000004[1].base.base.location.position.z;
      in_stack_00000004[1].base.base.was_created = 0;
      if (((0 < (int)fVar17) || (0 < (int)in_stack_00000004[1].base.base.location.position.y)) &&
         (iVar14 = *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) - g_GlobalDeltaTimeInt
         , *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) = iVar14, iVar14 < 1)) {
        if ((int)in_stack_00000004[1].base.base.location.position.y < 1) {
          pfVar3 = &in_stack_00000004[1].base.base.location.position.z;
          *pfVar3 = (float)((int)*pfVar3 + -1);
        }
        if ((0 < (int)in_stack_00000004[1].base.base.location.position.z) ||
           (0 < (int)in_stack_00000004[1].base.base.location.position.y)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,12.0);
          force_immediate = 0xf;
          iVar14 = 0x4e71df;
          dVar25 = round((double)(local_14 * (float)65536));
          *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) = (int)ROUND(dVar25);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base).model.motion_controller,iVar14,force_immediate);
        }
      }
      if (0 < (int)in_stack_00000004[1].base.base.location.position.y) {
        if (*(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) < 1) {
          iVar14 = *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) + g_GlobalDeltaTimeInt
          ;
          *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = iVar14;
          if (iVar14 < 0) {
            (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
            iVar14 = *(int *)(in_stack_00000004->unk2 + 4);
            if (iVar14 != 0) {
              local_120 = (in_stack_00000004->base).base.location.position.x -
                          *(float *)(iVar14 + 0x20);
              local_11c = (in_stack_00000004->base).base.location.position.y -
                          *(float *)(iVar14 + 0x24);
              local_118 = (in_stack_00000004->base).base.location.position.z -
                          *(float *)(iVar14 + 0x28);
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
              local_78 = (float)(((int)local_7c >> 1) + INT_02d7a7b8);
              if (local_78 < (float)8) goto LAB_004e7243;
            }
          }
          else {
            pCVar10 = &in_stack_00000004[1].base;
            (pCVar10->base).actor_name[0x14] = '\0';
            (pCVar10->base).actor_name[0x15] = '\0';
            (pCVar10->base).actor_name[0x16] = '\0';
            (pCVar10->base).actor_name[0x17] = '\0';
LAB_004e7243:
            local_1c = (in_stack_00000004->base).collision_cylinder_top;
            if (local_1c < (in_stack_00000004->base).collision_cylinder_bottom) {
              local_1c = (in_stack_00000004->base).model.bounding_box.max.y;
            }
            if (local_1c < (in_stack_00000004->base).collision_cylinder_bottom) {
              local_1c = (in_stack_00000004->base).collision_cylinder_bottom +
                         (float)0.5;
            }
            iVar14 = 0;
            do {
              local_68 = (float)iVar14 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (float)iVar14;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004);
              fVar23 = (float10)fcos((float10)local_68);
              fVar24 = (float10)fsin((float10)local_68);
              local_6c = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,
                                    (in_stack_00000004->base).base.location.position.x,
                                    (in_stack_00000004->base).base.location.position.z,
                                    (float)(fVar24 * (float10)0.050000000000000003),
                                    (float)(fVar23 * (float10)0.050000000000000003),
                                    (in_stack_00000004->base).collision_cylinder_radius,
                                    (void *)((in_stack_00000004->base).base.location.position.y +
                                            (in_stack_00000004->base).collision_cylinder_bottom),
                                    (void *)((in_stack_00000004->base).base.location.position.y +
                                            local_1c));
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              if (local_6c < 1.0) break;
              iVar14 = iVar14 + 1;
            } while (iVar14 < 4);
            if (iVar14 < 4) {
              pCVar10 = &in_stack_00000004[1].base;
              (pCVar10->base).actor_name[0x14] = '\x03';
              (pCVar10->base).actor_name[0x15] = '\0';
              (pCVar10->base).actor_name[0x16] = '\0';
              (pCVar10->base).actor_name[0x17] = '\0';
              in_stack_00000004->unk2[4] = '\0';
              in_stack_00000004->unk2[5] = '\0';
              in_stack_00000004->unk2[6] = '\0';
              in_stack_00000004->unk2[7] = '\0';
            }
            else {
              local_14 = (float)((int)in_stack_00000004[1].base.base.location.position.y + 1);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                   (10.0,(float)(int)local_14 * (float)10);
              (in_stack_00000004->base).hit_points = local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base).model.motion_controller,0x10,1);
            }
          }
        }
        else {
          iVar14 = *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) - g_GlobalDeltaTimeInt
          ;
          *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = iVar14;
          if (iVar14 < 1) {
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
            dVar25 = round((double)(-local_14 * 65536.0f));
            *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = (int)ROUND(dVar25);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
LAB_004e7d9a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        iVar14 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))();
        if (iVar14 == 0) {
          local_20 = 2.5f;
        }
        else {
          pCVar15 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))()
          ;
          if (pCVar15 != in_stack_00000004) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)(in_stack_00000004->unk2 + 4) == 0) ||
         (iVar14 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))(),
         iVar14 != 0)) goto LAB_004e7d9a;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
      fVar17 = in_stack_00000004[1].base.base.orient.pitch;
      *(float *)in_stack_00000004->unk2 = local_14;
      if ((in_stack_00000004->base).model.part_visibility_flags[(int)fVar17] != 0) {
        local_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                             (&pCVar2->motion_controller);
        local_a4 = (double)local_4c;
        local_14 = local_4c;
        if (local_4c <= (float)2) {
          local_20 = 2.5f;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_314);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            local_314.damage_amount = local_14;
            if (in_stack_00000004[1].base.base.was_created != 0) {
              local_314.damage_amount = local_14 * (float)2;
            }
            pCVar16 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (local_210,(CVector3f *)&INT_02d832a8,
                                 (in_stack_00000004->base).model.bone_transform.bone_world_matrices
                                 + INT_02d83300);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)in_stack_00000004,&local_21c,pCVar16);
            iVar14 = core_enemy_cpp_CEnemy_FUN_004a9880(in_stack_00000004);
            if (iVar14 != 0) {
              (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)in_stack_00000004,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar14 = *(int *)(in_stack_00000004[1].base.base.actor_name + 0xc) - g_GlobalDeltaTimeInt;
      *(int *)(in_stack_00000004[1].base.base.actor_name + 0xc) = iVar14;
      if (iVar14 < 1) {
        (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)in_stack_00000004,"burp[1,2].wav");
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
        dVar25 = round((double)(local_14 * (float)65536));
        *(int *)(in_stack_00000004[1].base.base.actor_name + 0xc) = (int)ROUND(dVar25);
      }
      (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
      if (*(int *)(in_stack_00000004->unk2 + 4) != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,0,1);
      }
    }
    if (((0.0 <= local_20) && (*(float *)(in_stack_00000004[1].base.base.actor_name + 0x1c) <= 0.0))
       && (*(int *)(in_stack_00000004->unk2 + 4) != 0)) {
      local_138 = 0;
      local_134 = 0;
      local_130 = local_20;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0xbc))();
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)
                           (*(int *)(in_stack_00000004->unk2 + 4) + 0x158),&local_1a4,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (*(CDemonActor **)(in_stack_00000004->unk2 + 4),&local_144,pCVar16);
      iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&in_stack_00000004->base);
      if (iVar14 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,1,1);
        (in_stack_00000004->base).turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004e6754;
  }
  uVar6 = (in_stack_00000004->base).field22_0x25b0;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
      iVar14 = 1;
    }
    else {
LAB_004e6fdc:
      iVar14 = 0;
    }
LAB_004e672d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base).model.motion_controller,iVar14,1);
  }
  else {
    if (uVar6 < 3) {
      iVar14 = 0x11;
      goto LAB_004e672d;
    }
    if (uVar6 != 3) goto LAB_004e6fdc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base).model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base).model.accumulated_root_motion.y =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  (in_stack_00000004->base).model.accumulated_root_motion.x =
       (in_stack_00000004->base).model.accumulated_root_motion.y;
LAB_004e6754:
  if (0.0 < *(float *)in_stack_00000004->unk2) {
    *(float *)in_stack_00000004->unk2 = *(float *)in_stack_00000004->unk2 - in_stack_00000008;
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base);
  iVar14 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base);
  if (iVar14 != 0) {
    if ((*(int *)(in_stack_00000004->unk2 + 4) != 0) &&
       (pCVar15 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))(),
       pCVar15 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->unk2 + 4));
    }
    (in_stack_00000004->base).field7_0x2428.y =
         (in_stack_00000004->base).field7_0x2428.y - in_stack_00000008 * (float)32;
    local_cc = (in_stack_00000004->base).field7_0x2428.x * in_stack_00000008;
    local_c8 = (in_stack_00000004->base).field7_0x2428.y * in_stack_00000008;
    pCVar16 = &(in_stack_00000004->base).field6_0x241c;
    local_c4 = in_stack_00000008 * (in_stack_00000004->base).field7_0x2428.z;
    pCVar1 = &(in_stack_00000004->base).model.accumulated_root_motion;
    local_d8 = local_cc + pCVar16->x;
    local_d4 = local_c8 + (in_stack_00000004->base).field6_0x241c.y;
    local_d0 = local_c4 + (in_stack_00000004->base).field6_0x241c.z;
    local_18c = local_d8 + pCVar1->x;
    local_188 = local_d4 + (in_stack_00000004->base).model.accumulated_root_motion.y;
    local_184 = local_d0 + (in_stack_00000004->base).model.accumulated_root_motion.z;
    (in_stack_00000004->base).field6_0x241c.z = 0.0;
    (in_stack_00000004->base).field6_0x241c.y = (in_stack_00000004->base).field6_0x241c.z;
    pCVar16->x = (in_stack_00000004->base).field6_0x241c.y;
    (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base).model.accumulated_root_motion.y =
         (in_stack_00000004->base).model.accumulated_root_motion.z;
    pCVar1->x = (in_stack_00000004->base).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base);
  }
  pCVar2 = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
  fVar17 = *(float *)(in_stack_00000004[1].base.base.actor_name + 0x1c);
  local_b4 = (double)fVar17;
  if (0.0 < local_b4) {
    local_60 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar2->motion_controller,
                          (int)in_stack_00000004[1].base.base.location.position.x,1.0 - fVar17);
    fVar17 = 1.0 - *(float *)(in_stack_00000004[1].base.base.actor_name + 0x1c);
    local_5c = 1.0 - fVar17 * fVar17 * fVar17;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (pCVar2,(int)in_stack_00000004[1].base.base.location.position.x,local_60,local_5c,
               INT_02d83320,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar17 = *(float *)(in_stack_00000004[1].base.base.actor_name + 0x1c) -
             in_stack_00000008 / 0.7f;
    *(float *)(in_stack_00000004[1].base.base.actor_name + 0x1c) = fVar17;
    if (fVar17 < 0.0) {
      pCVar10 = &in_stack_00000004[1].base;
      (pCVar10->base).actor_name[0x1c] = '\0';
      (pCVar10->base).actor_name[0x1d] = '\0';
      (pCVar10->base).actor_name[0x1e] = '\0';
      (pCVar10->base).actor_name[0x1f] = '\0';
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base);
  if (((float)0.01 < ABS((in_stack_00000004->base).turn_angle_accumulator)) ||
     (fVar17 = (in_stack_00000004->base).field6_0x241c.y,
     fVar4 = (in_stack_00000004->base).field6_0x241c.x,
     fVar5 = (in_stack_00000004->base).field6_0x241c.z,
     (float)0.01 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar17 * fVar17))) {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,*(uint *)(in_stack_00000004[1].base.base.actor_name + 8));
    if (extraout_EAX == 0) {
      sprintf
                (&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)in_stack_00000004->speed);
      uVar18 = (*((in_stack_00000004->base).base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)in_stack_00000004,&stack0xfffffc88);
      *(uint *)(in_stack_00000004[1].base.base.actor_name + 8) = uVar18;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_005b3b90
              (g_CSoundPtr,*(uint *)(in_stack_00000004[1].base.base.actor_name + 8));
  }
  if (in_stack_00000004->pool_me == 0) {
    if ((in_stack_00000004->base).model.part_visibility_flags
        [(int)in_stack_00000004[1].base.base.orient_matrix.m[1].z] != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base);
      if ((in_stack_00000004->base).model.part_visibility_flags
          [in_stack_00000004[1].base.base.location.area_id] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base);
      if ((in_stack_00000004->base).model.part_visibility_flags
          [(int)in_stack_00000004[1].base.base.orient.bank] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base);
      }
    }
    core_charactr_cpp_CCharacter_FUN_0042b810(&in_stack_00000004->base);
    core_charactr_cpp_CCharacter_FUN_0042b670(&in_stack_00000004->base);
  }
  if ((in_stack_00000004[1].base.base.validation_magic != 0) && (iVar12 == 0x11)) {
    fVar17 = (in_stack_00000004->base).base.location.position.x -
             *(float *)in_stack_00000004[1].base.base.create_event;
    fVar4 = (in_stack_00000004->base).base.location.position.z -
            *(float *)(in_stack_00000004[1].base.base.create_event + 8);
    if (in_stack_00000008 * (float)0.5 <= SQRT(fVar4 * fVar4 + fVar17 * fVar17)) {
      in_stack_00000004[1].base.base.create_prob = 1.0;
    }
    else {
      fVar17 = in_stack_00000004[1].base.base.create_prob - in_stack_00000008;
      in_stack_00000004[1].base.base.create_prob = fVar17;
      if (fVar17 < 0.0) {
        in_stack_00000004[1].base.base.unk1 = 0x41f00000;
        in_stack_00000004[1].base.base.validation_magic = 0;
        in_stack_00000004[1].base.base.was_created = 0;
      }
    }
  }
  pcVar20 = in_stack_00000004[1].base.base.create_event;
  pCVar19 = &(in_stack_00000004->base).base.location;
  if ((CLocation *)pcVar20 == pCVar19) {
    return;
  }
  *(float *)pcVar20 = (pCVar19->position).x;
  *(float *)(in_stack_00000004[1].base.base.create_event + 4) =
       (in_stack_00000004->base).base.location.position.y;
  *(float *)(in_stack_00000004[1].base.base.create_event + 8) =
       (in_stack_00000004->base).base.location.position.z;
  return;
}
