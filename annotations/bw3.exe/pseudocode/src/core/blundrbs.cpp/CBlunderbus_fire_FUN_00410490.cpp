// Name: core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490
// Address: 00410490
// Address Range: [[00410490, 00411743]]
// Convention: __cdecl
// Signature: int __cdecl core_blundrbs_cpp_CBlunderbus_fire_FUN_00410490(CBlunderbus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_blundrbs_cpp_CBlunderbus_fire_FUN_00410490(CBlunderbus *this_ptr)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  byte *rotation_matrix;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1460 [991];
  uint *puVar10;
  CBlunderbus *this_ptr_02;
  CDemonSet *this_ptr_03;
  CMatrix3x3f *rotation_matrix_00;
  int aiStack_4b4 [3];
  float fStack_4a8;
  uint uStack_4a4;
  uint uStack_4a0;
  float fStack_498;
  uint uStack_494;
  uint uStack_490;
  uint uStack_48c;
  uint uStack_488;
  uint uStack_484;
  CBlunderbus *pCStack_480;
  uint uStack_47c;
  float fStack_478;
  float afStack_474 [5];
  uint uStack_460;
  uint uStack_45c;
  uint uStack_454;
  uint uStack_448;
  uint uStack_43c;
  uint uStack_430;
  float fStack_424;
  uint uStack_418;
  uint uStack_40c;
  CVector3f CStack_400;
  float fStack_3f4;
  float afStack_3f0 [5];
  CVector3f CStack_3dc;
  float fStack_3d0;
  float afStack_3cc [4];
  float fStack_3bc;
  uint uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  uint uStack_3a0;
  uint auStack_39c [4];
  float fStack_38c;
  CVector3f CStack_388;
  uint uStack_37c;
  float afStack_378 [5];
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  uint uStack_358;
  uint auStack_354 [4];
  float fStack_344;
  uint uStack_340;
  float afStack_33c [4];
  float fStack_32c;
  uint uStack_328;
  float fStack_31c;
  CVector3f CStack_310;
  uint uStack_304;
  float afStack_300 [4];
  float fStack_2f0;
  uint uStack_2ec;
  float fStack_2e4;
  CVector3f CStack_2e0;
  uint uStack_2d4;
  float afStack_2d0 [5];
  uint uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  uint uStack_2b0;
  float afStack_2ac [4];
  float fStack_29c;
  CVector3f CStack_298;
  uint uStack_28c;
  float afStack_288 [5];
  uint uStack_274;
  float afStack_270 [4];
  float fStack_260;
  uint uStack_25c;
  float afStack_258 [5];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_22c;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  uint uStack_214;
  float fStack_208;
  uint uStack_204;
  uint uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  uint uStack_1f0;
  CVector3f CStack_1e4;
  float fStack_1d8;
  float afStack_1d4 [5];
  uint uStack_1c0;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  uint uStack_19c;
  float afStack_198 [4];
  float fStack_188;
  uint uStack_184;
  uint uStack_180;
  float fStack_17c;
  uint uStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float afStack_154 [3];
  float fStack_148;
  uint uStack_13c;
  uint uStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint uStack_124;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f4;
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [4];
  float fStack_c8;
  uint uStack_c4;
  float fStack_bc;
  uint uStack_b8;
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_94;
  uint uStack_88;
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [10];
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
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  puVar10 = &uStack_2d4;
  uStack_2d4 = uStack_94;
  afStack_2d0[(uint)bVar7 * -2] = afStack_d8[(uint)bVar7 * -2 + 0x12];
  afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  core_actor_cpp_FUN_00408b80(this_ptr,puVar10);
  CStack_7c.x = fStack_22c;
  *(float *)((int)&CStack_7c + (uint)bVar7 * -8 + 4) = afStack_258[(uint)bVar7 * -2 + 0xc];
  this_ptr_02 = this_ptr;
  *(float *)((int)&CStack_7c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  iVar5 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr_02);
  if (iVar5 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_noammo.wav",&CStack_7c);
    *(uint *)&this_ptr->field_0x300 = 0x3f800000;
    return 0;
  }
  fVar8 = (float10)fptan((float10)*(float *)&this_ptr->field_0x594 * (float10)_DAT_005b64e2 *
                         (float10)_DAT_005b64ea);
  fStack_38 = (float)(fVar8 * (float10)*(float *)&this_ptr->field_0x2e8);
  iStack_28 = 0;
  if (0 < *(int *)&this_ptr->field_0x58c) {
    do {
      fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
      fStack_14 = fStack_44;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,fStack_38);
      fVar8 = (float10)fcos((float10)fStack_44);
      fVar9 = (float10)fsin((float10)fStack_44);
      fStack_364 = (float)(fVar8 * (float10)fStack_14);
      fStack_360 = (float)(fVar9 * (float10)fStack_14);
      fStack_35c = *(float *)&this_ptr->field_0x2e8;
      core_actor_cpp_FUN_00408b00(this_ptr,afStack_378 + 5);
      afStack_174[2] = fStack_3f4;
      afStack_174[(uint)bVar7 * -2 + 3] = afStack_3f0[(uint)bVar7 * -2];
      afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_3f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (afStack_378 + 5 != afStack_174 + 2) {
        fStack_364 = afStack_174[2];
        fStack_360 = afStack_174[3];
        fStack_35c = fStack_164;
      }
      fStack_478 = CStack_7c.x + fStack_364;
      afStack_474[0] = CStack_7c.y + fStack_360;
      afStack_474[1] = CStack_7c.z + fStack_35c;
      afStack_154[0] = CStack_7c.x + fStack_364;
      afStack_174[(uint)bVar7 * -2 + 9] = afStack_474[(uint)bVar7 * -2];
      fVar4 = CStack_7c.z;
      fVar3 = CStack_7c.y;
      fVar2 = CStack_7c.x;
      afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_20 = (float)_DAT_005b651a / *(float *)&this_ptr->field_0x2e8;
      fStack_220 = fStack_364 * fStack_20;
      fStack_21c = fStack_360 * fStack_20;
      fStack_218 = fStack_35c * fStack_20;
      fStack_3d0 = fStack_364 * fStack_20;
      afStack_3cc[(uint)bVar7 * -2] = afStack_258[(uint)bVar7 * -2 + 0xf];
      afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      fStack_130 = fVar2 - fStack_3d0;
      fStack_12c = fVar3 - afStack_3cc[0];
      fStack_128 = fVar4 - afStack_3cc[1];
      afStack_300[2] = fVar2 - fStack_3d0;
      afStack_300[(uint)bVar7 * -2 + 3] = afStack_174[(uint)bVar7 * -2 + 0x12];
      this_ptr_03 = g_CDemonSetPtr;
      afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_03);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
      if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
      }
      iStack_18 = 0;
      do {
        fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0
                                     (g_CDemonSetPtr,afStack_300 + 2,afStack_174 + 8);
        if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((iVar5 != 0) &&
           (iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), 0 < iVar6)) {
          iVar5 = 0;
        }
        this_ptr_00 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_1c = this_ptr_01;
        if (iVar5 != 0) {
          iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe0))(iVar5);
          if (iVar6 == 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)aiStack_4b4);
            aiStack_4b4[0] = g_CDemonSetPtr->collision_part_index;
            aiStack_4b4[1] = 0x40a00000;
            aiStack_4b4[2] = 0x3ecccccd;
            afStack_d8[2] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
            afStack_d8[3] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
            fStack_c8 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
            fStack_1d8 = afStack_d8[2];
            afStack_1d4[(uint)bVar7 * -2] = afStack_d8[(uint)bVar7 * -2 + 3];
            afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_24 = (float)_DAT_005b6542 /
                        SQRT(afStack_1d4[1] * afStack_1d4[1] +
                             fStack_1d8 * fStack_1d8 + afStack_1d4[0] * afStack_1d4[0]);
            fStack_244 = fStack_1d8 * fStack_24;
            fStack_240 = afStack_1d4[0] * fStack_24;
            fStack_23c = afStack_1d4[1] * fStack_24;
            fStack_208 = fStack_1d8 * fStack_24;
            afStack_258[(uint)bVar7 * -2 + 0x15] = afStack_258[(uint)bVar7 * -2 + 6];
            afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
                 afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            if (&fStack_4a8 != afStack_258 + 0x14) {
              fStack_4a8 = fStack_208;
              uStack_4a4 = uStack_204;
              uStack_4a0 = uStack_200;
            }
            core_actor_cpp_FUN_00408bf0(iVar5,&g_CDemonSetPtr->collision_impact_position);
            fStack_118 = fStack_238;
            afStack_174[(uint)bVar7 * -2 + 0x18] = afStack_258[(uint)bVar7 * -2 + 9];
            afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
                 afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            if (&fStack_498 != afStack_174 + 0x17) {
              fStack_498 = fStack_118;
              uStack_494 = uStack_114;
              uStack_490 = uStack_110;
            }
            uStack_48c = *(uint *)&this_ptr->field_0x56c;
            uStack_484 = 0x65;
            uStack_488 = 0x3e19999a;
            pCStack_480 = this_ptr;
            uStack_47c = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x94))(this_ptr);
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(iVar5,aiStack_4b4);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                      (g_CGorePtr,&g_CDemonSetPtr->collision_impact_position,(CVector3f *)0x0,2,
                       *(EBloodType *)(iVar5 + 0x27a0));
          }
          break;
        }
        if (this_ptr_00 == (CGlass *)0x0) {
          if (this_ptr_01 == (CTrigger *)0x0) {
            core_fire_cpp_FUN_004a2090
                      (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                       &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                       g_CDemonSetPtr->collision_actor,0);
            fStack_1fc = (g_CDemonSetPtr->collision_impact_position).x - afStack_300[2];
            fStack_1f8 = (g_CDemonSetPtr->collision_impact_position).y - afStack_300[3];
            fStack_1f4 = (g_CDemonSetPtr->collision_impact_position).z - fStack_2f0;
            fStack_160 = fStack_1fc;
            afStack_174[(uint)bVar7 * -2 + 6] = afStack_258[(uint)bVar7 * -2 + 0x18];
            afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
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
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
          iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_01,(CDemonActor *)this_ptr);
          if (iVar5 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,5.0);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_1c->base);
        }
        else {
          iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
          if (iVar5 == 0) break;
          core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < *(int *)&this_ptr->field_0x58c);
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
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  afStack_258[2] = afStack_6c[2];
  afStack_258[(uint)bVar7 * -2 + 3] = afStack_6c[(uint)bVar7 * -2 + 3];
  afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  afStack_270[2] = afStack_258[2];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  afStack_3f0[2] = (float)uStack_ac;
  afStack_3f0[(uint)bVar7 * -2 + 3] = afStack_d8[(uint)bVar7 * -2 + 0xc];
  afStack_3f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  afStack_270[3] = afStack_3f0[3];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  afStack_3cc[2] = (float)uStack_304;
  afStack_3cc[(uint)bVar7 * -2 + 3] = afStack_300[(uint)bVar7 * -2];
  afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_260 = fStack_3bc + (float)_DAT_005b64f2;
  core_actor_cpp_FUN_00408b80(this_ptr,afStack_270 + 2);
  CStack_2e0.x = fStack_dc;
  *(float *)((int)&CStack_2e0 + (uint)bVar7 * -8 + 4) = afStack_d8[(uint)bVar7 * -2];
  *(float *)((int)&CStack_2e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  afStack_1d4[2] = afStack_2d0[2];
  afStack_1d4[(uint)bVar7 * -2 + 3] = afStack_2d0[(uint)bVar7 * -2 + 3];
  afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  auStack_39c[2] = afStack_1d4[2];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_460 = uStack_10c;
  afStack_474[(uint)bVar7 * -2 + 6] = afStack_174[(uint)bVar7 * -2 + 0x1b];
  afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
  auStack_39c[3] = uStack_45c;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  afStack_33c[2] = (float)uStack_f4;
  afStack_33c[(uint)bVar7 * -2 + 3] = afStack_174[(uint)bVar7 * -2 + 0x21];
  afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
  fStack_38c = fStack_32c + (float)_DAT_005b64fa;
  core_actor_cpp_FUN_00408b80(this_ptr,auStack_39c + 2);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_1c0 = uStack_40c;
  afStack_1d4[(uint)bVar7 * -2 + 6] = afStack_474[(uint)bVar7 * -2 + 0x1b];
  afStack_1d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
  uStack_184 = uStack_1c0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_13c = uStack_178;
  afStack_174[(uint)bVar7 * -2 + 0xf] = afStack_174[(uint)bVar7 * -2];
  afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  uStack_180 = uStack_138;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_124 = uStack_b8;
  afStack_174[(uint)bVar7 * -2 + 0x15] = afStack_d8[(uint)bVar7 * -2 + 9];
  afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  fStack_17c = fStack_11c + _DAT_005b6502;
  core_actor_cpp_FUN_00408b80(this_ptr,&uStack_184);
  CStack_1e4.x = fStack_70;
  *(float *)((int)&CStack_1e4 + (uint)bVar7 * -8 + 4) = afStack_6c[(uint)bVar7 * -2];
  *(float *)((int)&CStack_1e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_19c = uStack_214;
  afStack_198[(uint)bVar7 * -2] = afStack_258[(uint)bVar7 * -2 + 0x12];
  afStack_198[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  afStack_2ac[2] = (float)uStack_19c;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_25c = uStack_1f0;
  afStack_258[(uint)bVar7 * -2] = afStack_258[(uint)bVar7 * -2 + 0x1b];
  afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_258[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
  afStack_2ac[3] = afStack_258[0];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_3b8 = uStack_430;
  afStack_3cc[(uint)bVar7 * -2 + 6] = afStack_474[(uint)bVar7 * -2 + 0x12];
  afStack_3cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  fStack_29c = fStack_3b0 + _DAT_005b6506;
  core_actor_cpp_FUN_00408b80(this_ptr,afStack_2ac + 2);
  CStack_3dc.x = afStack_378[2];
  *(float *)((int)&CStack_3dc + (uint)bVar7 * -8 + 4) = afStack_378[(uint)bVar7 * -2 + 3];
  *(float *)((int)&CStack_3dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_378[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_3a0 = uStack_358;
  auStack_39c[(uint)bVar7 * -2] = auStack_354[(uint)bVar7 * -2];
  auStack_39c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       auStack_354[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_3ac = (float)uStack_3a0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_37c = uStack_340;
  afStack_378[(uint)bVar7 * -2] = afStack_33c[(uint)bVar7 * -2];
  afStack_378[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_3a8 = afStack_378[0];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_88 = afStack_474[2];
  afStack_d8[(uint)bVar7 * -2 + 0x15] = afStack_474[(uint)bVar7 * -2 + 3];
  afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_3a4 = fStack_80 + _DAT_005b650a;
  core_actor_cpp_FUN_00408b80(this_ptr,afStack_3cc + 8);
  CStack_1b4.x = fStack_31c;
  *(float *)((int)&CStack_1b4 + (uint)bVar7 * -8 + 4) = afStack_33c[(uint)bVar7 * -2 + 9];
  *(float *)((int)&CStack_1b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_328 = uStack_2b0;
  afStack_33c[(uint)bVar7 * -2 + 6] = afStack_2ac[(uint)bVar7 * -2];
  afStack_33c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_2ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  auStack_354[2] = uStack_328;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_100 = uStack_454;
  afStack_174[(uint)bVar7 * -2 + 0x1e] = afStack_474[(uint)bVar7 * -2 + 9];
  afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  auStack_354[3] = uStack_fc;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_2ec = uStack_a0;
  afStack_300[(uint)bVar7 * -2 + 6] = afStack_d8[(uint)bVar7 * -2 + 0xf];
  afStack_300[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  fStack_344 = fStack_2e4 + _DAT_005b650e;
  core_actor_cpp_FUN_00408b80(this_ptr,auStack_354 + 2);
  CStack_1a8.x = fStack_148;
  *(float *)((int)&CStack_1a8 + (uint)bVar7 * -8 + 4) = afStack_174[(uint)bVar7 * -2 + 0xc];
  *(float *)((int)&CStack_1a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_28c = uStack_43c;
  afStack_288[(uint)bVar7 * -2] = afStack_474[(uint)bVar7 * -2 + 0xf];
  afStack_288[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  uStack_2bc = uStack_28c;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_274 = uStack_448;
  afStack_270[(uint)bVar7 * -2] = afStack_474[(uint)bVar7 * -2 + 0xc];
  afStack_270[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  fStack_2b8 = afStack_270[0];
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  uStack_c4 = uStack_418;
  afStack_d8[(uint)bVar7 * -2 + 6] = afStack_474[(uint)bVar7 * -2 + 0x18];
  afStack_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
  fStack_2b4 = fStack_bc + _DAT_005b6512;
  rotation_matrix = &this_ptr->field_0x3c;
  core_actor_cpp_FUN_00408b80(this_ptr,afStack_2d0 + 5);
  CStack_e8.x = fStack_424;
  *(float *)((int)&CStack_e8 + (uint)bVar7 * -8 + 4) = afStack_474[(uint)bVar7 * -2 + 0x15];
  rotation_matrix_00 = (CMatrix3x3f *)rotation_matrix;
  *(float *)((int)&CStack_e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_474[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
  CStack_298.y = CStack_298.y + _DAT_005b6516;
  afStack_270[3] = afStack_270[3] + _DAT_005b6516;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_298,rotation_matrix_00);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_298);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_1e4,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1e4);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_3dc,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_3dc);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_1b4,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1b4);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_1a8,(CMatrix3x3f *)rotation_matrix);
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&CStack_1a8);
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_e8,(CMatrix3x3f *)rotation_matrix);
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
    if (&CStack_310 != (CVector3f *)(afStack_474 + 0x1d)) {
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
  *(uint *)&this_ptr->field_0x300 = 0x40200000;
  return 1;
}
