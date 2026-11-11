// Name: core_flintlck.cpp_CFlintlock_fire_FUN_004ae850
// Address: 004ae850
// Address Range: [[004ae850, 004af577]]
// Convention: __cdecl
// Signature: int __cdecl core_flintlck_cpp_CFlintlock_fire_FUN_004ae850(CFlintlock *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flintlck_cpp_CFlintlock_fire_FUN_004ae850(CFlintlock *this_ptr)

{
  CDemonActor *actor;
  uint uVar1;
  float fVar2;
  int iVar3;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  float fVar4;
  byte bVar5;
  float afStackY_11f8 [979];
  float *pfVar6;
  CWeapon *this_ptr_02;
  ulonglong in_stack_fffffd6c;
  CVector3f *position;
  float fStack_284;
  SDamageInfo SStack_280;
  uint uStack_244;
  CFlintlock *pCStack_240;
  CMatrix3x3f CStack_238;
  float fStack_210;
  float fStack_20c;
  EDamageType EStack_208;
  float fStack_204;
  uint uStack_1f8;
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  float afStack_1bc [6];
  float fStack_1a4;
  float afStack_1a0 [5];
  float fStack_18c;
  float afStack_188 [6];
  float fStack_170;
  float fStack_16c;
  float fStack_15c;
  float afStack_158 [4];
  float fStack_148;
  float fStack_144;
  CVector3f CStack_138;
  float fStack_12c;
  float afStack_128 [5];
  float fStack_114;
  float afStack_110 [4];
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [5];
  uint uStack_e4;
  float afStack_e0 [5];
  float fStack_cc;
  float fStack_b8;
  float afStack_b4 [3];
  CVector3f CStack_a8;
  CVector3f aCStack_9c [2];
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  CVector3f CStack_60;
  uint uStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CTrigger *pCStack_2c;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  CTrigger *pCStack_14;
  
  bVar5 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar6 = afStack_1bc;
  CStack_1c8.z = fStack_cc;
  afStack_1bc[(uint)bVar5 * -2] = afStack_e0[(uint)bVar5 * -2 + 6];
  afStack_1bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar6);
  CStack_1d4.x = CStack_1c8.x;
  *(float *)((int)&CStack_1d4 + (uint)bVar5 * -8 + 4) = afStack_1bc[(uint)bVar5 * -2 + -2];
  this_ptr_02 = &this_ptr->base;
  *(float *)((int)&CStack_1d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_1bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(this_ptr_02);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_noammo.wav",&CStack_1d4);
    (this_ptr->base).fire_cooldown_timer = 1.0;
    return 0;
  }
  afStack_1bc[5] = (this_ptr->base).bolt_velocity;
  afStack_1bc[3] = 0.0;
  afStack_1bc[4] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_1bc + 3);
  fVar2 = CStack_1d4.y;
  fVar4 = CStack_1d4.x;
  fStack_15c = fStack_1a4;
  afStack_158[(uint)bVar5 * -2] = afStack_1a0[(uint)bVar5 * -2];
  afStack_158[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_1a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_84 = fVar4 + fStack_15c;
  afStack_80[0] = fVar2 + afStack_158[0];
  afStack_80[1] = CStack_1d4.z + afStack_158[1];
  afStack_188[2] = fVar4 + fStack_15c;
  afStack_188[(uint)bVar5 * -2 + 3] = afStack_80[(uint)bVar5 * -2];
  afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fVar4 = CStack_1d4.x;
  fStack_30 = (float)_DAT_005c1d1d / (this_ptr->base).bolt_velocity;
  afStack_80[2] = fStack_15c * fStack_30;
  afStack_80[3] = afStack_158[0] * fStack_30;
  fStack_70 = afStack_158[1] * fStack_30;
  fStack_fc = fStack_15c * fStack_30;
  afStack_f8[(uint)bVar5 * -2] = afStack_80[(uint)bVar5 * -2 + 3];
  afStack_f8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  afStack_188[5] = fVar4 - fStack_fc;
  fStack_170 = CStack_1d4.y - afStack_f8[0];
  fStack_16c = CStack_1d4.z - afStack_f8[1];
  afStack_158[2] = fVar4 - fStack_fc;
  afStack_158[(uint)bVar5 * -2 + 3] = afStack_188[(uint)bVar5 * -2 + 6];
  afStack_158[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,actor);
  }
  fStack_1c = 0.0;
  do {
    pCStack_14 = (CTrigger *)
                 core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_158 + 2,afStack_188 + 2);
    if (((float)pCStack_14 < 0.0) || (1.0 < (float)pCStack_14)) break;
    fStack_18 = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                                 (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((fStack_18 != 0.0) &&
       (iVar3 = (**(code **)(*(int *)((int)fStack_18 + 0x154) + 0x10c))(fStack_18), 0 < iVar3)) {
      fStack_18 = 0.0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_01;
    if (fStack_18 != 0.0) {
      iVar3 = (**(code **)(*(int *)((int)fStack_18 + 0x154) + 0xe0))(fStack_18);
      if (iVar3 == 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_280);
        SStack_280.hit_part_index = g_CDemonSetPtr->collision_part_index;
        fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,(CDemonActor *)in_stack_fffffd6c,
                                  (int)((ulonglong)in_stack_fffffd6c >> 0x20));
        SStack_280.impact_point.z = 0.4;
        SStack_280.impact_point.y = fVar4;
        afStack_48[3] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        fStack_38 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        fStack_34 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        fStack_114 = afStack_48[3];
        afStack_110[(uint)bVar5 * -2] = afStack_48[(uint)bVar5 * -2 + 4];
        afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
        fStack_28 = (float)_DAT_005c1d45 /
                    SQRT(fStack_100 * fStack_100 +
                         afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3]);
        CStack_60.x = afStack_110[2] * fStack_28;
        CStack_60.y = (float)(afStack_110[3] * fStack_28);
        CStack_60.z = fStack_100 * fStack_28;
        fStack_18c = afStack_110[2] * fStack_28;
        afStack_188[(uint)bVar5 * -2] =
             *(float *)((int)&CStack_60 + ((uint)bVar5 * -2 + -1) * 4 + 8);
        afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             *(float *)((int)&CStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4 + 8);
        if (&SStack_280.impact_force != &fStack_18c) {
          SStack_280.impact_force = fStack_18c;
          SStack_280.impact_direction.x = afStack_188[0];
          SStack_280.impact_direction.y = afStack_188[1];
        }
        core_actor_cpp_FUN_00408bf0();
        fStack_210 = fStack_12c;
        (&fStack_20c)[(uint)bVar5 * -2] = afStack_128[(uint)bVar5 * -2];
        (&fStack_20c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if ((float *)&SStack_280.ammo_type != &fStack_210) {
          SStack_280.ammo_type = (EAmmoType)fStack_210;
          SStack_280.dismember_prob = fStack_20c;
          SStack_280.damage_type = EStack_208;
        }
        SStack_280.attacker = (CDemonActor *)(this_ptr->base).ammo_type;
        uStack_244 = 0x65;
        pCStack_240 = this_ptr;
        SStack_280.wielder = (CDemonActor *)0x3e19999a;
        CStack_238.m[0].x =
             (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
        (**(code **)(*(int *)((int)fVar4 + 0x154) + 0x108))(fVar4);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                  (g_CGorePtr,&g_CDemonSetPtr->collision_impact_position,(CVector3f *)0x0,4,
                   *(EBloodType *)((int)fStack_18 + 0x27a0));
      }
      break;
    }
    if (this_ptr_00 == (CGlass *)0x0) {
      if (this_ptr_01 == (CTrigger *)0x0) {
        core_fire_cpp_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,0);
        fStack_12c = (g_CDemonSetPtr->collision_impact_position).x - afStack_158[2];
        afStack_128[0] = (g_CDemonSetPtr->collision_impact_position).y - afStack_158[3];
        afStack_128[1] = (g_CDemonSetPtr->collision_impact_position).z - fStack_148;
        CStack_60.x = fStack_12c;
        *(float *)((int)&CStack_60 + ((uint)bVar5 * -2 + -1) * 4 + 8) =
             afStack_128[(uint)bVar5 * -2];
        *(float *)((int)&CStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4 + 8) =
             afStack_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (aCStack_9c != &CStack_60) {
          aCStack_9c[0].x = CStack_60.x;
          aCStack_9c[0].y = CStack_60.y;
          aCStack_9c[0].z = CStack_60.z;
        }
        if (_DAT_005c1d25 <=
            SQRT(aCStack_9c[0].z * aCStack_9c[0].z +
                 aCStack_9c[0].x * aCStack_9c[0].x + aCStack_9c[0].y * aCStack_9c[0].y)) break;
        fStack_284 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
        uVar1 = g_CDemonSetPtr->ground_type;
        pCStack_14 = (CTrigger *)fStack_284;
        if (uVar1 < 7) {
          if (uVar1 != 2) {
LAB_004af530:
            pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
            core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                      (0x02CF5680,(CDemonActor *)this_ptr,"RIC-DT.WAV",&CStack_1d4,
                       (float)pCStack_14);
            break;
          }
        }
        else {
          if (uVar1 < 8) {
            if ((float)_DAT_005c1d2d <= fStack_284) {
              pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (0x02CF5680,(CDemonActor *)this_ptr,"RIC-WD0C.WAV",&CStack_1d4,
                         (float)pCStack_14);
            }
            else {
              pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (0x02CF5680,(CDemonActor *)this_ptr,"RIC-WD0B.WAV",&CStack_1d4,
                         (float)pCStack_14);
            }
            break;
          }
          if (uVar1 != 8) goto LAB_004af530;
        }
        if (fStack_284 < (float)_DAT_005c1d35) {
          pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0A.WAV",&CStack_1d4,
                     (float)pCStack_14);
        }
        else if (_DAT_005c1d3d <= (double)fStack_284) {
          pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0C.WAV",&CStack_1d4,
                     (float)pCStack_14);
        }
        else {
          pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0B.WAV",&CStack_1d4,
                     (float)pCStack_14);
        }
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
      iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                        (this_ptr_01,(CDemonActor *)this_ptr);
      if (iVar3 != 0) {
        fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,(CDemonActor *)in_stack_fffffd6c,
                                  (int)((ulonglong)in_stack_fffffd6c >> 0x20));
        in_stack_fffffd6c = CONCAT44(this_ptr_01,0x4af3bb);
        core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fVar4);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_2c->base);
    }
    else {
      iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar3 == 0) break;
      core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    fStack_1c = (float)((int)fStack_1c + 1);
  } while ((int)fStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  fStack_144 = CStack_1d4.x;
  afStack_158[(uint)bVar5 * -2 + 6] = *(float *)((int)&CStack_1d4 + (uint)bVar5 * -8 + 4);
  afStack_158[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       *(float *)((int)&CStack_1d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  CStack_1e0.x = afStack_e0[0];
  *(float *)((int)&CStack_1e0 + (uint)bVar5 * -8 + 4) = afStack_e0[(uint)bVar5 * -2 + 1];
  *(float *)((int)&CStack_1e0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2];
  afStack_110[3] = CStack_1e0.y;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_e0[3] = (float)uStack_4c;
  afStack_e0[(uint)bVar5 * -2 + 4] = afStack_48[(uint)bVar5 * -2];
  afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
       afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_fc = fStack_cc;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  fStack_b8 = fStack_114;
  afStack_b4[(uint)bVar5 * -2] = afStack_110[(uint)bVar5 * -2];
  afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  afStack_f8[1] = afStack_b4[2] + (float)_DAT_005c1d4d;
  core_actor_cpp_FUN_00408b80();
  position = &CStack_138;
  CStack_a8.x = fStack_204;
  *(float *)((int)aCStack_9c + (uint)bVar5 * -8 + -8) = (&fStack_20c)[(uint)bVar5 * -2 + 3];
  *(float *)((int)aCStack_9c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4) =
       (&fStack_20c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  CStack_138.y = CStack_138.y + _DAT_005c1d55;
  afStack_f8[0] = afStack_f8[0] + _DAT_005c1d55;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,position);
  iVar3 = 0;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_138,&(this_ptr->base).base.orient_matrix);
  do {
    fStack_30 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    pCStack_2c = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,8.0);
    CStack_1ec.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    pCStack_14 = pCStack_2c;
    fStack_1c = fStack_30;
    CStack_1ec.y = (float)pCStack_2c;
    CStack_1ec.z = fStack_30;
    if (aCStack_9c != &CStack_1ec) {
      aCStack_9c[0].y = (float)pCStack_2c;
      aCStack_9c[0].z = fStack_30;
      aCStack_9c[0].x = CStack_1ec.x;
    }
    iVar3 = iVar3 + 1;
    fStack_18 = CStack_1ec.x;
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,&CStack_a8,aCStack_9c,0x20000,0x10000,6,0xffff);
  } while (iVar3 < 4);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_flintlock.wav",&CStack_1c8);
  (this_ptr->base).fire_cooldown_timer = 1.0;
  afStack_188[2] = 3.0;
  afStack_188[3] = 3.0;
  afStack_188[4] = -4.0;
  CStack_1e0.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_1e0.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_1e0.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_238,&CStack_1e0);
  core_dirmat_cpp_FUN_0045b800();
  fStack_84 = (float)uStack_1f8;
  afStack_80[(uint)bVar5 * -2] = (&fStack_20c)[(uint)bVar5 * -2 + 6];
  afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (&fStack_20c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_actor_cpp_FUN_00408b00();
  fStack_15c = (float)uStack_e4;
  afStack_158[(uint)bVar5 * -2] = afStack_e0[(uint)bVar5 * -2];
  afStack_158[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  return 1;
}
