// Name: core_rifle.cpp_CRifle_fire_FUN_00527d70
// Address: 00527d70
// Address Range: [[00527d70, 005284c3]]
// Convention: __cdecl
// Signature: int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_rifle_cpp_CRifle_fire_FUN_00527d70(CRifle *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  float fVar1;
  int iVar2;
  float fVar3;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CCharacter *this_ptr_03;
  CCharacter *unaff_ESI;
  int unaff_EDI;
  byte bVar4;
  uint in_stack_00000008;
  float afStackY_10fc [994];
  float *pfVar5;
  CRifle *this_ptr_04;
  double dVar6;
  CDemonActor *in_stack_fffffeac;
  int in_stack_fffffeb0;
  SDamageInfo SStack_13c;
  float afStack_100 [4];
  float fStack_f0;
  float afStack_ec [4];
  float fStack_dc;
  float afStack_d8 [4];
  float fStack_c8;
  float afStack_c4 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3f aCStack_a8 [2];
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CDemonActor *pCStack_60;
  float afStack_5c [5];
  float fStack_48;
  float afStack_44 [3];
  CDemonActor *pCStack_38;
  float afStack_34 [3];
  CTrigger *pCStack_28;
  CDemonActor *pCStack_24;
  CDemonActor *pCStack_20;
  CDemonActor *pCStack_1c;
  CFlameCan *pCStack_18;
  CCharacter *pCStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_c4 + 1;
  afStack_c4[0] = fStack_48;
  afStack_c4[(uint)bVar4 * 0xfffffffe + 1] = afStack_44[(uint)bVar4 * -2];
  afStack_c4[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 2] =
       afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar5);
  CStack_90.x = (float)SStack_13c.ammo_type;
  *(float *)((int)&CStack_90 + (uint)bVar4 * -8 + 4) = afStack_100[(uint)bVar4 * -2 + -4];
  this_ptr_04 = this_ptr;
  *(float *)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -3];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_04->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"?shotgun-noammo.wav" + 1,&CStack_90);
    return 0;
  }
  afStack_d8[2] = (this_ptr->base).bolt_velocity;
  afStack_d8[0] = 0.0;
  afStack_d8[1] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_ec + 5);
  fVar1 = CStack_90.y;
  fVar3 = CStack_90.x;
  fStack_6c = fStack_f0;
  afStack_80[(uint)bVar4 * -2 + 6] = afStack_ec[(uint)bVar4 * -2];
  afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_b4 = fVar3 + fStack_6c;
  fStack_b0 = fVar1 + fStack_68;
  fStack_ac = CStack_90.z + fStack_64;
  fStack_84 = fVar3 + fStack_6c;
  afStack_80[(uint)bVar4 * -2] = afStack_c4[(uint)bVar4 * 0xfffffffe + 5];
  afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_c4[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 6];
  fVar3 = CStack_90.x;
  afStack_34[2] = (float)_DAT_005cdb39 / (this_ptr->base).bolt_velocity;
  afStack_44[2] = fStack_6c * afStack_34[2];
  pCStack_38 = (CDemonActor *)(fStack_68 * afStack_34[2]);
  afStack_34[0] = fStack_64 * afStack_34[2];
  afStack_80[2] = fStack_6c * afStack_34[2];
  afStack_80[(uint)bVar4 * -2 + 3] = (float)(&pCStack_38)[(uint)bVar4 * -2];
  afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  pCStack_60 = (CDemonActor *)(fVar3 - afStack_80[2]);
  afStack_5c[0] = CStack_90.y - afStack_80[3];
  afStack_5c[1] = CStack_90.z - fStack_70;
  SStack_13c.attacker = (CDemonActor *)(fVar3 - afStack_80[2]);
  afStack_100[(uint)bVar4 * -2 + -1] = afStack_5c[(uint)bVar4 * -2];
  afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,actor);
  }
  pCStack_1c = (CDemonActor *)0x0;
  do {
    fVar3 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&SStack_13c.attacker,&fStack_84);
    dVar6 = (double)fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    pCStack_14 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if (pCStack_14 != (CCharacter *)0x0) {
      (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_02;
    pCStack_20 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    pCStack_24 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    pCStack_24 = (CDemonActor *)
                 (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                           ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),(int)((ulonglong)dVar6 >> 0x20));
    if (unaff_ESI == (CCharacter *)0x0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_14 == (CCharacter *)0x0) {
            if (pCStack_18 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor,0);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(pCStack_18);
          }
          else {
            core_crate_cpp_FUN_004461c0((CCrate *)pCStack_14);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,(float)pCStack_24);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_1c);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004cc040();
      }
    }
    else {
      iVar2 = (*(((unaff_ESI->base).vtable._uc)->_uc).isInvulnerable)(unaff_ESI);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (unaff_EDI == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffeb4);
      this_ptr_03 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,in_stack_fffffeac,in_stack_fffffeb0);
      SStack_13c.damage_amount = 0.4;
      SStack_13c.hit_part_index = (int)this_ptr_03;
      pCStack_38 = (CDemonActor *)((g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x);
      afStack_34[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_34[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      SStack_13c.wielder = pCStack_38;
      afStack_100[(uint)bVar4 * -2] = afStack_34[(uint)bVar4 * -2];
      afStack_100[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fVar3 = (float)_DAT_005cdb49 /
              SQRT(afStack_100[1] * afStack_100[1] +
                   (float)SStack_13c.wielder * (float)SStack_13c.wielder +
                   afStack_100[0] * afStack_100[0]);
      afStack_ec[3] = (float)SStack_13c.wielder * fVar3;
      fStack_dc = afStack_100[0] * fVar3;
      afStack_d8[0] = afStack_100[1] * fVar3;
      fStack_c8 = (float)SStack_13c.wielder * fVar3;
      afStack_c4[(uint)bVar4 * -2] = afStack_ec[(uint)bVar4 * -2 + 4];
      afStack_c4[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
           afStack_ec[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
      if (&SStack_13c.gore_multiplier != &fStack_c8) {
        SStack_13c.gore_multiplier = fStack_c8;
        SStack_13c.impact_point.x = afStack_c4[0];
        SStack_13c.impact_point.y = afStack_c4[1];
      }
      in_stack_fffffeac = (CDemonActor *)0x528324;
      core_actor_cpp_FUN_00408bf0(in_stack_00000008);
      afStack_80[0] = fStack_b0;
      afStack_80[(uint)bVar4 * -2 + 1] = afStack_c4[(uint)bVar4 * 0xfffffffe + 6];
      afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2] =
           *(float *)((int)aCStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (&SStack_13c.impact_force != afStack_80) {
        SStack_13c.impact_force = afStack_80[0];
        SStack_13c.impact_direction.x = afStack_80[1];
        SStack_13c.impact_direction.y = afStack_80[2];
      }
      SStack_13c.impact_direction.z = (float)(this_ptr->base).ammo_type;
      SStack_13c.dismember_prob = 1.41531e-43;
      SStack_13c.ammo_type = 0x3e19999a;
      SStack_13c.damage_type = (EDamageType)this_ptr;
      SStack_13c.wielder =
           (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffeb0 = 0x5283b5;
      (*(((this_ptr_03->base).vtable._uc)->_uc).processDamage)(this_ptr_03,&SStack_13c);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    pCStack_1c = (CDemonActor *)(pCStack_1c->actor_name + 1);
  } while ((int)pCStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  aCStack_a8[0].x = CStack_90.x;
  *(uint *)((int)aCStack_a8 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)aCStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  aCStack_a8[0].y = aCStack_a8[0].y + _DAT_005cdb41;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,aCStack_a8,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"45.wav",&CStack_90);
  (this_ptr->base).fire_cooldown_timer = 1.5;
  return 1;
}
