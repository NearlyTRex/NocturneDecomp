// Name: core_flintlck.cpp_CFlintlock_fire_FUN_004ae850
// Address: 004ae850
// Address Range: [[004ae850, 004af577]]
// Convention: __cdecl
// Signature: int __cdecl core_flintlck_cpp_CFlintlock_fire_FUN_004ae850(CFlintlock *this_ptr)

#include "nocturne.h"

int __cdecl core_flintlck_cpp_CFlintlock_fire_FUN_004ae850(CFlintlock *this_ptr)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  EDeathState EVar5;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  int iVar6;
  CCharacter *this_ptr_02;
  CDemonActor *unaff_ESI;
  byte bVar7;
  float afStackY_11f4 [978];
  CVector3f *pCVar8;
  CWeapon *this_ptr_03;
  ulonglong in_stack_fffffd6c;
  CDemonActor *pCVar9;
  double dVar10;
  byte auStack_26c [56];
  CDemonActor *pCStack_234;
  float fStack_20c;
  float fStack_208;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f aCStack_1a4 [2];
  CTrigger *pCStack_188;
  float fStack_184;
  CVector3f CStack_180;
  float fStack_174;
  float afStack_170 [5];
  float fStack_15c;
  float afStack_158 [2];
  CVector3f CStack_150;
  float fStack_144;
  uint auStack_140 [2];
  CVector3f CStack_138;
  CCharacter *pCStack_12c;
  CVector3f CStack_128;
  uint uStack_114;
  float afStack_110 [4];
  float fStack_100;
  CVector3f aCStack_fc [2];
  CVector3f CStack_e4;
  float afStack_d8 [8];
  uint uStack_b8;
  float afStack_b4 [3];
  CVector3f CStack_a8;
  CVector3f aCStack_9c [2];
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [5];
  CVector3f CStack_60;
  float afStack_54 [7];
  float fStack_38;
  float afStack_34 [2];
  CTrigger *pCStack_2c;
  float fStack_24;
  float fStack_1c;
  CCharacter *pCStack_18;
  CTrigger *pCStack_14;
  
  bVar7 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pCVar8 = &CStack_1bc;
  CStack_1c8.z = afStack_d8[3];
  *(float *)((int)&CStack_1bc + (uint)bVar7 * -8) = afStack_d8[(uint)bVar7 * -2 + 4];
  *(float *)((int)&CStack_1bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,pCVar8,&CStack_1c8);
  CStack_1d4.x = CStack_1c8.x;
  *(uint *)((int)&CStack_1d4 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_1c8 + (uint)bVar7 * -8 + 4);
  this_ptr_03 = &this_ptr->base;
  *(uint *)((int)&CStack_1d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_1c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(this_ptr_03);
  if (iVar4 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_noammo.wav",&CStack_1d4);
    (this_ptr->base).fire_cooldown_timer = 1.0;
    return 0;
  }
  CStack_1b0.z = (this_ptr->base).bolt_velocity;
  CStack_1b0.x = 0.0;
  CStack_1b0.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
            ((CDemonActor *)this_ptr,&CStack_1b0,aCStack_1a4);
  fVar3 = CStack_1d4.y;
  fVar2 = CStack_1d4.x;
  fStack_15c = aCStack_1a4[0].x;
  afStack_158[(uint)bVar7 * -2] = *(float *)((int)aCStack_1a4 + (uint)bVar7 * -8 + 4);
  afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)aCStack_1a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  CStack_84.x = fVar2 + fStack_15c;
  CStack_84.y = fVar3 + afStack_158[0];
  CStack_84.z = CStack_1d4.z + afStack_158[1];
  CStack_180.x = fVar2 + fStack_15c;
  *(uint *)((int)&CStack_180 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_84 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_180 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  fVar2 = CStack_1d4.x;
  afStack_34[1] = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_78 = fStack_15c * afStack_34[1];
  afStack_74[0] = afStack_158[0] * afStack_34[1];
  afStack_74[1] = afStack_158[1] * afStack_34[1];
  aCStack_fc[0].x = fStack_15c * afStack_34[1];
  *(float *)((int)aCStack_fc + (uint)bVar7 * -8 + 4) = afStack_74[(uint)bVar7 * -2];
  *(float *)((int)aCStack_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_174 = fVar2 - aCStack_fc[0].x;
  afStack_170[0] = CStack_1d4.y - aCStack_fc[0].y;
  afStack_170[1] = CStack_1d4.z - aCStack_fc[0].z;
  CStack_150.x = fVar2 - aCStack_fc[0].x;
  *(float *)((int)&CStack_150 + (uint)bVar7 * -8 + 4) = afStack_170[(uint)bVar7 * -2];
  *(float *)((int)&CStack_150 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_170[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
  pCVar9 = (this_ptr->base).carried_by_actor;
  if (pCVar9 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar9);
  }
  fStack_1c = 0.0;
  do {
    pCStack_14 = (CTrigger *)
                 core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                           (g_CDemonSetPtr,&CStack_150,&CStack_180);
    dVar10 = (double)(float)pCStack_14;
    if ((dVar10 < 0.0) || (1.0 < dVar10)) break;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    iVar4 = SUB84(__BITCAST_UINT64(dVar10),0);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (EVar5 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18), 0 < (int)EVar5)
       ) {
      pCStack_14 = (CTrigger *)0x0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_01;
    if (pCStack_18 != (CCharacter *)0x0) {
      iVar6 = (*(((pCStack_18->base).vtable._uc)->_uc).isInvulnerable)(pCStack_18);
      if (iVar6 == 0) {
        pCVar9 = (CDemonActor *)((ulonglong)in_stack_fffffd6c >> 0x20);
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffd84);
        this_ptr_02 = (CCharacter *)
                      (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                ((CCharacter *)this_ptr,pCVar9,iVar4);
        auStack_26c._4_4_ = 0.4;
        auStack_26c._0_4_ = this_ptr_02;
        fStack_38 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        afStack_34[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        afStack_34[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        afStack_110[0] = fStack_38;
        afStack_110[(uint)bVar7 * -2 + 1] = afStack_34[(uint)bVar7 * -2];
        afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
             afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        fStack_24 = (float)10 /
                    SQRT(aCStack_fc[0].x * aCStack_fc[0].x +
                         afStack_110[3] * afStack_110[3] + fStack_100 * fStack_100);
        CStack_60.y = afStack_110[3] * fStack_24;
        CStack_60.z = fStack_100 * fStack_24;
        afStack_54[0] = aCStack_fc[0].x * fStack_24;
        pCStack_188 = (CTrigger *)(afStack_110[3] * fStack_24);
        (&fStack_184)[(uint)bVar7 * -2] = afStack_54[(uint)bVar7 * -2 + -1];
        *(float *)((int)&CStack_180 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2];
        if ((CTrigger **)(auStack_26c + 8) != &pCStack_188) {
          auStack_26c._8_4_ = pCStack_188;
          auStack_26c._12_4_ = fStack_184;
          auStack_26c._16_4_ = CStack_180.x;
        }
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  (unaff_ESI,&g_CDemonSetPtr->collision_impact_position,&CStack_128);
        fStack_20c = CStack_128.x;
        (&fStack_208)[(uint)bVar7 * -2] = *(float *)((int)&CStack_128 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_204 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&CStack_128 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        if ((float *)(auStack_26c + 0x18) != &fStack_20c) {
          auStack_26c._24_4_ = fStack_20c;
          auStack_26c._28_4_ = fStack_208;
          auStack_26c._32_4_ = CStack_204.x;
        }
        auStack_26c._36_4_ = (this_ptr->base).ammo_type;
        auStack_26c._44_4_ = 1.41531e-43;
        auStack_26c._48_4_ = this_ptr;
        auStack_26c._40_4_ = (CDemonActor *)0x3e19999a;
        pCStack_234 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
        (*(((this_ptr_02->base).vtable._uc)->_uc).processDamage)
                  (this_ptr_02,(SDamageInfo *)auStack_26c);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                  (g_CGorePtr,&g_CDemonSetPtr->collision_impact_position,(CVector3f *)0x0,4,
                   *(EBloodType *)(this_ptr[7].base.base.create_event + 0x1c));
      }
      break;
    }
    if (this_ptr_00 == (CGlass *)0x0) {
      if (this_ptr_01 == (CTrigger *)0x0) {
        core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                  (g_CFireEffect_PTR_005fc5a0,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,0);
        pCStack_12c = (CCharacter *)((g_CDemonSetPtr->collision_impact_position).x - CStack_150.x);
        CStack_128.x = (g_CDemonSetPtr->collision_impact_position).y - CStack_150.y;
        CStack_128.y = (g_CDemonSetPtr->collision_impact_position).z - CStack_150.z;
        CStack_60.x = (float)pCStack_12c;
        afStack_54[(uint)bVar7 * -2 + -2] = *(float *)((int)&CStack_128 + (uint)bVar7 * -8);
        afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1] =
             *(float *)((int)&CStack_128 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
        if (aCStack_9c != &CStack_60) {
          aCStack_9c[0].x = CStack_60.x;
          aCStack_9c[0].y = CStack_60.y;
          aCStack_9c[0].z = CStack_60.z;
        }
        if (20.0f <=
            SQRT(aCStack_9c[0].z * aCStack_9c[0].z +
                 aCStack_9c[0].x * aCStack_9c[0].x + aCStack_9c[0].y * aCStack_9c[0].y)) break;
        pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
        uVar1 = g_CDemonSetPtr->ground_type;
        if (uVar1 < 7) {
          if (uVar1 != 2) {
LAB_004af530:
            pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
            core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                      (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"RIC-DT.WAV",
                       &CStack_1d4,(float)pCStack_14);
            break;
          }
        }
        else {
          if (uVar1 < 8) {
            if ((float)0.5 <= (float)pCStack_14) {
              pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"RIC-WD0C.WAV",
                         &CStack_1d4,(float)pCStack_14);
            }
            else {
              pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"RIC-WD0B.WAV",
                         &CStack_1d4,(float)pCStack_14);
            }
            break;
          }
          if (uVar1 != 8) goto LAB_004af530;
        }
        if ((float)pCStack_14 < (float)0.33000000000000002) {
          pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"RIC-CT0A.WAV",
                     &CStack_1d4,(float)pCStack_14);
        }
        else if (0.66000000000000003 <= (double)(float)pCStack_14) {
          pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"RIC-CT0C.WAV",
                     &CStack_1d4,(float)pCStack_14);
        }
        else {
          pCStack_14 = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"RIC-CT0B.WAV",
                     &CStack_1d4,(float)pCStack_14);
        }
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
      iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                        (this_ptr_01,(CDemonActor *)this_ptr);
      if (iVar4 != 0) {
        unaff_ESI = (CDemonActor *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,(CDemonActor *)in_stack_fffffd6c,
                               (int)((ulonglong)in_stack_fffffd6c >> 0x20));
        in_stack_fffffd6c = CONCAT44(this_ptr_01,0x4af3bb);
        core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,(float)unaff_ESI);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_2c->base);
    }
    else {
      iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar4 == 0) break;
      core_glass_cpp_CGlass_shatter_FUN_004cc040
                (this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    fStack_1c = (float)((int)fStack_1c + 1);
  } while ((int)fStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  fStack_144 = CStack_1d4.x;
  auStack_140[(uint)bVar7 * -2] = *(uint *)((int)&CStack_1d4 + (uint)bVar7 * -8 + 4);
  auStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(uint *)((int)&CStack_1d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  CStack_1e0.x = CStack_e4.y;
  *(float *)((int)&CStack_1e0 + (uint)bVar7 * -8 + 4) = afStack_d8[(uint)bVar7 * -2 + -1];
  *(float *)((int)&CStack_1e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2];
  afStack_110[3] = CStack_1e0.y;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  afStack_d8[1] = afStack_54[2];
  afStack_d8[(uint)bVar7 * -2 + 2] = afStack_54[(uint)bVar7 * -2 + 3];
  afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3] =
       afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  aCStack_fc[0].x = afStack_d8[3];
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  uStack_b8 = uStack_114;
  afStack_b4[(uint)bVar7 * -2] = afStack_110[(uint)bVar7 * -2];
  afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  aCStack_fc[0].z = afStack_b4[2] + (float)-1.25;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
            ((CDemonActor *)this_ptr,aCStack_fc,&CStack_204);
  pCVar8 = &CStack_138;
  CStack_a8.x = CStack_204.x;
  *(uint *)((int)aCStack_9c + (uint)bVar7 * -8 + -8) =
       *(uint *)((int)&CStack_204 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)aCStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
       *(uint *)((int)&CStack_204 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  CStack_138.y = CStack_138.y + -0.125f;
  aCStack_fc[0].y = aCStack_fc[0].y + -0.125f;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(g_CFireEffect_PTR_005fc5a0,pCVar8);
  iVar4 = 0;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (g_CFireEffect_PTR_005fc5a0,&CStack_138,&(this_ptr->base).base.orient_matrix);
  do {
    afStack_34[1] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    pCStack_2c = (CTrigger *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,8.0);
    CStack_1ec.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    pCStack_14 = pCStack_2c;
    fStack_1c = afStack_34[1];
    CStack_1ec.y = (float)pCStack_2c;
    CStack_1ec.z = afStack_34[1];
    if (aCStack_9c != &CStack_1ec) {
      aCStack_9c[0].y = (float)pCStack_2c;
      aCStack_9c[0].z = afStack_34[1];
      aCStack_9c[0].x = CStack_1ec.x;
    }
    iVar4 = iVar4 + 1;
    pCStack_18 = (CCharacter *)CStack_1ec.x;
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (g_CFireEffect_PTR_005fc5a0,&CStack_a8,aCStack_9c,0x20000,0x10000,6,0xffff);
  } while (iVar4 < 4);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_flintlock.wav",&CStack_1c8);
  (this_ptr->base).fire_cooldown_timer = 1.0;
  CStack_180.x = 3.0;
  CStack_180.y = 3.0;
  CStack_180.z = -4.0;
  CStack_1e0.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_1e0.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_1e0.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            ((CMatrix3x3f *)(auStack_26c + 0x34),&CStack_1e0);
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
            ((CMatrix3x3f *)(auStack_26c + 0x34),&CStack_180,&CStack_1f8);
  pCVar8 = &CStack_84;
  CStack_84.x = CStack_1f8.x;
  *(uint *)((int)&CStack_84 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&CStack_1f8 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&CStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&CStack_1f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00((CDemonActor *)this_ptr,pCVar8,&CStack_e4)
  ;
  fStack_15c = CStack_e4.x;
  afStack_158[(uint)bVar7 * -2] = afStack_d8[(uint)bVar7 * -2 + -2];
  afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1];
  return 1;
}
