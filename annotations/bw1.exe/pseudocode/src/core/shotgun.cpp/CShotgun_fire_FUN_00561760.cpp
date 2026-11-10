// Name: core_shotgun.cpp_CShotgun_fire_FUN_00561760
// Address: 00561760
// Address Range: [[00561760, 00561f79]]
// Convention: __cdecl
// Signature: int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00561760(CShotgun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00561760(CShotgun *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_112c [995];
  CDemonActor *grabber;
  CDemonActor *pCVar8;
  float *pfVar9;
  CShotgun *this_ptr_02;
  CMatrix3x3f *rotation_matrix;
  float fStack_184;
  int iStack_180;
  float afStack_17c [3];
  uint uStack_170;
  uint uStack_16c;
  uint uStack_164;
  float fStack_160;
  uint uStack_15c;
  EAmmoType EStack_158;
  uint uStack_154;
  uint uStack_150;
  CShotgun *pCStack_14c;
  CDemonActor *pCStack_144;
  float afStack_140 [4];
  uint uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float afStack_114 [3];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  CVector3f CStack_e4;
  uint uStack_d8;
  float afStack_d4 [5];
  float afStack_c0 [3];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3f CStack_a8;
  CDemonActor *pCStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [5];
  float fStack_60;
  float fStack_40;
  int iStack_3c;
  CTrigger *pCStack_38;
  float fStack_34;
  int iStack_30;
  CDemonActor *pCStack_2c;
  CFlameCan *pCStack_28;
  float fStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar5 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar9 = afStack_74 + 2;
  afStack_74[1] = fStack_60;
  afStack_74[(uint)bVar5 * -2 + 2] = afStack_74[(uint)bVar5 * -2 + 6];
  afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3] =
       afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
  CStack_e4.x = fStack_fc;
  *(float *)((int)&CStack_e4 + (uint)bVar5 * -8 + 4) = afStack_140[(uint)bVar5 * -2 + 0x12];
  this_ptr_02 = this_ptr;
  *(float *)((int)&CStack_e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(&this_ptr_02->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
              (0x02C82A60,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_e4);
    return 0;
  }
  fVar6 = (float10)fptan((float10)this_ptr->spread_angle * (float10)_DAT_005f19c3 *
                         (float10)_DAT_005f19c7);
  fStack_40 = (float)(fVar6 * (float10)(this_ptr->base).bolt_velocity);
  iStack_30 = core_actor_cpp_getRandomInt_FUN_0040cc60(10,0xf);
  iStack_3c = 0;
  if (0 < iStack_30) {
    do {
      fStack_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,fStack_40);
      fVar6 = (float10)fcos((float10)fStack_34);
      fVar7 = (float10)fsin((float10)fStack_34);
      fStack_84 = (float)(fVar6 * (float10)fVar3);
      fStack_80 = (float)(fVar7 * (float10)fVar3);
      fStack_7c = (this_ptr->base).bolt_velocity;
      core_actor_cpp_FUN_00408ac0(this_ptr,afStack_98 + 5);
      fStack_12c = fStack_f0;
      afStack_140[(uint)bVar5 * -2 + 6] = afStack_140[(uint)bVar5 * -2 + 0x15];
      afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
      if (afStack_98 + 5 != afStack_140 + 5) {
        fStack_84 = fStack_12c;
        fStack_80 = fStack_128;
        fStack_7c = fStack_124;
      }
      fStack_120 = CStack_e4.x + fStack_84;
      fStack_11c = CStack_e4.y + fStack_80;
      fStack_118 = CStack_e4.z + fStack_7c;
      afStack_c0[0] = CStack_e4.x + fStack_84;
      afStack_d4[(uint)bVar5 * -2 + 6] = afStack_140[(uint)bVar5 * -2 + 9];
      afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      fVar1 = CStack_e4.y;
      fVar3 = CStack_e4.x;
      pCStack_38 = (CTrigger *)((float)_DAT_005f19d7 / (this_ptr->base).bolt_velocity);
      pCStack_9c = (CDemonActor *)(fStack_84 * (float)pCStack_38);
      afStack_98[0] = fStack_80 * (float)pCStack_38;
      afStack_98[1] = fStack_7c * (float)pCStack_38;
      pCStack_144 = (CDemonActor *)(fStack_84 * (float)pCStack_38);
      afStack_140[(uint)bVar5 * -2] = afStack_98[(uint)bVar5 * -2];
      afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_78 = fVar3 - (float)pCStack_144;
      afStack_74[0] = fVar1 - afStack_140[0];
      afStack_74[1] = CStack_e4.z - afStack_140[1];
      afStack_114[0] = fVar3 - (float)pCStack_144;
      afStack_140[(uint)bVar5 * -2 + 0xc] = afStack_74[(uint)bVar5 * -2];
      afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      pCVar8 = (this_ptr->base).carried_by_actor;
      if (pCVar8 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar8);
      }
      iStack_1c = 0;
      do {
        fStack_184 = (float)core_setcolid_cpp_FUN_00557300
                                      (g_CDemonSetPtr,afStack_140 + 0xb,afStack_d4 + 5);
        if ((fStack_184 < 0.0) || (1.0 < fStack_184)) break;
        pCVar8 = g_CDemonSetPtr->collision_actor;
        grabber = (CDemonActor *)0x561b6c;
        iStack_14 = core_actor_cpp_castToClassHash_FUN_0040c600
                              (pCVar8,g_CCharacterClassInfo.name_hash);
        if (iStack_14 != 0) {
          pCVar8 = (CDemonActor *)0x561b87;
          iVar2 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0x10c))(iStack_14);
          if (0 < iVar2) {
            pCStack_20 = (CCrate *)0x0;
          }
        }
        this_ptr_00 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_38 = this_ptr_01;
        pCStack_2c = (CDemonActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        fStack_34 = (float)core_actor_cpp_castToClassHash_FUN_0040c600
                                     (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash
                                     );
        fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,grabber,(int)pCVar8);
        iVar2 = iStack_30;
        fStack_24 = ((1.0 - fStack_184) * fVar3) / (float)iStack_30;
        if (iStack_14 == 0) {
          if (this_ptr_00 == (CGlass *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_20 == (CCrate *)0x0) {
                if (pCStack_28 == (CFlameCan *)0x0) {
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0
                            (0x01C57074,&g_CDemonSetPtr->collision_impact_position,
                             &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                             g_CDemonSetPtr->collision_actor);
                  break;
                }
                core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(pCStack_28);
              }
              else {
                core_crate_cpp_FUN_00449600(pCStack_20);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_01);
              iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                                (this_ptr_01,(CDemonActor *)this_ptr);
              if (iVar2 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_01,fStack_24);
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_2c);
            }
          }
          else {
            iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_00);
            if (iVar2 == 0) break;
            core_glass_cpp_FUN_004e34b0(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0xe0))(iStack_14);
          if (iVar4 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&iStack_180);
          iStack_180 = g_CDemonSetPtr->collision_part_index;
          afStack_17c[0] = fStack_24;
          afStack_17c[1] = 0.4;
          fStack_108 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          fStack_104 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          fStack_100 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          fStack_b4 = fStack_108;
          afStack_d4[(uint)bVar5 * -2 + 9] = afStack_140[(uint)bVar5 * -2 + 0xf];
          afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
               afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
          fStack_18 = (float)_DAT_005f19df /
                      SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
          afStack_98[2] = fStack_b4 * fStack_18;
          afStack_98[3] = fStack_b0 * fStack_18;
          fStack_88 = fStack_ac * fStack_18;
          afStack_140[2] = fStack_b4 * fStack_18;
          afStack_140[(uint)bVar5 * -2 + 3] = afStack_98[(uint)bVar5 * -2 + 3];
          afStack_140[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          if (afStack_17c + 2 != afStack_140 + 2) {
            afStack_17c[2] = afStack_140[2];
            uStack_170 = afStack_140[3];
            uStack_16c = uStack_130;
          }
          core_actor_cpp_FUN_00408bb0(iStack_14,&g_CDemonSetPtr->collision_impact_position);
          uStack_d8 = afStack_d4[2];
          afStack_d4[(uint)bVar5 * -2] = afStack_d4[(uint)bVar5 * -2 + 3];
          afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          if (&uStack_164 != &uStack_d8) {
            uStack_164 = uStack_d8;
            fStack_160 = afStack_d4[0];
            uStack_15c = afStack_d4[1];
          }
          EStack_158 = (this_ptr->base).ammo_type;
          uStack_150 = 0x65;
          uStack_154 = 0x3e19999a;
          pCStack_14c = this_ptr;
          pCStack_144 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (**(code **)(*(int *)(iVar2 + 0x154) + 0x108))(iVar2,afStack_17c);
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < 4);
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < iStack_30);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_a8.x = CStack_e4.x;
  *(uint *)((int)&CStack_a8 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_e4 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_a8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  CStack_a8.y = CStack_a8.y + _DAT_005f19cf;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(0x01C57074,&CStack_a8,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,(CDemonActor *)this_ptr,"shotgun.wav",&CStack_e4);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
