// Name: core_flintlck.cpp_CFlintlock_fire_FUN_004ae850
// Address: 004ae850
// Address Range: [[004ae850, 004af577]]
// Convention: __cdecl
// Signature: int __cdecl core_flintlck_cpp_CFlintlock_fire_FUN_004ae850(CFlintlock *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flintlck_cpp_CFlintlock_fire_FUN_004ae850(CFlintlock *this_ptr)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  byte bVar5;
  float afStackY_1208 [981];
  float *pfVar6;
  CWeapon *this_ptr_02;
  CVector3f *position;
  uint *puVar7;
  int iStack_284;
  float fStack_280;
  uint uStack_27c;
  float fStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_268;
  float fStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  CFlintlock *pCStack_250;
  uint uStack_24c;
  CMatrix3x3f CStack_248;
  uint uStack_220;
  float afStack_21c [5];
  uint uStack_208;
  CVector3f CStack_1fc;
  CVector3f CStack_1f0;
  uint uStack_1e4;
  float afStack_1e0 [2];
  CVector3f CStack_1d8;
  float fStack_1cc;
  float afStack_1c8 [5];
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  float fStack_1a8;
  float afStack_1a4 [4];
  uint uStack_194;
  float afStack_190 [4];
  float afStack_180 [4];
  float fStack_170;
  uint uStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  CVector3f CStack_148;
  uint uStack_13c;
  float afStack_138 [4];
  float fStack_128;
  uint uStack_124;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [5];
  uint uStack_e8;
  uint uStack_dc;
  float fStack_d8;
  uint uStack_d0;
  uint uStack_c4;
  float fStack_bc;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CTrigger *pCStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  pfVar6 = afStack_1c8 + 2;
  afStack_1c8[2] = (float)uStack_d0;
  afStack_1c8[(uint)bVar5 * -2 + 3] = afStack_fc[(uint)bVar5 * -2 + 0xc];
  afStack_1c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar6);
  CStack_1d8.x = fStack_1cc;
  *(float *)((int)&CStack_1d8 + (uint)bVar5 * -8 + 4) = afStack_1c8[(uint)bVar5 * -2];
  this_ptr_02 = (CWeapon *)this_ptr;
  *(float *)((int)&CStack_1d8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_1c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(this_ptr_02);
  if (iVar4 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_noammo.wav",&CStack_1d8);
    *(uint *)&this_ptr->field_0x300 = 0x3f800000;
    return 0;
  }
  uStack_1ac = *(uint *)&this_ptr->field_0x2e8;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_1c8 + 5);
  fVar3 = CStack_1d8.y;
  fVar2 = CStack_1d8.x;
  fStack_160 = fStack_1a8;
  afStack_180[(uint)bVar5 * -2 + 9] = afStack_1a4[(uint)bVar5 * -2];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_1a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  afStack_90[2] = fVar2 + fStack_160;
  afStack_90[3] = fVar3 + fStack_15c;
  fStack_80 = CStack_1d8.z + fStack_158;
  afStack_190[3] = fVar2 + fStack_160;
  afStack_180[(uint)bVar5 * -2] = afStack_90[(uint)bVar5 * -2 + 3];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  fVar2 = CStack_1d8.x;
  fStack_34 = (float)_DAT_005c1d1d / *(float *)&this_ptr->field_0x2e8;
  fStack_7c = fStack_160 * fStack_34;
  fStack_78 = fStack_15c * fStack_34;
  fStack_74 = fStack_158 * fStack_34;
  fStack_100 = fStack_160 * fStack_34;
  afStack_fc[(uint)bVar5 * -2] = afStack_90[(uint)bVar5 * -2 + 6];
  afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  afStack_180[2] = fVar2 - fStack_100;
  afStack_180[3] = CStack_1d8.y - afStack_fc[0];
  fStack_170 = CStack_1d8.z - afStack_fc[1];
  fStack_154 = fVar2 - fStack_100;
  afStack_180[(uint)bVar5 * -2 + 0xc] = afStack_180[(uint)bVar5 * -2 + 3];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
  if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
  }
  iStack_20 = 0;
  do {
    fStack_18 = (float)core_setcolid_cpp_FUN_0053ccc0
                                 (g_CDemonSetPtr,afStack_180 + 0xb,afStack_1a4 + 8);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iStack_1c = core_actor_cpp_castToClassHash_FUN_0040c840
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_1c != 0) &&
       (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar4)) {
      iStack_1c = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_30 = this_ptr_01;
    if (iStack_1c != 0) {
      iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c);
      if (iVar4 == 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&iStack_284);
        iStack_284 = g_CDemonSetPtr->collision_part_index;
        fStack_18 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
        uStack_27c = 0x3ecccccd;
        fStack_280 = fStack_18;
        fStack_4c = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        fStack_48 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        fStack_44 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        fStack_118 = fStack_4c;
        afStack_138[(uint)bVar5 * -2 + 9] = afStack_90[(uint)bVar5 * -2 + 0x12];
        afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
        fStack_38 = (float)_DAT_005c1d45 /
                    SQRT(fStack_110 * fStack_110 + fStack_118 * fStack_118 + fStack_114 * fStack_114
                        );
        fStack_70 = fStack_118 * fStack_38;
        fStack_6c = fStack_114 * fStack_38;
        fStack_68 = fStack_110 * fStack_38;
        afStack_1a4[2] = fStack_118 * fStack_38;
        afStack_1a4[(uint)bVar5 * -2 + 3] = afStack_90[(uint)bVar5 * -2 + 9];
        afStack_1a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        if (&fStack_278 != afStack_1a4 + 2) {
          fStack_278 = afStack_1a4[2];
          uStack_274 = afStack_1a4[3];
          uStack_270 = uStack_194;
        }
        core_actor_cpp_FUN_00408bf0(iStack_1c,&g_CDemonSetPtr->collision_impact_position);
        uStack_220 = uStack_13c;
        afStack_21c[(uint)bVar5 * -2] = afStack_138[(uint)bVar5 * -2];
        afStack_21c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (&uStack_268 != &uStack_220) {
          uStack_268 = uStack_220;
          fStack_264 = afStack_21c[0];
          uStack_260 = afStack_21c[1];
        }
        uStack_25c = *(uint *)&this_ptr->field_0x56c;
        uStack_254 = 0x65;
        pCStack_250 = this_ptr;
        uStack_258 = 0x3e19999a;
        uStack_24c = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x94))(this_ptr);
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,&iStack_284);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                  (g_CGorePtr,&g_CDemonSetPtr->collision_impact_position,(CVector3f *)0x0,4,
                   *(EBloodType *)(iStack_1c + 0x27a0));
      }
      break;
    }
    if (this_ptr_00 == (CGlass *)0x0) {
      if (this_ptr_01 == (CTrigger *)0x0) {
        core_fire_cpp_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,0);
        afStack_138[2] = (g_CDemonSetPtr->collision_impact_position).x - fStack_154;
        afStack_138[3] = (g_CDemonSetPtr->collision_impact_position).y - fStack_150;
        fStack_128 = (g_CDemonSetPtr->collision_impact_position).z - fStack_14c;
        fStack_64 = afStack_138[2];
        afStack_90[(uint)bVar5 * -2 + 0xc] = afStack_138[(uint)bVar5 * -2 + 3];
        afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if (&fStack_a0 != afStack_90 + 0xb) {
          fStack_a0 = fStack_64;
          fStack_9c = fStack_60;
          fStack_98 = fStack_5c;
        }
        if (_DAT_005c1d25 <=
            SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c)) break;
        fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
        uVar1 = g_CDemonSetPtr->ground_type;
        if (uVar1 < 7) {
          if (uVar1 != 2) {
LAB_004af530:
            fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
            core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                      (0x02CF5680,(CDemonActor *)this_ptr,"RIC-DT.WAV",&CStack_1d8,
                       fStack_18);
            break;
          }
        }
        else {
          if (uVar1 < 8) {
            if ((float)_DAT_005c1d2d <= fStack_18) {
              fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (0x02CF5680,(CDemonActor *)this_ptr,"RIC-WD0C.WAV",&CStack_1d8,
                         fStack_18);
            }
            else {
              fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
              core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                        (0x02CF5680,(CDemonActor *)this_ptr,"RIC-WD0B.WAV",&CStack_1d8,
                         fStack_18);
            }
            break;
          }
          if (uVar1 != 8) goto LAB_004af530;
        }
        if (fStack_18 < (float)_DAT_005c1d35) {
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0A.WAV",&CStack_1d8,
                     fStack_18);
        }
        else if (_DAT_005c1d3d <= (double)fStack_18) {
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0C.WAV",&CStack_1d8,
                     fStack_18);
        }
        else {
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.2);
          core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
                    (0x02CF5680,(CDemonActor *)this_ptr,"RIC-CT0B.WAV",&CStack_1d8,
                     fStack_18);
        }
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
      iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                        (this_ptr_01,(CDemonActor *)this_ptr);
      if (iVar4 != 0) {
        fStack_18 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
        core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fStack_18);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_30->base);
    }
    else {
      iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar4 == 0) break;
      core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  CStack_148.x = CStack_1d8.x;
  *(uint *)((int)&CStack_148 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_1d8 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_148 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_1d8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_1e4 = uStack_e8;
  afStack_1e0[(uint)bVar5 * -2] = afStack_fc[(uint)bVar5 * -2 + 6];
  afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  fStack_10c = (float)uStack_1e4;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_dc = uStack_58;
  afStack_fc[(uint)bVar5 * -2 + 9] = afStack_90[(uint)bVar5 * -2 + 0xf];
  afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  fStack_108 = fStack_d8;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_c4 = uStack_124;
  afStack_fc[(uint)bVar5 * -2 + 0xf] = afStack_138[(uint)bVar5 * -2 + 6];
  afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
       afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  fStack_104 = fStack_bc + (float)_DAT_005c1d4d;
  core_actor_cpp_FUN_00408b80(this_ptr,afStack_138 + 0xb);
  position = &CStack_148;
  CStack_b8.x = afStack_21c[2];
  *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + 4) = afStack_21c[(uint)bVar5 * -2 + 3];
  *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_21c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  CStack_148.y = CStack_148.y + _DAT_005c1d55;
  fStack_108 = fStack_108 + _DAT_005c1d55;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,position);
  iVar4 = 0;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_148,(CMatrix3x3f *)&this_ptr->field_0x3c);
  do {
    fStack_40 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,8.0);
    CStack_1fc.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,3.0);
    fStack_24 = fStack_3c;
    fStack_2c = fStack_40;
    CStack_1fc.y = fStack_3c;
    CStack_1fc.z = fStack_40;
    if (&CStack_ac != (CVector3f *)(afStack_21c + 8)) {
      CStack_ac.y = fStack_3c;
      CStack_ac.z = fStack_40;
      CStack_ac.x = CStack_1fc.x;
    }
    iVar4 = iVar4 + 1;
    fStack_28 = CStack_1fc.x;
    fStack_18 = CStack_1fc.x;
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,&CStack_b8,&CStack_ac,0x20000,0x10000,6,0xffff);
  } while (iVar4 < 4);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_flintlock.wav",&CStack_1d8);
  *(uint *)&this_ptr->field_0x300 = 0x3f800000;
  afStack_190[0] = 3.0;
  afStack_190[1] = 3.0;
  afStack_190[2] = -4.0;
  CStack_1f0.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  fStack_18 = CStack_1f0.x;
  CStack_1f0.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_1f0.z = 0.0;
  fStack_18 = CStack_1f0.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_248,&CStack_1f0);
  core_dirmat_cpp_FUN_0045b800(&CStack_248,afStack_1a4 + 5);
  puVar7 = &uStack_94;
  uStack_94 = uStack_208;
  afStack_90[(uint)bVar5 * -2] = afStack_21c[(uint)bVar5 * -2 + 6];
  afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_21c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_actor_cpp_FUN_00408b00(this_ptr,puVar7);
  uStack_16c = afStack_fc[2];
  afStack_180[(uint)bVar5 * -2 + 6] = afStack_fc[(uint)bVar5 * -2 + 3];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  return 1;
}
