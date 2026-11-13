// Name: core_elephant.cpp_CElephantGun_fire_FUN_00486d40
// Address: 00486d40
// Address Range: [[00486d40, 00487557]]
// Convention: __cdecl
// Signature: int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00486d40(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00486d40(CElephantGun *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  CDemonSet *pCVar5;
  CTrigger *this_ptr_00;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1138 [51];
  CDemonActor *apCStackY_106c [3];
  float afStackY_1060 [939];
  CDemonActor *in_stack_fffffe58;
  CDemonSet *in_stack_fffffe5c;
  CDemonSet *grab_type;
  CDemonActor *pCVar9;
  float *pfVar10;
  CElephantGun *this_ptr_01;
  CMatrix3x3f *rotation_matrix;
  byte auStack_18c [8];
  float fStack_184;
  CDemonActor *pCStack_180;
  float fStack_17c;
  float fStack_178;
  CDemonActor *pCStack_170;
  float fStack_16c;
  float fStack_168;
  EAmmoType EStack_164;
  float fStack_160;
  EDamageType EStack_15c;
  CElephantGun *pCStack_158;
  CDemonActor *pCStack_150;
  float afStack_14c [4];
  float fStack_13c;
  CDemonActor *pCStack_12c;
  float afStack_128 [5];
  CDemonActor *pCStack_114;
  float afStack_110 [4];
  float fStack_100;
  float fStack_f0;
  float afStack_ec [5];
  float fStack_d8;
  CDemonActor *pCStack_cc;
  float afStack_c8 [5];
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  CDemonActor *apCStack_80 [3];
  float afStack_74 [2];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [5];
  CTrigger *pCStack_48;
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  CDemonActor *pCStack_3c;
  CCrate *pCStack_38;
  CFlameCan *pCStack_34;
  float fStack_30;
  uint uStack_2c;
  CCharacter *pCStack_24;
  CDemonActor *pCStack_20;
  CCharacter *pCStack_1c;
  CCharacter *pCStack_14;
  
  bVar6 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar10 = afStack_ec + 2;
  afStack_ec[1] = fStack_b4;
  afStack_ec[(uint)bVar6 * -2 + 2] = afStack_b0[(uint)bVar6 * -2];
  afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
       afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
  CStack_a8.x = fStack_84;
  *(CDemonActor **)((int)&CStack_a8 + (uint)bVar6 * -8 + 4) = apCStack_80[(uint)bVar6 * -2];
  this_ptr_01 = this_ptr;
  *(CDemonActor **)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       apCStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_01->base);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_a8);
    return 0;
  }
  fVar7 = (float10)fptan((float10)this_ptr->spread_angle * (float10)_DAT_005bd99c *
                         (float10)_DAT_005bd9a4);
  pCStack_3c = (CDemonActor *)(float)(fVar7 * (float10)(this_ptr->base).bolt_velocity);
  fStack_30 = (float)core_actor_cpp_getRandomInt_FUN_0040cea0(10,0xf);
  pCStack_38 = (CCrate *)0x0;
  if (0 < (int)fStack_30) {
    do {
      pCStack_44 = (CDemonActor *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855)
      ;
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,(float)pCStack_3c);
      fVar7 = (float10)fcos((float10)(float)pCStack_44);
      fVar8 = (float10)fsin((float10)(float)pCStack_44);
      afStack_98[2] = (float)(fVar7 * (float10)fVar4);
      afStack_98[3] = (float)(fVar8 * (float10)fVar4);
      fStack_88 = (this_ptr->base).bolt_velocity;
      core_actor_cpp_FUN_00408b00(this_ptr,afStack_98 + 2);
      fStack_f0 = fStack_d8;
      afStack_ec[(uint)bVar6 * -2] = afStack_ec[(uint)bVar6 * -2 + 6];
      afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      if (afStack_98 + 2 != &fStack_f0) {
        afStack_98[2] = fStack_f0;
        afStack_98[3] = afStack_ec[0];
        fStack_88 = afStack_ec[1];
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
      pCStack_34 = (CFlameCan *)((float)_DAT_005bd9b4 / (this_ptr->base).bolt_velocity);
      apCStack_80[2] = (CDemonActor *)(afStack_98[2] * (float)pCStack_34);
      afStack_74[0] = afStack_98[3] * (float)pCStack_34;
      afStack_74[1] = fStack_88 * (float)pCStack_34;
      pCStack_12c = (CDemonActor *)(afStack_98[2] * (float)pCStack_34);
      afStack_128[(uint)bVar6 * -2] = afStack_74[(uint)bVar6 * -2];
      afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pCStack_cc = (CDemonActor *)(fVar4 - (float)pCStack_12c);
      afStack_c8[0] = fVar1 - afStack_128[0];
      afStack_c8[1] = fVar2 - afStack_128[1];
      pCStack_114 = (CDemonActor *)(fVar4 - (float)pCStack_12c);
      afStack_110[(uint)bVar6 * -2] = afStack_c8[(uint)bVar6 * -2];
      pCVar5 = g_CDemonSetPtr;
      afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(pCVar5);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      pCVar9 = (this_ptr->base).carried_by_actor;
      pCVar5 = in_stack_fffffe5c;
      if (pCVar9 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar9);
        pCVar5 = in_stack_fffffe5c;
      }
      pCStack_1c = (CCharacter *)0x0;
      do {
        fStack_184 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&pCStack_114,&fStack_9c);
        auStack_18c = (byte  [8])(double)fStack_184;
        in_stack_fffffe5c = pCVar5;
        if (((double)auStack_18c < 0.0) || (1.0 < (double)auStack_18c)) break;
        pCVar9 = g_CDemonSetPtr->collision_actor;
        pCStack_14 = (CCharacter *)
                     core_actor_cpp_castToClassHash_FUN_0040c840
                               (pCVar9,g_CCharacterClassInfo.name_hash);
        grab_type = pCVar5;
        if (pCStack_14 != (CCharacter *)0x0) {
          pCVar9 = (CDemonActor *)0x487176;
          (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
          grab_type = pCVar5;
        }
        pCVar5 = (CDemonSet *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        this_ptr_00 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_48 = this_ptr_00;
        pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_40 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                 ((CCharacter *)this_ptr,in_stack_fffffe58,(int)grab_type);
        pCStack_20 = pCStack_40;
        fStack_30 = ((1.0 - (float)pCVar9) * fVar4) / (float)(int)pCStack_40;
        if (pCStack_24 == (CCharacter *)0x0) {
          if (pCVar5 == (CDemonSet *)0x0) {
            if (this_ptr_00 == (CTrigger *)0x0) {
              if (pCStack_38 == (CCrate *)0x0) {
                if (pCStack_34 == (CFlameCan *)0x0) {
                  in_stack_fffffe5c = (CDemonSet *)g_CDemonSetPtr->collision_actor;
                  in_stack_fffffe58 = (CDemonActor *)g_CDemonSetPtr->ground_type;
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                            (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                             &g_CDemonSetPtr->collision_normal,(int)in_stack_fffffe58,
                             (CDemonActor *)in_stack_fffffe5c,0);
                  break;
                }
                pCVar5 = (CDemonSet *)0x4874f8;
                core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(pCStack_34);
              }
              else {
                pCVar5 = (CDemonSet *)0x487503;
                core_crate_cpp_FUN_004461c0(pCStack_38);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_00);
              iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                                (this_ptr_00,(CDemonActor *)this_ptr);
              if (iVar3 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_00,fStack_30);
              }
              in_stack_fffffe58 = (CDemonActor *)0x4872a4;
              pCVar5 = g_CDemonSetPtr;
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_3c);
            }
          }
          else {
            in_stack_fffffe5c = (CDemonSet *)0x4874bb;
            iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0((CGlass *)pCVar5);
            if (iVar3 == 0) break;
            in_stack_fffffe58 = (CDemonActor *)0x4874d7;
            core_glass_cpp_FUN_004cc040(pCVar5,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          in_stack_fffffe5c = (CDemonSet *)0x4872b9;
          iVar3 = (*(((pCStack_24->base).vtable._uc)->_uc).isInvulnerable)(pCStack_24);
          if (iVar3 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)auStack_18c);
          auStack_18c._4_4_ = uStack_2c;
          auStack_18c._0_4_ = g_CDemonSetPtr->collision_part_index;
          fStack_184 = 0.4;
          afStack_14c[2] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
          afStack_14c[3] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
          fStack_13c = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
          afStack_110[2] = afStack_14c[2];
          afStack_110[(uint)bVar6 * -2 + 3] = afStack_14c[(uint)bVar6 * -2 + 3];
          afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          pCStack_24 = (CCharacter *)
                       ((float)_DAT_005bd9bc /
                       SQRT(fStack_100 * fStack_100 +
                            afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3]));
          pCStack_114 = (CDemonActor *)(afStack_110[2] * (float)pCStack_24);
          afStack_110[0] = afStack_110[3] * (float)pCStack_24;
          afStack_110[1] = fStack_100 * (float)pCStack_24;
          pCStack_150 = (CDemonActor *)(afStack_110[2] * (float)pCStack_24);
          afStack_14c[(uint)bVar6 * -2] = afStack_110[(uint)bVar6 * -2];
          afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (&pCStack_180 != &pCStack_150) {
            pCStack_180 = pCStack_150;
            fStack_17c = afStack_14c[0];
            fStack_178 = afStack_14c[1];
          }
          pCVar5 = (CDemonSet *)0x4873ff;
          core_actor_cpp_FUN_00408bf0(pCStack_20,&g_CDemonSetPtr->collision_impact_position);
          pCStack_cc = pCStack_12c;
          afStack_c8[(uint)bVar6 * -2] = afStack_128[(uint)bVar6 * -2];
          afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (&pCStack_170 != &pCStack_cc) {
            pCStack_170 = pCStack_cc;
            fStack_16c = afStack_c8[0];
            fStack_168 = afStack_c8[1];
          }
          EStack_164 = (this_ptr->base).ammo_type;
          EStack_15c = DAMAGE_TYPE_PIERCING;
          fStack_160 = 1.0;
          pCStack_158 = this_ptr;
          pCStack_150 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (*(((pCStack_1c->base).vtable._uc)->_uc).processDamage)
                    (pCStack_1c,(SDamageInfo *)(auStack_18c + 4));
          in_stack_fffffe5c = pCVar5;
          if ((this_ptr->base).can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        pCStack_1c = (CCharacter *)((pCStack_1c->base).actor_name + 1);
        in_stack_fffffe5c = pCVar5;
      } while ((int)pCStack_1c < 4);
      pCStack_38 = (CCrate *)((pCStack_38->base).actor_name + 1);
    } while ((int)pCStack_38 < (int)fStack_30);
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
