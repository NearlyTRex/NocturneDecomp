// Name: core_crossbow.cpp_CCrossbow_fire_FUN_00449a50
// Address: 00449a50
// Address Range: [[00449a50, 0044a0bd]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00449a50(CCrossbow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00449a50(CCrossbow *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  float fVar3;
  byte bVar4;
  float afStackY_10f4 [995];
  float *pfVar5;
  CCrossbow *this_ptr_03;
  double dVar6;
  SDamageInfo SStack_148;
  CVector3f CStack_10c;
  CDemonActor *pCStack_100;
  float afStack_fc [5];
  float fStack_e8;
  float afStack_e4 [5];
  float fStack_d0;
  float afStack_cc [5];
  uint uStack_b8;
  uint uStack_b0;
  float afStack_ac [6];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [5];
  float afStack_70 [6];
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CDemonActor *pCStack_40;
  float afStack_3c [4];
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  CTrigger *pCStack_20;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_ac;
  uStack_b0 = uStack_b8;
  afStack_ac[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2 + 6];
  afStack_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar5);
  CStack_10c.x = afStack_84[2];
  *(float *)((int)&CStack_10c + (uint)bVar4 * -8 + 4) = afStack_84[(uint)bVar4 * -2 + 3];
  this_ptr_03 = this_ptr;
  *(float *)((int)&CStack_10c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(&this_ptr_03->base);
  if (iVar1 == 0) {
    return 0;
  }
  afStack_cc[4] = (this_ptr->base).bolt_velocity;
  afStack_cc[2] = 0.0;
  afStack_cc[3] = 0.0;
  core_actor_cpp_FUN_00408ac0(this_ptr,afStack_cc + 2);
  fVar3 = CStack_10c.y;
  fVar2 = CStack_10c.x;
  fStack_58 = fStack_88;
  afStack_54[(uint)bVar4 * -2] = afStack_84[(uint)bVar4 * -2];
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_3c[2] = fVar2 + fStack_58;
  afStack_3c[3] = fVar3 + afStack_54[0];
  fStack_2c = CStack_10c.z + afStack_54[1];
  afStack_70[0] = fVar2 + fStack_58;
  afStack_84[(uint)bVar4 * -2 + 6] = afStack_3c[(uint)bVar4 * -2 + 3];
  afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fVar3 = CStack_10c.y;
  fVar2 = CStack_10c.x;
  fStack_24 = (float)_DAT_005d739a / (this_ptr->base).bolt_velocity;
  fStack_e8 = fStack_58 * fStack_24;
  afStack_e4[0] = afStack_54[0] * fStack_24;
  afStack_e4[1] = afStack_54[1] * fStack_24;
  afStack_54[2] = fStack_58 * fStack_24;
  afStack_54[(uint)bVar4 * -2 + 3] = afStack_e4[(uint)bVar4 * -2];
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  pCStack_100 = (CDemonActor *)(fVar2 - afStack_54[2]);
  afStack_fc[0] = fVar3 - afStack_54[3];
  afStack_fc[1] = CStack_10c.z - fStack_44;
  pCStack_40 = (CDemonActor *)(fVar2 - afStack_54[2]);
  afStack_3c[(uint)bVar4 * -2] = afStack_fc[(uint)bVar4 * -2];
  afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,actor);
  }
  iStack_28 = 0;
  do {
    fVar2 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,&pCStack_40,afStack_84 + 5);
    dVar6 = (double)fVar2;
    fStack_14 = fVar2;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash,dVar6,
                           fVar2);
    if ((iStack_18 != 0) &&
       (iVar1 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar1)) {
      iStack_18 = 0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash,dVar6,fVar2
                            );
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_20 = this_ptr_02;
    if (iStack_18 == 0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004b5bc0
                    (0x01C57074,&g_CDemonSetPtr->collision_impact_position,
                     &(this_ptr->base).base.orient.vec,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_02);
        iVar1 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar1 != 0) {
          fVar2 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                   ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                    (int)((ulonglong)dVar6 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_02,fVar2);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCStack_20->base);
      }
      else {
        iVar1 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_01);
        if (iVar1 == 0) break;
        core_glass_cpp_FUN_004e34b0(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar1 != 0) {
        if (iStack_28 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_148);
      SStack_148.hit_part_index = g_CDemonSetPtr->collision_part_index;
      fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                               ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                (int)((ulonglong)dVar6 >> 0x20));
      SStack_148.impact_point.z = 0.4;
      SStack_148.impact_point.y = fVar3;
      fStack_88 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_84[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_84[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      afStack_ac[3] = fStack_88;
      afStack_ac[(uint)bVar4 * -2 + 4] = afStack_84[(uint)bVar4 * -2];
      afStack_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5] =
           afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fVar2 = (float)_DAT_005d73a2 /
              SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90);
      fStack_d0 = fStack_94 * fVar2;
      afStack_cc[0] = fStack_90 * fVar2;
      afStack_cc[1] = fStack_8c * fVar2;
      fStack_58 = fStack_94 * fVar2;
      afStack_54[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2];
      afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&SStack_148.impact_force != &fStack_58) {
        SStack_148.impact_force = fStack_58;
        SStack_148.impact_direction.x = afStack_54[0];
        SStack_148.impact_direction.y = afStack_54[1];
      }
      core_actor_cpp_FUN_00408bb0();
      fStack_e8 = afStack_cc[2];
      afStack_e4[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2 + 3];
      afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if ((float *)&SStack_148.ammo_type != &fStack_e8) {
        SStack_148.ammo_type = (EAmmoType)fStack_e8;
        SStack_148.dismember_prob = afStack_e4[0];
        SStack_148.damage_type = (EDamageType)afStack_e4[1];
      }
      SStack_148.attacker = (CDemonActor *)(this_ptr->base).ammo_type;
      CStack_10c.x = 1.45735e-43;
      CStack_10c.y = (float)this_ptr;
      SStack_148.wielder = (CDemonActor *)0x3e19999a;
      pCStack_100 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      SStack_148.hit_part_index = (int)&SStack_148.impact_point.y;
      (**(code **)(*(int *)((int)fVar3 + 0x154) + 0x108))(fVar3);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_28 = iStack_28 + 1;
  } while (iStack_28 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_10c);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
