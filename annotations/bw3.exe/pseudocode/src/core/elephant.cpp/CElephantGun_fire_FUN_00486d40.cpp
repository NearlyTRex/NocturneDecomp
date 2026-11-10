// Name: core_elephant.cpp_CElephantGun_fire_FUN_00486d40
// Address: 00486d40
// Address Range: [[00486d40, 00487557]]
// Convention: __cdecl
// Signature: int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00486d40(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00486d40(CElephantGun *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_112c [994];
  CDemonActor *grabber;
  CDemonActor *pCVar9;
  float *pfVar10;
  CElephantGun *this_ptr_02;
  CDemonSet *this_ptr_03;
  CMatrix3x3f *rotation_matrix;
  float fStack_184;
  int iStack_180;
  float afStack_17c [2];
  CDemonActor *pCStack_174;
  float fStack_170;
  uint uStack_16c;
  float fStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  CElephantGun *pCStack_14c;
  CDemonActor *pCStack_144;
  float afStack_140 [4];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_114 [3];
  CDemonActor *pCStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float afStack_e4 [6];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [6];
  float fStack_44;
  float fStack_3c;
  CTrigger *pCStack_38;
  float fStack_34;
  int iStack_30;
  CDemonActor *pCStack_2c;
  CCrate *pCStack_28;
  CFlameCan *pCStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar6 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar10 = afStack_e4;
  fStack_e8 = fStack_b4;
  afStack_e4[(uint)bVar6 * -2] = afStack_e4[(uint)bVar6 * -2 + 0xd];
  afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
  CStack_a8.x = fStack_84;
  *(float *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4) = afStack_80[(uint)bVar6 * -2];
  this_ptr_02 = this_ptr;
  *(float *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_02->base);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_a8);
    return 0;
  }
  fVar7 = (float10)fptan((float10)*(float *)&this_ptr->field_0x594 * (float10)_DAT_005bd99c *
                         (float10)_DAT_005bd9a4);
  fStack_3c = (float)(fVar7 * (float10)(this_ptr->base).bolt_velocity);
  iStack_30 = core_actor_cpp_getRandomInt_FUN_0040cea0(10,0xf);
  pCStack_38 = (CTrigger *)0x0;
  if (0 < iStack_30) {
    do {
      fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,fStack_3c);
      fVar7 = (float10)fcos((float10)fStack_44);
      fVar8 = (float10)fsin((float10)fStack_44);
      afStack_98[2] = (float)(fVar7 * (float10)fVar4);
      afStack_98[3] = (float)(fVar8 * (float10)fVar4);
      fStack_88 = (this_ptr->base).bolt_velocity;
      core_actor_cpp_FUN_00408b00(this_ptr,afStack_98 + 2);
      fStack_f0 = afStack_e4[3];
      afStack_140[(uint)bVar6 * -2 + 0x15] = afStack_e4[(uint)bVar6 * -2 + 4];
      afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
           afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      if (afStack_98 + 2 != afStack_140 + 0x14) {
        afStack_98[2] = fStack_f0;
        afStack_98[3] = fStack_ec;
        fStack_88 = fStack_e8;
      }
      fStack_60 = CStack_a8.x + afStack_98[2];
      afStack_5c[0] = CStack_a8.y + afStack_98[3];
      afStack_5c[1] = CStack_a8.z + fStack_88;
      fStack_9c = CStack_a8.x + afStack_98[2];
      afStack_98[(uint)bVar6 * -2] = afStack_5c[(uint)bVar6 * -2];
      afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fVar2 = CStack_a8.z;
      fVar1 = CStack_a8.y;
      fVar4 = CStack_a8.x;
      fStack_34 = (float)_DAT_005bd9b4 / (this_ptr->base).bolt_velocity;
      afStack_80[2] = afStack_98[2] * fStack_34;
      afStack_80[3] = afStack_98[3] * fStack_34;
      fStack_70 = fStack_88 * fStack_34;
      fStack_12c = afStack_98[2] * fStack_34;
      afStack_140[(uint)bVar6 * -2 + 6] = afStack_80[(uint)bVar6 * -2 + 3];
      afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      fStack_cc = fVar4 - fStack_12c;
      fStack_c8 = fVar1 - fStack_128;
      fStack_c4 = fVar2 - fStack_124;
      afStack_114[0] = fVar4 - fStack_12c;
      afStack_140[(uint)bVar6 * -2 + 0xc] = afStack_e4[(uint)bVar6 * -2 + 7];
      this_ptr_03 = g_CDemonSetPtr;
      afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 8];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_03);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      pCVar9 = (this_ptr->base).carried_by_actor;
      if (pCVar9 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar9);
      }
      iStack_1c = 0;
      do {
        fStack_184 = (float)core_setcolid_cpp_FUN_0053ccc0
                                      (g_CDemonSetPtr,afStack_140 + 0xb,&fStack_9c);
        if ((fStack_184 < 0.0) || (1.0 < fStack_184)) break;
        pCVar9 = g_CDemonSetPtr->collision_actor;
        grabber = (CDemonActor *)0x48715b;
        iStack_14 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCVar9,g_CCharacterClassInfo.name_hash);
        if (iStack_14 != 0) {
          pCVar9 = (CDemonActor *)0x487176;
          iVar3 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0x10c))(iStack_14);
          if (0 < iVar3) {
            fStack_20 = 0.0;
          }
        }
        this_ptr_00 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_01 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_38 = this_ptr_01;
        fStack_34 = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                                     (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        iStack_30 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,grabber,(int)pCVar9);
        iVar3 = iStack_30;
        fStack_20 = ((1.0 - fStack_184) * fVar4) / (float)iStack_30;
        if (iStack_14 == 0) {
          if (this_ptr_00 == (CGlass *)0x0) {
            if (this_ptr_01 == (CTrigger *)0x0) {
              if (pCStack_28 == (CCrate *)0x0) {
                if (pCStack_24 == (CFlameCan *)0x0) {
                  core_fire_cpp_FUN_004a2090
                            (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                             &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                             g_CDemonSetPtr->collision_actor,0);
                  break;
                }
                core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(pCStack_24);
              }
              else {
                core_crate_cpp_FUN_004461c0(pCStack_28);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
              iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                                (this_ptr_01,(CDemonActor *)this_ptr);
              if (iVar3 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_01,fStack_20);
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_2c);
            }
          }
          else {
            iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_00);
            if (iVar3 == 0) break;
            core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar5 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0xe0))(iStack_14);
          if (iVar5 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&iStack_180);
          iStack_180 = g_CDemonSetPtr->collision_part_index;
          afStack_17c[0] = fStack_20;
          afStack_17c[1] = 0.4;
          afStack_140[2] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          afStack_140[3] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          fStack_130 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          fStack_fc = afStack_140[2];
          afStack_140[(uint)bVar6 * -2 + 0x12] = afStack_140[(uint)bVar6 * -2 + 3];
          afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
               afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_18 = (float)_DAT_005bd9bc /
                      SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc + fStack_f8 * fStack_f8);
          pCStack_108 = (CDemonActor *)(fStack_fc * fStack_18);
          fStack_104 = fStack_f8 * fStack_18;
          fStack_100 = fStack_f4 * fStack_18;
          pCStack_144 = (CDemonActor *)(fStack_fc * fStack_18);
          afStack_140[(uint)bVar6 * -2] = afStack_140[(uint)bVar6 * -2 + 0xf];
          afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          if ((CDemonActor **)(afStack_17c + 2) != &pCStack_144) {
            pCStack_174 = pCStack_144;
            fStack_170 = afStack_140[0];
            uStack_16c = afStack_140[1];
          }
          core_actor_cpp_FUN_00408bf0(iStack_14,&g_CDemonSetPtr->collision_impact_position);
          fStack_c0 = fStack_120;
          afStack_e4[(uint)bVar6 * -2 + 10] = afStack_140[(uint)bVar6 * -2 + 9];
          afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb] =
               afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
          if (&fStack_164 != afStack_e4 + 9) {
            fStack_164 = fStack_c0;
            uStack_160 = uStack_bc;
            uStack_15c = uStack_b8;
          }
          uStack_158 = *(uint *)&(this_ptr->base).field_0x56c;
          uStack_150 = 0x6b;
          uStack_154 = 0x3f800000;
          pCStack_14c = this_ptr;
          pCStack_144 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(iVar3,afStack_17c);
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < 4);
      pCStack_38 = (CTrigger *)((pCStack_38->base).actor_name + 1);
    } while ((int)pCStack_38 < iStack_30);
  }
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_6c.x = CStack_a8.x;
  *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  CStack_6c.y = CStack_6c.y + _DAT_005bd9ac;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(0x01C73654,&CStack_6c,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"elephantgun.wav",&CStack_a8);
  (this_ptr->base).fire_cooldown_timer = 1.0;
  return 1;
}
