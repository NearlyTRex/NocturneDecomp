// Name: core_burncrss.cpp_CBurncross_fire_FUN_00424550
// Address: 00424550
// Address Range: [[00424550, 00424e22]]
// Convention: __cdecl
// Signature: int __cdecl core_burncrss_cpp_CBurncross_fire_FUN_00424550(CBurncross *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_burncrss_cpp_CBurncross_fire_FUN_00424550(CBurncross *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  uint uVar6;
  byte bVar7;
  float afStackY_112c [994];
  float *pfVar8;
  CBurncross *this_ptr_02;
  CDemonSet *this_ptr_03;
  int iStack_180;
  float fStack_17c;
  uint uStack_178;
  float fStack_174;
  uint uStack_170;
  uint uStack_16c;
  float fStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  CBurncross *pCStack_14c;
  uint uStack_148;
  float fStack_144;
  float afStack_140 [5];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [5];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [5];
  uint uStack_e4;
  float afStack_e0 [4];
  uint uStack_d0;
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [5];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  CTrigger *pCStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar7 = 0;
  *(uint *)&this_ptr->field_0x59c = 1;
  if (0.0 < *(float *)&this_ptr->field_0x594) {
    return 1;
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
  pfVar8 = afStack_bc + 2;
  afStack_bc[2] = (float)uStack_e4;
  afStack_bc[(uint)bVar7 * -2 + 3] = afStack_e0[(uint)bVar7 * -2];
  afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar8);
  CStack_cc.x = afStack_11c[2];
  *(float *)((int)&CStack_cc + (uint)bVar7 * -8 + 4) = afStack_11c[(uint)bVar7 * -2 + 3];
  this_ptr_02 = this_ptr;
  *(float *)((int)&CStack_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr_02);
  if (iVar4 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",&CStack_cc);
    *(uint *)&this_ptr->field_0x59c = 0;
    *(uint *)&this_ptr->field_0x300 = 0x3f800000;
    return 0;
  }
  iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x5a4);
  if (iVar4 == 0) {
    uVar6 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                      (0x02CF5680,(CDemonActor *)this_ptr,"wp_burningcross.wav",
                       &CStack_cc);
    *(uint *)&this_ptr->field_0x5a4 = uVar6;
  }
  *(uint *)&this_ptr->field_0x594 = 0x3e800000;
  afStack_f8[4] = *(float *)&this_ptr->field_0x2e8;
  afStack_f8[2] = 0.0;
  afStack_f8[3] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_f8 + 2);
  fVar3 = CStack_cc.z;
  fVar2 = CStack_cc.y;
  fVar1 = CStack_cc.x;
  fStack_a8 = fStack_144;
  afStack_bc[(uint)bVar7 * -2 + 6] = afStack_140[(uint)bVar7 * -2];
  afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_fc = fVar1 + fStack_a8;
  afStack_f8[0] = fVar2 + fStack_a4;
  afStack_f8[1] = fVar3 + fStack_a0;
  fStack_48 = fVar1 + fStack_a8;
  afStack_44[(uint)bVar7 * -2] = afStack_f8[(uint)bVar7 * -2];
  afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fVar1 = CStack_cc.x;
  fStack_34 = (float)_DAT_005b7926 / *(float *)&this_ptr->field_0x2e8;
  fStack_9c = fStack_a8 * fStack_34;
  fStack_98 = fStack_a4 * fStack_34;
  fStack_94 = fStack_a0 * fStack_34;
  fStack_60 = fStack_a8 * fStack_34;
  afStack_bc[(uint)bVar7 * -2 + 0x18] = afStack_bc[(uint)bVar7 * -2 + 9];
  afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
       afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  fStack_120 = fVar1 - fStack_60;
  afStack_11c[0] = CStack_cc.y - fStack_5c;
  afStack_11c[1] = CStack_cc.z - fStack_58;
  afStack_140[2] = fVar1 - fStack_60;
  afStack_140[(uint)bVar7 * -2 + 3] = afStack_11c[(uint)bVar7 * -2];
  this_ptr_03 = g_CDemonSetPtr;
  afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_03);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
  if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
  }
  iVar4 = 0;
  do {
    fStack_18 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_140 + 2,&fStack_48);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iStack_1c = core_actor_cpp_castToClassHash_FUN_0040c840
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_1c != 0) &&
       (iVar5 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar5)) {
      iStack_1c = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_01;
    if (iStack_1c != 0) {
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)&this_ptr->field_0x304,g_CEnemyClassInfo.name_hash);
      if ((iVar4 != 0) ||
         (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c), iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&iStack_180);
        iStack_180 = g_CDemonSetPtr->collision_part_index;
        fStack_18 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
        uStack_178 = 0x3ecccccd;
        fStack_17c = fStack_18;
        fStack_78 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
        fStack_74 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
        fStack_70 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
        fStack_c0 = fStack_78;
        afStack_bc[(uint)bVar7 * -2] = afStack_bc[(uint)bVar7 * -2 + 0x12];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        fStack_30 = (float)_DAT_005b792e /
                    SQRT(afStack_bc[1] * afStack_bc[1] +
                         fStack_c0 * fStack_c0 + afStack_bc[0] * afStack_bc[0]);
        fStack_90 = fStack_c0 * fStack_30;
        fStack_8c = afStack_bc[0] * fStack_30;
        fStack_88 = afStack_bc[1] * fStack_30;
        fStack_6c = fStack_c0 * fStack_30;
        afStack_bc[(uint)bVar7 * -2 + 0x15] = afStack_bc[(uint)bVar7 * -2 + 0xc];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        if (&fStack_174 != afStack_bc + 0x14) {
          fStack_174 = fStack_6c;
          uStack_170 = uStack_68;
          uStack_16c = uStack_64;
        }
        core_actor_cpp_FUN_00408bf0(iStack_1c,&g_CDemonSetPtr->collision_impact_position);
        afStack_e0[2] = fStack_84;
        afStack_e0[(uint)bVar7 * -2 + 3] = afStack_bc[(uint)bVar7 * -2 + 0xf];
        afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
        if (&fStack_164 != afStack_e0 + 2) {
          fStack_164 = afStack_e0[2];
          uStack_160 = afStack_e0[3];
          uStack_15c = uStack_d0;
        }
        uStack_158 = *(uint *)&this_ptr->field_0x56c;
        uStack_154 = 0x3e19999a;
        uStack_150 = 0x66;
        pCStack_14c = this_ptr;
        uStack_148 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x94))(this_ptr);
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,&iStack_180);
        if (&CStack_108 != &g_CDemonSetPtr->collision_impact_position) {
          CStack_108.x = (g_CDemonSetPtr->collision_impact_position).x;
          CStack_108.y = (g_CDemonSetPtr->collision_impact_position).y;
          CStack_108.z = (g_CDemonSetPtr->collision_impact_position).z;
        }
        iVar4 = 0;
        do {
          afStack_44[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          afStack_44[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          CStack_54.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          fStack_24 = afStack_44[3];
          fStack_28 = afStack_44[2];
          CStack_54.y = afStack_44[3];
          CStack_54.z = afStack_44[2];
          if (&CStack_12c != (CVector3f *)(afStack_bc + 0x1a)) {
            CStack_12c.y = afStack_44[3];
            CStack_12c.z = afStack_44[2];
            CStack_12c.x = CStack_54.x;
          }
          iVar4 = iVar4 + 1;
          fStack_20 = CStack_54.x;
          fStack_18 = CStack_54.x;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_108,&CStack_12c,0x20000,0x10000,4,0xffff);
        } while (iVar4 < 0x10);
        if (*(int *)(iStack_1c + 0x27c0) != 0) {
          core_charactr_cpp_FUN_0042fbd0(iStack_1c,&fStack_164,0,0,0x3f800000,1,0x40000000);
        }
      }
      break;
    }
    if (this_ptr_00 == (CGlass *)0x0) {
      if (this_ptr_01 == (CTrigger *)0x0) {
        core_fire_cpp_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                   g_CDemonSetPtr->collision_actor,1);
        core_fire_cpp_FUN_004a3af0
                  (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                   &g_CDemonSetPtr->collision_normal,3,0,0);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,(CDemonActor *)this_ptr,"wp_burningcross_scorch.wav",
                   &g_CDemonSetPtr->collision_impact_position);
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
      iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                        (this_ptr_01,(CDemonActor *)this_ptr);
      if (iVar5 != 0) {
        fStack_18 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
        core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fStack_18);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_2c->base);
    }
    else {
      iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
      if (iVar5 == 0) break;
      core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  return 1;
}
