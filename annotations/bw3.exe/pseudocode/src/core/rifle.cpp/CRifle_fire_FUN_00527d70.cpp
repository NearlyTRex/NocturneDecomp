// Name: core_rifle.cpp_CRifle_fire_FUN_00527d70
// Address: 00527d70
// Address Range: [[00527d70, 005284c3]]
// Convention: __cdecl
// Signature: int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

{
  CDemonSet *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  byte bVar4;
  float afStackY_110c [995];
  float *pfVar5;
  CRifle *this_ptr_03;
  int iStack_160;
  float fStack_15c;
  uint uStack_158;
  float fStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_144;
  float fStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  CRifle *pCStack_12c;
  uint uStack_128;
  float fStack_124;
  float afStack_120 [5];
  float afStack_10c [3];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  float afStack_dc [3];
  uint uStack_d0;
  float afStack_cc [5];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  uint uStack_a0;
  float afStack_9c [2];
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CTrigger *pCStack_2c;
  CFlameCan *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  pfVar5 = afStack_cc + 2;
  afStack_cc[2] = (float)uStack_4c;
  afStack_cc[(uint)bVar4 * -2 + 3] = afStack_84[(uint)bVar4 * -2 + 0xf];
  afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar5);
  CStack_94.x = afStack_120[2];
  *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + 4) = afStack_120[(uint)bVar4 * -2 + 3];
  this_ptr_03 = this_ptr;
  *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr_03);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"?shotgun-noammo.wav" + 1,&CStack_94);
    return 0;
  }
  afStack_dc[2] = *(float *)&this_ptr->field_0x2e8;
  afStack_dc[0] = 0.0;
  afStack_dc[1] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_120 + 0x11);
  fVar2 = CStack_94.y;
  fVar1 = CStack_94.x;
  fStack_70 = fStack_f4;
  afStack_84[(uint)bVar4 * -2 + 6] = afStack_120[(uint)bVar4 * -2 + 0xc];
  afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fStack_b8 = fVar1 + fStack_70;
  fStack_b4 = fVar2 + fStack_6c;
  fStack_b0 = CStack_94.z + fStack_68;
  fStack_88 = fVar1 + fStack_70;
  afStack_84[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2 + 6];
  afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  fVar1 = CStack_94.x;
  fStack_30 = (float)_DAT_005cdb39 / *(float *)&this_ptr->field_0x2e8;
  fStack_40 = fStack_70 * fStack_30;
  fStack_3c = fStack_6c * fStack_30;
  fStack_38 = fStack_68 * fStack_30;
  afStack_84[2] = fStack_70 * fStack_30;
  afStack_84[(uint)bVar4 * -2 + 3] = afStack_84[(uint)bVar4 * -2 + 0x12];
  afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  fStack_64 = fVar1 - afStack_84[2];
  fStack_60 = CStack_94.y - afStack_84[3];
  fStack_5c = CStack_94.z - fStack_74;
  afStack_10c[0] = fVar1 - afStack_84[2];
  afStack_120[(uint)bVar4 * -2 + 6] = afStack_84[(uint)bVar4 * -2 + 9];
  afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_120 + 5,&fStack_88);
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_02;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCStack_28 = (CFlameCan *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    fStack_34 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
    fStack_14 = fStack_34;
    if (iStack_18 == 0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (pCStack_28 == (CFlameCan *)0x0) {
              core_fire_cpp_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor,0);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(pCStack_28);
          }
          else {
            core_crate_cpp_FUN_004461c0(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_02);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar3 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,fStack_34);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_2c->base);
        }
      }
      else {
        iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
        if (iVar3 == 0) break;
        core_glass_cpp_FUN_004cc040(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar3 != 0) {
        if (iStack_20 == 0) {
          *(int *)&this_ptr->field_0x568 = *(int *)&this_ptr->field_0x568 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&iStack_160);
      iStack_160 = g_CDemonSetPtr->collision_part_index;
      fStack_14 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
      uStack_158 = 0x3ecccccd;
      fStack_15c = fStack_14;
      fStack_58 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fStack_54 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fStack_50 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_124 = fStack_58;
      afStack_120[(uint)bVar4 * -2] = afStack_84[(uint)bVar4 * -2 + 0xc];
      afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      fStack_1c = (float)_DAT_005cdb49 /
                  SQRT(afStack_120[1] * afStack_120[1] +
                       fStack_124 * fStack_124 + afStack_120[0] * afStack_120[0]);
      fStack_100 = fStack_124 * fStack_1c;
      fStack_fc = afStack_120[0] * fStack_1c;
      fStack_f8 = afStack_120[1] * fStack_1c;
      fStack_e8 = fStack_124 * fStack_1c;
      afStack_120[(uint)bVar4 * -2 + 0xf] = afStack_120[(uint)bVar4 * -2 + 9];
      afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      if (&fStack_154 != afStack_120 + 0xe) {
        fStack_154 = fStack_e8;
        uStack_150 = uStack_e4;
        uStack_14c = uStack_e0;
      }
      core_actor_cpp_FUN_00408bf0(iStack_18,&g_CDemonSetPtr->collision_impact_position);
      uStack_a0 = uStack_d0;
      afStack_9c[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2];
      afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&uStack_144 != &uStack_a0) {
        uStack_144 = uStack_a0;
        fStack_140 = afStack_9c[0];
        uStack_13c = afStack_9c[1];
      }
      uStack_138 = *(uint *)&this_ptr->field_0x56c;
      uStack_130 = 0x65;
      uStack_134 = 0x3e19999a;
      pCStack_12c = this_ptr;
      uStack_128 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x94))(this_ptr);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&iStack_160);
      if (*(int *)&this_ptr->field_0x2e4 == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  CStack_ac.x = CStack_94.x;
  *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_94 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  CStack_ac.y = CStack_ac.y + _DAT_005cdb41;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,&CStack_ac,(CMatrix3x3f *)&this_ptr->field_0x3c);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"45.wav",&CStack_94);
  *(uint *)&this_ptr->field_0x300 = 0x3fc00000;
  return 1;
}
