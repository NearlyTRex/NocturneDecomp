// Name: core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490
// Address: 00410490
// Address Range: [[00410490, 00411743]]
// Convention: __cdecl
// Signature: int __cdecl core_blundrbs_cpp_CBlunderbus_fire_FUN_00410490(CBlunderbus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_blundrbs_cpp_CBlunderbus_fire_FUN_00410490(CBlunderbus *this_ptr)

{
  CDemonActor *actor;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CCharacter *this_ptr_00;
  EDeathState EVar6;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CMatrix3x3f *rotation_matrix;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1460 [991];
  CVector3f *input_local_point;
  CBlunderbus *this_ptr_03;
  CDemonSet *this_ptr_04;
  CMatrix3x3f *rotation_matrix_00;
  SDamageInfo SStack_4b4;
  float fStack_478;
  float afStack_474 [5];
  uint uStack_460;
  float fStack_45c;
  uint uStack_454;
  uint uStack_448;
  float fStack_43c;
  uint uStack_430;
  CVector3f CStack_424;
  uint uStack_418;
  float afStack_414 [5];
  CVector3f CStack_400;
  CVector3f CStack_3f4;
  uint uStack_3e8;
  float afStack_3e4 [2];
  CVector3f CStack_3dc;
  float fStack_3d0;
  float afStack_3cc [4];
  float fStack_3bc;
  uint uStack_3b8;
  float fStack_3b0;
  CVector3f CStack_3ac;
  float fStack_3a0;
  float afStack_39c [2];
  CVector3f CStack_394;
  CVector3f CStack_388;
  uint uStack_37c;
  float afStack_378 [2];
  CVector3f CStack_370;
  CVector3f CStack_364;
  float fStack_358;
  float afStack_354 [2];
  CVector3f CStack_34c;
  uint uStack_340;
  float afStack_33c [4];
  float fStack_32c;
  float fStack_328;
  CVector3f CStack_31c;
  CVector3f CStack_310;
  uint uStack_304;
  float afStack_300 [4];
  float fStack_2f0;
  uint uStack_2ec;
  float fStack_2e4;
  CVector3f CStack_2e0;
  CVector3f CStack_2d4;
  float fStack_2c8;
  float afStack_2c4 [2];
  CVector3f CStack_2bc;
  float fStack_2b0;
  float afStack_2ac [2];
  CVector3f CStack_2a4;
  CVector3f CStack_298;
  float fStack_28c;
  float afStack_288 [2];
  CVector3f CStack_280;
  uint uStack_274;
  float afStack_270 [2];
  CVector3f CStack_268;
  uint uStack_25c;
  float afStack_258 [5];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  CVector3f CStack_238;
  CVector3f CStack_22c;
  float fStack_220;
  float afStack_21c [5];
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  uint uStack_1f0;
  CVector3f CStack_1e4;
  float fStack_1d8;
  float afStack_1d4 [5];
  float fStack_1c0;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  float fStack_19c;
  float afStack_198 [4];
  float fStack_188;
  CVector3f CStack_184;
  uint uStack_178;
  float afStack_174 [2];
  CVector3f CStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float afStack_154 [3];
  CVector3f CStack_148;
  uint uStack_13c;
  float afStack_138 [4];
  float fStack_128;
  uint uStack_124;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  uint uStack_100;
  float fStack_fc;
  uint uStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  uint uStack_b8;
  uint uStack_ac;
  uint uStack_a0;
  float fStack_94;
  uint uStack_88;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [7];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  CTrigger *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  input_local_point = &CStack_2d4;
  CStack_2d4.x = fStack_94;
  *(float *)((int)&CStack_2d4 + (uint)bVar7 * -8 + 4) = afStack_cc[(uint)bVar7 * -2 + 0xf];
  *(float *)((int)&CStack_2d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,input_local_point,&CStack_22c);
  CStack_7c.x = CStack_22c.x;
  *(uint *)((int)&CStack_7c + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_22c + (uint)bVar7 * -8 + 4);
  this_ptr_03 = this_ptr;
  *(uint *)((int)&CStack_7c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_22c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  iVar5 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_03->base);
  if (iVar5 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_noammo.wav",&CStack_7c);
    (this_ptr->base).fire_cooldown_timer = 1.0;
    return 0;
  }
  fVar8 = (float10)fptan((float10)this_ptr->spread_angle * (float10)_DAT_005b64e2 *
                         (float10)_DAT_005b64ea);
  fStack_38 = (float)(fVar8 * (float10)(this_ptr->base).bolt_velocity);
  iStack_28 = 0;
  if (0 < (this_ptr->base).ammo_per_shot) {
    do {
      fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
      fStack_14 = fStack_44;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,fStack_38);
      fVar8 = (float10)fcos((float10)fStack_44);
      fVar9 = (float10)fsin((float10)fStack_44);
      CStack_364.x = (float)(fVar8 * (float10)fStack_14);
      CStack_364.y = (float)(fVar9 * (float10)fStack_14);
      CStack_364.z = (this_ptr->base).bolt_velocity;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                ((CDemonActor *)this_ptr,&CStack_364,&CStack_3f4);
      CStack_16c.x = CStack_3f4.x;
      afStack_174[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_3f4 + (uint)bVar7 * -8 + 4);
      afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_3f4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&CStack_364 != (CVector3f *)(afStack_174 + 2)) {
        CStack_364.x = CStack_16c.x;
        CStack_364.y = CStack_16c.y;
        CStack_364.z = CStack_16c.z;
      }
      fStack_478 = CStack_7c.x + CStack_364.x;
      afStack_474[0] = CStack_7c.y + CStack_364.y;
      afStack_474[1] = CStack_7c.z + CStack_364.z;
      afStack_154[0] = CStack_7c.x + CStack_364.x;
      afStack_174[(uint)bVar7 * -2 + 9] = afStack_474[(uint)bVar7 * -2];
      fVar4 = CStack_7c.z;
      fVar3 = CStack_7c.y;
      fVar2 = CStack_7c.x;
      afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_20 = (float)_DAT_005b651a / (this_ptr->base).bolt_velocity;
      fStack_220 = CStack_364.x * fStack_20;
      afStack_21c[0] = CStack_364.y * fStack_20;
      afStack_21c[1] = CStack_364.z * fStack_20;
      fStack_3d0 = CStack_364.x * fStack_20;
      afStack_3cc[(uint)bVar7 * -2] = afStack_21c[(uint)bVar7 * -2];
      afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_21c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      afStack_138[2] = fVar2 - fStack_3d0;
      afStack_138[3] = fVar3 - afStack_3cc[0];
      fStack_128 = fVar4 - afStack_3cc[1];
      afStack_300[2] = fVar2 - fStack_3d0;
      afStack_300[(uint)bVar7 * -2 + 3] = afStack_138[(uint)bVar7 * -2 + 3];
      this_ptr_04 = g_CDemonSetPtr;
      afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_04);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
      actor = (this_ptr->base).carried_by_actor;
      if (actor != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,actor);
      }
      iStack_18 = 0;
      do {
        fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0
                                     (g_CDemonSetPtr,afStack_300 + 2,afStack_174 + 8);
        if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
        this_ptr_00 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((this_ptr_00 != (CCharacter *)0x0) &&
           (EVar6 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
           0 < (int)EVar6)) {
          this_ptr_00 = (CCharacter *)0x0;
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_02 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_1c = this_ptr_02;
        if (this_ptr_00 != (CCharacter *)0x0) {
          iVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).isInvulnerable)(this_ptr_00);
          if (iVar5 == 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_4b4);
            SStack_4b4.hit_part_index = g_CDemonSetPtr->collision_part_index;
            SStack_4b4.damage_amount = 5.0;
            SStack_4b4.gore_multiplier = 0.4;
            fStack_d0 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
            afStack_cc[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
            afStack_cc[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
            fStack_1d8 = fStack_d0;
            afStack_1d4[(uint)bVar7 * -2] = afStack_cc[(uint)bVar7 * -2];
            afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            fStack_24 = (float)_DAT_005b6542 /
                        SQRT(afStack_1d4[1] * afStack_1d4[1] +
                             fStack_1d8 * fStack_1d8 + afStack_1d4[0] * afStack_1d4[0]);
            fStack_244 = fStack_1d8 * fStack_24;
            fStack_240 = afStack_1d4[0] * fStack_24;
            fStack_23c = afStack_1d4[1] * fStack_24;
            fStack_208 = fStack_1d8 * fStack_24;
            afStack_21c[(uint)bVar7 * -2 + 6] = afStack_258[(uint)bVar7 * -2 + 6];
            afStack_21c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            if (&SStack_4b4.impact_point != (CVector3f *)(afStack_21c + 5)) {
              SStack_4b4.impact_point.x = fStack_208;
              SStack_4b4.impact_point.y = fStack_204;
              SStack_4b4.impact_point.z = fStack_200;
            }
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                      (&this_ptr_00->base,&g_CDemonSetPtr->collision_impact_position,&CStack_238);
            fStack_118 = CStack_238.x;
            afStack_138[(uint)bVar7 * -2 + 9] = *(float *)((int)&CStack_238 + (uint)bVar7 * -8 + 4);
            afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 *(float *)((int)&CStack_238 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            if (&SStack_4b4.impact_direction != (CVector3f *)(afStack_138 + 8)) {
              SStack_4b4.impact_direction.x = fStack_118;
              SStack_4b4.impact_direction.y = fStack_114;
              SStack_4b4.impact_direction.z = fStack_110;
            }
            SStack_4b4.ammo_type = (this_ptr->base).ammo_type;
            SStack_4b4.damage_type = DAMAGE_TYPE_ATTACK_BULLET;
            SStack_4b4.dismember_prob = 0.15;
            SStack_4b4.attacker = (CDemonActor *)this_ptr;
            SStack_4b4.wielder =
                 (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_4b4);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                      (g_CGorePtr,&g_CDemonSetPtr->collision_impact_position,(CVector3f *)0x0,2,
                       this_ptr_00->blood_type);
          }
          break;
        }
        if (this_ptr_01 == (CGlass *)0x0) {
          if (this_ptr_02 == (CTrigger *)0x0) {
            core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                      (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                       &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                       g_CDemonSetPtr->collision_actor,0);
            fStack_1fc = (g_CDemonSetPtr->collision_impact_position).x - afStack_300[2];
            fStack_1f8 = (g_CDemonSetPtr->collision_impact_position).y - afStack_300[3];
            fStack_1f4 = (g_CDemonSetPtr->collision_impact_position).z - fStack_2f0;
            fStack_160 = fStack_1fc;
            afStack_174[(uint)bVar7 * -2 + 6] = afStack_21c[(uint)bVar7 * -2 + 9];
            afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_21c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            if (afStack_198 + 2 != afStack_174 + 5) {
              afStack_198[2] = fStack_160;
              afStack_198[3] = fStack_15c;
              fStack_188 = fStack_158;
            }
            if (_DAT_005b6522 <=
                SQRT(fStack_188 * fStack_188 +
                     afStack_198[2] * afStack_198[2] + afStack_198[3] * afStack_198[3])) break;
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
            uVar1 = g_CDemonSetPtr->ground_type;
            if (uVar1 < 7) {
              if (uVar1 != 2) {
LAB_004116f9:
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
                core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                          (0x02CF5680,(CDemonActor *)this_ptr,"RIC-DT.WAV",&CStack_7c,
                           fStack_14);
                break;
              }
            }
            else {
              if (uVar1 < 8) {
                if ((float)_DAT_005b652a <= fStack_14) {
                  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
                  core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                            (0x02CF5680,(CDemonActor *)this_ptr,"RIC-WD0C.WAV",&CStack_7c
                             ,fStack_14);
                }
                else {
                  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
                  core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                            (0x02CF5680,(CDemonActor *)this_ptr,"RIC-WD0B.WAV",&CStack_7c
                             ,fStack_14);
                }
                break;
              }
              if (uVar1 != 8) goto LAB_004116f9;
            }
            if (fStack_14 < (float)_DAT_005b6532) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0A.WAV",&CStack_7c,
                         fStack_14);
            }
            else if (_DAT_005b653a <= (double)fStack_14) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0C.WAV",&CStack_7c,
                         fStack_14);
            }
            else {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0B.WAV",&CStack_7c,
                         fStack_14);
            }
            break;
          }
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_02);
          iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar5 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,5.0);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_1c->base);
        }
        else {
          iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
          if (iVar5 == 0) break;
          core_glass_cpp_CGlass_shatter_FUN_004cc040
                    (this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < (this_ptr->base).ammo_per_shot);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  CStack_388.x = 0.0;
  CStack_388.y = 0.0;
  CStack_388.z = 0.0;
  CStack_298.x = CStack_7c.x;
  *(uint *)((int)&CStack_298 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_7c + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_298 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_7c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_258[2] = fStack_64;
  afStack_258[(uint)bVar7 * -2 + 3] = afStack_60[(uint)bVar7 * -2];
  afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_268.x = afStack_258[2];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_3e8 = uStack_ac;
  afStack_3e4[(uint)bVar7 * -2] = afStack_cc[(uint)bVar7 * -2 + 9];
  afStack_3e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  CStack_268.y = afStack_3e4[0];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_3cc[2] = (float)uStack_304;
  afStack_3cc[(uint)bVar7 * -2 + 3] = afStack_300[(uint)bVar7 * -2];
  afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_268.z = fStack_3bc + (float)_DAT_005b64f2;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,&CStack_268,&CStack_dc);
  CStack_2e0.x = CStack_dc.x;
  *(uint *)((int)&CStack_2e0 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_dc + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_2e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_1d4[2] = fStack_2c8;
  afStack_1d4[(uint)bVar7 * -2 + 3] = afStack_2c4[(uint)bVar7 * -2];
  afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_2c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_394.x = afStack_1d4[2];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_460 = uStack_10c;
  afStack_474[(uint)bVar7 * -2 + 6] = afStack_138[(uint)bVar7 * -2 + 0xc];
  afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  CStack_394.y = fStack_45c;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_33c[2] = (float)uStack_f4;
  afStack_33c[(uint)bVar7 * -2 + 3] = afStack_138[(uint)bVar7 * -2 + 0x12];
  afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  CStack_394.z = fStack_32c + (float)_DAT_005b64fa;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,&CStack_394,&CStack_280);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  fStack_1c0 = afStack_414[2];
  afStack_1d4[(uint)bVar7 * -2 + 6] = afStack_414[(uint)bVar7 * -2 + 3];
  afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_414[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  CStack_184.x = fStack_1c0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_13c = uStack_178;
  afStack_138[(uint)bVar7 * -2] = afStack_174[(uint)bVar7 * -2];
  afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_184.y = afStack_138[0];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_124 = uStack_b8;
  afStack_138[(uint)bVar7 * -2 + 6] = afStack_cc[(uint)bVar7 * -2 + 6];
  afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  CStack_184.z = fStack_11c + _DAT_005b6502;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,&CStack_184,&CStack_70);
  CStack_1e4.x = CStack_70.x;
  *(uint *)((int)&CStack_1e4 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_1e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  fStack_19c = afStack_21c[2];
  afStack_198[(uint)bVar7 * -2] = afStack_21c[(uint)bVar7 * -2 + 3];
  afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_21c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  CStack_2a4.x = fStack_19c;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_25c = uStack_1f0;
  afStack_258[(uint)bVar7 * -2] = afStack_21c[(uint)bVar7 * -2 + 0xc];
  afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_21c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  CStack_2a4.y = afStack_258[0];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_3b8 = uStack_430;
  afStack_3cc[(uint)bVar7 * -2 + 6] = afStack_474[(uint)bVar7 * -2 + 0x12];
  afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  CStack_2a4.z = fStack_3b0 + _DAT_005b6506;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,&CStack_2a4,&CStack_370);
  CStack_3dc.x = CStack_370.x;
  *(uint *)((int)&CStack_3dc + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_370 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_3dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_370 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  fStack_3a0 = fStack_358;
  afStack_39c[(uint)bVar7 * -2] = afStack_354[(uint)bVar7 * -2];
  afStack_39c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_354[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_3ac.x = fStack_3a0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_37c = uStack_340;
  afStack_378[(uint)bVar7 * -2] = afStack_33c[(uint)bVar7 * -2];
  afStack_378[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_3ac.y = afStack_378[0];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_88 = afStack_474[2];
  afStack_cc[(uint)bVar7 * -2 + 0x12] = afStack_474[(uint)bVar7 * -2 + 3];
  afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  CStack_3ac.z = fStack_80 + _DAT_005b650a;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,&CStack_3ac,&CStack_31c);
  CStack_1b4.x = CStack_31c.x;
  *(uint *)((int)&CStack_1b4 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_31c + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_1b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_31c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  fStack_328 = fStack_2b0;
  afStack_33c[(uint)bVar7 * -2 + 6] = afStack_2ac[(uint)bVar7 * -2];
  afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_34c.x = fStack_328;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_100 = uStack_454;
  afStack_138[(uint)bVar7 * -2 + 0xf] = afStack_474[(uint)bVar7 * -2 + 9];
  afStack_138[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  CStack_34c.y = fStack_fc;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_2ec = uStack_a0;
  afStack_300[(uint)bVar7 * -2 + 6] = afStack_cc[(uint)bVar7 * -2 + 0xc];
  afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  CStack_34c.z = fStack_2e4 + _DAT_005b650e;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,&CStack_34c,&CStack_148);
  CStack_1a8.x = CStack_148.x;
  *(uint *)((int)&CStack_1a8 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_148 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_1a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_148 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  fStack_28c = fStack_43c;
  afStack_288[(uint)bVar7 * -2] = afStack_474[(uint)bVar7 * -2 + 0xf];
  afStack_288[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  CStack_2bc.x = fStack_28c;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_274 = uStack_448;
  afStack_270[(uint)bVar7 * -2] = afStack_474[(uint)bVar7 * -2 + 0xc];
  afStack_270[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  CStack_2bc.y = afStack_270[0];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_cc[2] = (float)uStack_418;
  afStack_cc[(uint)bVar7 * -2 + 3] = afStack_414[(uint)bVar7 * -2];
  afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_414[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_2bc.z = fStack_bc + _DAT_005b6512;
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,&CStack_2bc,&CStack_424);
  CStack_e8.x = CStack_424.x;
  *(uint *)((int)&CStack_e8 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_424 + (uint)bVar7 * -8 + 4);
  rotation_matrix_00 = rotation_matrix;
  *(uint *)((int)&CStack_e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_424 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  CStack_298.y = CStack_298.y + _DAT_005b6516;
  CStack_268.y = CStack_268.y + _DAT_005b6516;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_298,rotation_matrix_00);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_298);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(0x01C73654,&CStack_1e4,rotation_matrix)
  ;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1e4);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(0x01C73654,&CStack_3dc,rotation_matrix)
  ;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_3dc);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(0x01C73654,&CStack_1b4,rotation_matrix)
  ;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1b4);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(0x01C73654,&CStack_1a8,rotation_matrix)
  ;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1a8);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(0x01C73654,&CStack_e8,rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_e8);
  iVar5 = 0;
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
            (0x01C73654,&CStack_298,1.1,&CStack_388,0xffff);
  do {
    fStack_40 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,8.0);
    CStack_400.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    fStack_30 = fStack_3c;
    fStack_34 = fStack_40;
    CStack_400.y = fStack_3c;
    CStack_400.z = fStack_40;
    if (&CStack_310 != (CVector3f *)(afStack_414 + 5)) {
      CStack_310.y = fStack_3c;
      CStack_310.z = fStack_40;
      CStack_310.x = CStack_400.x;
    }
    iVar5 = iVar5 + 1;
    fStack_2c = CStack_400.x;
    fStack_14 = CStack_400.x;
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,&CStack_2e0,&CStack_310,0x20000,0x10000,6,0xffff);
  } while (iVar5 < 8);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_blunderbus.wav",&CStack_7c);
  (this_ptr->base).fire_cooldown_timer = 2.5;
  return 1;
}
